#include<stdio.h>
int main()
{	
	int n;
	printf("Enter a number=");
	scanf("%d",&n);
	if(n>=0 && n<=9)
	{ 
        printf("Single digit number=%d\n",n);
	}
	else if(n>=10 && n<=99)
	{
         printf("Double digit number=%d\n",n);
	}
	else if (n>=100 && n<=999)
	{
         printf("Triple digit number=%d\n",n);
	}
    else {
        printf("wrong entry");
    }
	return 0;
}