#include <stdio.h>
#include <stdlib.h>
#define n 10

void print_pointer_data_rev(int *p)
{
    printf("\n\npointer_data_rev\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("\nelement %d data\t%d",i+1,*(p+i));
    }
    free(p);
}

void print_pointer_data(int *p)
{
    printf("\n\npointer_data\n");
    for(int i=0;i<n;i++)
    {
        printf("\nelement %d data\t%d",i+1,*(p+i));
    }
    print_pointer_data_rev(p);
}

void print_pointer_adderss(int *p)
{
    printf("\n\npointer_adderss\n");
    for(int i=0;i<n;i++)
    {
        printf("\n\nelement %d address\t%ls",i+1,p+i);
    }
    print_pointer_data(p);
}

void scanf_pointer(int *p)
{
    printf("\n\nscanf_pointer\n");
    for(int i=0;i<n;i++)
    {
        printf("\n\nenter element %d\t",i+1);
        scanf("%d",p+i);
    }
    print_pointer_adderss(p);
}

void use_malloc(int *p)
{
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("\nHEAP FULL!\n");exit(0);
    }
    else
    {
        printf("\nMEMORY ALLOCATION SUCCESSFUL BY malloc!\n");
    }
    scanf_pointer(p);
}

void use_calloc(int *p)
{
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("\nHEAP FULL!\n");exit(0);
    }
    else
    {
        printf("\nMEMORY ALLOCATION SUCCESSFUL BY calloc!\n");
    }
    scanf_pointer(p);
}

int main() 
{
    int c;
    printf("\nenter your choice\n1 - malloc\n2 - calloc\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        {
            int *mp;
            use_malloc(mp);
        }
        break;
        case 2:
        {
            int *cp;
            use_calloc(cp);
        }
        break;
        default:
        {
            int *mp;
            use_malloc(mp);
        }
    }
    return 0;
}