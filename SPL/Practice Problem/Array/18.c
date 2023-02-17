#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=arr[j+1];
                n--;
                j--;
            }
        }
    }
    //2 8 1 3 2 6 4 3
    // Size 8
    //when i=0, j=1,
                //arr[0]==arr[1]? 2==8 false
    //when i=0, j=2,
                //arr[0]==arr[2]? 2=1 false
    //when i=0, j=3,
                //arr[0]==arr[3]? 2=3 false
    //when i=0, j=4,
                //arr[0]==arr[4]? 2=2 true
                        //arr[4]=arr[5] arr[4]=6
                        //n=7
                //2 8 1 3 6 4 3
                // Size 7
    //when i=0, j=5,
                //arr[0]==arr[5]? 2=4 false
    //when i=0, j=6,
                //arr[0]==arr[6]? 2=3 false


    //when i=1, j=1,
                //arr[1]==arr[1]? 8=8 true



    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
