#include<stdio.h>

void PosNeg(int n){
if(n>0){
    printf("Positive");
}else if(n<0){
    printf("Negative");
}else{
    printf("Zero");
}

}
int main(){
int num;
scanf("%d",&num);
PosNeg(num);

    return 0;
}