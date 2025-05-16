package woojin.Baekjoon;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class bj_2751 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[2000001];

        for(int i=0; i<N; i++){
            int num=Integer.parseInt(br.readLine());
            arr[num+1000000]++;
        }

        for(int i=0; i<arr.length; i++){
            if(arr[i]>0){
                System.out.println(i-1000000);
            }
        }
    }
}
