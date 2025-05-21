package woojin.Baekjoon;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

class bj_24480 {
    static boolean[] visited;
    static int N, M;
    static int visitArr[];
    static int cnt=1;
    static List<List<Integer>> list = new ArrayList<>();

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        N = sc.nextInt(); // 정점 수
        M = sc.nextInt(); // 간선
        int R = sc.nextInt(); // 시작 정점

        visited = new boolean[N+1];

        for(int i=0; i<=N; i++){
            list.add(new ArrayList<Integer>());
        }

        for(int i=0; i<M; i++){
            int u = sc.nextInt();
            int v = sc.nextInt();

            list.get(u).add(v);
            list.get(v).add(u);
        }
        
        visitArr = new int[N+1];
        
        for (int i = 1; i <= N; i++) {
            Collections.sort(list.get(i), Collections.reverseOrder());
        }
        
        dfs(R);

        for(int i=1; i<=N; i++){
            System.out.println(visitArr[i]);
        }
        sc.close();
    }

    public static void dfs(int R){
        visited[R]=true;
        visitArr[R]=cnt++;
        
        for(int num : list.get(R)){
            if(!visited[num]){
                dfs(num);
            }
        }
    }
}