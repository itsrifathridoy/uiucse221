#include<stdio.h>
#include<math.h>

main(){
    int num,temp;
    printf("Enter A Number:\t");
    scanf("%d",&num);
    if(num>0){
        for(int i=0; i<=num; i++){
            temp=pow(2,i);
            if(temp==num){
                printf("Yes");
                break;
            }
            if(temp>num){
                printf("No");
                break;
            }
        }
    }else{
        printf("Please Enter a positive nonzero number.");
    }
    return 0;
}
