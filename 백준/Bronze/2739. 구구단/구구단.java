import java.util.Scanner;
//        출력형식과 같게 N*1부터 N*9까지 출력한다.
//첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 9보다 작거나 같다.
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int i=0;
        if(N<1||N>9){System.out.println("입력가능한 숫자가 아닙니다.");}else{
            while(i ++<9){
                System.out.printf("%d * %d = %d\n",N,i,N*i);
            }
        }
    }
    }