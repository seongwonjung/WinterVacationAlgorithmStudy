package woojin.Baekjoon;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

class cal28278{
    public static void main(String args[])throws Exception{
     
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(bf.readLine());
        List<Integer> list = new ArrayList<Integer>();
        StringBuilder output = new StringBuilder();

        for(int i=0; i<N; i++){
            StringTokenizer st = new StringTokenizer(bf.readLine());
            int num = Integer.parseInt(st.nextToken());
            switch(num){    
                case 1:
                    int x = Integer.parseInt(st.nextToken());
                    list.add(x);
                    break;
                case 2:
                    if (list.isEmpty()) {
                        System.out.println("-1");
                    } else {
                        System.out.println(list.get(list.size() - 1));
                        list.remove(list.size() - 1);
                    }
                    break;
                case 3:
                    System.out.println(list.size());
                    break;
                case 4:
                    System.out.println(list.isEmpty() ? "1" : "0");
                    break;
                case 5:
                    System.out.println(list.isEmpty() ? "-1" : list.get(list.size() - 1));
                    break;
            }
        }
    }
}