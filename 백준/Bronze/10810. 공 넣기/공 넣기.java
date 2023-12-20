import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] a = br.readLine().split(" ");
        int N = Integer.parseInt(a[0]);
        int M = Integer.parseInt(a[1]);
        int[] array =new int[N];
        while(M-->0){
            String[] b = br.readLine().split(" ");
            int i = Integer.parseInt(b[0]);
            int j = Integer.parseInt(b[1]);
            int k = Integer.parseInt(b[2]);

            for (int L = i-1; L < j; L++){
               array[L] = k;
            }
        }
        for (int j : array) {
            System.out.print(j + " ");
        }
    }
}