#include <stdio.h>

int main() 
{
    int m, n, i, j, sum, maxSum = -1, row = 0;
    printf("Enter matrix size (m n): ");
    scanf("%d %d", &m, &n);

    int mat[m][n];
    printf("Enter matrix:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&mat[i][j]);

    for(i=0;i<m;i++) {
        sum = 0;
        for(j=0;j<n;j++) 
          sum += mat[i][j];
      
        if(sum > maxSum) { 
          maxSum = sum; 
          row = i; 
        }
    }

    printf("Row %d has max sum = %d\n", row, maxSum);
    return 0;
}
