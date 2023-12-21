import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String S = br.readLine();

        for (int i = 97; i <= 122; i++) {
            char c = (char)i;
            int index = S.indexOf(c);
            System.out.print(index + " ");
        }
    }
}