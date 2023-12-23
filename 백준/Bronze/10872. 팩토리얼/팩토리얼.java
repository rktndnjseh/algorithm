import java.io.*;
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        System.out.println(factorial(N));
    }
    public static int factorial(int N){
        if(N<=1&&N>=0) return 1;
        else if(N<0) return -1;
        else return N*factorial(N-1);

    }
}