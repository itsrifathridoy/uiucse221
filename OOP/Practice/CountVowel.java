import java.util.*;

public class CountVowel {
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        String str = sc.nextLine();
        int count = 0;
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)=='A' || str.charAt(i)=='E' || str.charAt(i)=='I' || str.charAt(i)=='O' || str.charAt(i)=='U')
            {
                count++;
            }
        }
        System.out.println(count);
    }
    
}
