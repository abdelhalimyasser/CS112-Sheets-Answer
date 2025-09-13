void reverse(int arr[], int n, int rev[]) {
    for(int i=0;i<n;i++)
        rev[i] = arr[n-1-i];
}
