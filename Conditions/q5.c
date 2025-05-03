#include<stdio.h>
#include<math.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=0;pow(2,i)<=x;i++)
    if(pow(2,i)==x){
        printf("Yes");
        return 0;
    }
        printf("No");
    
        
    return 0;

}