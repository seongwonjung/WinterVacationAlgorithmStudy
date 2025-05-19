package woojin.Baekjoon;

import java.util.Scanner;

class bj_15649 {
    static int[] arr;
    static boolean[] visited;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();

        arr = new int[M];
        visited = new boolean[N];

        backtracking(N, M, 0);

        sc.close();
    }
        
    static void backtracking(int n, int m, int depth){
        if(depth==m){
            for (int i : arr) {
                System.out.print(i+" ");
            }
            System.out.println();
            return;
        }

        for(int i=0; i<n; i++){
            if(!visited[i]){
                visited[i]=true;
                arr[depth]=i+1;
                backtracking(n, m, depth+1);

                visited[i]=false;
            }
        }
    }
}