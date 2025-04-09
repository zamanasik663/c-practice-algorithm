#include<stdio.h>
//swapped function
void swap(int *xp,int *yp);
//selection sort function
void selection_sort(int arr[], int n);
//print Array function
void printArray(int arr[],int n);
int main()
{

     int arr[] = {42,30,35,29,18,50,15,17,19,32};
     int n = sizeof(arr) / sizeof(arr[0]);
     printf("Original Usorted Array: \n");
     printArray(arr,n);
     printf("Sorted Array: \n");
     selection_sort(arr,n);
     printArray(arr,n);
    return 0;
}

//swapped function
void swap(int *xp,int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//selection sort function
void selection_sort(int arr[], int n)
{
    int i,j,min;
    for(i = 0 ; i < n-1 ; i++){
     min = i;
     for(j = i + 1 ; j < n ; j++){
       if(arr[j] < arr[min]){
         min = j;
       }
     }
     if(min != i){
        swap(&arr[min],&arr[i]);
     }
    }
}
//print Array function
void printArray(int arr[],int n)
{
    int i ;
    for(i = 0 ; i < n ; i++){
     printf("%d ",arr[i]);
    }
    printf("\n");
}