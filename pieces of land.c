#include<stdio.h>
int main()
{
    int n,parts;
    scanf("%d",&n);
    parts = n*(n-1)/2+n*(n-1)*(n-2)*(n-3)/24+1 ;
    printf("%d",parts);
    return 0;
}
