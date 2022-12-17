#include<stdio.h>
int main()
{
    float c,u,tb,b;
    scanf("%f",&u);
    if(u<200)
    {
        c=1.20;
    }
    else if(u>=200 && u<400)
    {
        c=1.50;
    }
    else if(u>=400 && u<600)
    {
        c=1.80;
    }
    else
    {
        c=2.00;
    }
    b=u*c;
    if(b>400)
    {
        tb=b+(b*0.15);
        printf("%.2f",tb);
    }
    else
    {
        tb=b+100;
        printf("%.2f",tb);
    }
}