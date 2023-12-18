import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String command;
            while((command= br.readLine())!=null){
                int A = command.charAt(0) - '0';
                int B = command.charAt(2) - '0';

                System.out.println(A+B);
            }
}
}