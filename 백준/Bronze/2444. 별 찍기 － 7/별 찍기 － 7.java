import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        scanner.close();

        StringBuilder sb = new StringBuilder();
        for(int i=1;i<2*N;i+=2){
            for(int j=2*N-1;j>i;j-=2){
                sb.append(" ");
            }
            sb.append("*".repeat(Math.max(0, i)));
            sb.append("\n");
        }

        for(int i=1;i<2*N;i+=2){
            for(int j=0; j<i;j+=2){
                sb.append(" ");
            }
            for(int j=2*N-2;j>i;j--){
                sb.append("*");
            }
            sb.append("\n");
        }
        System.out.print(sb);
    }
}