#include<stdio.h>
int main(){
    int n,arr[50];
    printf("Enter size of the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}