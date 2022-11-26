package google.drive;

import java.io.IOException;

public class DriveFileData extends DriveFile{
    public String name;
    public String id;
    public String type;
    public String downloadLink;
    public DriveFileData(String url) throws IOException, InterruptedException {
        super(url);
        String json = sendHttpReq();
        this.name = getJsonValue(json,"name");
        this.id = getJsonValue(json,"id");
        this.type = getJsonValue(json,"mimeType");
        this.downloadLink = generateDownloadLink();
    }
    public void printFileDetails()
    {

        System.out.println("File Name: " + this.name);
        System.out.println("Type: " + this.type);
        System.out.println("ID: " + this.id);
        System.out.println("Download: " + this.downloadLink);
    }
}
