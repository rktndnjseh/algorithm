import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

            while(true){
                String[] command = br.readLine().split(" ");
                int A = Integer.parseInt(command[0]);
                int B = Integer.parseInt(command[1]);
                if(A==0&&B==0)break;
                System.out.println(A+B);
            }
}
}