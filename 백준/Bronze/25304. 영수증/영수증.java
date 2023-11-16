import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int WholeSum = in.nextInt();
        int i = in.nextInt();
        int sum=0;
        while (i-->0){
            int money = in.nextInt();
            int num = in.nextInt();

            sum+=money*num;
        }
        if (sum == WholeSum) System.out.println("Yes");
        else System.out.println("No");
    }
}