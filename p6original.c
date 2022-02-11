#include <stdio.h>

void input_string(char *a)
{
  printf("Enter Value: ");
  scanf("%s",a);
}

int str_reverse(char a)
{
}

void output(int a, int b, int str)
{
  printf("str of %d and %d is: %d\n",a,b,str);
}

int main()
{
  int x,y,z;
  x=input();
  y=input();
  z=str(x,y);
  output(x,y,z);
  return 0;
}