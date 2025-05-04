#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    scanf("%d",&num);
    
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            printf("Found at index position : %d ",i);
            found=1;
        }
    } if(!found){
        printf("Not Found");
    }
    
    return 0;
}