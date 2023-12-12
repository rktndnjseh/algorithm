//https://www.acmicpc.net/problem/2448
//첫째 줄에 N이 주어진다. N은 항상 3×2k 수이다. (3, 6, 12, 24, 48, ...) (0 ≤ k ≤ 10, k는 정수)첫째 줄에 N이 주어진다.
// N은 항상 3×2k 수이다. (3, 6, 12, 24, 48, ...) (0 ≤ k ≤ 10, k는 정수)
import java.io.*;

public class Main {
    static char[][] DB = {
            {' ', ' ', '*', ' ', ' '},
            {' ', '*', ' ', '*', ' '},
            {'*', '*', '*', '*', '*'}
    };
    static char[][] MAP;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(br.readLine());

        MAP = new char[n][2 * n - 1];
        //*3
        solve(n / 3, 0, 0);
        //2^n
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2 * n - 1; j++) {
                bw.write(MAP[i][j] == '*' ? '*' : ' ');
            }bw.write("\n");
        }
        bw.flush();
        bw.close();
    }

    public static void solve(int n, int y, int x) {
        if (n == 1) {
            for (int i = 0; i < 3; i++) {
                System.arraycopy(DB[i], 0, MAP[y + i], x, 5);
            }
            return;
        }
//DB[i]: 복사하고자 하는 소스
//0: DB[i] 배열의 시작 인덱스(어느부분부터 읽을것인지)
//MAP[y + i]: 복사한것을 붙여놓을곳
//x: MAP 배열에서 복사할 시작 열의 인덱스(어느 부분에서부터 출력할 것인지)
//5: 복사할 요소의 개수
//읽어온뒤 MAP에 저장합니다.
        solve(n / 2, y, x + 3 * n / 2);
        //왼쪽 위의 작은 삼각형을 그립니다. (x 좌표는 오른쪽으로 이동)
        solve(n / 2, y + 3 * n / 2, x);
        //왼쪽 아래의 작은 삼각형을 그립니다.  (y 좌표는 아래로 이동)
        solve(n / 2, y + 3 * n / 2, x + 3 * n);
        //오른쪽 아래의 작은 삼각형을 그립니다. x, y좌표 이동
    }
}
