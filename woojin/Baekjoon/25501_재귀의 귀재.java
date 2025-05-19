package woojin.Baekjoon;

import java.util.Scanner;

class bj_25501 {
    static int cnt;
    
    static int isPalindrome(String str){
        return recursion(str, 0, str.length()-1);
    }

    static int recursion(String str, int l, int r){
        cnt++;

        if(r <= l){
            return 1;
        }
        else if(str.charAt(l) != str.charAt(r)) {
            return 0;
        }
        else{
            return recursion(str, l+1, r-1);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();
        
        int T = sc.nextInt();
        sc.nextLine();

        for(int i=0; i<T; i++){
            String str = sc.nextLine();
            cnt=0; 
            sb.append(isPalindrome(str)+" "+cnt+"\n");
        }

        System.out.println(sb);

        sc.close();
    }
}
