// check palidome
#include<stdio.h>
int main(){
    int n,orign,revn=0;         
    printf("Enter the number:");
    scanf("%d",&n);
    orign=n;
    while(n!=0){
        revn=revn*10+n%10;
        n=n/10;
    }
    if(orign==revn){                  
        printf("Its a polidrome");
    }
    else printf("Not a polidrome");
    return 0;
}
