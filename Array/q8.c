#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    int maxIndex=0,minIndex=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxIndex=i;
        }
        if(arr[i]<min){
            min=arr[i];
            minIndex=i;
        }
    }
    printf("Max: %d, Index: %d\n",max,maxIndex);
    printf("Min: %d, Index: %d",min, minIndex);

    return 0;
}