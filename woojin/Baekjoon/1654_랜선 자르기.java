package woojin.Baekjoon;

import java.util.Scanner;

class bj_1654 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int K = sc.nextInt();
        int N = sc.nextInt();
        long min = 0;
        long max = 0;
        long mid = 0;

        int[] arr = new int[K];

        for(int i=0; i<K; i++){
            arr[i] = sc.nextInt();

            if(arr[i]>max){
                max = arr[i];
            }
        }
        sc.close();

        max++;

        while (min<max) {
            mid = (min+max)/2;

            long cnt = 0;

            for(int i=0; i<K; i++){
                cnt += arr[i]/mid;
            }

            if(cnt<N){
                max=mid;
            }
            else{
                min=mid+1;
            }
        }
        System.out.println(min-1);
    }
}
