#include <stdio.h>
int swap(int, int);
int main() 
{
    int n1=0,n2=0;
    scanf("%d%i",&n1, &n2);
    
    printf("Before swapping %d %d", n1, n2);
    swap(n1,n2);
    printf("\nAfter swapping %d %d", n1, n2);
    return 0;
}
void swap(int *a,int *b)
{
    int  t =*a;
    *a = *b;
    *b = t;
}