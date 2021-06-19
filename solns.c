/test_min.c/
#include <stdio.h>
int min(int[],int);
int main(void)
{
int x[]={5};
printf("%i",min(x,1));
}
int min(int a[],int n)
{
    int mi=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<mi)
            mi=a[i];
        else
            continue;
    }
    return mi;
}
