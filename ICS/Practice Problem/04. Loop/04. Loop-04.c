#include<stdio.h>

int main()
{
  int n;
  float sum=0,avg,num;

  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
      scanf("%f",&num);
      sum = sum + num;
  }
  avg = sum/n;
  printf("Avg of %d = %f",n,avg);

  return 0;
}
