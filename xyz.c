#include<stdio.h>
int main(){
    divide();
}
int divide(int dividend, int divisor) {
    printf("Enter divident : ");
    scanf("%d",&dividend);
    printf("Enter divisor : ");
    scanf("%d",&divisor);
    printf("%d",dividend/divisor);
    return 0;
}
    
