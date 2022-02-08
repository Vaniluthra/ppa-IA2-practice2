#include <stdio.h>

int input_array_size()
{
  int l;
  printf("Enter number of values: ");
  scanf("%d",&l);
  return l;
}

void input_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
  {
    printf("Enter number: ");
    scanf("%d",&a[i]);
  }
}
int is_composite(int n)
{
  int p=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    p+=1;
  }
  return p;
}

int sum_composite_numbers(int n, int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    int p=0;
    for(int j=1;j<=a[i];i++)
    {
      if(a[i]%j==0)
      p+=1;
    }
    if p
    sum+=a[i];
  }
  return sum;
}

void out_put(int sum)
{
  printf("Sum is: %d\n",sum);
}

int main()
{
  int x=input_array_size();
  int y[x],res;
  input_array(x,y);
  sum_composite_numbers(x,y);
  out_put(res);
}