#include<stdio.h>
#include<string.c>
int isPallin(char*);
int main()
{
    char s[100];
    scanf("%s",&s);
    printf("%s is %is",s,isPallin(s)?"a pallindrome":"not a pallindrome");
    return 0;
}
int isPallin(char*s)
{
    static int i=0;
    int len=strln(s);
    if(s[i]!=s[len-1-i])return 0;
    else
        i++;
        return isPallin(s);
}