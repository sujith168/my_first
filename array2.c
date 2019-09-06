#include <stdio.h>

void input(int a[][2])
{
	int i,j;
	for (i=0;i<2;i++)
	{

		for (j=0;j<2;j++)
		{
			scanf("%d ",&a[i][j]);
		}
		//printf("\n");
	}


}
int add(int a[][2],int b[][2])
{
	int i,j;
	for (i=0;i<2;i++)
	{

		for (j=0;j<2;j++)
		{
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}

int main()
{

	int a[2][2];
	int b[2][2];
	input(a);
	input(b);
	add(a,b);
	
	return 0;
}
