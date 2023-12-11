import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        int[] array = new int[n];
        Map<Integer, Integer> arrayCount = new HashMap<>();
        int[] result = new int[n];
        Arrays.fill(result, -1);
        Stack<Integer> stack = new Stack<>();

        String[] input = br.readLine().split(" ");
        for (int i = 0; i < n; i++) {
            array[i] = Integer.parseInt(input[i]);
            //getOrDefault(Object key, V DefaultValue)
//반환 값 : 찾는 key가 존재하면 해당 key에 매핑되어 있는 값을 반환하고,
// 그렇지 않으면 디폴트 값이 반환됩니다.
            arrayCount.put(array[i], arrayCount.getOrDefault(array[i], 0) + 1);
        }

        stack.push(0);
        for (int i = 1; i < n; i++) {
            while (!stack.isEmpty() && arrayCount.get(array[stack.peek()]) < arrayCount.get(array[i])) {
                result[stack.pop()] = array[i];
            }
            stack.push(i);
        }

        for (int i = 0; i < n; i++) {
            bw.write(result[i] + " ");
        }
        bw.newLine();

        bw.flush();
        bw.close();
        br.close();
    }
}
