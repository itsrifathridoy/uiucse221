#include <stdio.h>
#include<math.h>

int main() {

    float N;
    scanf("%f",&N);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",(int)N/100);
    N=fmodf(N,100);
    printf("%d nota(s) de R$ 50.00\n",(int)N/50);
    N=fmodf(N,50);
    printf("%d nota(s) de R$ 20.00\n",(int)N/20);
    N=fmodf(N,20);
    printf("%d nota(s) de R$ 10.00\n",(int)N/10);
    N=fmodf(N,10);
    printf("%d nota(s) de R$ 5.00\n",(int)N/5);
    N=fmodf(N,5);
    printf("%d nota(s) de R$ 2.00\n",(int)N/2);
    N=fmodf(N,2);


    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",(int)N/1);
    N=fmodf(N,1);
    printf("reminder: %f\n",N);
    printf("%d moeda(s) de R$ 0.50\n",(int)(N/0.50));
    printf("reminder: %f\n",N);
    N=fmodf(N,0.5);
    printf("reminder: %f\n",N);
    printf("%d moeda(s) de R$ 0.25\n",(int)(N/0.25));
    N=fmodf(N,0.25);
    printf("reminder: %f\n",N);
    printf("%d moeda(s) de R$ 0.10\n",(int)(N/0.10));
    N=fmodf(N,0.10);
    printf("%d moeda(s) de R$ 0.05\n",(int)(N/0.05));
    N=fmodf(N,0.05);
    printf("%d moeda(s) de R$ 0.01\n",(int)(N/0.01));

    return 0;
}
