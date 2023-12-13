import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(br.readLine());
        char[] pattern = br.readLine().toCharArray();
        StringBuilder sb = new StringBuilder(new String(pattern)); // StringBuilder로 변환

        char[][] filenames = new char[n-1][];
        for(int i = 0; i < n-1; i++) {
            filenames[i] = br.readLine().toCharArray();
        }

        for(char[] fileName : filenames) {
            int j = 0;
            for(char patternChar : pattern) {
                if(!Character.valueOf(patternChar).equals(fileName[j]) && sb.charAt(j) != '?') {
                    sb.setCharAt(j, '?'); // 패턴이 변경되는 경우에만 수정
                }
                j++;
            }
        }

        bw.write(sb.toString()); // StringBuilder를 문자열로 변환하여 출력
        bw.flush();
        bw.close();
    }
}
