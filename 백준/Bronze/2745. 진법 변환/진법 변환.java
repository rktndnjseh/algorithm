import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String N = scanner.next();
        int B = scanner.nextInt();

        int result = 0;
        int weight = 1;//가중치
        //B 진법에서 첫 번째 자리의 가중치는 B^0, 두 번째 자리의 가중치는 B^1, 
        //세 번째 자리의 가중치는 B^2이다.
        for (int i = N.length() - 1; i >= 0; i--) {
            char c = N.charAt(i);
            int digit;
            if (Character.isDigit(c)) {
                digit = c - '0';
            } else {
                digit = c - 'A' + 10;
                //10부터 A 이므로 10을 더한다.
            }
            result += digit * weight;
            weight *= B;
        }

        System.out.println(result);
    }
}
