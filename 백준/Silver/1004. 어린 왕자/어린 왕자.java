import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int T = scanner.nextInt();

        while (T-- > 0) {
            int x1 = scanner.nextInt();
            int y1 = scanner.nextInt();
            int x2 = scanner.nextInt();
            int y2 = scanner.nextInt();

            int n = scanner.nextInt();
            int count = 0;

            while (n-- > 0) {
                int Cx = scanner.nextInt();
                int Cy = scanner.nextInt();
                int r = scanner.nextInt();

                boolean inStart = isInsideCircle(x1, y1, Cx, Cy, r);
                boolean inEnd = isInsideCircle(x2, y2, Cx, Cy, r);

                // 시작과 도착 지점이 행성계 내부에 있는 경우
                if (inStart && inEnd) {
                    continue;
                }

                // 시작 지점이 행성계 내부에 있는 경우
                if (inStart) {
                    count++;
                }

                // 도착 지점이 행성계 내부에 있는 경우
                if (inEnd) {
                    count++;
                }
            }

            System.out.println(count);
        }

        scanner.close();
    }

    // 주어진 점이 행성계 내부에 있는지 확인하는 메서드
    public static boolean isInsideCircle(int x, int y, int Cx, int Cy, int r) {
        int distanceSquared = (x - Cx) * (x - Cx) + (y - Cy) * (y - Cy);
        return distanceSquared < r * r;
    }
}
