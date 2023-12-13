import java.io.*;
public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        String pattern = br.readLine();
        StringBuilder sb = new StringBuilder(pattern);

        while (N-- > 1) {
            String fileName = br.readLine();
            for (int i = 0; i < pattern.length(); i++) {
                if (pattern.charAt(i) != fileName.charAt(i)) {
                    sb.setCharAt(i, '?');
                }
            }
        }

 System.out.println(sb);
    }
}
