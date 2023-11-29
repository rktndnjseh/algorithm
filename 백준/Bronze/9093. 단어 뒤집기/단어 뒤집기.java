import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        scanner.nextLine();
        while(T-->0){
            String input = scanner.nextLine();
            String[] words = input.split(" ");
            StringBuilder sb = new StringBuilder();

            for (String word : words) {
                 //words는 순회하고자 하는 배열이나 컬렉션을 나타낸다.
                 //String word는 words의 각 요소를 가리키는 변수
                String reversed = new StringBuilder(word).reverse().toString();
                sb.append(reversed).append(" ");
            }
            System.out.println(sb.toString().trim());
        }
    }
}
