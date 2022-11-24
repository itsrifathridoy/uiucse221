package Summer2022.Q2;

public class Homemade extends Food{
    Double Protein;

    public Homemade(Double Protein, Double calories, Double fat, Double carb) {
        super(calories, fat, carb);
        this.Protein = Protein;
    }

    void Homemadereview()
    {
        System.out.println("Inside the review method of Homemade class.");
    }

    @Override
    void description() {

    }
}
