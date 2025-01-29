#include <stdio.h>
int main()
{
	int fact,input;
	for(int z=1;z<10;z++)
	
	{
	    fact=1;
	    printf("enter your no:");
	    scanf("%f",&input);
	    for(int i=1;i<=input;i++)
	    {
	        fact=fact*i;
	    }
	    printf("your factorial is : %d",fact);
	    char choice;
	    printf("\ndo you want to continue y/n:");
	    scanf("%c",&choice);
	    if (choice=='n'|| choice=='N')
	    {
	    break;
	    }
    }
	
	
	
	return 0;
}