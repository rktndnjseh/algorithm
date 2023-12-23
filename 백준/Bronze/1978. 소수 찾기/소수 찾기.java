import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());

        int count = 0;
        for (int i = 0; i < N; i++) {
            int num = Integer.parseInt(st.nextToken());
            if(isPrime(num)) {
                count++;
            }
        }
        System.out.println(count);
    }

    // 소수 판별 함수
    public static boolean isPrime(int num) {
        if(num < 2) {
            return false;
        }
        for(int i = 2; i*i <= num; i++) {
            if(num % i == 0) {
                return false;
            }
        }
        return true;
    }
}
