#include<stdio.h>
int main()
{
	int a,b,rows;
	char c='a';
	printf("Enter the no of rows :");
	scanf("%d",&rows);
	for(a=1;a<=rows;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%c\t",c);
		}
		printf("\n");
	}
	return 0;
}
