#include<stdio.h>
#include<conio.h>
void main()
{
  int i,fact=1;
  printf("enter a number to find factorial\n");
  scanf("%d",&i);
  for(;i>1;i--)
  {
    fact*=i;
  }
  printf("factorial = %d",fact);
}
