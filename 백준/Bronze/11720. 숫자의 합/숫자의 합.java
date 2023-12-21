import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        String numbers = br.readLine();
        int sum = 0;

        for (int i = 0; i < N; i++) {
            sum += numbers.charAt(i) - '0'; // 문자를 숫자로 변환
        }

        System.out.println(sum);
    }
}
