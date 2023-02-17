package Login;

import java.util.HashMap;
import java.util.Map;

public class Main {
    public static void main(String[] args) {
        Map<String,String> credentials = new HashMap<>();
        credentials.put("supti","1234");
        for(Map.Entry m : credentials.entrySet()){
            System.out.println(m.getKey()+" "+m.getValue());
        }

    }
}
