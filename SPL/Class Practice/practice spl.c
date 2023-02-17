#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
   int mynumbers[n];

  for(int i=0;i<n;i++)
  {
      scanf("%d",&mynumbers[i]);
  }
  for(int i=1;i<=n;i++)
  {
    printf("%d\n",mynumbers[n-i]);
  }




  return 0;
}
