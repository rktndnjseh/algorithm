import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String s = br.readLine();
        StringTokenizer st = new StringTokenizer(s);
        int[] num = new int[s.length()];
        int i = 0;
        while (st.hasMoreTokens()) {
            num[i] = Integer.parseInt(st.nextToken());
            i++;
        }

        int result1 = Math.min(num[0], num[1]);
        int result2 = Math.min(num[2] - num[0], num[3] - num[1]);
        int result = Math.min(result1, result2);

        System.out.println(result);
    }
}
