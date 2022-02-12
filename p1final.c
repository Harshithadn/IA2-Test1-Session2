#include<stdio.h>
void input(float*base,float*height)
{
  printf("enter the base and height of the triangle:\n");
  scanf("%f%f",base,height);
}

void find_area(float base,float height,float*area)
{
  *area=(base*height)/2;
}

void output(float base,float height,float area)
{
  printf("the area of the triangle with base %f and height %f is %f\n",base,height,area);
}

int main()
{
  float x,y,result;
  input(&x,&y);
  find_area(x,y,&result);
  output(x,y,result);
  return 0;
}