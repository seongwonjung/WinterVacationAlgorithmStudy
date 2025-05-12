package woojin.Baekjoon;

import java.util.Scanner;

class bj_1316 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        sc.nextLine();
        int cnt=0;

        for(int i=0; i<N; i++){
            String str = sc.nextLine();
            boolean checked[] = new boolean[26]; 
            boolean isGroup = true;

            for(int j=0; j<str.length(); j++){
                if(j>0 && str.charAt(j)!=str.charAt(j-1)){
                    if(checked[str.charAt(j)-'a']){
                        isGroup=false;
                        break;
                    }
                }
                checked[str.charAt(j)-'a']=true;

            }
            
            if(isGroup){
                cnt++;
            }
        }
        System.out.println(cnt);
        
        sc.close();
    }
}
