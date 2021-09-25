#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j,n,m;
	printf("Enter the size of matrix\n");
	scanf("%d%d",&n,&m);
	printf("Enter the elements of matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		scanf("%d",&a[i][j]);
	}
	printf("The matrix elemets are\n");
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	{
	printf("%d ",a[i][j]);
    }  
     printf("\n");
    }   
	getch();
}
