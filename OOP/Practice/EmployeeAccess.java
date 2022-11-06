class Employee {
    int empid;
    String name;
    String department;
    float experience_year;
    double salary;
    Employee(int empid, String name, String department)
    {
        this.empid=empid;
        this.name=name;
        this.department=department;
    }
    Employee(int empid,String name,String department,float experience_year,double salary)
    {
        this.empid=empid;
        this.name=name;
        this.department=department;
        this.experience_year = experience_year;
        this.salary = salary;
    }
    double incrementSalary()
    {
        if(this.experience_year>=6)
        {
            return this.salary+=this.salary*0.15;
        }
        else
        {
            return this.salary+=this.salary*0.10;
        }
    }
}
public class EmployeeAccess {
    public static void main(String[] args) {
        Employee e = new Employee(101, "Rafee", "HR", 7.0f, 77000.00);
        e.incrementSalary();
        System.out.println(e.salary);
    }
}
