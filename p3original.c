/#include<stdio.h>
int main()

int small(int a,int b)
{
   if(a<b){
     return a;
   }
else{
  return b;
  }
}
int small(int a,int b)
{
  return a<b?a:b;
}*/

#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else if (a==b)
    {
        printf("%d is equal to %d\n", a, b);
    }
    else
    {
        printf("%d is smaller than %d\n", a, b);
    }
}



  

