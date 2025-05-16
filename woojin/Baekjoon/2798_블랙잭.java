package woojin.Baekjoon;

import java.util.Scanner;

class bj_2798{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();

        int sum = 0;
        int arr[] = new int[N];
        boolean sumArr[] = new boolean[M];
        int max=0;

        for(int i=0; i<N; i++){
            arr[i] = sc.nextInt();
        }

        for(int i=0; i<N; i++){
            for(int j=i+1; j<N; j++){
                for(int k=j+1; k<N; k++){
                    sum= arr[i]+arr[j]+arr[k];

                    if(sum<=sumArr.length){
                        sumArr[sum-1]=true;
                    }
                }
            }
        }
        
        for(int i=0; i<sumArr.length; i++){
            if(sumArr[i]){
                max=i+1;
            }
        }
        System.out.println(max);

        sc.close();
    }
}
