#include<stdio.h>
void pack();
void sat(int );

int main()
{
    void(*p)()=&pack;
    printf("start of Main\n");
    p();
    sat(12);
    sat(1);
    p();
    printf("\nend of Main\n");
    return 0;
}
void pack()
{
    printf("\npack func\n");
}
void sat(int x){
    printf("\nsat fun %d\n",x);
}
