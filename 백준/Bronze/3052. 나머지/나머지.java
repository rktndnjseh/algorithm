import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        Set<Integer> set = new HashSet<>();

        for(int i = 0; i < 10; i++) set.add(s.nextInt() % 42);
        s.close();

        System.out.println(set.size());
    }
}
