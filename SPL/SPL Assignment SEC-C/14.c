#include<stdio.h>
int x=10 ;
int main(){
    printf("A. Global: %d\n",x);
    {
        int x=20;
        printf("B. Local: %d\n",x);
    }
    printf("C. Global: %d\n",x);
    

}