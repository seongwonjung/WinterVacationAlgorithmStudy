package woojin.SW_Expert_Academy;

import java.util.Scanner;

class Solution {
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(System.in);

        for(int t=1; t<=10; t++){
            int N = sc.nextInt();
            int[] arr = new int[N];
            int max;
            int total=0;

            for(int i=0; i<N; i++){
                arr[i] = sc.nextInt();
            }

            for(int i=2; i<=N-2; i++){
                max=0;
                if(arr[i]<arr[i-2] || arr[i]<arr[i-1] 
                    || arr[i]<arr[i+1] || arr[i]<arr[i+2]){
                        continue;
                }
                for(int j=i-2; j<=i+2; j++){
                    if(j==i){
                        continue;
                    }
                    if(arr[j]>max){
                        max=arr[j];
                    }
                }
                total+=arr[i]-max;
            }

            System.out.println("#"+t+" "+total);
        }

    }
}