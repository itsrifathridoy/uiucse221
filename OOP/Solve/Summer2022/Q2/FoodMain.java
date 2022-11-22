package Summer2022.Q2;

public class FoodMain {
    public static void main(String[] args) {
        Food f1 = new FastFood("Burger","fd",4.0,6.0,7.0);
        Food f2 = new Homemade(8.0,4.0,6.0,7.0);

        ((FastFood)f1).FastFoodReview();
        ((Homemade)f2).Homemadereview();
        
    }
}
