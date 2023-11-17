import java.io.*;
public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());
        int i = 0;
        while ( i ++< N) {
            int j = 0;
            while ( j ++< i) {
                bw.write("*");
            }bw.flush();
bw.newLine();
        }
    }
}
