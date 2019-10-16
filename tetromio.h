
int screen[23][12];
int centerPos_x;
int centerPos_y;
int type;
int rotation;
int score;
int level;

void changeState(){

    int y, x;

    for(y = 0; y < 23; y++){
        for(x = 0; x < 12; x++){
            if(screen[y][x] == 1){
                
                screen[y][x] = 2;

            }

        }

    }

}

void shape(){

    int x, y;

    for(x = 0; x < 12; x++){
        for(y = 0; y < 23; y++){
            if(screen[y][x] == 1){
                screen[y][x] = 0;

            }

        }

    }

    screen[centerPos_y][centerPos_x] = 1;

    switch(type){
        case 1:

            switch(rotation){
                case 1:

                    screen[centerPos_y][centerPos_x - 1] = 1;
                    screen[centerPos_y][centerPos_x - 2] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;

                    break;

                case 2:

                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y - 2][centerPos_x] = 1;
                    screen[centerPos_y + 1][centerPos_x] = 1;

                    break;

                case 3:

                    screen[centerPos_y][centerPos_x - 1] = 1;
                    screen[centerPos_y][centerPos_x - 2] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;

                    break;

                case 4:

                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y - 2][centerPos_x] = 1;
                    screen[centerPos_y + 1][centerPos_x] = 1;

                    break;

            }

            break;

        case 2:

            switch(rotation){
                case 1:

                    screen[centerPos_y - 1][centerPos_x - 1] = 1;
                    screen[centerPos_y][centerPos_x - 1] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;

                    break;

                case 2:

                    screen[centerPos_y + 1][centerPos_x] = 1;
                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y - 1][centerPos_x + 1] = 1;

                    break;

                case 3:

                    screen[centerPos_y][centerPos_x - 1] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;
                    screen[centerPos_y + 1][centerPos_x + 1] = 1;

                    break;

                case 4:

                    screen[centerPos_y + 1][centerPos_x - 1] = 1;
                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y + 1][centerPos_x] = 1;

                    break;

            }

            break;

        case 3:

            switch(rotation){
                case 1:

                    screen[centerPos_y - 1][centerPos_x + 1] = 1;
                    screen[centerPos_y][centerPos_x - 1] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;

                    break;

                case 2:

                    screen[centerPos_y + 1][centerPos_x] = 1;
                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y + 1][centerPos_x + 1] = 1;

                    break;

                case 3:

                    screen[centerPos_y][centerPos_x - 1] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;
                    screen[centerPos_y + 1][centerPos_x - 1] = 1;

                    break;

                case 4:

                    screen[centerPos_y - 1][centerPos_x - 1] = 1;
                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y + 1][centerPos_x] = 1;

                    break;

            }

            break;

        case 4:

            switch(rotation){
                case 1:

                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;
                    screen[centerPos_y - 1][centerPos_x + 1] = 1;

                    break;

                case 2:

                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;
                    screen[centerPos_y - 1][centerPos_x + 1] = 1;

                    break;

                case 3:

                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;
                    screen[centerPos_y - 1][centerPos_x + 1] = 1;

                    break;

                case 4:

                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;
                    screen[centerPos_y - 1][centerPos_x + 1] = 1;

                    break;

            }

            break;

        case 5:

            switch(rotation){
                case 1:

                    screen[centerPos_y][centerPos_x - 1] = 1;
                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y - 1][centerPos_x + 1] = 1;

                    break;

                case 2:

                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;
                    screen[centerPos_y + 1][centerPos_x + 1] = 1;

                    break;

                case 3:

                    screen[centerPos_y][centerPos_x + 1] = 1;
                    screen[centerPos_y + 1][centerPos_x] = 1;
                    screen[centerPos_y + 1][centerPos_x - 1] = 1;

                    break;

                case 4:

                    screen[centerPos_y - 1][centerPos_x - 1] = 1;
                    screen[centerPos_y][centerPos_x - 1] = 1;
                    screen[centerPos_y + 1][centerPos_x] = 1;

                    break;

            }

            break;

        case 6:

            switch(rotation){
                case 1:

                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;
                    screen[centerPos_y][centerPos_x - 1] = 1;

                    break;

                case 2:

                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;
                    screen[centerPos_y + 1][centerPos_x] = 1;

                    break;

                case 3:

                    screen[centerPos_y][centerPos_x - 1] = 1;
                    screen[centerPos_y + 1][centerPos_x] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;

                    break;

                case 4:

                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y][centerPos_x - 1] = 1;
                    screen[centerPos_y + 1][centerPos_x] = 1;

                    break;

            }

            break;

        case 7:

            switch(rotation){
                case 1:

                    screen[centerPos_y - 1][centerPos_x - 1] = 1;
                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;

                    break;

                case 2:

                    screen[centerPos_y - 1][centerPos_x + 1] = 1;
                    screen[centerPos_y][centerPos_x + 1] = 1;
                    screen[centerPos_y + 1][centerPos_x] = 1;

                    break;

                case 3:

                    screen[centerPos_y][centerPos_x - 1] = 1;
                    screen[centerPos_y + 1][centerPos_x] = 1;
                    screen[centerPos_y + 1][centerPos_x + 1] = 1;

                    break;

                case 4:

                    screen[centerPos_y - 1][centerPos_x] = 1;
                    screen[centerPos_y][centerPos_x - 1] = 1;
                    screen[centerPos_y + 1][centerPos_x - 1] = 1;

                    break;

            }

            break;

    }

}

void xCollision(){

    int y, x;
    int r;

    for(y = 0; y < 23; y++){
        for(x = 0; x < 12; x++){
            if(screen[y][x] == 1){

                if(x == 0){
                    centerPos_x ++;
                    return;

                }else if(x == 11){
                    centerPos_x --;
                    return;

                }

            }

        }

    }

}

int yCollision(){

    int y, x;
    int r;

    for(y = 0; y < 23; y++){
        for(x = 0; x < 12; x++){
            if(screen[y][x] == 1){

                if(y == 22){
                    changeState();
                    return(1);

                }else if(screen[y + 1][x] == 2){
                    changeState();
                    return(1);

                }

            }

        }

    }

    return(0);

}

void destroy(int row){
    
    int y, x;

    for(x = 1; x < 11; x++){
        for(y = row; y > 0; y--){
            screen[y][x] = screen[y - 1][x];

        }

    }

}

void check(){

    int x, y;
    int count;
    int lines = 0;

    for(y = 22; y > 0; y--){

        count = 0;

        for(x = 1; x < 11; x++){
            if(screen[y][x] == 2){
                count++;

            }

        }

        if(count == 10){
            destroy(y);
            lines++;

        }

    }

    switch(lines){
        case 1:
            score += (40 * (level + 1));
            break;

        case 2:
            score += (100 * (level + 1));
            break;

        case 3:
            score += (300 * (level + 1));
            break;

        case 4:
            score += (1200 * (level + 1));
            break;



    }

}

