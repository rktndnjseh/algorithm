import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        char[][] arr = new char[15][5];
        for (int i = 0; i < 5; i++) {
            String line = br.readLine();
            for (int j = 0; j < line.length(); j++) {
                arr[j][i] = line.charAt(j);
            }
        }

        for (int i = 0; i < 15; i++) {
            for (int j = 0; j < 5; j++) {
                if (arr[i][j] != 0) {
                    bw.write(arr[i][j]);
                }
            }
        }
        bw.flush();
        bw.close();
    }
}
