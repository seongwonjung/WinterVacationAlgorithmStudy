package woojin.Baekjoon;

import java.util.Scanner;

class bj_9663 {
    static int N;
    static int cnt=0;
    static int arr[];
    // 퀸은 상하좌우,대각선방향으로 같이 못 놓음

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        N = sc.nextInt();
        arr = new int[N];
        backtracking(0);

        System.out.println(cnt);
        sc.close();
    }

    public static void backtracking(int depth){
        if(depth==N){
            cnt++;
            return;
        }

        for(int i=0; i<N; i++){
            arr[depth]=i;
            if(possible(depth)){
                backtracking(depth+1);
            }
        }
    }

    public static boolean possible(int depth){
        for(int i=0; i<depth; i++){
            if(arr[i]==arr[depth]){
                return false;
            }

            if(Math.abs(depth-i) == Math.abs(arr[depth]-arr[i])){
                return false;
            }
        }
    
        return true;
    }
}