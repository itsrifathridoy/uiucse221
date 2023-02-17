package google.drive;
import java.util.Scanner;
import java.io.IOException;

public class DriveFileData extends DriveFile{
    public String name;
    public String id;
    public String type;
    public String downloadLink;
    public DriveFileData(String url,String api) throws IOException, InterruptedException {
        super(url,api);
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
    public static void details() throws IOException, InterruptedException {
        Scanner sc = new Scanner(System.in);
        System.out.println("Drive URL or File ID: ");
        String url = sc.next();
        if(url.contains("https://drive.google.com/file/"))
        {
            url = url;
        }
        else if(url.contains("https://drive.google.com/"))
        {
            System.out.println("Invalid Drive URL");
            System.exit(0);
        }else if(!url.contains("drive.google.com"))
        {
            System.out.println("Not a Drive URL");
            System.exit(0);
        }
        else
        {
            url = url;
        }
        System.out.println("API Key: ");
        String api = sc.next();
        DriveFileData d = new DriveFileData(url,api);
        d.printFileDetails();
    }
}
