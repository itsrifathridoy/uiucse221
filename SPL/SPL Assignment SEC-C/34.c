#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);

    if(a>0 && b>0 && c>0 && a<180 && b<180 && c<180 && a+b+c==180){
        printf("This is a valid Triangle.");
    }
    else{
        printf("This is not a valid Triangle.");
    }

return 0;
}
