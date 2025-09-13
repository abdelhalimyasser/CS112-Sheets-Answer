void analyze(int arr[], int n) {
    int max = arr[0], min = arr[0], sum = 0;
  
    for(int i=0;i<n;i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
        sum += arr[i];
    }
  
    printf("Max=%d Min=%d Average=%.2f\n", max, min, sum/(float)n);
}
