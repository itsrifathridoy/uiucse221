package fall2020.one_a;
public class School {
    Student[] students;
    School()
    {
        students = new Student[3];
    }
    void addStudent(int id,String name,float cgpa)
    {
        students[id]= new Student(name,cgpa);

    }
    void updateStudent(int id,float new_cgpa)
    {
        students[id].cgpa = new_cgpa;
    }
    void printStudentDetail(int id)
    {
        System.out.println(students[id].name + " " + students[id].cgpa);
    }

}
