#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float z=((b*b)-(4*a*c));
    float x = -b + (sqrt((b*b)-(4*a*c)));
    float y = -b - (sqrt((b*b)-(4*a*c)));
    
    float root1=x/(2*a);
    float root2=y/(2*a);
    
    float q= z>0 ? printf("%f\n%f\n",root1,root2):printf("Imaginary");

    return 0;
}
