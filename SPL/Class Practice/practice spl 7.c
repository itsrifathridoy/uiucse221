#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
   int mynumbers[n];
   int max,min;

  for(int i=0;i<n;i++)
  {
      scanf("%d",&mynumbers[i]);

  }
  max = mynumbers[0];
  for(int i=1;i<n;i++)
  {
      if(max<mynumbers[i])
      {
          max = mynumbers[i];
      }

  }

  printf("%d",max);



  return 0;
}


