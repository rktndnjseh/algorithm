import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int[] array =new int[31];
        for(int i = 1; i < 29; i++) {
            int checkedPerson = Integer.parseInt(br.readLine());
            array[checkedPerson]=1;
        }
        for (int i = 1; i<31; i++) {
            if(isChecked(array, i)){
             System.out.println(i);
        }
    }
}
    public static boolean isChecked(int[] array, int i){
        return array[i] != 1;
    }
}