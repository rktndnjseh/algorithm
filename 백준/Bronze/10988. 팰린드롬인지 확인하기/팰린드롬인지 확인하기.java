import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String N = scanner.next();
        int isPalindrome = 1;

        for (int i = 0; i < N.length() / 2; i++) {
            if (N.charAt(i) != N.charAt(N.length() - 1 - i)) {
                isPalindrome = 0;
                break;
            }
        }
        System.out.print(isPalindrome);
    }
}
