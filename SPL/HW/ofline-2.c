#include<stdio.h>
struct EmployeesInfo
{
    int id;
    int phone_no;
    float salary;
    float allowance;
    float total_income;
};
float employeesallowance(float salary)
{
    if(salary<=30000)
    {
       return  salary*0.15;
    }
    else if(salary>30000 && salary<=50000)
    {
       return  salary*0.20;
    }
    else if(salary>50000)
    {
       return  salary*0.25;
    }
}
int lowestSalary(struct EmployeesInfo EmployeInfo[],int n)
{
    float lowest = EmployeInfo[0].salary;
    int index=0;
    for(int i=1;i<n;i++)
    {
        if(EmployeInfo[i].salary<lowest)
        {
            lowest=EmployeInfo[i].salary;
            index=i;
        }
    }
    return index;
}
int HighestSalary(struct EmployeesInfo EmployeInfo[],int n)
{
    float highest = EmployeInfo[0].salary;
    int index=0;
    for(int i=1;i<n;i++)
    {
        if(EmployeInfo[i].salary>highest)
        {
            highest=EmployeInfo[i].salary;
            index=i;
        }
    }
    return index;
}
void printEmployeesInfo(struct EmployeesInfo EmployeInfo[],int i)
{
    printf("ID: %d\n",EmployeInfo[i].id);
    printf("Number: %d\n",EmployeInfo[i].phone_no);
    printf("Salary: %.2f\n",EmployeInfo[i].salary);
    printf("Allowance: %.2f\n",EmployeInfo[i].allowance);
    printf("Total Income: %.2f\n",EmployeInfo[i].total_income);
}
int main()
{
    int n;
    printf("Total Employee: ");
    scanf("%d",&n);
    struct EmployeesInfo EmployeInfo[n];
    for(int i=0;i<n;i++)
    {
        printf("Employee %d ID:",i+1);
        scanf("%d",&EmployeInfo[i].id);
        printf("Employee %d Number:",i+1);
        scanf("%d",&EmployeInfo[i].phone_no);
        printf("Employee %d Salary:",i+1);
        scanf("%f",&EmployeInfo[i].salary);
        EmployeInfo[i].allowance = employeesallowance(EmployeInfo[i].salary);
        EmployeInfo[i].total_income = EmployeInfo[i].salary + EmployeInfo[i].allowance;

    }
    int searchId,searchPhoneNo,idIndex=-1,noIndex=-1;
    printf("Enter ID to Search: ");
    scanf("%d",&searchId);
    for(int i=0;i<n;i++)
    {
       if(searchId==EmployeInfo[i].id)
       {
           idIndex=i;
           break;
       }

    }

    if(idIndex>=0)
    {   printf("-----ID Match-----\n");
        printEmployeesInfo(EmployeInfo,idIndex);
    }
    else
    {
        printf("\n\nNo Data Found for ID %d\n\n",searchId);
    }
    printf("-----Lowest Salary's Employee Info----\n");
    printEmployeesInfo(EmployeInfo,lowestSalary(EmployeInfo,n));
    printf("\nEnter Number to Search: ");
    scanf("%d",&searchPhoneNo);
    for(int i=0;i<n;i++)
    {
       if(searchPhoneNo==EmployeInfo[i].phone_no)
       {
           noIndex=i;
           break;
       }
    }
    if(noIndex>=0)
    {
        printf("-----Number Match-----\n");
        printEmployeesInfo(EmployeInfo,noIndex);
    }
    else
    {
        printf("\n\nNo Data Found for Phone Number %d\n\n",searchPhoneNo);
    }
    printf("-----Highest Salary's Employee Info----\n");
    printEmployeesInfo(EmployeInfo,HighestSalary(EmployeInfo,n));

    return 0;
}
