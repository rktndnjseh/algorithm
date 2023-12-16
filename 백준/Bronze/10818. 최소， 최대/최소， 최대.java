interface Main {
    int InputSize=9000012;
    int[]index={0};
    byte[] inputBuffer = new byte[InputSize+1];;

    static void main(String[] args) throws Exception {
         System.in.read(inputBuffer);

        int Num;
        int N = read();

        int max = -1000001;
        int min = 1000001;
        for(int i=0;i<N;i++)
        {
            Num=read();
            max=Math.max(max, Num);
            min=Math.min(min, Num);
        }
        System.out.println(min+" "+max);
    }
    //아스키코드로 숫자를 하나하나 입력받아서 정수 하나로 만들어서 반환하는 함수
    static int read(){
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