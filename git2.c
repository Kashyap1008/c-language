#include <stdio.h>
int main()
{
	int x,y,n;
	
	printf("enter your no:");
	scanf("%d",&n);
	
	x=1;
	
	for(int i=2;i<n-1;i++)
	{
	x=n%i;
	if (x==0)
	break;
	}
	
	if (x==0)
	printf("not prime no");
	else
	printf(" prime no");
	
	return 0;
	
}