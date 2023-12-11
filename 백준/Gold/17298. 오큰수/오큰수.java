import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int[] answer = new int[N];
        int[] array = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine());

        for (int i = 0; i < N; i++) {
            array[i] = Integer.parseInt(st.nextToken());
        }
        calculateStack(N, array, answer);
        printArray(answer);
    }
    public static void calculateStack(int N, int[] array, int[] answer) {
        Stack<Integer> stack = new Stack<>();
           for (int i = N - 1; i >= 0; i--) {
            while (!stack.isEmpty() && stack.peek() <= array[i]) {
                stack.pop();
            }
            answer[i] = stack.isEmpty() ? -1 : stack.peek();
            stack.push(array[i]);
        }
    }
   public static void printArray(int[]answer){
       StringBuilder sb = new StringBuilder();
       for (int ans:answer) {
           sb.append(ans).append(" ");
       }
       System.out.println(sb);
   }
}
