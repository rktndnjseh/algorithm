import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int[] dp = new int[N+1];

        dp[0] = dp[1] = 0; //연산 횟수를 저장한다
        for(int i = 2; i <= N; i++) {
            dp[i] = dp[i-1] + 1; //현재의 연산 횟수
            if (i % 2 == 0) dp[i] = Math.min(dp[i], dp[i/2] + 1);
            if (i % 3 == 0) dp[i] = Math.min(dp[i], dp[i/3] + 1);
            //i를 3으로 나눈 후의 최소 횟수에 1을 더한 값과
            //현재 값을 비교
        }
        System.out.println(dp[N]);
    }
}