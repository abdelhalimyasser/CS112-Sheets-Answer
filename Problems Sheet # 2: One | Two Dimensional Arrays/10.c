void studentAvg() {
    int n, i, j, grade, sum;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        sum = 0;
        printf("Enter 5 grades for student %d: ", i+1);
        for(j=0;j<5;j++) {
            scanf("%d",&grade);
            sum += grade;
        }
        printf("Average for student %d = %.2f\n", i+1, sum/5.0);
    }
}
