package Summer2021.Q2;

class Book{
    public int chapters;
    public int pages;
    public Book (int chapters, int pages){

        this.chapters = chapters;
        this.pages =  pages;
    }
    public Book()
    {

    }
    public void printSummary(){
        System.out.println("Chapters: " + chapters); System.out.println("Pages: " + pages);
    }
}


public class InheritanceTest {

    public static void main(String[] args) {
        Ebook java = new Ebook();
        int chapters = 8,pages = 500;
        Ebook c = new Ebook(chapters, pages, "pdf");
        Book b = java;
        b.printSummary();
        b = c;
        b.printSummary();
    }
}
class Ebook extends Book{
    public String formate;

    public Ebook(int chapters, int pages, String formate) {
        super(chapters,pages);
        this.formate = formate;
    }
    public Ebook()
    {

    }
}