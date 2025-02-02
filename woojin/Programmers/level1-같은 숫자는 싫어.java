package woojin.Programmers;

import java.util.*;

class Solution {
    public int[] solution(int []arr) {
        
        Stack<Integer> stack = new Stack<Integer>();
        stack.add(arr[0]);
        
        for(int i=1; i<arr.length; i++){
            if(arr[i]!=stack.peek()){
                stack.add(arr[i]);
            }
        }
        
        int answer[] = new int[stack.size()];
        
        for(int i=0; i<stack.size(); i++){
            answer[i]=stack.get(i);   
        }

        return answer;
    }
}