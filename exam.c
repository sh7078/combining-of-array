#include<stdio.h>
int main()
{
	int i,j,m;
	printf("Enter the number of elements in each array:");
	scanf("%d",&m);
	int a[m],b[m];
	printf("a = ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("b = " );
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	printf("Now the result is given as c =" );
	for(int k=0;k<m;k++)
	{
		printf("%d",a[k]);
		printf(",");
		printf("%d",b[k]);
		printf(",");
	}
	printf("\n");
return 0;
}