package woojin.Baekjoon;

import java.util.Scanner;

class bj_2231 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int answer=0;

        for(int i=0; i<N; i++){
            int num=i;
            int sum=i;

            while (num!=0) {
                sum += num%10;
                num /= 10;
            }
            
            if(sum==N){
                answer=i;
                break;
            }
            
        }
        sc.close();
        System.out.println(answer);
    }
}
