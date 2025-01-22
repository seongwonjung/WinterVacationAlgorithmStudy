package woojin.Baekjoon;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class cal2606 {

    static ArrayList<ArrayList<Integer>> list = new ArrayList<ArrayList<Integer>>();
    static int num;
    static int line;
    static int cnt=0;
    static boolean infection[];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        num = sc.nextInt();
        line = sc.nextInt();
        infection = new boolean[num+1];

        for(int i=0; i<=num; i++){
            list.add(new ArrayList<Integer>());
        }

        for(int i=0; i<line; i++){
            int u = sc.nextInt();
            int v = sc.nextInt();

            list.get(u).add(v);
            list.get(v).add(u);
        }

        for(int i=0; i<=num; i++){
            Collections.sort(list.get(i)); 
        }
        
        virus(1);

        System.out.println(cnt);
    }

    public static void virus(int num) {
        infection[num] = true;

        for (int i : list.get(num)) {
            if (!infection[i]) {
                cnt++;
                virus(i);
            }
        }
    }
}
