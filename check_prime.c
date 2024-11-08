//C prog to check a given number is prime or not
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==2){
            printf("Prime");
            return 0;
        }
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("Not a prime its div by %d",i);
            return 0;
            }
         }
         printf("%d is a Prime number",n);
    return 0;
}
