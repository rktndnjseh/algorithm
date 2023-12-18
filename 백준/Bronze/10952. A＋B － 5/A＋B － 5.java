import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

            while(true){
                String command = br.readLine();
                int A = command.charAt(0) - '0';
                int B = command.charAt(2) - '0';

                if(A==0&B==0)break;
                System.out.println(A+B);
            }
}
}