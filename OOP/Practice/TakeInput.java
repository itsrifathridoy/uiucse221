import java.util.Scanner;

public class TakeInput{
    static Scanner in = new Scanner(System.in);
    public static void main(String[] arg)
    {
        System.out.print("Enter Your Name: ");
        String name = in.nextLine();
        System.out.print("Enter Your ID: ");
        String id = in.nextLine();
        System.out.print("Enter Your Email: ");
        String email = in.nextLine();
        System.out.print("Enter Your CGPA: ");
        float cgpa = in.nextFloat();
        System.out.print("Enter Your Marks: ");
        int marks = in.nextInt();
        in.close();
        System.out.println(name+"\n"+id+"\n"+email+"\n"+cgpa+"\n"+marks);
    }
}
