#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
   int mynumbers[n];

  for(int i=0;i<n;i++)
  {
      scanf("%d",&mynumbers[i]);
      if(i%2==0)
      {
          sum=sum+mynumbers[i];
      }

  }
  printf("%d",mynumbers);

  return 0;
}


