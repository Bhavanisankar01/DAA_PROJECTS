#include<stdio.h>
int main(){
    int n,arr[100],even=0,odd=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Number of even numbers in the array: %d\n", even);
    printf("Number of odd numbers in the array: %d\n", odd);
}