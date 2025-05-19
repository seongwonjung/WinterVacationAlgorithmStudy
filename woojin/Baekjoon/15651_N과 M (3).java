package woojin.Baekjoon;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class bj_15651 {
    static int[] arr;
    static StringBuilder sb =new StringBuilder();
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int N = Integer.valueOf(st.nextToken());
        int M = Integer.valueOf(st.nextToken());
        arr = new int[M];

        backtracking(N, M, 0);
        br.close();
        System.out.println(sb);
    }

    public static void backtracking(int n, int m, int depth){
        if(depth == m){
            for (int i : arr) {
                sb.append(String.valueOf(i)+" ");
            }
            sb.append("\n");
            return;
        }

        for(int i=0; i<n; i++){
            arr[depth]=i+1;
            backtracking(n, m, depth+1);
        }
    }
}