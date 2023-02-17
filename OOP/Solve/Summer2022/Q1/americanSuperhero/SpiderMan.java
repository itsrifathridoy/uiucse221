package Summer2022.Q1.americanSuperhero;

public class SpiderMan {
    String movieName;
    String directedBy;
    SpiderMan(String movieName, String directedBy)
    {
        this.movieName = movieName;
        this.directedBy = directedBy;
    }
    void show()
    {
        System.out.println(movieName);
        System.out.println(directedBy);
    }
}
