int scoreOfString(char* s) {
    int t=0;
    for(int i=0;s[i+1]!='\0';i++){
        t+=abs(s[i]-s[i+1]);
    }
    return t;
}