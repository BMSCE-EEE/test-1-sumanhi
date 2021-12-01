#include<stdio.h>
void input_two_numbers(int a,int b)
{
  printf("enter two numbers/n");
  scanf("%d %d",a,b);
}
void_find sum(int a,intb,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int c)
{
  printf("sum of %d+%d is %d/n",a,b,c);
}
int main()
{
  int x,y,z:
  input(&x,&y);
  find_sum(x,y,z);
  output(x,y,z);
  
}