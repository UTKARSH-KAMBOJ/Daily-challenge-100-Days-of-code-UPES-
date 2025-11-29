//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include<stdio.h>
int main(){
    int n=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=0;
    printf("input the value of k to find kth smallest element in the array:");
    scanf("%d",&k);
    int temp=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for ( int i = 0; i <n; i++)
    {
        if(i==k-1){
            printf("%d",arr[i]);
        }
    }
    return 0;
    
    
}
