#include <stdio.h>

int main(){
int n;
printf("Enter the number:");
scanf("%d",&n);
switch(n){
    case 1:printf("SUNDAY\n");
           break;
    case 2:printf("MONDAY\n");
           break;
    case 3:printf("TUESDAY\n");
           break;
    case 4:printf("WEDNESDAY\n");
           break;
    case 5:printf("THRUSDAY\n");
           break;
    case 6:printf("FRIDAY\n");
           break;
    case 7:printf("SATURDAY\n");
           break;    
    default : printf("wrong entry\n");        
}
return 0;
}