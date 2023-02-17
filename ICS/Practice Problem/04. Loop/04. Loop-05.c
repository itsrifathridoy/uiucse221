#include<stdio.h>
#include<math.h>

int main()
{
  int x,y;
  scanf("%d %d",&x,&y);
  if(x<y)
  {
      for(int i=1;x<y;i++)
      {
          printf("%d,",x*x);
           x=x+1;
      }
  }
  else if(x>y)
  {
      for(int i=1;x>y;i++)
      {
          printf("%d,",x*x);
          x=x-1;
      }
  }
  if(x==y)
  {
      printf("Reached!");
  }
  return 0;
}
