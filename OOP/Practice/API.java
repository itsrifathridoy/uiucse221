import google.drive.DriveFileData;

import java.io.IOException;

//HTTP API request to get json data from the server
public class API {
    public static void main(String[] args) throws IOException, InterruptedException {

        DriveFileData.details();
        //System.out.println(DriveFileData.generateDownloadLink(url,api));

    }
}

