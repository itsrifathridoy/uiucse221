import java.util.Scanner;
public class RemoveWithRegularExp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.println(str.replaceAll("\\s+", " ").trim().split("\\s").length);
    }
    
}
