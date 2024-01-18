//factorial of a number

#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    unsigned long long fact=1;
    printf("Entert the number whose factorial has to be found: ");
    scanf("%d", &num);

    if(num<0)
    {
        printf("Error!");
    }
    else{
        for(int i=0;i<=num;i++)
        {
            fact *= i;
        }
        printf("\nThe factorial of the %d is : %llu", num,fact);
    }

    return 0;
}