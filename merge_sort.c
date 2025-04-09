#include<stdio.h>
//merge sort algorithm
void MS(int arr[] ,int l,int h);
//merge function
void merge(int arr[],int l,int mid,int h);
//print Array function
void printArray(int arr[],int n); 
int main(){


    int arr[] = {42,15,26,25,20,24,21,18,19,16,50,52};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Unsorted Array: \n");
    printArray(arr,n);
    printf("Sorted Array: \n");
    MS(arr,0,n-1);

    printArray(arr,n);
    return 0;
}


//merge sort algorithm
void MS(int arr[] ,int l,int h)
{
    if(l < h){
      int mid = (l+h) / 2;

      MS(arr,l,mid);
      MS(arr,mid+1,h);
      merge(arr,l,mid,h);
    }
}
//merge function
void merge(int arr[],int l,int mid,int h)
{
    int i,j,k;
    i = l;
    j = mid + 1;
    k = 0;
    int b[h-l+1];
    while(i <= mid && j <= h){

        if(arr[i] < arr[j]){
            b[k] = arr[i];
            i++;
            k++;
        }
      else{
        b[k] = arr[j];
        j++;
        k++;
      }
    }

    if(i > mid){
      while(j <= h){
        b[k] = arr[j];
        j++;
        k++;
      }
    }
    if(j > h){
     while(i <= mid){
       b[k] = arr[i];
       i++;
       k++;
     }
    }

    //copy to the origibnal array

    for(i = l, k = 0; i <= h ; i++,k++){
      arr[i] = b[k];
    }
}
//print Array function
void printArray(int arr[],int n)
{
    int i;
    for(i = 0 ; i < n ; i++){
     printf("%d ",arr[i]);
    }
    printf("\n");
}