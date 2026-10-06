#include<stdio.h>
int main(){
    int n,arr[100],temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<=n;i=i+2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printf("Array after swapping adjacent elements:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}