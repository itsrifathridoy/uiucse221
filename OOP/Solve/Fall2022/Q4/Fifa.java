package Fall2022.Q4;

public class Fifa {
    private int noOfGoals;
    private String venue;
    public Fifa()
    {
        System.out.println("Who will winner?");
    }
    public Fifa(int noOfGoals,String venue)
    {
        this();
        this.noOfGoals = noOfGoals;
        this.venue = venue;
    }
    @Override
    public String toString()
    {
        return "Fifa-> noOfGoals:"+ noOfGoals+",venue:"+ venue;
    }
    public int getNoOfGoals()
    {
        return noOfGoals;
    }
}
