import java.util.Scanner;

public class CompareNum {
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        int lab = a>b?a:b;
        int lcd = c>d?c:d;
        int large = lab>lcd?lab:lcd;
        System.out.println("MAX(Using Conditional Operator): " + large);
        System.out.println("MAX(Using Math): " + Math.max(lab,lcd));
    }
    
}
