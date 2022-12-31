import java.util.ArrayList;
import java.util.Collections;

public class ArrList{
  public static void main(String[] args) {

    ArrayList<User> users = new ArrayList<>();
    users.add(new User(3,"Rifat","xyz"));
    users.add(new User(1,"Sinthi","abc"));
    users.add(new User(11,"Mithi","pqs"));
    users.add(new User(5,"Koushik","pqs"));

//    users.forEach(e-> System.out.println(e));

    Collections.sort(users);


    users.forEach(e-> System.out.println(e.id + "\n" + e.name + "\n" + e.email));


  }
}