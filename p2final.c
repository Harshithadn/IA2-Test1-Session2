#include <stdio.h>
int input_side()
{
  int side;
  printf("enter the side of the triangle :\n");
  scanf("%d",&side);
  return side;
}

int check_scalene(int a,int b,int c)
{
  if (a!=b && b!=c && a!=c)
  {
    return 1;
  }
  else 
  {
    return 2;
  }
}

void output(int a,int b,int c,int isscalene)
{
 if (isscalene==1)
 {
   printf("the triangle is scalene \n");
 }  
 else
 {
   printf("the triangle is not scalene\n");
 }
}

int main()
{
  int x,y,z,isscalene;
  x=input_side();
  y=input_side();
  z=input_side();
  isscalene=check_scalene(x,y,z);
  output(x,y,z,isscalene);
  return 0;
}