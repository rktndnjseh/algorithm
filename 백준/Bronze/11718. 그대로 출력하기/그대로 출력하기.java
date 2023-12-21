import java.io.*;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        ArrayList<String> list = new ArrayList<>();
        while(true) {
            String str = br.readLine();
            if (str == null || str.isEmpty()) {
                break;
            }
            list.add(str);
        }
        br.close();

        for(String s : list){
            System.out.println(s);
        }
    }
}
