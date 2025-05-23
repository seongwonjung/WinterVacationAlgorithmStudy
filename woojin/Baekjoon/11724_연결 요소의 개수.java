package woojin.Baekjoon;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class bj1_11724 {
    static int N, M;
    static List<List<Integer>> list;
    static boolean[] visited;
    static int cnt=0;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        N = sc.nextInt();
        M = sc.nextInt();

        list = new ArrayList<>();
        visited = new boolean[N+1];

        for(int i=0; i<=N; i++){
            list.add(new ArrayList<>());
        }

        for(int i=0; i<M; i++){
            int u = sc.nextInt();
            int v = sc.nextInt();

            list.get(u).add(v);
            list.get(v).add(u);
        }

        
        for(int i=1; i<=N; i++){
            if(!visited[i]){
                dfs(i);
                cnt++;
            }
        }
        System.out.println(cnt);

        sc.close();
    }

    public static void dfs(int num){
        visited[num]=true;

        for(int x : list.get(num)){
            if(!visited[x]){
                dfs(x);
            }
        }       
    }
}