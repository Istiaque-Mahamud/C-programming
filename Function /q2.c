#include<stdio.h>
void input(int a,char b){
    printf("Value received from main: %d\n",a);
    printf("Value received from main: %c\n",b);

}


int main(){
    int n;
    char ch;
    scanf("%d",&n);
    scanf(" %c",&ch);

    input(n,ch);


    return 0;
}