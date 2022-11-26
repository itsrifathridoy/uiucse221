import google.drive.DriveFileData;

import java.io.IOException;
//HTTP API request to get json data from the server
public class API {
    public static void main(String[] args) throws IOException, InterruptedException {
        DriveFileData d = new DriveFileData("https://drive.google.com/file/d/12i8u9H5ZNH1g4_8gzPh4kpB9FyYCBSrt/view");
        d.printFileDetails();

    }
}

