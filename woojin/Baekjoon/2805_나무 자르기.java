package woojin.Baekjoon;

import java.util.Scanner;

class bj_2805{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt(); // 나무의 수
        int M = sc.nextInt(); // 필요한 나무 길이
        int min = 0;
        int max = 0;

        int[] arr = new int[N];

        for(int i=0; i<N; i++){
            arr[i]=sc.nextInt();

            if(max<arr[i]){
                max=arr[i];
            }
        
        }
        sc.close();

        while (min<=max) {
            int mid=(min+max)/2;
            long sum=0;

            for(int i=0; i<N; i++){
                if(arr[i]>mid){
                    sum+=arr[i]-mid;
                }
            }
            if(sum>=M){
                min = mid+1;
            }
            else{
                max = mid-1;
            }
        }

        System.out.println(max);

    }
}
