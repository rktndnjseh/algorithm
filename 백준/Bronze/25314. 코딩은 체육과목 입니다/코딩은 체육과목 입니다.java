import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int N = in.nextInt();
        int i=0;
        int X = N/4;
        while(X-->i){
            System.out.print("long ");
        }
        System.out.println("int");
    }
}