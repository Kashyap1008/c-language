#include <stdio.h>
int main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j;
	for (int i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the no of m1[%d][%d]",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for (int i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the no of m2[%d][%d]",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	for (int i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			m3[i][j]=(m1[i][0]*m2[0][j])+(m1[i][1]*m2[1][j])+(m1[i][2]*m2[2][j]); 
		}
	}
	printf("\nthe multiplication of matrix is");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("\nm3[%d][%d] %d",i,j,m3[i][j]);
		}
	}
}