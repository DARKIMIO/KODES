//Finding the fibpnacci series upto a given range

#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;
    int t1=0,t2=1;
    int next=t1+t2;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("Fibonacci sequence: %d %d ",t1,t2);

    for(i=3;i<=n;++i)
    {
        printf("%d ",next);
        t1=t2;
        t2=next;
        next=t1+t2;
    }

    return 0;
}