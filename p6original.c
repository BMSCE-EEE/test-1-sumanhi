#include<stdio.h>
int input_n()  
{
int a;
printf("enter a number\n");
scanf("%d",&a);
return a;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++){
  printf("enter the element no %d of the array\n",i);
  scanf("%d",&a[i]);
  }
}
 int find_array_sum(int n,int a[n]) 
 {
   int sum=0;
   for(int i=0;i<n;i++){
   sum += a[i];
   }
   return sum;
 }
  int show_results(int n,int a[n],int sum)
  {
    int i;
    for(i=0;i<n;i++){
    printf("%d+",a[i]);
    }
    printf("%d %d",a[i],sum);
  }
  int main()
  {
    int n,sum;
    n=input_n();
    int a[n];
    input_array(n,a);
    sum=find_array_sum(n,a);
    show_results(n,a,sum);
  }