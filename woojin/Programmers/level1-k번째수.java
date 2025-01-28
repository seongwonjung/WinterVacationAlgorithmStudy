package woojin.Programmers;

import java.util.ArrayList;
import java.util.Collections;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        // commands
        // 0행 i j k
        // 1행 i j k
        // 2행 i j k
        // . . .
        
        int[] answer = new int[commands.length];
        ArrayList<ArrayList<Integer>> list = new ArrayList<ArrayList<Integer>>();
        
        for(int idx=0; idx<commands.length; idx++){ // commands의 행만큼 list 행 추가
            list.add(new ArrayList<Integer>());
        }
        
        //행 개수만큼 반복, 배열 자르기
        for(int idx=0; idx<commands.length; idx++){
            for(int idx2=commands[idx][0]; idx2<=commands[idx][1]; idx2++){
                list.get(idx).add(array[idx2-1]);
            }
        }
        
        // 자른 배열 정렬
        for(int idx=0; idx<commands.length; idx++){
            Collections.sort(list.get(idx));
        }
        
        for(int idx=0; idx<commands.length; idx++){
            answer[idx] = list.get(idx).get(commands[idx][2]-1);
        }
          
      //  System.out.println(list);
        
        return answer;
    }
}