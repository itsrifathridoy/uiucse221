package Fall2021.Q1;

public class Area {
    private double length, width;




    {
        System.out.println("The area A of a rectangle is given by the formula, A=lw, where l is the length and w is \n" +
                "the width.");
    }




    public Area(double length,double width)
    {
        this.length = length;
        this.width = width;
    }
    double returnArea()
    {
        return this.length*this.width;
    }

    public static void main(String[] args) {
        Area r = new  Area(5,6);
    }
}

