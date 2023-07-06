#include<stdio.h>
int b[10];
int a[20]={13,32,22,13,2,76,3};
void mergesort(int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        mergesort(lb,mid);
        mergesort(mid+1,ub);
        merge(lb,mid,ub);
    }
}
void merge(int lb,int mid,int ub)
{
    int i,j,k;
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k++]=a[i++];
        }
        else
        {
            b[k++]=a[j++];
        }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k++]=a[j++];
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k++]=a[i++];
        }
    }
    for(i=lb; i<=ub; i++)
        a[i]=b[i];
}

void main()
{
    int i,n;
    printf("enter the number of elements for sorting\n");
    scanf("%d",&n);
    printf("the array for sorting is: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }printf("\n");
    printf("elements in sorted order is: \n");
    mergesort(0,n-1);
    for(i=0; i<n; i++)
        printf("%d\t",b[i]);

}
