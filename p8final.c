#include<stdio.h>
struct _triangle
{
   float base , altitude , area;
};
typedef struct _triangle Triangle;


int input_n()
{
  int n;
  printf("Enter the number of triangles:\n");
  scanf("%d",&n);
  return n;
}

Triangle input_triangle()
{
  Triangle a;
  printf("Enter the bases,altitude of a triangle:\n");
  scanf("%f%f",&a.base,&a.altitude);
  return a;
}

void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      t[i]=input_triangle();
    }
}

void find_area(Triangle *t)
{
  t->area=0.5 * t->base * t->altitude;
}

void find_area_n(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle small;
  small=t[0];

  for(int i=0;i<n;i++)
    {
      if(small.area>t[i].area)
      {
        small=t[i];
      }
    }
  return small;
}

void output(int n, Triangle t[n], Triangle smallest)
{
  for(int i=0;i<n;i++)
    {
      printf("%f,%f and\n the triangle with base =%f and altitude=%f having area=%f is the smallest\n",t[n-1].base,t[n-1].altitude,smallest.base,smallest.altitude,smallest.area);
    }
}

int main()
{
  int count=input_n();
  Triangle tris[count];
  input_n_triangles(count,tris);
  find_area_n(count,tris);
  Triangle small=find_smallest_triangle(count,tris);
  output(count,tris,small);
  return 0;
}