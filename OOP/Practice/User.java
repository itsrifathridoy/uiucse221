public class User implements Comparable<User>{
    int id;
    String name;
    String email;
    public User(int id, String name, String email) {
        this.id = id;
        this.name = name;
        this.email = email;
    }

    @Override
    public int compareTo(User o) {
        if(o.id<this.id)
        {
            return 1;
        }
        else if(o.id>this.id)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
}
