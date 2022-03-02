#include<stdio.h>

void fibonacii_cbv(int n)
{
    int n1=0,n2=1,n3;    
    printf("\n%d %d",n1,n2);
    for(int i=2;i<n;i++)  
    {    
        n3=n1+n2;    
        printf(" %d",n3);    
        n1=n2;    
        n2=n3;    
    }  
}

void fibonacii_cbr(int *n)
{
    int n1=0,n2=1,n3;    
    printf("\n%d %d",n1,n2);
    for(int i=2;i<*n;i++)  
    {    
        n3=n1+n2;    
        printf(" %d",n3);    
        n1=n2;    
        n2=n3;    
    }  
}

int main()
{
    int n;
    printf("\nenter number of digits in fibonacii series to print:\t");
    scanf("%d",&n);
    // fibonacii_cbv(n);//prints fibonacii series using call by value
    fibonacii_cbr(&n);//prints fibonacii series using call by reference
}