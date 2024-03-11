import java.util.*;

public class Main {
    public static int gcd(int a, int b){
        if(a % b == 0)
            return b;
        else
            return gcd(b, a % b);
        }

    public static void main(String[] ars) {
    Scanner sc = new Scanner(System.in);
    int n;
    n = sc.nextInt();
    while (n-->0){
        int a = sc.nextInt(),b = sc.nextInt();
        System.out.println((a * b)/gcd(a,b)); 
    }
    }
}
