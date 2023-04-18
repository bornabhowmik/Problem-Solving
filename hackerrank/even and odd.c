#include<stdio.h>
int main()
{
    int t, n, evenSum=0, oddSum=0;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        if(n%2==0)
        {
            evenSum = n+evenSum; 
        }
        if(n%2!=0)
        {
            oddSum = n+oddSum;
        }
    }

    printf("%d ", evenSum);
    printf("%d ", oddSum);

    return 0;
}