package fall2020.one_a;
public class SchoolDemo {
    public static void main(String[] args) {
        School school = new School();
        school = null;
        school.addStudent(0,"Alice",3.5f);
        school.addStudent(1,"Bob",3.7f);
        school.addStudent(2,"Trudy",3.2f);
        school.printStudentDetail(0);
        school.updateStudent(0,3.7f);
        school.printStudentDetail(0);

    }
}
