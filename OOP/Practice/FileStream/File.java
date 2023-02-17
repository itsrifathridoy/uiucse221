package FileStream;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.util.Scanner;

public class File {
    public static void main(String[] args) throws Exception{
        FileOutputStream out = new FileOutputStream("./output.txt");
        String str = "Write with FileOutput Stream.";
        out.write(str.getBytes());
        FileInputStream in = new FileInputStream("./output.txt");
        //Ways to read from file
//        while (in.available()>0)
//        {
//            System.out.print((char) in.read());
//        }
//        byte[] arr  = new byte[in.available()];
//        in.read(arr);
//        System.out.println(new String(arr));
        FileReader fr = new FileReader("./output.txt");
        Scanner sc = new Scanner(fr);
        while (sc.hasNext())
        {
            System.out.println(sc.nextLine());
        }
        in.close();
        out.close();
        sc.close();
        fr.close();
    }
}
