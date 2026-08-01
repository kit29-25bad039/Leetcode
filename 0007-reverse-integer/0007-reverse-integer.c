int reverse(int x){
  long int reverse = 0, remainder;

    while (x != 0) {
        remainder = x % 10;           
        reverse = reverse * 10 + remainder; 
    x = x/ 10;                
    }
if(reverse<-2147483648||reverse>=2147483648){
    return 0;
}
return reverse;
}