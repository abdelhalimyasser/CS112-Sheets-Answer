#include <stdio.h>

int main() 
{
    int mat[3][4], i, j, num, found = 0;

    printf("Enter 3x4 matrix:\n");
  
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            scanf("%d",&mat[i][j]);

    printf("Enter number to search: ");
    scanf("%d",&num);

    for(i=0;i<3;i++) {
        for(j=0;j<4;j++) {
            if(mat[i][j] == num) {
                printf("Found at position (%d,%d)\n", i, j);
                found = 1;
            }
        }
    }

    if(!found) 
      printf("Number not found\n");
  
    return 0;
}
