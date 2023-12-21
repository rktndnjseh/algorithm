import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String input = br.readLine();
        String[] numbers = input.split(" ");

        String A = numbers[0];
        String B = numbers[1];

        A = new StringBuilder(A).reverse().toString();
        B = new StringBuilder(B).reverse().toString();
        
        if (Integer.parseInt(A) > Integer.parseInt(B)) {
            System.out.println(A);
        } else {
            System.out.println(B);
        }
    }
}
