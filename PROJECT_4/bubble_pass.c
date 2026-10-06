#include <stdio.h>
int main(){
    int n,a[100],temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    printf("Array after one bubble pass:\n");
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}