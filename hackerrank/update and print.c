#include<stdio.h>
int main()
{
    int N, X, V;
    scanf("%d", &N);

    int arr[N];
    for(int i=0; i<N; i++){ 
    scanf("%d", &arr[i]);
    }

    scanf("%d %d", &X, &V);
    arr[X]=V;

    for(int i=N-1; i>=0; i--){
    printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}