#include<stdio.h>
struct product
{
    int id, qty;
    char name[50], bname[50], type[20];
    float price;
    char category;
};
struct product *products;

int main()
{
    int n;
    scanf("%d",&n);
    products = (struct product*)malloc(n*sizeof(struct product));
    for(int i=0;i<n;i++)
    {
        printf("ID: ");
        scanf("%d",&products[i].id);
        printf("Name: ");
        scanf(" %[^\n]s",&products[i].name);
        printf("Brand NName: ");
        scanf(" %[^\n]s",&products[i].bname);
        printf("Type: ");
        scanf(" %[^\n]s",&products[i].type);
        printf("Quantity: ");
        scanf("%d",&products[i].qty);
        printf("Price Per Unit: ");
        scanf("%f",&products[i].price);
        printf("Category: ");
        scanf(" %c",&products[i].category);
    }
    int bname[100];
    printf("Enter a brand name: ");
    scanf(" %[^\n]s",&bname);
    for(int i=0;i<n;i++)
    {
        if(!strcmp(bname,products[i].bname))
        {
            printf("ID: %d\n",products[i].id);
            printf("Name: %s\n",products[i].name);
            printf("Brand Name: %s\n",products[i].bname);
            printf("Type: %s\n",products[i].type);
            printf("Quantity: %d\n",products[i].qty);
            printf("Price Per Unit: %f\n",products[i].price);
            printf("Category: %c\n",products[i].category);
        }

    }
    char type[100];
    printf("Enter a type name: ");
    scanf(" %[^\n]s",&type);
    float totalTy=0,total=0;
    for(int i=0;i<n;i++)
    {
        if(!strcmp(type,products[i].type))
        {
            totalTy+=products[i].qty*products[i].price;
        }
    }
    printf("%.2f\n",totalTy);

    for(int i=0;i<n;i++)
    {
            total+=products[i].qty*products[i].price;
    }
    printf("%.2f\n",total);
    return 0;
}


