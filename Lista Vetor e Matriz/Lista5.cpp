#include <stdio.h>
#include <math.h>

int main(){
    int i;
    int j;
    int a[4][4];
    int b[4][4];
    int c[4][4];

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("A(%i,%i) = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for( i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("B(%i,%i) = ", i, j);
            scanf("%i", &b[i][j]);
        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(a[i][j] > b[i][j]){
                c[i][j] = a[i][j];
            }
            else if (b[i][j]> a[i][j]){
                c[i][j] = b[i][j];
            }
        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
         printf("C(%d,%d) = %d\n", i, j, c[i][j]);
        }
    }

return 0;
}

