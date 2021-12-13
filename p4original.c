#include<stdio.h>
int main()
{
  int small(int a,int b)
{
  printf("enter the values of a and b");
  scanf("%d %d",&a,&b);
    if(a<b) {
    return a;
  } 
  else {
  return b;
  }
}
int small1(int a,int b)
  {
    return a<b?a:b;
  }
}
