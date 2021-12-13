#include<stdio.h>
int main()
{
int sum(int a)
  {
  int sum=0;
  while(a!=0)
  printf("enter a");
  scanf("%d",&a);
  {
    sum += a%10;
    a /= 10;
  }
  return sum;
  }
}