package woojin.SW_Expert_Academy;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

class Solution {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int T = Integer.valueOf(br.readLine());

        for(int i=1; i<=T; i++){
           int N = Integer.valueOf(br.readLine());
           StringTokenizer st = new StringTokenizer(br.readLine());
           long benefit=0;
           int max=0;
           List<Integer> list = new ArrayList<>();
           
           for(int j=0; j<N; j++){
            list.add(Integer.valueOf(st.nextToken()));
           }

           for(int j=N-1; j>=0; j--){
            if(list.get(j)>max){
                max=list.get(j);
            }
            else{
                benefit+= max-list.get(j);
            }
           }

           sb.append("#").append(i).append(" ").append(benefit).append('\n');
           
        }

        System.out.println(sb);
    }
}