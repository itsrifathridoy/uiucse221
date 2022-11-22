package fall2020.Q3_a;

public class FlowerChild extends Flower {
    private String flowerName;
    FlowerChild(String flowerName,int nPetals, String color)
    {
        super(nPetals,color);
        this.flowerName = flowerName;
    }

    public String getFlowerName() {
        return flowerName;
    }

    public void setFlowerName(String flowerName) {
        this.flowerName = flowerName;
    }
    @Override
    public void printName()
    {
        System.out.println(flowerName);
    }
}
