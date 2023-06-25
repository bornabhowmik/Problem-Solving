#include<stdio.h>
int main()
{
    int n;
    scanf("%d",n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int min_idx,max_idx;
    for(int i=0; i<n; i++)
    {
        int temp=min_idx;
        min_idx=max_idx;
        max_idx=temp;

    }
    printf("%d", &ar[i]);


}