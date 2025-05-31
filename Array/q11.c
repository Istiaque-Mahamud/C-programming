#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arrA[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arrA[i]);
    }
    printf("Array A: ");
    for(int i=0;i<n;i++){
        printf(" %d ",arrA[i]);
    }
    
    printf("\nArray B :");
    for(int i=n-1;i>=0;i--){
        printf(" %d ",arrA[i]);
    }
    return 0;
}