import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        int a,b,lastNumber;
        int j=0;
        while(j<T) {
            a=sc.nextInt();
            b=sc.nextInt();
            lastNumber=1;
            for (int i=0;i<b;i++) lastNumber=(lastNumber*a)%10;
            if(lastNumber==0) lastNumber=10;
            System.out.println(lastNumber);
            j++;
        }
        sc.close();
    }
}