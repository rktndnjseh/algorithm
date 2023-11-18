import java.io.*;
public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());
        String s=br.readLine();
        String v = br.readLine();
        String arr[]=s.split(" ");
        int count=0;
        for(int i = 0; i<N; i++) {
            if(arr[i].equals(v)){
            count++;
            }
        }
        bw.write(count+"");
        bw.flush();
        bw.close();
    }
}