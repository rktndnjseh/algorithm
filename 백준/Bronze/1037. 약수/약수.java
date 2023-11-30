import java.util.Scanner;
// N이 A의 배수이고, A가 1과 N이 아니어야 한다.
// A x B = N , (A!=N) && (A!=1) , 입력받는 것 중에는 A도 있고 B도 있다.
//가장 큰 것과 작은 것을 곱하면 N에 가장 가까워질 것이다.
//입력받는것은 N의 약수이다.
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int numbers = in.nextInt();

        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        int i=0;
        int N;
        while(i<numbers) {
            int divisor = in.nextInt();
         	 if(divisor > max) max = divisor;
			 if(divisor < min) min = divisor;
            i++;
        }
        N=max*min;
        System.out.println(N);
    }
    }