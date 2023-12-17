import java.util.*;
public class Main {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        for(int i=0; i<N; i++){
            System.out.println(" ".repeat(N-i-1) + "*".repeat(i+1));
        }
    }
}