import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        int bag_five = N/5;
        while (bag_five >= 0) {
            int temp = N - (bag_five * 5); //5kg 봉지에 최대한 많이 사용한 후 남은 무게
            if (temp % 3 == 0) {
                System.out.println(bag_five + (temp/3));
                return;
            }
            bag_five--;
        }
        System.out.println(-1);
    }
}