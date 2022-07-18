#include<stdio.h>
#include<math.h>

int main()
{
    int num,temp;
    printf("Enter A Number:\t");
    scanf("%d",&num);
        for(int i=0; i<=num; i++)
        {
            temp=pow(2,i);
            if(temp==num)
            {
                printf("Yes");
                break;
            }
            if(temp>num)
            {
                printf("No");
                break;
            }
        }
    return 0;
}
