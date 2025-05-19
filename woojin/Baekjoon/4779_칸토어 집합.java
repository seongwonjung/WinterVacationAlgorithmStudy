package woojin.Baekjoon;

import java.util.Scanner;

class bj_4779 {
    static char[] charArr;

    static void func(int start, int n){
        if(n<=1){
            return;
        }
        int num = n/3;
        for(int i= start+num; i<start+num*2; i++){
            charArr[i]=' ';
        }
        func(start,num);
        func(start+num*2, num);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();

        while(sc.hasNextInt()){
            int N = sc.nextInt();
            int num=1;
            
            for(int j=0; j<N; j++){
                num*=3;
            }
            
            charArr = new char[num];
            
            for(int j=0; j<num; j++){
                charArr[j]='-';
            }
            func(0, num);

            for(int j=0; j<num; j++){
               sb.append(charArr[j]);
            }
            sb.append('\n');
        }
        System.out.println(sb);
        sc.close();
    }
}
