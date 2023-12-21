import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        while (T-->0){
        String[] a = br.readLine().split(" ");
        int R = Integer.parseInt(a[0]);
        String S = a[1];
            StringBuilder sb = new StringBuilder();

            for(int i=0;i<S.length();i++){
                sb.append(String.valueOf(S.charAt(i)).repeat(Math.max(0, R)));
        }
        System.out.println(sb);
    }}
}
