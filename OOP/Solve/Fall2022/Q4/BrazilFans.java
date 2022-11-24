package Fall2022.Q4;

public class BrazilFans extends Fifa{
    private int havingWorldCups;

    public BrazilFans(int noOfGoals, String venue, int havingWorldCups) {
        super(noOfGoals, venue);
        this.havingWorldCups = havingWorldCups;
        System.out.println("Brazil will win");
    }
    @Override
    public String toString()
    {
        return "ArgentinaFans -> [" + super.toString() + "], havingWorldCups: "+ havingWorldCups;
    }
    public void incrementWorldCups()
    {
        havingWorldCups++;
    }
}
