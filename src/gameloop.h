
int screen[23][12];

int centerPos_x;
int centerPos_y;
int type;
int rotation;
int input_R;
int input_L;

int control_x;
int control_y;
int control_r;

int score;
int lines;
int level;
int game_over;

float fps;

int is_music_playing;

#define SLEEP 150
#define GRAVITY 1
#define DROPSPEED 0.08
#define MOVESPEED 0.1
#define ROTATIONSPEED 0.2

int gameloop(){

    int i, j;
    int x, y;
    int a;

    float timeFromDrop = 0;
    float timeFromMove = 0;
    float timeFromInput = 0;
    float timeFromRotate  =0;
    float previousFrame = 0;
    float currentTime = 0;

    int input_R = 0;
    int input_L = 0;

    int tmp_screen[23][12];

    centerPos_x = 0;
    centerPos_y = 0;

    input_flag = 0;

    score = 0;
    level = 0;
    lines = 0;
    game_over = 0;

    is_music_playing = 0;

    next_type = (rand() % 6) + 1;

    startup();

    randomizeColours();

    spawner();

    centerPos_x = 5;

    for(x = 0; x < 12; x++){
        for(y = 0; y < 23; y++){
            screen[y][x] = 0;

        }

    }

    Menu();

    while(1){

        if(is_music_playing == 0){
            play_main_theme();
            is_music_playing = 1;

        }

        control();

        currentTime = timeFromStart();

        fps = 1 / (currentTime - previousFrame);

        previousFrame = timeFromStart();

        //Rotation

        if(currentTime - timeFromRotate > ROTATIONSPEED){
            timeFromRotate = timeFromStart();

            if(control_r == 1){

                control_r = 0;

                for(x = 0; x < 12; x++){
                    for(y = 0; y < 23; y++){
                        tmp_screen[y][x] = screen[y][x];

                    }

                }

                if(rotation < 4){
                    rotation += 1;

                }else{
                    rotation = 1;

                }

                shape();

                a = 0;
                
                for(x = 0; x < 12; x++){
                    for(y = 0; y < 23; y++){

                        if(screen[y][x] == 1){

                            if(tmp_screen[y][x] > 1){
                                a = 1;

                            }

                            if(x == 0 || x == 11){
                                a = 1;

                            }

                        }

                    }

                }

                if(a == 1){

                    for(x = 0; x < 12; x++){
                        for(y = 0; y < 23; y++){
                            screen[y][x] = tmp_screen[y][x];

                        }

                    }

                    if(rotation > 1){
                        rotation -= 1;

                    }else{
                        rotation = 4;

                    }

                    shape();

                }

            }

        }

        //Vertical movement
        
        //Soft

        if(currentTime - timeFromMove > DROPSPEED){
            if(control_y == 1){

                shape();

                if(yCollision() == 0){
                    centerPos_y += control_y;
                    
                }else{
                    spawner();

                }

                shape();

                control_y = 0;

            }

        }

        //Hard

        if(control_y == 2){

            shape();

            if(yCollision() == 0){
                centerPos_y += control_y;
                
            }else{
                spawner();

            }

            shape();

        }

        //Horizontal movement

        if(currentTime - timeFromMove > MOVESPEED){
            timeFromMove = timeFromStart();

            if(control_x != 0){

                shape();

                if(xCollision(control_x) == 0){
                    centerPos_x += control_x;
                    shape();

                }

                control_x = 0;

            }

        }

        //Drop

        if(currentTime - timeFromDrop > ((GRAVITY * 1) / (1 + level * 0.5))){
            timeFromDrop = timeFromStart();
            
            shape();

            if(yCollision() == 1){
                spawner();

            }

            centerPos_y++;

            shape();

        }

        //Check rows

        check();

        if(game_over == 1){
            return(0);

        }

        //Draw

        draw();

    }

}