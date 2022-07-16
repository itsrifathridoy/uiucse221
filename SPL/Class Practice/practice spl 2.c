#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
   int mynumbers[n];

  for(int i=0;i<n;i++)
  {
      scanf("%d",&mynumbers[i]);
      sum=sum+mynumbers[i];
  }
  printf("%d",sum);





  return 0;
}
