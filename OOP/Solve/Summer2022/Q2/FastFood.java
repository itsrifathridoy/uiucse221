package Summer2022.Q2;

public class FastFood extends Food{
    String Type;
    String Flavour;
    boolean x;
    FastFood(String Type, String Flavour,Double calories,Double fat,Double carb)
    {
        super(calories,fat,carb);
        this.Type = Type;
        this.Flavour = Flavour;
    }
    void FastFoodReview()
    {
        System.out.println("Inside the review method of Fastfood class.");
    }
}
