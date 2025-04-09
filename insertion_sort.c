#include<stdio.h>
//insertion sort function
void insertion_sort(int arr[], int n);
//print function
void printArray(int arr[] , int n);

int main()
{

    int arr[] = {30,24,26,12,15,19,28,27,14};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array: \n");
    printArray(arr,n);
    printf("Sorted Array: \n");
    insertion_sort(arr,n);
    printArray(arr,n);


    return 0;
}

//insertion sort function
void insertion_sort(int arr[], int n)
{
    int i,j;
    for(i = 1 ; i < n ; i++){
      int temp = arr[i];
      j = i - 1;
      while(j >= 0 && arr[j] > temp){
         arr[j+1] = arr[j];
         j--;
      }
      arr[j+1] = temp;
    }
}
//print function
void printArray(int arr[] , int n)
{
    int i;
    for(i = 0 ; i < n ; i++){
      printf("%d ",arr[i]);
    }
    printf("\n");
}
