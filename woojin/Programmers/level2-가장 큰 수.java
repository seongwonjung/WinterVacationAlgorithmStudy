package woojin.Programmers;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Solution {
    public String solution(int[] numbers) {
        String answer = "";
        
        ArrayList<String> list = new ArrayList<String>();
        
        for(int i=0; i<numbers.length; i++){
            list.add(Integer.toString(numbers[i]));
        }
        
        Collections.sort(list, new Comparator<String>(){
            public int compare(String s1, String s2){
                return (s2+s1).compareTo(s1+s2);
            }
        });
        
        for(int i=0; i<numbers.length; i++){
            answer += list.get(i);
        }
        
        if (answer.charAt(0) == '0') {
            return "0";
        }

        
        return answer;
    }
}