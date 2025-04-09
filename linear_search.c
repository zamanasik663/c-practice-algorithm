#include<stdio.h>

//linear search function
int data_sheet(int arr[],int n,int roll_number);

//linear search another way
int result_sheet(int arr2[],int length,int data)
{
    int i;
    int is_found = 0;
    for(i = 0 ; i < length ; i++){
      if(arr2[i] == data){
        is_found = 1;
        break;
      }
    }

    if(is_found == 0){
       printf("item not found\n");
    }else{
        printf("Congratulation you are selected. your merit score is\n");
    }
}

int main(){


//    int arr[] = {21,25,24,36,35,30,28,29,27,23};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    printf("Enter your Roll Number: \n");
//    int roll_number;
//    scanf("%d",&roll_number);
   
//    int result = data_sheet(arr,n,roll_number);
//    (result == -1) ? printf("You are not selected: \n") : printf("Congratulation you are selected.your merit score %d\n",result + 1);

     
     int arr2[] = {2,4,6,8,10,12,14};
     int length = sizeof(arr2) / sizeof(arr2[0]);
     printf("enter your roll number : ");
     int data;
     scanf("%d",&data);
     result_sheet(arr2,length,data);

    return 0;
}

//linear search function
int data_sheet(int arr[],int n,int roll_number)
{
    int i;
    for(i = 0 ; i < n ; i++){
      if(arr[i] == roll_number){
        return i;
      }
    }
    return -1;
}
