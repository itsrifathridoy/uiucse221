package TestCode.pac1;

import java.util.ArrayList;
import java.util.Collections;

public class Movie implements Comparable<Movie>{
    String name;
    double imdb;

    public Movie(String name, double imdb) {
        this.name = name;
        this.imdb = imdb;
    }


    @Override
    public int compareTo(Movie o) {
        if(o.imdb<this.imdb)
        {
            return -1;
        } else if (o.imdb>this.imdb) {
            return 1;
        }
        else {
            return 0;
        }

    }
}
class Main{
    public static void main(String[] args) {
        ArrayList<Movie> movies = new ArrayList<>();
        movies.add(new Movie("Avengers",9));

        Collections.sort(movies);
    }
}
