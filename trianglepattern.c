#include <stdio.h>
int main()
{
	int t;
	printf("size");
	scanf("%d",&t);
	for (int i=t;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			
			printf(" ");
		}
		for(int p=t;p>i*1;p--)
		{
			printf("*");
		}
		for(int o=t;o>i;o--)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	      
	return 0;
	
}