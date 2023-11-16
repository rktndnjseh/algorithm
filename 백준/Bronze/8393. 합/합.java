import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int A = in.nextInt();
        int i=0;
        int sum=0;
        while(i++<A){
            sum +=i;
        }
        System.out.println(sum);
        }
        }