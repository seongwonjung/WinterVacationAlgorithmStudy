package woojin.Programmers;

import java.util.*;

class Solution {
    static List<String> NumList = new ArrayList<String>();
    static boolean[] used;
    
    public int solution(String numbers) {
        int answer = 0;
        String str = "";
        used = new boolean[numbers.length()];
        // 소수의 조건 - 자기자신이나 1로만 나눠짐. 2이상일 때 i부터 n-1로 나눴을 때 0인 값이 없다면 소수
        // NumList에 만들 수 있는 숫자 중복없이 저장, 0으로 시작하는 숫자도 제외
        // NumLIst의 요소가 소수면 answer++
                
        sd(str, numbers, 0);
        System.out.print(NumList);
        for(int i=0; i<NumList.size(); i++){
            if(Integer.valueOf(NumList.get(i))>1){
                boolean isPrime = true;
                for(int j=2; j<Integer.valueOf(NumList.get(i)); j++){
                    if(Integer.valueOf(NumList.get(i))%j==0){
                        isPrime = false;
                        break;
                    }
                }
                if(isPrime){
                    answer++;
                }
            }    
        }
                       
        return answer;
    }
    
    public static void sd(String str, String numbers, int pos){
        if(!str.isEmpty() && !NumList.contains(str) && str.charAt(0)!='0'){
            NumList.add(str);   
        }
        
        if(pos==numbers.length()){
            return;
        }
        for(int i=0; i<numbers.length(); i++){
            if(!used[i]){
                used[i]=true;
                sd(str+numbers.charAt(i), numbers, pos+1);   
                used[i]=false;
            }
        }
    }
}