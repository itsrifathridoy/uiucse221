import java.util.HashSet;

class student implements Comparable<student>{
    String name;
    double cgpa;

    public student(String n,double c){
        this.name = n;
        this.cgpa = c;
    }
    public String toString(){
        return "Name: "+name+" , CGPA: "+cgpa;
    }

    @Override
    public int compareTo(student o) {
        return this.cgpa>o.cgpa?1:-1;
    }
}
public class HashSetDemo {
    public static void main(String[] args) {
        HashSet<student> students = new HashSet<>();
        students.add(new student("Rahad",3.4));
        students.add(new student("Rashed",3.51));
        students.add(new student("Rahad",3.4));
        students.add(new student("Mamun",3.28));

        for(student s:students){
            System.out.println(s);
        }
    }
}
