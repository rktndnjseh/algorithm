import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String input = br.readLine();
        String[] words = input.split(" ");

        int count = 0;
        for (String word : words) {
            if (!word.equals("")) {
                count++;
            }
        }

        System.out.println(count);
    }
}
