#include<stdio.h>
void CheakEvenOdd(int n){
    if(n%2==0){
        printf("Even");
    }else{
        printf("Odd");
    }

}
int main(){
    int num;
    scanf("%d",&num);

    CheakEvenOdd(num);
    return 0;
}