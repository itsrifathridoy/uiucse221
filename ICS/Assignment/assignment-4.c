#include<stdio.h>
#include<math.h>
int main()
{
    double x,PI=3.141592654;
    double ans;
    scanf("%lf",&x);
    x = (x*PI)/180;
    ans= 2*cos(x)*cos(x)-sqrt(3)*sin(x)+sin(x/2.0);
    printf("%lf",ans);
    return 0;
}
