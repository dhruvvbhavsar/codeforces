#include<stdio.h>
#include<stdlib.h>

# define N 5

int
find_result(int matrix[N][N]) {
    int
    row, col;

    for(row=0;row<N;row++){
        for(col=0;col<N;col++){
            if(matrix[row][col] == 1){
                goto found;
            }
        }
    }

    found:
        return abs(row-2) + abs(col-2);
}

int
main() {
    int 
    matrix[N][N];
    int
    i,j;
    for(i=0; i < N; i++){
        for(j=0;j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("%d", find_result(matrix));
    return 0;
}