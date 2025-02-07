package woojin.Baekjoon;

import java.util.HashSet;
import java.util.Scanner;

class cal14425 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();
        sc.nextLine(); 
        int cnt = 0;

        HashSet<String> set = new HashSet<String>();

        for(int i=0; i<N; i++){
            set.add(sc.nextLine());
        }

        for(int i=0; i<M; i++){
            String str = sc.nextLine();

            if(set.contains(str)){
                cnt++;
            }
        }
        
        sc.close();

        System.out.println(cnt);
        }
}
