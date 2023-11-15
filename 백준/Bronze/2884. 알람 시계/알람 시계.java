import java.util.Scanner;
//45분씩 알람 일찍 설정하기
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int H = in.nextInt();
        int M = in.nextInt();
        int currentM = M-45;
        if(currentM<0){
         H--;
         if(H<0){
             H=23;
         }
         currentM=60+currentM;
        }
        System.out.printf("%d %d",H,currentM);
    }
}