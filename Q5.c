#include <stdio.h>

int main(){
    
char ch;
printf("Enter the CHAR:");
scanf("%c",&ch);
    int a,b;
scanf("%d%d",&a,&b);

switch(ch){
    case '+':printf("%d",a+b);
           break;
    case '-':printf("%d\n",a-b);
           break;
    case '*':printf("%d\n",a*b);
           break;
    case '/':printf("%d\n",(a/b));
           break;    
    default : printf("wrong entry\n");        
}
return 0;
}