package Fall2022.Q2;

public class Movie {
    private String name;
    protected String origin;
    public String genre;
    public float rating;

    public Movie(String name, String origin, String genre, float rating) {
        this.name = name;
        this.origin = origin;
        this.genre = genre;
        this.rating = rating;
    }

    public Movie(String name, String origin) {
        this.name = name;
        this.origin = origin;
    }

    public String getName() {
        return name;
    }

    public String getOrigin() {
        return origin;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setOrigin(String origin) {
        this.origin = origin;
    }
}
