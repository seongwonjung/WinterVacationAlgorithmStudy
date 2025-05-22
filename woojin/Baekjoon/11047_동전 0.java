package woojin.Baekjoon;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

class bj_11047 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int N = Integer.valueOf(st.nextToken());
        int K = Integer.valueOf(st.nextToken());

        List<Integer> list = new ArrayList<>();
        
        for(int i=0; i<N; i++){
            list.add(Integer.valueOf(br.readLine()));
        }

        int cnt=0;
        int money=K;
        
        for(int i=N-1; i>=0; i--){
            if(list.get(i)<=money){
                while (money>=list.get(i)) {
                    money-=list.get(i);
                    cnt++;
                }
                
            }
        }
        System.out.println(cnt);

    }
}
