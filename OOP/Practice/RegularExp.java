import java.util.Scanner;

public class RegularExp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        System.out.println(str.matches("[0-3][0-9][/-][0-1][0-2][/-][1-2][09][0-9]{2}"));
    }
    
}
