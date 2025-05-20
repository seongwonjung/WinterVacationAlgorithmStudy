package woojin.Baekjoon;

import java.util.Scanner;
import java.util.Stack;

class bj_9012 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder sb= new StringBuilder();

        int T = sc.nextInt();
        sc.nextLine();
        Stack<Character> stack;
        String str;

        for(int i=0; i<T; i++){
            stack = new Stack<Character>();
            str=sc.nextLine();
            boolean isVps=true;
            
            for(int j=0; j<str.length(); j++){
                if(str.charAt(j)=='('){
                    stack.add(str.charAt(j));
                }
                else {
                    if(stack.isEmpty()){
                        isVps=false;
                        break;
                    }   
                    else{
                       stack.pop();
                    }
                }
            }
            
            if(isVps && stack.isEmpty()){
                sb.append("YES\n");
            }
            else{
                sb.append("NO\n");
            }

        }

        System.out.println(sb);
        sc.close();
    }
}