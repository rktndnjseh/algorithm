import java.util.Scanner;
//같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
//같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
//모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int A = in.nextInt();
        int B = in.nextInt();
        int C = in.nextInt();
        int tmp;
        if(A==B&&B==C){
            System.out.print(10000+A*1000);
        }else if(A==B||A==C){
            System.out.print(1000+A*100);
        }else if(B==C){
            System.out.print(1000+B*100);
        }else {tmp=Math.max(A,B);
            if(tmp>C){
                System.out.print(tmp*100);
            }else{
                System.out.print(C*100);
            }
        }
        }
    }