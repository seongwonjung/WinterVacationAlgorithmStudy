package woojin.Programmers;

class Solution {
    static int max = 0;
    static boolean[] visited;
    
    public int solution(int k, int[][] dungeons) {
        // k는 현재 피로도, dungeons 최소 필요 피로도, 소모 피로도 
        visited = new boolean[dungeons.length];
        
        backTracking(k, 0, dungeons);
        
        return max;
    } 
    
    public static void backTracking(int k, int cnt, int[][] dungeons){
        if(max<=cnt){
            max=cnt;
        }
        for(int i=0; i<dungeons.length; i++){
            if(k>=dungeons[i][0] && !visited[i]){
                visited[i]=true;
                backTracking(k-dungeons[i][1], cnt+1, dungeons);
                visited[i]=false;
            }
        }
    }
}