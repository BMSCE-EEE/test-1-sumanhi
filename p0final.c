#include<stdio.h>
void input two numbers(int a,int b)
{
  printf("enter two numbers/n");
  scanf("%d %d",a,b);
}
void find sum(int a,intb,int sum)
{
  sum=a+b;
}
void output(int a,int b,int c)
{
  printf("sum of %d+%d is %d/n",a,b,c);
}
int main()
{
  int x,y,z:
  input(&x,&y);
  find sum(x,y,&z);
  output(x,y,z);
  return 0;
}