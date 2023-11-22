import java.util.*;

public class Main {
    public static void main(String[] arg){
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        int n, i;
        int[] fibo = new int[41];
        fibo[0] = 0;
        fibo[1] = 1;
        i=2;
        while (i < 41){
            if (fibo[i] == 0)
            {
                fibo[i] = fibo[i - 1] + fibo[i - 2];
            }
            i++;
        }i = 0;
        while (i < T)
        {
            n = in.nextInt();
            if (n == 0){
                System.out.println("1 0");}
            else {
                System.out.print(fibo[n - 1]);
                System.out.print(" ");
                System.out.println(fibo[n]);
            }i++;
        }
        //    System.out.println("0");

    }
}
