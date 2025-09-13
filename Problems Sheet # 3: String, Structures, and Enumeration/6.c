int replace(char str[]) {
    int i, count = 0;
    for(i=0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = '-';
            count++;
        }
    }
    return count;
}
