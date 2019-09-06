#include<stdio.h>
void multiply (int mat1[12][12], int mat2[12][12], int m, int n, int o,int p);
void read (int mat1[12][12], int m, int n);
void print (int mat1[12][12], int m, int n);

void read (int mat1[12][12], int m, int n)
{
  int i, j;
  for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
	{
	  scanf ("%d", &mat1[i][j]);
	}
    }


}

void print (int mat1[12][12], int m, int n)
{
  int i,j;
  for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
	{
	  printf ("%d\t", mat1[i][j]);
	}
      printf ("\n");
    }
}

void multiply (int mat1[12][12], int mat2[12][12], int m, int n, int o, int p)
{
  int mul[12][12], i, j, k;
  for (i = 0; i < m; i++)
    {
      for (j = 0; j < p; j++)
	{
	  mul[i][j] = 0;
	  for (k = 0; k < n; k++)
	    {
	      mul[i][j] = mul[i][j] + mat1[i][k] * mat2[k][j];
	    }
	}
    }


 
    printf("The resultant matrix formed on multiplying the two matrices\n");
	  print(mul,m,p);    


}

void main ()
{
  int mat1[12][12], mat2[12][12];
  int  m, n,o,p;
  printf ("Enter the number of rows and columns for 1st matrix\n");
  scanf ("%d%d", &m, &n);
  printf ("Enter the number of rows columns for 2nd matrix\n");
  scanf ("%d %d", &o, &p);
  if (n != o)
    printf ("Multiplication is not possible\n");
  else
  printf ("Enter the elements of the 1st matrix\n");
  read (mat1, m, n);
  printf ("Enter the elements of the 2nd matrix\n");
  read (mat2, o, p);
  printf ("1st matrix\n");
  print (mat1, m, n);
  printf ("2nd matrix\n");
  print (mat2, o, p);
  multiply (mat1, mat2, m, n, o, p);
  

}
