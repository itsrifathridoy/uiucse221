import java.util.Arrays;
import java.util.Scanner;

public class StringSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str[]= new String[5];
        for(int i=0;i<5;i++)
        {
            str[i]=sc.next();
        }
        Arrays.sort(str);
        for(String x: str)
        {
            System.out.println(x);
        }
    }
}
