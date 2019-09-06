#include<stdio.h>
void main()
{
int m,n,a[10][10];
printf("Enter the rows and columns\n");
scanf("%d %d",&m,&n);
printf("enter the values");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{ 
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{ if(i==j)
printf("%d\t",a[i][j]);
}
}
}
