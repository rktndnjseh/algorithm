import java.util.Scanner;
//훈제오리구이를 시작하는 시각과 오븐구이를 하는 데 필요한 시간이 분단위로 주어졌을 때, 오븐구이가 끝나는 시각을 계산하는 프로그램을 작성하시오.
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int now_hour = in.nextInt();
        int now_minute = in.nextInt();
        int input_minute = in.nextInt();
             if(now_hour<0||now_minute<0||input_minute<0||input_minute>1000){System.out.println("존재하는 시간이 아닙니다.");}
            else{
                now_minute+=input_minute;
                 int n=now_minute/60;
                 now_hour+=n;
                 now_hour=now_hour%24;
                 now_minute=now_minute%60;
                 System.out.printf("%d %d",now_hour,now_minute);
            }
    }
    }