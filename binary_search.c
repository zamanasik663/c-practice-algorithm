#include<stdio.h>

//binary search function
int binary_search(int admission_array[],int length,int search_data){

    int l,r,mid,i;
    l = 0;
    r = length - 1;

    while(l <= r){
       mid = (l+r) / 2;

       if(search_data == admission_array[mid]){
         return mid;
       }else if(search_data > admission_array[mid]){
         l = mid + 1;
       }else{
        r = mid - 1;
       }
    }
    return -1;
}

int main(){


    int admission_array[] = {5,10,12,14,16,18,20,22,25,29,30,32,34};
    int length = sizeof(admission_array) / sizeof(admission_array[0]);
    printf("Enter your Admission roll: ");
    int search_data;
    scanf("%d",&search_data);
    
    int result = binary_search(admission_array,length,search_data);

    (result == -1) ? printf("you are notr selected\n") : printf("congratulation you are selected.merit score %d\n",result+1); 

    return 0;
}
