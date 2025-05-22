package woojin.Baekjoon;

import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Scanner;

class bj_24444 {
    static int cnt=1;
    static int N;
    static int M;
    static int R;
    static Queue<Integer> queue = new LinkedList<>();
    static boolean[] visited;
    static int[] visitArr;
    static List<List<Integer>> list;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        N = sc.nextInt(); //정점의 수
        M = sc.nextInt(); //간선의 수
        R = sc.nextInt(); //시작 정점
        sc.nextLine();

        visited = new boolean[N+1];
        list = new ArrayList<>();
        visitArr = new int[N+1];

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
            Collections.sort(list.get(i));
        }

        Bfs(R);

        for(int i=1; i<=N; i++){
            System.out.println(visitArr[i]);
        }
        sc.close();
    }

    public static void Bfs(int start){
        visited[start]=true;
        visitArr[start]=cnt++;
        queue.add(start);

        while(!queue.isEmpty()){
            int num = queue.poll();

            for(int i : list.get(num)){
                if(!visited[i]){
                    visited[i]=true;
                    visitArr[i]=cnt++;
                    queue.add(i);
                }
            }
        }

    }
}