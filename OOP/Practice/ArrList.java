import java.util.*;

public class ArrList {
  public static void main(String[] args) {
    ArrayList<Integer> num = new ArrayList<>();
    num.add(1);
    num.add(3);
    num.add(2);
    Collections.sort(num,Collections.reverseOrder());
    System.out.println(num);
  }
}