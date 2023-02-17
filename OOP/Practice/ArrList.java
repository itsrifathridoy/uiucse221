import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class ArrList implements Comparator<User> {

  public static void main(String[] args) {


    ArrayList<User> users = new ArrayList<>();
    users.add(new User(2,"Sinthi","abc"));
    users.add(new User(1,"Rifat","xyz"));
    users.add(new User(1,"Rifat","abc"));
    users.add(new User(1,"Koushik","abc"));
    users.add(new User(3,"Supti","xyz"));


    ArrayList<Integer> arr = new ArrayList<>();
    arr.add(3);
    arr.add(0);
    arr.add(2);
    arr.add(1);

    //arr.forEach(e-> System.out.println(e));

    Collections.sort(users,new ArrList());

    users.forEach(e-> System.out.println(e.id + " " + e.name + " " + e.email));








  }

  @Override
  public int compare(User u1, User u2) {
    if(u1.id>u2.id)
      return 1;
    else if (u1.id<u2.id) {
      return -1;
    }
    return 0;
  }
}
