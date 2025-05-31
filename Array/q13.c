#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("position: ");
    int position ;
    scanf("%d",&position);

    if(position<0 || position >n){
        printf("Invalid Input");
    }else{
     for (int i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
    }
  
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}