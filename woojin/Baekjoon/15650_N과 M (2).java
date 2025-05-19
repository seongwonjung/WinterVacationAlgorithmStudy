package woojin.Baekjoon;

import java.util.Scanner;

class bj_15650 {
    static int[] arr;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();
        arr = new int[M];

        backtracking(N, M, 0, 1);
        sc.close();
    }

    public static void backtracking(int n, int m, int depth, int start){
        if(depth == m){
            for (int i : arr) {
                System.out.print(i+" ");
            }
            System.out.println();
            return;
        }

        for(int i=start; i<=n; i++){
            arr[depth]=i;
            backtracking(n, m, depth+1, i+1);
        }
    }
}
