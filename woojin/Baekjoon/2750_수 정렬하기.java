package woojin.Baekjoon;

import java.util.Scanner;

class bj_2750 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] arr = new int[2001];

        for(int i=0; i<N; i++){
            int num = sc.nextInt();

            if(arr[num+1000]==0){
                arr[num+1000]++;
            }
        }

        for(int i=0; i<arr.length; i++){
            if(arr[i]>0){
                System.out.println(i-1000);
            }
        }
        sc.close();
    }
}