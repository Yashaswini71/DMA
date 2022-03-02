#include<stdio.h>

void palindrome_cbv(int n) 
{
    int r=0,n1=n,rem=0;
    while(n!=0)
    {
        rem=n%10;
        r=r*10+rem;
        n/=10;
    }
    if (n1==r)
        printf("\n%d is a palindrome.",n1);
    else
        printf("\n%d is not a palindrome.",n1);
}

void palindrome_cbr(int *n) 
{
    int r=0,n1=*n,rem=0;
    while(*n!=0)
    {
        rem=*n%10;
        r=r*10+rem;
        *n/=10;
    }
    if (n1==r)
        printf("\n%d is a palindrome.",n1);
    else
        printf("\n%d is not a palindrome.",n1);
}

int main()
{
    int n;
    printf("\nenter a number\t");
    scanf("%d",&n);
    palindrome_cbv(n);//prints fibonacii series using call by value
    // palindrome_cbr(&n);//prints fibonacii series using call by reference
}