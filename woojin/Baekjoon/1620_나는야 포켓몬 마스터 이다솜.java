package woojin.Baekjoon;

import java.util.HashMap;
import java.util.Scanner;

class cal1620 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();
        sc.nextLine();

        HashMap<Integer, String> map = new HashMap<Integer, String>();
        HashMap<String, Integer> map2 = new HashMap<String, Integer>();

        for(int i=1; i<=N; i++){
            String str = sc.nextLine();
            map.put(i,  str);
            map2.put(str, i);
        }

        for(int i=0; i<M; i++){
            String str = sc.nextLine();

            if(str.matches("~?\\d+")){
                //숫자인 경우
                System.out.println(map.get(Integer.parseInt(str)));
            }
            else{
                //문자열인 경우
                System.out.println(map2.get(str));
            }
        }

        sc.close();

    }
}
