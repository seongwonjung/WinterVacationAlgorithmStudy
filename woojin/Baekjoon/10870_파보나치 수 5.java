package woojin.Baekjoon;

import java.util.Scanner;

class bj_10870 {
    static int func(int N){
        if(N==0){
            return 0;
        }
        if(N==1){
            return 1;
        }
        return func(N-2)+func(N-1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();

        sc.close();
        System.out.println(func(N));
    }
}
