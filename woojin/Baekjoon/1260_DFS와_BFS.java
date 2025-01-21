package woojin.Baekjoon;

import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class cal1260{
   
    static boolean visited[];   
    static ArrayList<ArrayList<Integer>> list;  
    static int num[];   // 정점 i의 방문순서 저장할 배열
    static int num2[];
    static int cnt;
    static Queue<Integer> queue = new LinkedList<>();

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt(); // 정점의 수 N (5 ≤ N ≤ 100,000)
        int M = sc.nextInt(); // 간선의 수 M(1 ≤ M ≤ 200,000)
        int R = sc.nextInt(); // 시작 정점 R(1 ≤ R ≤ N)

        visited = new boolean[N+1]; 
        list = new ArrayList<ArrayList<Integer>>(); 
        num = new int[N+1];
        num2 = new int[N+1];
        
        for(int i=0; i<=N; i++){    
            list.add(new ArrayList<Integer>());    
        }

        for(int i=0; i<M; i++){
            int u = sc.nextInt();
            int v = sc.nextInt();

            list.get(u).add(v); // 1 4 입력이면 1행에 4추가, 
            list.get(v).add(u); // 4행에 1 추가
        }
        for(int i=0; i<=N; i++){
            Collections.sort(list.get(i)); 
        }
        
        dfs(R);
        //i번째 줄에 정점 i의 방문 순서를 출력 
        for (int i = 1; i <= N; i++) {
            if (num[i] != 0) {
                System.out.print(num[i] + " ");
            }
        }
        System.out.println();
        visited = new boolean[N+1];
        cnt=1;
        bfs(R);
        for (int i = 1; i <= N; i++) {
            if (num2[i] != 0) {
                System.out.print(num2[i] + " ");
            }
        }

    }

    public static void dfs(int R){ // R은 현재 정점, 처음엔 초기 정점
        visited[R]=true; 
        num[cnt++]= R;
        // 1 - 2, 4
        // 2 - 1, 3, 4
        // 3 - 2, 4
        // 4 - 1, 2, 3
        
        for(int i : list.get(R)){ // 각 행을 처음부터 끝까지 검사
            if(visited[i]==false)   {
                dfs(i);
            }
        }
        // 1일 때 visited[1]=true, num[1]=1, cnt=2 - 1행 검사(2, 4). 2가 fasle 이므로 dfs(2) ->
        // 2일 때 visited[2]=true, num[2]=2, cnt=3 - 2행 검사(1, 3, 4) 1은 true여서 x, 3이 fasle 이므로 dfs(3) ->
        // 3일 때 visited[3]=true, num[3]=3, cnt=4 - 3행 검사(2, 4) 2는 true여서 x, 4가 false이므로 dfs(4) ->
        // 4일 때 visited[4]=ture, num[4]=4, cnt=5 - 4행 검사(1, 2, 3) 모두 true이므로 dfs 호출하지 않고 종료
    }

    public static void bfs(int R){
        queue.add(R);
        visited[R]=true;
        // 시작노드 저장

        while(!queue.isEmpty()){
            int current = queue.poll(); // 큐에서 현재 노드를 꺼냄
            num2[cnt++]=current;

            // 방문하지 않은 노드는 큐에 추가
            for (int i : list.get(current)) { 
                if (!visited[i]) { 
                    visited[i] = true; 
                    queue.add(i); 
                }
            }
        }

    }
    
}