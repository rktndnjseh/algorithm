import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> array = new ArrayList<>();

        int num;
        int max = 0;
        int maxNum=0;
        while(in.hasNextInt()) {
        	 num = in.nextInt();		
            array.add(num);
            if(num > max) {
				max = num;
                maxNum = array.size();
            }
        }
        System.out.println(max);
        System.out.println(maxNum);
        in.close();
    }
}