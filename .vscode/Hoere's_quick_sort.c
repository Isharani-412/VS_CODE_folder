#include<stdio.h>
void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int low,int high)
{
    
    int p= arr[high];
    int i=low-1;
    for(int j=low; j<=high-1;j++)
    {
        if(arr[j]<p)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(&arr[i+1],arr[high])
    {
        return (i+1);
    }
}
void quicksort(int arr[],int low ,int high)
{
    if(low<high)
    {
        int p=partition( arr, low, high);
        quicksort(arr, low, p-1);
        quicksort(arr, p+1, high);

    }
}
int partition(int arr[],int lb,int ub)
{
    int x=arr[lb];
    int i=lb-1,j=ub+1;
    while(1)
    {
        int p;
        p++;
        while(arr[i]<x)
        {
            i++;
        }
        j--;
        while(arr[j]>x)
        {
            j--;
        }
        if(i>=j)
        {
            return j;
        }
        swap(arr,i)
    ;}
}
void quicksort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int p=partition( arr, lb, ub);
        quicksort(arr,lb,p);
        quicksort(arr,p+1,ub);
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main()
{
    int a[100],n,i;
    printf("enter size of array");
    scanf("%d",&n);
   printf("enter elements of array");
   for(i=0;i<n;i++)
   {
        scanf("%d",&n);
   }
    printf("unsorted array");
    printArray(a,n);
   
    quicksort(a,0,n-1);

    printf("sorted array");
    printArray(a,n);
    return 0;
}





