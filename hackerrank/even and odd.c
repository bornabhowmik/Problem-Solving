#include <stdio.h>
int main()
{
   int N, i, num, sum_even=0, sum_odd=0;

//    peintf("Enter the value of N: ");
   scanf("%d", &N);

//    printf("Enter %d numbers:\n", N);

   for(int i=1; i<=N; i++);
   {
    printf("Enter number %d: ", i);
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        sum_even += num;
    }
   else
   {
    sum_odd += num;
   } 
   }
   printf("sum of even numbers: %d\n", sum_even);
   printf("sum of odd numbers: %d\n", sum_odd);

   return 0;
}