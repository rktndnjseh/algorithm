import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int[][] paper = new int[100][100];
        int N, x, y, count = 0;

        Scanner scanner = new Scanner(System.in);
        N = scanner.nextInt();

        while (N-->0) {
            x = scanner.nextInt();
            y = scanner.nextInt();

            for (int i = y; i < y + 10; i++) {
                for (int j = x; j < x + 10; j++)
                    paper[i][j] = 1;
            }
        }

        for (int[] row : paper) {
            for (int cell : row) {
                if (cell == 1) {
                    count++;
                }
            }
        }

        System.out.println(count);
    }
}
