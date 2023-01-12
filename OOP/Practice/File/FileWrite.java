package File;

import java.io.FileInputStream;
import java.io.FileOutputStream;

public class FileWrite {
    public static void main(String[] args) throws Exception {

        FileOutputStream file = new FileOutputStream("info.txt",true);
        FileInputStream f = new FileInputStream("info.txt");
        byte[] b = f.readAllBytes();

        String str = "Hello Bangladesh";
        file.write(str.getBytes());
    }
}
