package woojin.Baekjoon;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class cal2667 {
    static int[][] arr; 
    static int cnt; 
    static boolean[][] visited;
    static int dirX[] = {0,0,-1,1};
    static int dirY[] = {-1,1,0,0};
    static int N; //지도의 크기
    static ArrayList<Integer> list = new ArrayList<>(); // 단지 수 저장

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        N = sc.nextInt();
        arr = new int[N][N];
        visited = new boolean[N][N];
        
        sc.nextLine();

        for(int i=0; i<N; i++){
            String line = sc.nextLine(); //입력이 공백없이 들어와서 한 줄로 입력받고 0으로 구분
            for(int j=0; j<N; j++){
                arr[i][j] = line.charAt(j) - '0'; // 한 글자씩 0으로 빼준 값 넣어주기
            }
        }

        sc.close();
        
        cnt=1;

        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(arr[i][j]==1 && !visited[i][j]){
                    dfs(i,j);
                    list.add(cnt);
                    cnt=1;
                }
            }
        }

        Collections.sort(list);
        System.out.println(list.size());
        for(int i=0; i<list.size(); i++){
            System.out.println(list.get(i));

        }
        
    }

    public static void dfs(int y, int x){
        visited[y][x]=true;

        for(int i=0; i<dirX.length; i++){
            int nx=x+dirX[i];
            int ny=y+dirY[i];

            if(nx>=0 && ny>=0 && nx<N && ny<N){
                if(!visited[ny][nx] && arr[ny][nx]==1 ){
                    cnt++;
                    dfs(ny, nx);
                }
            }
        }
    }
}
