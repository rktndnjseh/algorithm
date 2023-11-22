# 문제 개수 세기

맨 아래에 적어놓은 코드(문제 개수 세기.java)는 백준 맞은 문제를 세기 귀찮아서 만들게 되었다.

옆에 맞은 문제 개수가 나와있지만 왠지 모르게 세고 싶은 마음이 들었다.

***
![캡처](https://github.com/rktndnjseh/algorithm/assets/150515419/216a006b-2798-4752-972f-1392ca2eeb77)
---
맞은 문제를 이렇게 복붙해서 입력을 하면 입력한 문제들이 총 몇개인지 알 수 있다.

![image](https://github.com/rktndnjseh/algorithm/assets/150515419/31cfd790-fa1f-4862-9637-3eb5a3ef2431)
---

    import java.util.*;
    import java.io.*;

    public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String str = br.readLine();
        StringTokenizer st = new StringTokenizer(str);

        System.out.println(st.countTokens());
    }}
