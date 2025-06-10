#include <stdio.h>
int main()
{
    // Printing fib sequence 
    int t1,t2,t3,i,n;
    t1=0, t2=1;
    printf("enter the number of terms you want to generate\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (i==1)
        {
        printf("%d\t",t1);
        printf("%d\t",t2);
    }
        t3=t2+t1;
        printf("%d\t",t3);
        t1=t2;
        t2=t3;
    }
}