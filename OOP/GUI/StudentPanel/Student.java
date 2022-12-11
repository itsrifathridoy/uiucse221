package StudentPanel;

public class Student {
    static int noOfStudent = 0;
    String id;
    String name;
    double cgpa;
    String mobileNo;
    String address;

    public Student(String id, String name, double cgpa, String mobileNo, String address) {
        this.id = id;
        this.name = name;
        this.cgpa = cgpa;
        this.mobileNo = mobileNo;
        this.address = address;
    }

}
