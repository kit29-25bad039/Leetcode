bool isNumber(char* s) {
    bool num=false,exp=false,sign=false,dec=false;
    for(int c=0;c<strlen(s);c++){
        if(s[c]>='0'&&s[c]<='9'){
            num=true;
        }else if(s[c]=='e'||s[c]=='E'){
            if (exp || !num){
                return false;
            }else{
                exp=true;
                num=false;
                sign=false;
                dec=false;
            }
        }else if(s[c]=='+'||s[c]=='-'){
            if(sign||num||dec){
                return false;
            }else{
                sign = true;
            }
        }else if(s[c]=='.'){
            if(dec||exp){
                return false;
            }else{
                dec=true;
            }
        }else{
            return false;
        }
    }
    return num;

}