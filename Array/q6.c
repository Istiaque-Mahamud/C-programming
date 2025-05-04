#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    int arrTotal[n];
    for(int i=0;i<n;i++){
        arrTotal[i]=arr1[i]+arr2[i];
        printf("%d ",arrTotal[i]);
    }
    return 0;
    
}