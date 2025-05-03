#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    double num;
    double sum=0;
    for(int i=1;i<=n;i++){
        scanf("%lf",&num);
        sum+=num;       
    }
    double avg = sum/n;
    printf("AVG of %d inputs %lf",n,avg);
    return 0;
}