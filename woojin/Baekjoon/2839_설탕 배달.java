package woojin.Baekjoon;

import java.util.Scanner;

class cal2839 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num=0; 
        int N = sc.nextInt();
        sc.close();
        
        // 설탕 N키로그램, 봉지는 3키로그램과 5키로그램
        // 최대한 적은 봉지 수 5로 먼저 나누고, 나머지를 3으로
        // 5를 최대한 많이 쓰고, 남은 걸 3을 써야 봉지를 적게 씀
        //

        // 1 > -1 2 > -1 3 > 1 4 > -1 5 > 1 6 > 2 7 > -1 8 > 2 9 > 3 10 >2 11>3 12>4 13>3 14>4 15>3 16>4 17>5 18>4 19>-1
        // 20>4 21>5 22>6 23>5 24>6 27>7 

        while(N>=0){
            if(N%5==0){
                num+=N/5;
                System.out.println(num);
                return;
            }  
            N-=3; // 5로 안 나눠지면 3키로 봉지 1개 사용
            num++;
        }
        

        System.out.println(-1);
    }    
}
