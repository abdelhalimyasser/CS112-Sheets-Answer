int isSparse(int mat[][10], int m, int n) {
    int countZero = 0, total = m*n;
  
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(mat[i][j] == 0) countZero++;
  
    return (countZero > total/2);
}
