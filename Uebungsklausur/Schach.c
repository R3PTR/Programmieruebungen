
typedef int Schachbrett[8][8];


int bedroht(Schachbrett schachbrett, int x, int y, int x1, int y1);

int bedroht(Schachbrett schachbrett, int x, int y, int x1, int y1){
    int mx[4] = {-1,-1,+1,+1};
    int my[4] = {-1,+1,-1,+1};
    for (int i = 0; i < 4; ++i) {
        int cx = x;
        int cy = y;
        while(cx>=0 && cy>=0){
            cx+=mx[i];
            cy+=my[i];
            if(cx == x1 && cy == y1){
                return 1;
            }
        }
    }
    return 0;
}