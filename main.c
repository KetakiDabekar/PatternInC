/*
Problem Statment:
1. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol=4
Output : 
	1	2	3	4	
	2	3	4	5
	3	4	5	6
	4	5	6	7*/
#include<stdio.h>
void Pattern(int iR,int iC)
{
	int i=0,j=1;
	int iCnt=1;
	for(i=1;i<=iR;i++)
	{
			iCnt=i;			
			for(j=1;j<=iC;j++)
			{
				printf("%d\t",iCnt);
				iCnt++;
			}
		printf("\n");		
	}
}
int main()
{
	int iRow=0,iColumns=0;
	printf("Enter row:");
	scanf("%d",&iRow);
	printf("Enter col:");
	scanf("%d",&iColumns);
	Pattern(iRow,iColumns);
	return 0;
}
