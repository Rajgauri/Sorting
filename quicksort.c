#include<stdio.h>
void swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int partition(int a[],int low,int high)
{
	int pivot=a[high];
	int j, i=low-1;
	for(j=low;j<high;j++)
		if(a[j]<=pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	swap(&a[i+1],&a[high]);
	return(i+1);
}

void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(a,low,high);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}

void print(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d\t",a[i]);
}

void main()
{
	int i,a[5];
	printf("\nenter 5 no.s\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,4);
	printf("\nsorted array is\n");
	print(a,5);
}
