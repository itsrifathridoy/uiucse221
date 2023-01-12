package Collection;

import java.util.ArrayList;

public class Q5 {
    public static void main(String[] args) {
        ArrayList<Student> list =  new ArrayList<>();
        list.add(new Student("Rifat",3,3.5));
        list.add(new Student("Sinthi",2,3.54));
        list.add(new Student("Mithi",4,3.54));
        System.out.println(list.contains(new Student("Rifat",3,3.5)));

    }
}
class Student {
    String name;
    int id;
    double cgpa;

    public Student(String name, int id, double cgpa) {
        this.name = name;
        this.id = id;
        this.cgpa = cgpa;
    }

    @Override
    public boolean equals(Object obj) {
       Student temp =  (Student)obj;
       if(temp.name.equals(temp.name))
           return true;
       else
       {
           return false;
       }
    }


}
