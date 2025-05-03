#include<stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    int a=x;
    a+=1;
    printf("A:%d\n",a);
    int b=x;
    printf("B:%d\n",b);
    float c=x;
    printf("C:%f\n",c);
    return 0;
}