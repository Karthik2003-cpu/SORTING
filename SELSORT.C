#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],temp,i,j,min,n;clrscr();
	printf("enter the number of elements to sort\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("unsorted array: ");
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	} printf("\n");
	printf("sorted array: ");
	for(i=0; i<n-1; i++)
	{
		min=i;
		for(j=i+1; j<n; j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
