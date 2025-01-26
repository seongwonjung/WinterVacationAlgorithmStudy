package woojin.Programmers;

import java.util.Arrays;

class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";
        int cnt=0;
        
        Arrays.sort(participant);
        Arrays.sort(completion);
    
        // for(int i=0; i<participant.length; i++){
        //             System.out.print(participant[i]+ " "); 
        // }
        // System.out.println();
        //  for(int j=0; j<completion.length; j++){
        //         System.out.print(completion[j]+ " ");
        //     }  
        // System.out.println();
        for(int i=0; i<completion.length; i++){
               if(!participant[i].equals(completion[i])){
                    
                   return participant[i];   
               }
        }
         return participant[participant.length-1];
    }
}