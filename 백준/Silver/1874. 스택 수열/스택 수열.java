//N을 입력받은후 다음부터
//num을 입력받고 1부터 num까지 스택에 추가, 스택에서 num값만 뺀다.
//새로 입력받은 num이 이미 스택에 있다면 스택에서 뺀다.
import java.io.*;
import java.util.*;

public class Main {
    static class InvalidSequenceException extends Exception {}

    public static void main(String[] args) throws IOException {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int n = Integer.parseInt(br.readLine());
            int start = 0;
            Stack<Integer> stack = new Stack<>();
            StringBuilder sb = new StringBuilder();

            while (n-- > 0) {
                int num = Integer.parseInt(br.readLine());

                while (start < num) {
                    stack.push(++start);
                    sb.append("+" + "\n");
                }
                checkAndPop(num, stack, sb);
            }
            System.out.println(sb);
        } catch (IOException | InvalidSequenceException e) {
            System.out.println("NO");
        }
    }
    private static void checkAndPop(int num, Stack<Integer> stack, StringBuilder sb) throws InvalidSequenceException  {
            if (stack.peek() == num) {
                stack.pop();
                sb.append("-"+"\n");
            } else {
                throw new InvalidSequenceException();
            }
    }
}
