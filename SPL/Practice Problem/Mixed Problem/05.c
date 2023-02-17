#include<stdio.h>
struct product
{
    int id, qty;
    char name[50], bname[50], type[20];
    float price;
    char category;
};
void updateCategory(struct product products[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(products[i].price>100)
        {
            products[i].category='A';
        }
        else if(products[i].price>50)
        {
            products[i].category='B';
        }
        else
        {
            products[i].category='C';
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    struct product products[n];
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
    for(int i=0;i<n;i++)
    {
        if(products[i].price>40)
        {
            printf("%s\n",products[i].name);
            printf("%f\n",products[i].price);

        }
    }
    updateCategory(products,n);
    for(int i=0;i<n;i++)
    {
        printf("ID: %d\n",products[i].id);
        printf("Name: %s\n",products[i].name);
        printf("Brand Name: %s\n",products[i].bname);
        printf("Type: %s\n",products[i].type);
        printf("Quantity: %d\n",products[i].qty);
        printf("Price Per Unit: %f\n",products[i].price);
        printf("Category: %c\n",products[i].category);
    }


    return 0;
}

