#include<stdio.h>
int main(){
    int i,n;
    float x,a,b,c,d,e,f,g;
    printf("Enter total student number=");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+1){
       printf("Attendance=");
       scanf("%f",&a);
       printf("Assignments=");
       scanf("%f",&b);
       printf("Class Tests=");
       scanf("%f",&c);
       printf("Midterm=");
       scanf("%f",&d);
       printf("Final=");
       scanf("%f",&e);
       f=(d-30%100);
       g=(e-40%100);

       x=a+b+c+f+g;
       if(x>=90&&x<=100){
        printf("Student %d: A\n",i);
       }
       else if(x>=86&&x<=89){
        printf("Student %d: A-\n",i);
       }
        else if(x>=82&&x<=85){
        printf("Student %d: B+\n",i);
        }
        else if(x>=78&&x<=81){
        printf("Student %d: B",i);
        }
        else if(x>=74&&x<=77){
        printf("Student %d: B-\n",i);
        }
        else if(x>=73&&x<=70){
        printf("Student %d: C+\n",i);
        }
        else if(x>=66&&x<=69){
        printf("Student %d: C\n",i);
        }
        else if(x>=62&&x<=65){
        printf("Student %d: C-",i);
        }
        else if(x>=58&&x<=61){
        printf("Student %d: D+\n",i);
        }
        else if(x>=55&&x<=57){
        printf("Student %d: D\n",i);
        }
        else{
        printf("Student %d: F\n",i);
        }
    }

return 0;
}
