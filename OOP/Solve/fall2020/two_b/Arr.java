package fall2020.two_b;

public class Arr {
    public static void main(String[] args) {
        double [] arr = {2,4,5,6,10,30,44,56};
        double sum=0;
        for(double x:arr)
        {
            if(x<10.0)
            {
                sum+=x;
            }
        }
        System.out.println(arr.length);
    }
}
