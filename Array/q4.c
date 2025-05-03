#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    float arr[n];
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    float sum=0.0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    float avg=sum/n;
    printf("%f",avg);


    return 0;
}