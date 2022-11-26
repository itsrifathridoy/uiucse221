package google.drive;
import com.github.underscore.U;
import java.io.IOException;
import java.net.URI;
import java.net.http.HttpClient;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.util.Map;

class DriveFile {

    private String url;

    protected DriveFile(String url) {
        this.url = url;
    }

    protected String generateDownloadLink() {
        String url = this.url;
        String demoUrl = "https://www.googleapis.com/drive/v3/files/url/?key=AIzaSyDU2PawLFT5hAeP1Xzq7dSLiLqSEwMC2Xg&alt=media";
        String fileId = url.split("/")[5];
        return demoUrl.replace("url", fileId);

    }

    public static String generateDownloadLink(String url) {
        String demoUrl = "https://www.googleapis.com/drive/v3/files/url/?key=AIzaSyDU2PawLFT5hAeP1Xzq7dSLiLqSEwMC2Xg&alt=media";
        String fileId = url.split("/")[5];
        return demoUrl.replace("url", fileId);

    }

    private String generateDetailsLink() {
        String url = this.url;
        String demoUrl = "https://www.googleapis.com/drive/v3/files/url/?key=AIzaSyDU2PawLFT5hAeP1Xzq7dSLiLqSEwMC2Xg";
        String fileId = url.split("/")[5];
        return demoUrl.replace("url", fileId);

    }

    protected String sendHttpReq() throws IOException, InterruptedException {
        HttpClient client = HttpClient.newHttpClient();
        HttpRequest request = HttpRequest.newBuilder()
                .uri(URI.create(generateDetailsLink()))
                .build();

        HttpResponse<String> response = client.send(request, HttpResponse.BodyHandlers.ofString());

        return response.body();
    }

    protected String getJsonValue(String key) throws IOException, InterruptedException {
        Map<String, Object> jsonObject = U.fromJsonMap(sendHttpReq());
        return U.<String>get(jsonObject, key);
    }
    protected String getJsonValue(String json, String key) throws IOException, InterruptedException {
        Map<String, Object> jsonObject = U.fromJsonMap(json);
        return U.<String>get(jsonObject, key);
    }
}
