import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String S = br.readLine();
        int I = Integer.parseInt(br.readLine());

        System.out.print(S.charAt(I-1));
    }
}