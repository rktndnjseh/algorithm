import java.io.*;
import java.math.BigInteger;

public class Main {
    public static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        if (N <= 20) {
            sb.append((int) Math.pow(2, N) - 1).append("\n");
            hanoi(N, 1, 3, 2);
        }else {
            BigInteger moves = BigInteger.valueOf(2).pow(N).subtract(BigInteger.ONE);
            sb.append(moves).append("\n");
        }
        System.out.print(sb);
    }

    public static void hanoi(int N, int from, int to, int by) {
        if (N == 1) {
            sb.append(from).append(" ").append(to).append("\n");
        } else {
            hanoi(N - 1, from, by, to);
            sb.append(from).append(" ").append(to).append("\n");
            hanoi(N - 1, by, to, from);
        }
    }
}