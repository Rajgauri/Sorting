#include<stdio.h>
#include<stdlib.h>
long int *arr,i,j,n,itr,flag=0;
void swap(long int *xp,long int *yp)
{
    long int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubsort(long int *arr,long int n)
{	
			itr=0;
   for (i = 0; i < n-1; i++)      
{ 
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              {
																swap(&arr[j], &arr[j+1]);
																itr++;
flag=0;
														}
											else 
{
break;	
flag=1;
}
if(flag=1)
itr++;
}
}
 
void print(long int* arr,long int n)
{
    for (i=0; i<n; i++)
        printf("%ld ", arr[i]);
    printf("\n");
}
 

int main()
{
  
    printf("\nsize of array ");
				scanf("%ld",&n);
				arr=(long int*)malloc(sizeof(long int)*n);
				for(i=0;i<n;i++)
					arr[i]=rand()%1000;
    bubsort(arr, n);
    printf("Sorted array: \n");
    print(arr, n);
				printf("\naverage case iterations: %ld",itr);
				bubsort(arr,n);
				printf("\nbest case iterations: %ld",itr);
				for(i=n-1,j=0;i>=0;i--,j++)
arr[j]=arr[i];
				bubsort(arr,n);
printf("\nworst case iterations: %ld",itr);

    return 0;
}

