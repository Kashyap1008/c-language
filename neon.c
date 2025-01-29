#include <stdio.h>
int main()
{
	int k;
	for(int z=1;z<10;z++)
	{	
	    printf("enter your no:");
	    scanf("%d",&k);

	    int u=k*k;
	    int p=u%10,g=(u-p)/10;

	    if ((p+g)==k)
	    printf("your no is neon no ");
	    else
	    printf("it is not neon no ");
	    
        char ch;
	    printf("do you want to continue y/n:");
	    scanf(" %c",&ch);
	    
        if (ch=='n')
	    {
	        break;
	    	}
    }

	return 0 ;
}