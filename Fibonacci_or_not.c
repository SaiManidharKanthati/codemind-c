#include<stdio.h>
int main() {
    int n,f=0;
    scanf("%d",&n);
    int a=0,b=1,c,i;
    for (i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        if (a==n){
            printf("True");
            f=1;
            break;
        }
    }
    if (f==0){
        printf("False");
    }
}