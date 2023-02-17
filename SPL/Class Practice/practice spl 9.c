#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
   int mynumbers[n];
   int max,min,indexMax,indexMin;

  for(int i=0;i<n;i++)
  {
      scanf("%d",&mynumbers[i]);

  }
  max = mynumbers[0];
  min = mynumbers[0];
  for(int i=1;i<n;i++)
  {
      if(max<mynumbers[i])
      {
          max = mynumbers[i];
          indexMax=i;
      }
      if(min>mynumbers[i])
      {
          min = mynumbers[i];
          indexMin=i;
      }

  }

  printf("Max=%d, Index=%d\n",max,indexMax);
  printf("Min=%d, Index=%d",min,indexMin);



  return 0;
}


