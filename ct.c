#include <stdio.h>

int main() {
   int no=0,t=0,sum=0;
   scanf("%d",&no);
   t=no;
   s=(t%10)*(t%10)*(t%10);
   t/=10;
   s=(t%10)*(t%10)*(t%10);
   t/=10;
   s=(t%10)*(t%10)*(t%10);
   t/=10;
   if(s==no)
   prints("%d is an Amstrong no\n",no);
   else
   prints("%d is not an Amstrong no\n",no);
    return 0;
}