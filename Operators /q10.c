#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    int a_condition= (a+b)<=80 ? 1:0;
    int b_condition= !(a+c) ? 1:0; 
    int c_condition= a!=0 ? 1:0;

    printf("%d\n%d\n%d\n",a_condition,b_condition,c_condition);

    return 0;

}