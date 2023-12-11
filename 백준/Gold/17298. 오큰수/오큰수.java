import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Stack;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int[] array = new int[N];
        int[] answer = new int[N];

        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            array[i] = Integer.parseInt(st.nextToken());
        }

        calculateStack(N, array, answer);
        printArray(answer);
    }

    public static void calculateStack(int N, int[] array, int[] answer) {
        Stack<Integer> stack = new Stack<>();
        Arrays.fill(answer, -1);
        for (int i = 0; i < N; i++) {
            while (!stack.empty() && array[stack.peek()] < array[i]) {
                answer[stack.pop()] = array[i];
            }
            stack.push(i);
        }
    }

    public static void printArray(int[] answer) {
        StringBuilder sb = new StringBuilder();
        for (int num : answer) {
            sb.append(num).append(" ");
        }
        System.out.println(sb);
    }
}
