package woojin.SW_Expert_Academy;

import java.util.Scanner;

class Solution {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] arr = new int[N];
        
        for(int t=0; t<10; t++){
            int max=0;
            int total=0;

            for(int i=0; i<N; i++){
                arr[i] = sc.nextInt();
            }

            for(int i=2; i<N-2; i++){
                if(arr[i]<arr[i-2] || arr[i]<arr[i-1] 
                    || arr[i]<arr[i+1] || arr[i]<arr[i+2]){
                        continue;
                }
                for(int j=1; j<3; j++){
                    if(arr[i-j]>max){
                        arr[i-j]=max;
                    }
                    if(arr[i+j]<max){
                        arr[i+j]=max;
                    }
                }
                total+=arr[i]-max;
            }

            System.out.println("#"+t+" "+total);
        }

    }
}