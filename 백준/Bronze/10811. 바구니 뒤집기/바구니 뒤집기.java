import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());
        int N=Integer.parseInt(st.nextToken());
        int M=Integer.parseInt(st.nextToken());
        List<Integer> list = new LinkedList<>();
        for (int i = 1; i <= N; i++) {
            list.add(i);
        }
        for(int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int I=Integer.parseInt(st.nextToken()) - 1; // 리스트 인덱스는 0부터 시작하므로 1을 빼준다.
            int J=Integer.parseInt(st.nextToken()) - 1; // 리스트 인덱스는 0부터 시작하므로 1을 빼준다.
            List<Integer> subList = list.subList(I, J+1);
            reverse(subList);
        }
        br.close();
        for (int baguni : list)
            System.out.print(baguni + " ");
    }

    private static void reverse(List<Integer> list) {
        int size = list.size();
        for (int i = 0; i < size / 2; i++) {
            int temp = list.get(i);
            list.set(i, list.get(size - 1 - i));
            list.set(size - 1 - i, temp);
        }
    }
}
