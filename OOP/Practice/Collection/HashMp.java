package Collection;

import java.util.HashMap;
import java.util.Map;
import java.util.Set;

public class HashMp {
    public static void main(String[] args) {
        HashMap<Integer,String> ref = new HashMap<>();
        ref.put(1,"Rifat");
        ref.put(2,"Mithila");


        Set<Map.Entry<Integer, String>> k = ref.entrySet();

        System.out.println(ref.get(k));
    }
}
