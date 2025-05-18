package woojin.Baekjoon;

import java.util.Scanner;

class bj_27433 {
    static long func(int N){
        if(N==0){
            return 1;
        }

        return N*func(N-1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();

        System.out.println(func(N));
        
        sc.close();
    }    
}
