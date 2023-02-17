#include <stdio.h>
int main()
{
   int m,n,size;
   scanf("%d%d",&m,&n);
   if(m>n)
   {
       size=m;
   }
   else
   {
       size=n;
   }

   int arr1[m],arr2[n],temp[size];
   for(int i=0;i<m;i++)
   {
       scanf("%d",&arr1[i]);
   }
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr2[i]);
   }
   for(int i=0;i<m;i++)
   {
       temp[i]=arr1[i];
   }
   for(int i=0;i<n;i++)
   {
       arr1[i]=arr2[i];
       //printf("arr1 1st %d=%d ",i,arr1[i]);
   }
      printf("arr a1 %d\n",arr1[0]);
   for(int i=0;i<m;i++)
   {
       arr2[i]=temp[i];
      printf("arr1 %d=%d ",i,arr1[i]);
   }

      printf("arr a2 %d\n",arr1[0]);
            printf("arr a2 %d\n",arr1[1]);
      printf("arr a2 %d\n",arr1[2]);
            printf("arr a2 %d\n",arr1[3]);



   for(int i=0;i<n;i++)
   {
       printf("%d ",arr1[i]);
   }
   printf("\n");

   for(int i=0;i<m;i++)
   {
       printf("%d ",arr2[i]);
   }
    return 0;
}
