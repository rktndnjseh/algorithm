import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int N=Integer.parseInt(br.readLine());
        int[] num = new int[N];
        int max=0;
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
           num[i] = Integer.parseInt(st.nextToken());
           if(num[i]>max){
               max=num[i];
           }
        }
        System.out.print(newAverage(N,num,max));
        br.close();
    }
    public static double newAverage(int N, int[] num, int max){
        double sum=0;
        for (int i = 0; i < N; i++) {
            double newScore = (double)num[i] / max * 100;
            sum += newScore;
        }
        return sum/N;
    }
}