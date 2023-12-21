import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Comparator;
import java.util.PriorityQueue;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        PriorityQueue<Integer> heap = new PriorityQueue<Integer>(Comparator.reverseOrder());
        StringBuilder sb = new StringBuilder();
        for(int i=0;i<N;i++){
          int x = Integer.parseInt(br.readLine());
            if(x==0){
                sb.append(heap.isEmpty() ? 0 : heap.poll()).append("\n");
            }else{
                heap.add(x);
            }
        }
        System.out.print(sb);
    }
}