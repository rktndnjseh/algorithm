import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

        String[] input = reader.readLine().split(" ");
        long min = Long.parseLong(input[0]); // 최소값
        long max = Long.parseLong(input[1]); // 최대값

        long[] numbers = new long[(int)(max-min+1)];
        for(int i=0; i<numbers.length; i++){
            numbers[i] = min + i;
        }

        // 작은 소수부터 큰 소수 순서로 나누어가며 제곱ㄴㄴ수 판별
        for(long i=2; i*i<=max; i++){
            long square = i*i;
            long start = min % square == 0 ? min : min + (square - (min % square));

            for(long j=start; j<=max; j+=square){
                numbers[(int)(j-min)]=0;
            }
        }

        int count = 0;
        for(long num : numbers){
            if(num!=0){
                count++;
            }
        }

        writer.write(count + "");
        writer.flush();
        writer.close();
    }
}
