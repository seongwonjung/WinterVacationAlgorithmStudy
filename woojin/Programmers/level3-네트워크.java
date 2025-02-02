package woojin.Programmers;

class Solution {
    static int cnt = 0;
    static boolean[] visited;
    
    public int solution(int n, int[][] computers) {
        int answer = 0;
        visited = new boolean[computers.length];
        
        for(int i=0; i<computers.length; i++){
            for(int j=0; j<computers.length; j++){
                if(computers[i][j]==1 && !visited[i]){
                    dfs(i, computers);
                    answer++;
                }
            }
        }
        
        return answer;
    }
    
    public static void dfs(int num, int[][] computers){
        visited[num]=true;
        
        for(int i=0; i<computers.length; i++){
            if(computers[num][i]==1 && !visited[i]){
                dfs(i, computers);
            }
        }
    }
}