#include<stdio.h>
int main()
{
    int a = 0, b = 1,c=0,s,f,count = 0;
    scanf("%d",&s);
    scanf("%d",&f);
    while(c < f)
    {
        c = a + b;
        // printf("%d\t",c);
        a = b;
        b = c;
        if(c > s && f > c)
        {
            count = count + 1;
        }
        // printf("%d",count);
    }
    printf("%d",count);
    return 0;
}
