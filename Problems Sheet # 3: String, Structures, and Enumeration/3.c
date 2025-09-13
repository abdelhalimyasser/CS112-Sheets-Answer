int countChar(char s[], char c) {
    int i, count = 0;
  
    for(i=0; s[i] != '\0'; i++) 
        if(s[i] == c) count++;
    
    return count;
}
