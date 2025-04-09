#include<stdio.h>
//swap function
void swap(int *xp,int *yp);
//partition function;
int partition(int arr[], int l, int h);
//quick sort Algorithm
void quickSort(int arr[],int l,int h);
//print Array function
void printArray(int arr[],int n);
int main(){


   int arr[] = {9,4,3,11,15,20,2,24,30,1,35};
   int n = sizeof(arr) / sizeof(arr[0]);
   printf("Original unsorted Array: \n");
   printArray(arr,n);
   quickSort(arr,0,n-1);
   printArray(arr,n);

    return 0;
}

//swap function
void swap(int *xp,int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//partition function;
int partition(int arr[], int l, int h)
{
    int i,j;
    i = l;
    j = h;
    int pivot = arr[l];

   while(i < j){
    while(arr[i] <= pivot ){
        i++;
      }
      while(arr[j] > pivot){
        j--;
      }
      if(i < j){
          swap(&arr[i],&arr[j]);
      }
   }
   swap(&arr[l],&arr[j]);

   return j;

}
//quick sort Algorithm
void quickSort(int arr[],int l,int h)
{
    if(l < h){
        int j = partition(arr,l,h);

        quickSort(arr,l,j-1);
        quickSort(arr,j+1,h);
    }
}
//print Array function
void printArray(int arr[],int n)
{
    int i;
    for(i = 0 ; i < n ; i++) {
     printf("%d ",arr[i]);
    }
    printf("\n");
}
