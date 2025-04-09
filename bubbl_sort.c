#include<stdio.h>
#include<stdbool.h>
//swap function
void swap(int *xp, int *yp);
//bubble sort function
void bubble_sort(int arr[],int n);
//print function
void printArray(int arr[],int n);

int main(){
 
    int arr[] = {20,25,15,23,10,14,12,8,9,25,26};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original uunsorted Array: \n");
    printArray(arr,n);
    printf("Sorted array: \n");
    bubble_sort(arr,n);
    printArray(arr,n);
    
    return 0;
}

//swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//bubble sort function
void bubble_sort(int arr[],int n)
{
    int i,j;
    bool swapped;
    for(i = 0 ; i < n -1 ; i++){
      swapped = false;

      for(j = 0 ; j < n-1-i; j++){
        if(arr[j] > arr[j+1]){
         swap(&arr[j] , &arr[j+1]);
         swapped = true;
        }
      }
      if(swapped == false){
        break;
      }
    }
}
//print function
void printArray(int arr[],int n)
{
    int i;
    for(i = 0 ; i < n ; i++){
      printf("%d ",arr[i]);
    }
    printf("\n");
}