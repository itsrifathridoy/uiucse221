#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max(int a,int b){
            if(a>b){
                return a;
            }
            else{
                return b;
            }
        }

    int max_of_four(int a,int b,int c, int d){
       int max_1st_2 = max(a,b);
       int max_2nd_2 = max(c,d);
       int max_4 = max(max_1st_2,max_2nd_2);
       return max_4;
    }

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);



    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
