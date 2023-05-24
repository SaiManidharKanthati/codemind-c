#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],i;
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int o,e;
    for (i=0;i<n;i++) {
        if (i%2==0){
            e+=a[i];
        }
        else {
            o+=a[i];
        }
    }
int x=abs(o-e);
printf("%d",x);
}