#include <stdio.h>
int main(){
    int n,a[100],sorted=1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n-1;i++){
        if(a[i]>a[i+1]){
            sorted=0;
            break;
        }
    }
    if(sorted==1)
        printf("Array is already sorted in ascending order.\n");
    else
        printf("Array is not sorted.\n");
}