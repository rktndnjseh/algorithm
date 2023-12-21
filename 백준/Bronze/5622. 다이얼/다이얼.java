import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int sum=0;
        String s = br.readLine();
        if (!isAlphabet(s)) {
            System.out.println("입력된 문자열에 알파벳 외의 문자가 포함되어 있습니다. 다시 입력해 주세요.");
            return;
        }
        for(int i=0;i<s.length();i++){
               sum+= useDial(s,i)+1;
        }
        System.out.println(sum);
    }
    public static int useDial(String s, int i){
        switch (s.charAt(i)) {
            case 'A': case 'B': case 'C':
                return 2;
            case 'D': case 'E': case 'F':
                return 3;
            case 'G': case 'H': case 'I':
                return 4;
            case 'J': case 'K': case 'L':
                return 5;
            case 'M': case 'N': case 'O':
                return 6;
            case 'P': case 'Q': case 'R': case 'S':
                return 7;
            case 'T': case 'U': case 'V':
                return 8;
            case 'W': case 'X': case 'Y': case 'Z':
                return 9;
            default:
                return -1;  // 알파벳이 아닌 경우 -1을 반환
        }
    }
    public static boolean isAlphabet(String s) {
        return s.chars().allMatch(Character::isAlphabetic);
    }
}
