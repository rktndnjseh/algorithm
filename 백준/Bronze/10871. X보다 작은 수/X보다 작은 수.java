//https://www.acmicpc.net/problem/10871
import java.io.*;
import java.util.StringTokenizer;

public class Main {
    // BufferedReader는 Exception이 처리를 따로 해줘야 하기 때문에 throws를 해주거나
    // try ~ catch로 예외처리를 해줘야합니다.
    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        // StringTokenizer 객체 선언
        StringTokenizer st;
        String[] command = br.readLine().split(" ");
        int N = Integer.parseInt(command[0]);
        int X = Integer.parseInt(command[1]);

        int[] arrays = new int[N + 1];
        st = new StringTokenizer(br.readLine());
        for (int i = 1; i <= N; i++) {
            // 배열에다 토큰을 하나씩 불러서 입력해줌
            arrays[i] = Integer.parseInt(st.nextToken());
        if(arrays[i]<X){
            bw.write(arrays[i]+" ");
        }
        }
        bw.flush();
        bw.close();
    }
}