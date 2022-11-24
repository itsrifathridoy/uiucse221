package Fall2022.Q4;

public class Mid {
    public static void main(String[] args) {
        ArgentinaFans a = new ArgentinaFans(10,"Qatar",2);
        BrazilFans b = new BrazilFans(7,"Qatar",5);
        System.out.println(a);
        System.out.println(b);
        if(a.getNoOfGoals()>b.getNoOfGoals())
        {
            a.incrementWorldCups();
        }
        else
        {
            b.incrementWorldCups();
        }
        System.out.println(a);
        System.out.println(b);
    }
}
