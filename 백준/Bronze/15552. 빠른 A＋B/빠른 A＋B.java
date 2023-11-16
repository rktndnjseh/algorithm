import java.io.IOException;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int T = Integer.parseInt(br.readLine()); //테스트케이스 개수
        while (T-->0) {
            StringTokenizer st = new StringTokenizer(br.readLine()); //문자열을 나눈다.
            int A = Integer.parseInt(st.nextToken());
            int B = Integer.parseInt(st.nextToken());
            bw.write(String.valueOf(A+B)); //String으로 변환하면서 출력
            bw.write("\n");
        }
        bw.flush();
    }
}