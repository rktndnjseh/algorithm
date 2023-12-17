interface Main {
    int InputSize=9000012;
    int[]index={0};
    byte[] inputBuffer = new byte[InputSize+1];;

    static void main(String[] args) throws Exception {
        System.in.read(inputBuffer);

        int N = read();

        StringBuilder sb = new StringBuilder();
        for(int i=1; i<=N; i++) {
            for(int j=1; j<=N; j++) {
                if(j<=N-i) sb.append(" ");
                 else sb.append("*");
            }
            sb.append("\n");
        }
        System.out.println(sb);
    }static int read(){
    int ASCII, result=0, isMinus=1;
    while((ASCII=inputBuffer[index[0]++])>32){
        //줄바꿈, 탭 등의 공백문자를 만날때까지
        if(ASCII==45){//"-"문자인지 확인, 음수인지 확인
            isMinus=-1;
        }else result=result*10+ASCII-48;
        //ASCII코드에서 0은 48이다.48을 빼면 원래 숫자가 된다.
        //result*10은 이전까지 읽어들인 숫자를 한자리 수 뒤로 밀어준다.
        //그 후 +ASCII-48로 새로 읽은 숫자를 더한다.
    }
    return result*isMinus;
}
}
