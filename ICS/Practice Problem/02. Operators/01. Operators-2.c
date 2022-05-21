#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,r;
    scanf("%lf %lf",&x,&y);
    r = fmod(x,y);
    printf("Reminder: %lf",r);
    return 0;
}
