package woojin.Programmers;

import java.util.*;

class Solution {
    static String[] vowels  = {"A", "E", "I", "O", "U"};
    static List<String> words = new ArrayList<String>();
    static String str = "";
    
    public int solution(String word) {
        int answer = 0;        
        
        // 백트래킹 함수에서 반복문으로 첫 번째 글짜부터 다섯 번째 글짜까지                  
        // list에 추가하면서 현재 위치도 글자 위치에 맞게 해야 함
        // 문자열의 길이가 5와 같아지면 return 시키기 -길이 수 제한
        // 백트래킹 함수를 다시 호출해서
        // wordd와 list가 같을 때의 인덱스를 answer에 넣기
        backTracking(str , 1);
        
        for (int i = 0; i < words.size(); i++) {
            if (words.get(i).equals(word)) {
                answer = i;
                break;
            }
        }
        
        return answer;
    }
    
    public static void backTracking(String str, int dept) {
        words.add(str);
        
        if (str.length() == 5) return;
        
        for(int i=0; i<vowels.length; i++){
            backTracking(str+ vowels[i], dept+1);
        }
        // str depth
        // "", 1
    }
}
