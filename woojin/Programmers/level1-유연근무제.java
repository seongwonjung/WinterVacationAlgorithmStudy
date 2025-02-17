package woojin.Programmers;

class Solution {
    public int solution(int[] schedules, int[][] timelogs, int startday) {
        int answer = 0;
        boolean[][] late = new boolean[schedules.length][7];
        
        for(int i=0; i<schedules.length; i++){
            int time=schedules[i]+10;
            if((time)%100 >=60){
                time+=40; 
            }
            for(int j=0; j<7; j++){
                if(timelogs[i][j]<=time){
                    late[i][j]=true;
                }
                
                if(startday%7==0 || startday%7==6){
                    late[i][j]=true;
                }
                startday++;
            }
            
        }
        
        
        for(boolean[] c: late){
            boolean allTrue = true;
            
            for(boolean r : c){
                System.out.print(r+" ");
                if(!r){
                    allTrue = false;
                    break;
                }           
            }
            if(allTrue){
                answer++;
            }
            System.out.println();
        }
        
        return answer;
    }
}