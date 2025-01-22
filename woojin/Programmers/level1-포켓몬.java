package woojin.Programmers;

import java.util.HashSet;

class Solution {
    public int solution(int[] nums) {
        int answer = nums.length/2;
        
        HashSet<Integer> hash = new HashSet<>();
        
        for(int i=0; i<nums.length; i++){
            hash.add(nums[i]);
        }
        
        if(answer>hash.size()){
            answer=hash.size();
        }    
        return answer;
    }
}
