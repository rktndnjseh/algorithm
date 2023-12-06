//https://www.acmicpc.net/problem/1406
//소문자 lowerCase, 대문자 upperCase
import java.util.*;
import java.io.*;

public class Main {
    private static Stack<Character> leftStack = new Stack<>();
    private static Stack<Character> rightStack = new Stack<>();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String str = br.readLine();

        if(isAllLowerCase(str)){
            for (char c : str.toCharArray()) {
                leftStack.push(c);
            }

            int M = Integer.parseInt(br.readLine());
            while(M-- > 0){
                String[] command = br.readLine().split(" ");
                switch (command[0]) {
                    case "L":
                        moveCursorLeft();
                        break;
                    case "P":
                        addCharacter(command[1].charAt(0));
                        break;
                    case "B":
                        removeCursorLeft();
                        break;
                    case "D":
                        moveCursorRight();
                        break;
                }
            }
            bw.write(getText());
            bw.flush();
        }
    }

    public static boolean isAllLowerCase(String str) {
        for (int i = 0; i < str.length(); i++) {
            if (!Character.isLowerCase(str.charAt(i))) {
                return false;
            }
        }
        return true;
    }

    public static void addCharacter(char c) {
        leftStack.push(c);
    }
// 왼쪽 스택의 맨 위에 있는 상자를 오른쪽 스택의 맨 위로 옮겨놓는다.
    public static void moveCursorLeft() {
        if (!leftStack.isEmpty()) {
            rightStack.push(leftStack.pop());
        }
    }
    public static void removeCursorLeft() {
        if (!leftStack.isEmpty()) {
            leftStack.pop();
        }
    }
    // 오른쪽 스택의 맨 위에 있는 상자를 왼쪽 스택의 맨 위로 옮겨놓는다.
    public static void moveCursorRight() {
        if (!rightStack.isEmpty()) {
            leftStack.push(rightStack.pop());
        }
    }
    public static String getText() {
        StringBuilder text = new StringBuilder();
        for (Character c : leftStack) {
            text.append(c);
        }
        while (!rightStack.isEmpty()) {
            text.append(rightStack.pop());
        }
        return text.toString();
    }
}
