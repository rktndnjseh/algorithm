//https://www.acmicpc.net/problem/1012
import java.util.*;

public class Main {
    static int[][] field;
    static boolean[][] visited;
    static int M, N, K;

    // 상, 하, 좌, 우를 나타내기 위한 배열
    static int[] dx = {-1, 1, 0, 0};
    static int[] dy = {0, 0, -1, 1};

    public static void bfs(int x, int y) {
        Queue<int[]> queue = new LinkedList<>();
        queue.add(new int[]{x, y});

        while(!queue.isEmpty()) {
            int[] location = queue.poll(); //queue에 첫번째 값을 반환하고 제거
            for(int i=0; i<4; i++) {
                int nx = location[0] + dx[i];
                int ny = location[1] + dy[i];
                // 다음 위치가 배추밭 내에 있고, 배추가 심어져 있으며 아직 방문하지 않았다면
                if(nx >= 0 && nx < N && ny >= 0 && ny < M)
                    {
                    if(field[nx][ny] == 1 && !visited[nx][ny]) {
                        queue.add(new int[]{nx, ny});
                        visited[nx][ny] = true;
                    }
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();

        for(int i = 0; i < T; i++) {
            M = scanner.nextInt();
            N = scanner.nextInt();
            K = scanner.nextInt();

            field = new int[N][M];
            visited = new boolean[N][M];

            for(int j = 0; j < K; j++) {
                int y = scanner.nextInt();
                int x = scanner.nextInt();
                field[x][y] = 1;
            }

            int count = 0;
            for(int j = 0; j < N; j++) {
                for(int k = 0; k < M; k++) {
                    if(field[j][k] == 1 && !visited[j][k]) {
                        bfs(j, k);
                        count++;
                    }
                }
            }
            System.out.println(count);
        }
        scanner.close();
    }
}