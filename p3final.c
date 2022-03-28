#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter a number: \n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i, count =0;
  for(i=1; i<=n; i++)
   {
    if(n % i == 0)
    count++;
   }
return count;  
}
void output(int n,int composite)
{
  int result;
  if(composite > 2)
    printf("The number %d is composite",n);
  else
    printf("The number is a prime number");
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}
