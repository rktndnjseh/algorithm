import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] a = br.readLine().split(" ");
        int N = Integer.parseInt(a[0]);
        int M = Integer.parseInt(a[1]);

        int[] array =new int[N];
        for(int i = 0; i < N; i++) {
            //도현이는 바구니를 총 N개 가지고 있고, 각각의 바구니에는 1번부터 N번까지 번호가 매겨져 있다.
            // 바구니에는 공이 1개씩 들어있고, 처음에는 바구니에 적혀있는 번호와 같은 번호가 적힌 공이 들어있다.
            array[i] = i+1;
        }
        while(M-->0){
            String[] b = br.readLine().split(" ");
            int i = Integer.parseInt(b[0]);
            int j = Integer.parseInt(b[1]);

            swap(array, i - 1, j - 1);
        }
        for (int i : array) {
            System.out.print(i + " ");
        }
    }
    static void swap(int[] array, int i, int j){
        int temp;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}