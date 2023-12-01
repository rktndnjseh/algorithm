//첫째 줄에 테스트 케이스의 개수 T가 주어진다.
// 각 테스트 케이스는 한 줄로 이루어져 있으며, 문장이 하나 주어진다. 단어의 길이는 최대 20,
// 문장의 길이는 최대 1000이다. 단어와 단어 사이에는 공백이 하나 있다.
//각 테스트 케이스에 대해서, 입력으로 주어진 문장의 단어를 모두 뒤집어 출력한다.

import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine()," ");
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int [][] A;
        int [][] B;
        int [][] answer;
        A = new int[N][M];
        B = new int[N][M];
        answer = new int[N][M];
        for(int i=0;i<N;i++){
            st = new StringTokenizer(br.readLine(), " ");
        for(int j=0;j<M;j++){
            A[i][j] = Integer.parseInt(st.nextToken());
        }
        }
        for(int i=0;i<N;i++){
            st = new StringTokenizer(br.readLine(), " ");
            for(int j=0;j<M;j++){
                B[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                answer[i][j]=A[i][j]+B[i][j];
                   bw.write(answer[i][j]+" ");
            }
            bw.write("\n");
        }
        bw.flush();
    }
}

