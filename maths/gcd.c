#include<stdio.h>

int main(){
    int a,b,i,min,gcd;
    scanf("%d%d",&a,&b);
    if(a<b){
        min=a;
    }
    else{
        min=b;
    }
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0){
            gcd=i;
        }

    }
    printf("%d",gcd);

    return 0;
}