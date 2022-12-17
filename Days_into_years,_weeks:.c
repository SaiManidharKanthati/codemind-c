#include<stdio.h>
int main()
{
    int d,w,yr;
    scanf("%d",&d);
    yr=d/365;
    w=(d%365)/7;
    printf("%d
",yr);
    printf("%d
",w);
}