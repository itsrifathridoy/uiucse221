#include<stdio.h>
int main()
{
    int money, temp;
    scanf("%d",&money);
    temp = money/500;
    printf("%d note(s) of 500\n",temp);
    money = money%500;
    temp = money/100;
    printf("%d note(s) of 100\n",temp);
    money = money%100;
    temp = money/50;
    printf("%d note(s) of 50\n",temp);
    money = money%50;
    temp = money/10;
    printf("%d note(s) of 10\n",temp);
    money = money%10;
    temp = money/5;
    printf("%d note(s) of 5\n",temp);
    money = money%5;
    temp = money/1;
    printf("%d note(s) of 1\n",temp);

    return 0;
}
