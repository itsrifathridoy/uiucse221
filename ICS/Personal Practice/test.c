#include<stdio.h>
int main()
{
     int arr[10] = {5,8,7,12,17,9,4,3,2,22};


    for(int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                  int temp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = temp;
    }
  }
}
for(int i=0;i<10;i++)
{
    printf("%d ",arr[i]);
}
int size = sizeof(arr);
printf("\n%d",size);

    return 0;
}


