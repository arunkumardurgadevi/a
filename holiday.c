#include<stdio.h>
int main()
{
int n;
printf("enter a day\n");
scanf("%d",&n);
switch(n)
{
case Sunday:
  printf("yes");
  break;
case Monday:
  printf("no");
  break;
case Tuesday:
  printf("no");
  break;
case Wednesday:
  printf("no");
  break;
case Thursday:
  printf("no");
  break;
case Friday:
  printf("no");
  break;
case Saturday:
  printf("yes");
  break;
default:
  printf("invalid input");
}
return 0;
}
  
