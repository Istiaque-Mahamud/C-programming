#include<stdio.h>
int main() {

    int OriginalInt;
    float OriginalFloat;
    scanf("%d%f",&OriginalInt,&OriginalFloat);
    
    //Assignment Operation
    int intConvert = OriginalFloat;
    float floatConvert =OriginalInt;
    
   //Type Casting
    float Float_cast = (float)OriginalInt;
    int Int_cast = (int)OriginalFloat;
    
    printf("Assignment:%f assigned to an int produces %d\n", OriginalFloat, intConvert);
    printf("Assignment:%d assigned to a float produces %f\n", OriginalInt, floatConvert);
    printf("Type Casting:(float) %d produces %f\n", OriginalInt, Float_cast);
    printf("Type Casting:(int) %f produces %d\n", OriginalFloat, Int_cast);
    
    return 0;
}