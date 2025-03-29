package woojin.Baekjoon;

import java.util.Arrays;
import java.util.Scanner;

class bj_2110 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int C = sc.nextInt();

        int[] x = new int[N];

        for(int i=0; i<N; i++){
            x[i] = sc.nextInt();
        }
        sc.close();
        
        Arrays.sort(x);

        int min = 1;
        int max = x[N-1] - x[0];
        int distance = 0;

        while(min<=max){
            int mid = (min+max)/2;
            int cnt = 1;
            int last = x[0];

            for(int i=0; i<N; i++){
                if(x[i] - last >= mid){
                    cnt++;
                    last = x[i];
                }
            }

            if(cnt >= C){
                distance = mid;
                min = mid + 1;
            }
            else{
                max = mid -1;
            }
        }

        System.out.println(distance);
    }
}
