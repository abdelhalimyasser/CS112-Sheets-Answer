#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter size: ");
    scanf("%d",&n);

    int pascal[n][n];
    for(i=0;i<n;i++) {
        for(j=0;j<=i;j++) {
            if(j==0 || j==i) pascal[i][j] = 1;
            else pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
  
    return 0;
}
