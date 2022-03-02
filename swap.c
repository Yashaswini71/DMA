#include<stdio.h>

void swap_wot_cbv(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swap:a=%d,b=%d",a,b);
}

void swap_wot_cbr(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("\nafter swap:a=%d,b=%d",*a,*b);
}

void swap_wt_cbv(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("\nafter swap:a=%d,b=%d",a,b);
}

void swap_wt_cbr(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("\nafter swap:a=%d,b=%d",*a,*b);
}

int main()
{
    int a,b;
    printf("\nenter a:");
    scanf("%d",&a);
    printf("\nenter b:");
    scanf("%d",&b);
    printf("\nbefore swap:a=%d,b=%d",a,b);
    swap_wot_cbv(a,b);//swap two variables without temperorary variable using call by value
    // swap_wot_cbr(&a,&b);//swap two variables without temperorary variable using call by reference
    // swap_wt_cbv(a,b);//swap two variables with temperorary variable using call by value
    // swap_wt_cbr(&a,&b);//swap two variables with temperorary variable using call by reference
}