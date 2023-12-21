import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int copy = -1, count = 0;
        int[] array = new int[10];

        for(int i = 0; i < 10; i++) {
            array[i] = sc.nextInt() % 42;
        }
        sc.close();
        Arrays.sort(array);

        for (int i = 0; i < 10; i++) {
            if (copy != array[i]) {
                copy = array[i];
                count++;
            }
        }

        System.out.println(count);
    }
}
