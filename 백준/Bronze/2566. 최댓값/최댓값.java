//첫째 줄부터 아홉 번째 줄까지 한 줄에 아홉 개씩 수가 주어진다. 주어지는 수는 100보다 작은 자연수 또는 0이다.
//첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 위치한 행 번호와 열 번호를 빈칸을 사이에 두고 차례로 출력한다.
// 최댓값이 두 개 이상인 경우 그 중 한 곳의 위치를 출력한다.
import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int [][] array = new int[9][9];;


        for(int i=0;i<9;i++){
            st = new StringTokenizer(br.readLine(), " ");
            for(int j=0;j<9;j++){
                array[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        int max = array[0][0];
        int maxRow = 0;
        int maxCol = 0;

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
             if (array[i][j]>max){
                 max=array[i][j];
                 maxRow = i;
                 maxCol = j;
             }
            }
        }
        bw.write(max + "\n" + (maxRow + 1) + " " + (maxCol + 1));
        bw.flush();
        bw.close();
    }
}

