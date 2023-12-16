import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int[] num = new int[N];

        int max = -1000001;
        int min = 1000001;
        for(int i=0; i<N; i++){
            num[i] = Integer.parseInt(st.nextToken());
            min=Math.min(min, num[i]);
            max=Math.max(max, num[i]);
        }
        bw.write(min+" "+max);
        bw.flush();
        bw.close();
    }
}