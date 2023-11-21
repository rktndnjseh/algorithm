import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        Stack<Integer> st = new Stack<>();
        int N = Integer.parseInt(br.readLine());
        while(N-->0) {
            String[] s = br.readLine().split(" ");
    //push
            if (s[0].equals("push")) {
                st.push(Integer.valueOf(s[1]));
            }
    //pop
            if (s[0].equals("pop")) {
            if(st.isEmpty()){
                System.out.println(-1);
            }else {
                int A= st.pop();
                System.out.println(A);
            }}
    //size
            if(s[0].equals("size")){
                System.out.println(st.size());
            }
    //empty
            if(s[0].equals("empty")){
                if(st.isEmpty()){
                    System.out.println(1);
                }else{
                    System.out.println(0);
                }
            }
    //top
             if(s[0].equals("top")){
                 if(st.isEmpty()){
                     System.out.println(-1);
                 }else {
                 System.out.println(st.peek());
                 }
        }
    }}
}