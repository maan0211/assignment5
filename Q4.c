#include <stdio.h>

int main(){
char ch ;
printf("Enter the character:");
scanf("%c",&ch);
if(ch >= 'a' && ch <= 'z' ){
    printf("alphabet\n");
}
else if(ch>='A' && ch<='Z'){
    printf("alphabet\n");
}
else if(ch>='0' && ch<='9'){
    printf("number\n");
}
else {
    printf("special character");
}
return 0;
}