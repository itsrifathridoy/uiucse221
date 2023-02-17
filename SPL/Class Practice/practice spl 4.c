#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
   float mynumbers[n],sum=0;

  for(int i=0;i<n;i++)
  {
      scanf("%f",&mynumbers[i]);
      sum=sum+mynumbers[i];


  }
  printf("%.2f",sum/n);

  return 0;
}

