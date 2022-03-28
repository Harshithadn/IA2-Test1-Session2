#include<stdio.h>
int input_side()
{
  int a;
  printf("enter a side length: \n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b,int c)
{
  int isscalene;
  if (a!=b && a!=c && b!=c)
  {
    isscalene=0;
  }
  return isscalene;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==0)
  {
    printf("The triange is scalene for lengths %d,%d and %d",a,b,c);
  }
  else
  {
    printf("The triange is not scalene");
  }
}

int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}
