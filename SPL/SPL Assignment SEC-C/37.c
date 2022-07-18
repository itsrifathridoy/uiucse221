#include<stdio.h>
int main(){
    int X,Y;
    scanf("%d %d",&X, &Y);

    if(X==Y){
        printf("%d is equal to %d",X,Y);
    }
    else if(X<Y){
        printf("%d is less than %d",X,Y);
    }
    else if(X>Y){
        printf("%d is greater than %d",X,Y);
    }

return 0;
}
