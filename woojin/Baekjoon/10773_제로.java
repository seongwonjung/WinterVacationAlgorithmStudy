package woojin.Baekjoon;

import java.util.Scanner;
import java.util.Stack;

class cal10773{
    public static void main(String args[]){

    Scanner sc = new Scanner(System.in);
    
    int sum=0;
    int K = sc.nextInt();
    Stack<Integer> stack = new Stack<>();
    
    for(int i=0; i<K; i++){
        int num=sc.nextInt();
        if(num==0){
            stack.pop();
        }
        else{
            stack.push(num);
        }
    }

    while(!stack.isEmpty()){
        sum+=stack.pop();
    }
    
    System.out.println(sum);
    }
}
