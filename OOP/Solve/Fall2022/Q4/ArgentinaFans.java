package Fall2022.Q4;

public class ArgentinaFans extends Fifa{
    private int havingWorldCups;

    public ArgentinaFans(int noOfGoals, String venue, int havingWorldCups) {
        super(noOfGoals, venue);
        this.havingWorldCups = havingWorldCups;
        System.out.println("Argentina will win");
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
