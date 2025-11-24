#include<stdio.h>
void NumCondition(int a,int b){
if(a>b){
    printf("%d is greater than %d",a,b);
}
else if(a<b){
printf("%d is less than %d",a,b);
}
else{
printf("%d is equal to %d",a,b);
}

}
int main(){
int num1,num2;
scanf("%d%d",&num1,&num2);

NumCondition(num1,num2);
    return 0;
}
