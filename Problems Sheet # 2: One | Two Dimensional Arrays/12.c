int isSymmetric(int mat[][10], int n) {
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(mat[i][j] != mat[j][i]) return 0;
    return 1;
}
