#include <stdio.h>
int main(){
	int x;
	printf("enter your no");
	scanf("%d",&x);
	
	if (x%400==0)	
	printf("this should be is a leap year");
	else if (x%100==0)
	printf("this should  not be leap year");
	else if (x%4==0)
	printf("this should be leap year");
	else
	printf("this should not be leap year");
	
	
	
	return 0;
}