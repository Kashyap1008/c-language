#include <stdio.h>
int main()
{
	for(int z=1;z<10;z++)
	{
	 int x,y=0,r,p;
	 
	 
	 printf("enter your no \n");
	 scanf("%d",&x);
	 p=x;
	 while (x!=0){
	 	r=x%10;
	 	y=y*10+r;
	 	x=x/10;
	 }
	
	if (p==y)
	printf("no is palindrome\n");
	else
	printf("it is not palindrome\n");
	char ch;
	printf("do you want to continue y/n:");
	scanf(" %c",&ch);
	if (ch=='n')
	{break;
	}
    }
	return 0 ;
}