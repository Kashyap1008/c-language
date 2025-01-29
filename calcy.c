#include <stdio.h>
int main()
{
	float a,b;
	char ch,op;
	for(int i=0;ch!='n';i++)
	{
	    printf("enter your no :");
		scanf("%f",&a);
		printf("enter your second no:");
		scanf("%f",&b);
		printf("enter operator (+,-,/,*): \n");
		scanf(" %c",&op);
		switch(op){
			case '+':
			 	printf("the sum of numbers is %.2f \n",a+b);
				break;
			case '-':
				printf("the subtraction  of numbers is %.2f \n",a-b);
				break;
			case '/':
				printf("the division   of numbers is %.2f \n",a/b);
				break;
			case '*':
				printf("the multiplication   of numbers is %.2f \n",a*b);
				break;
		}
		printf("do you want to continue (y or n): \n");
		scanf(" %c",&ch);
    }
    return 0;
}