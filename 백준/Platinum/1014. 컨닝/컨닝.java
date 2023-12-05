//https://blog.itcode.dev/posts/2021/06/18/a1014  비공식 테스트 케이스
import java.util.*;
import java.io.*;

public class Main {
    static int N, M;  // N: 행의 수, M: 열의 수
    static int[][] seats, dp;  // seats: 각 자리의 상태, dp: 동적 프로그래밍을 위한 배열
    static ArrayList<Integer> visitBinary;  // 학생 배치 경우의 수를 저장하는 리스트

    static final int EMPTY_SEAT = 1;  // 빈 자리를 나타내는 상수
    static final int OCCUPIED_SEAT = 0;  // 학생이 앉을 수 없는 자리를 나타내는 상수
    //----------------------------------------------------------------------------------
    // 초기화 작업을 수행하는 메서드
    private static void initialize(BufferedReader br) throws IOException {
        initializeSeats(br);
        dp = new int[N][1<<M];
        visitBinary = new ArrayList<>();
    }

    // 자리 상태를 초기화하는 메서드
    private static void initializeSeats(BufferedReader br) throws IOException {
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        seats = new int[N][M];
        for(int i=0; i<N; i++) {
            String row = br.readLine();
            for(int j=0; j<M; j++) {
                seats[i][j] = row.charAt(j) == '.' ? EMPTY_SEAT : OCCUPIED_SEAT;
            }
        }
    }
    //----------------------------------------------------------------------------------
    // 학생 배치를 계산하는 메서드
    private static void calculateStudentPlacement() {
        calculatePlacementCases();
        calculateMaxStudentsInRow();
        calculateMaxStudentsInOtherRows();
    }

    // 학생 배치 경우의 수를 계산하는 메서드
    private static void calculatePlacementCases() {
        for(int c=0; c<(1<<M); c++) {
            if(isValidPlacementCase(c)) visitBinary.add(c);
        }
    }

    // 학생이 서로 인접해 앉지 않는 경우인지 확인하는 메서드
    private static boolean isValidPlacementCase(int c) {
        for(int j=0; j<M; j++) {
            if((c & (1<<j)) > 0 &&
                    ((j-1 >= 0 && (c & (1<<(j-1))) > 0) ||
                    (j+1 < M && (c & (1<<(j+1))) > 0))) {
                return false;
            }
        }
        return true;
    }
    //----------------------------------------------------------------------------------
    // 각 행에서 최대 학생 수를 계산하는 메서드
    private static void calculateMaxStudentsInRow() {
        for(int c : visitBinary) {
            if(isValidSeatInRow(c)) dp[0][c] = countSeats(c);
        }
    }

    // 학생이 앉을 수 있는 자리인지 확인하는 메서드
    private static boolean isValidSeatInRow(int c) {
        for(int j=0; j<M; j++) {
            if((c & (1<<j)) > 0 && seats[0][j] == OCCUPIED_SEAT) {
                return false;
            }
        }
        return true;
    }
    //----------------------------------------------------------------------------------
    // 그 외 행에서 최대 학생 수를 계산하는 메서드
    private static void calculateMaxStudentsInOtherRows() {
        for(int i=1; i<N; i++) {
            for(int previousRow : visitBinary) {
                for(int nowRow : visitBinary) {
                    if(isValidSeatInOtherRows(i, previousRow, nowRow)) 
                        dp[i][nowRow] = Math.max(dp[i][nowRow], dp[i-1][previousRow] + countSeats(nowRow));
    //dp[i][nowRow]는 i번째 행에서 nowRow 배치를 선택했을 때의 최대 학생 수
    //dp[i-1][previousRow] + countSeats(nowRow)는 i-1번째 행에서 이전 행의 배치를 선택하고,
    //그 다음 i번째 행에서 현재 행의 배치를 선택했을 때의 학생 수
    //이전 행의 배치와 현재 행의 배치 중에 더 많은 학생을 배치할 수 있는 것을 찾기
    //i번째 행에서 마지막 행까지 갔을때 가장 많은 학생을 배치할 수 있는 경우를 찾는다.
                }
            }
        }
    }

    // 학생이 앉을 수 있는 자리인지 확인하는 메서드
    private static boolean isValidSeatInOtherRows(int i, int previousRow, int nowRow) {
        for(int j=0; j<M; j++) {
            if((nowRow & (1<<j)) > 0 && (seats[i][j] == OCCUPIED_SEAT ||
                    (j-1 >= 0 && (previousRow & (1<<(j-1))) > 0) ||
                    (j+1 < M && (previousRow & (1<<(j+1))) > 0))) {
                return false;
            }
        }
        return true;
    }

    // 학생 수를 계산하는 메서드
    private static int countSeats(int c) {
        int count = 0;
        for(int j=0; j<M; j++) {
            if((c & (1<<j)) > 0) count++;
        }
        return count;
    }
    //----------------------------------------------------------------------------------
    // 최대 학생 수를 찾는 메서드
    private static int findMaxStudents() {
        int answer = 0;
        //왼쪽으로 n 비트 이동한다는 것은 기존 값에 2ⁿ 만큼 곱한다는 뜻이다
        //5 << 2  == 5*2^2
        //x << n == x * 2^n
        //1<<M == 1*2^M
        for(int i=0; i<(1<<M); i++) answer = Math.max(answer, dp[N-1][i]);
        return answer;
    }
    //----------------------------------------------------------------------------------
    public static void main(String[] args) throws IOException {
        // 입력 및 출력 스트림 생성
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int C = Integer.parseInt(br.readLine());  // 테스트 케이스의 수

        while (C-- > 0) {
            // 초기화 및 학생 배치 계산
            initialize(br);
            calculateStudentPlacement();
            // 최대 학생 수 출력
            bw.write(findMaxStudents()+"\n");
        }
        bw.flush();
    }
}
