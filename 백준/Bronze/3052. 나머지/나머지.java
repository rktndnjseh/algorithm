import java.io.BufferedInputStream;
import java.io.DataInputStream;
import java.util.HashSet;
import java.util.Set;

public class Main {
    public static void main(String[] args) throws Exception {
        DataInputStream dis = new DataInputStream(new BufferedInputStream(System.in));
        Set<Integer> set = new HashSet<>();

        for(int i = 0; i < 10; i++) {
            int number = Integer.parseInt(dis.readLine());
            set.add(number % 42);
        }

        System.out.println(set.size());
    }
}
