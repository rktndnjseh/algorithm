//https://www.acmicpc.net/problem/9012
//입력
//입력 데이터는 표준 입력을 사용한다. 입력은 T개의 테스트 데이터로 주어진다. 입력의 첫 번째 줄에는 입력 데이터의 수를 나타내는 정수 T가 주어진다.
// 각 테스트 데이터의 첫째 줄에는 괄호 문자열이 한 줄에 주어진다. 하나의 괄호 문자열의 길이는 2 이상 50 이하이다.
//출력
//출력은 표준 출력을 사용한다. 만일 입력 괄호 문자열이 올바른 괄호 문자열(VPS)이면 “YES”, 아니면 “NO”를 한 줄에 하나씩 차례대로 출력해야 한다.

import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int T = Integer.parseInt(br.readLine());
            while(T-->0){
                st = new StringTokenizer(br.readLine(), " ");
                bw.write(checkVPS(st.nextToken())+"\n");
             }bw.flush();
            bw.close();
    }
    public static String checkVPS(String str){
        int counter = 0;
        for(int j = 0; j < str.length(); j++) {
            if(str.charAt(j) == '(') {
                counter++;
            } else if(counter == 0) {
                    return "NO";
                } else {
                    counter--;
            }
        }
        return counter == 0 ? "YES" : "NO";
    }
}