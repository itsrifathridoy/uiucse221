#include <stdio.h>

int main(void) {
	int t; scanf("%d",&t);
	while(t--)
	{
	    int a,b,a1,b1,a2,b2;
	    scanf("%d %d %d %d",&a,&b,&a1,&b1,&a2,&b2);
	    if(((a1==a)||(a1==b))&&((b1==a)||(b1==b)))
	    printf("1\n");
	    else if(((a2==a)||(a2==b))&&((b2==a)||(b2==b)))
	    printf("2\n");
	    else
	    printf("0\n");

	}
	return 0;
}


