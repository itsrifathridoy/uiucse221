#include<stdio.h>
typedef struct EmployeesInfo
{
    int id;
    int phone_no;
    float salary;
    float allowance;
    float total_income;
}employeesInfo;
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
void createEmployee(employeesInfo employees[],int i)
{
    printf("Employee %d ID:",i+1);
    scanf("%d",&employees[i].id);
    printf("Employee %d Number:",i+1);
    scanf("%d",&employees[i].phone_no);
    printf("Employee %d Salary:",i+1);
    scanf("%f",&employees[i].salary);
    employees[i].allowance = employeesallowance(employees[i].salary);
    employees[i].total_income = employees[i].salary + employees[i].allowance;
}
int lowestSalary(employeesInfo employees[],int n)
{
    float lowest = employees[0].salary;
    int index=0;
    for(int i=1;i<n;i++)
    {
        if(employees[i].salary<lowest)
        {
            lowest=employees[i].salary;
            index=i;
        }
    }
    return index;
}
int HighestSalary(employeesInfo employees[],int n)
{
    float highest = employees[0].salary;
    int index=0;
    for(int i=1;i<n;i++)
    {
        if(employees[i].salary>highest)
        {
            highest=employees[i].salary;
            index=i;
        }
    }
    return index;
}
void printEmployeesInfo(employeesInfo employees[],int i)
{
    printf("ID: %d\n",employees[i].id);
    printf("Number: %d\n",employees[i].phone_no);
    printf("Salary: %.2f\n",employees[i].salary);
    printf("Allowance: %.2f\n",employees[i].allowance);
    printf("Total Income: %.2f\n",employees[i].total_income);
}

void foundOrNot(int index,employeesInfo employees[])
{
    if(index>=0)
    {   printf("-----Data Found-----\n");
        printEmployeesInfo(employees,index);
    }
    else
    {
        printf("\n\nNo Data Found\n\n");
    }
}
int searchEmployee(int searchIteam,employeesInfo employees[],int n,char searchType)
{
    int index=-1;
    if(searchType=='I')
    {
        for(int i=0;i<n;i++)
        {
           if(searchIteam==employees[i].id)
           {
               index=i;
               break;
           }

        }
        return index;
    }
    else if(searchType=='N')
    {
        for(int i=0;i<n;i++)
        {
           if(searchIteam==employees[i].phone_no)
           {
               index=i;
               break;
           }
        }
        return index;
    }
}
int main()
{
    int n;
    printf("Enter Number of Employees' : ");
    scanf("%d",&n);
    employeesInfo employees[n];
    for(int i=0;i<n;i++)
    {
        createEmployee(employees,i);
    }
    int searchId,searchPhoneNo;
    printf("Enter ID to Search: ");
    scanf("%d",&searchId);
    foundOrNot(searchEmployee(searchId,employees,n,'I'),employees);

    printf("-----Lowest Salary's Employee Info----\n");
    printEmployeesInfo(employees,lowestSalary(employees,n));

    printf("\nEnter Number to Search: ");
    scanf("%d",&searchPhoneNo);
    foundOrNot(searchEmployee(searchPhoneNo,employees,n,'N'),employees);

    printf("-----Highest Salary's Employee Info----\n");
    printEmployeesInfo(employees,HighestSalary(employees,n));
    return 0;
}

