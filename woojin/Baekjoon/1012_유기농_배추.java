package woojin.Baekjoon;

import java.util.Scanner;

class cal1012 {

    static int T;
    static int M;
    static int N;
    static int K;
    static int[][] arr;
    static int cnt;
    static boolean[][] visited;
    static int dirX[] = {0,0,-1,1};
    static int dirY[] = {-1,1,0,0};
     
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        T = sc.nextInt(); // 테이스케이스횟수

        for(int t=0; t<T; t++){
            M = sc.nextInt(); // 가로
            N = sc.nextInt(); // 세로
            K = sc.nextInt(); // 배추의 개수
    
            arr = new int[N][M];
            visited = new boolean[N][M];
    
            for(int i=0; i<K; i++){
                int x = sc.nextInt();
                int y = sc.nextInt();
                arr[y][x]=1;
            }   

            cnt=0;
            for(int i=0; i<N; i++){
                for(int j=0; j<M; j++){
                    if(arr[i][j]==1 && !visited[i][j]){
                        cnt++;
                        dfs(i,j);
                    }
    
                }
            }
            System.out.println(cnt);
        }
    }
    
    public static void dfs(int y, int x){
        visited[y][x]=true;

        for(int i=0; i<dirX.length; i++){
            int nx=x+dirX[i];
            int ny=y+dirY[i];

            if(nx>=0 && ny>=0 && nx<M && ny<N){
                if(!visited[ny][nx] && arr[ny][nx]==1 ){
                    dfs(ny, nx);
                }
            }
        }

    }
}
