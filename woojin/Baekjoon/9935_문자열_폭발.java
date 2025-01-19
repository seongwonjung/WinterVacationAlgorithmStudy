package woojin.Baekjoon;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;
import java.util.Stack;

class cal9935 {
        public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder sb = new StringBuilder();
        Stack<Character> stack = new Stack<>();
      
        String str = bf.readLine();
        String bomb = bf.readLine();

        int cnt=0;
        
        for(int i=0; i<str.length(); i++){
            stack.add(str.charAt(i));
              
            if(stack.size()>=bomb.length()){
                boolean bool= true;
               for(int j=0; j<bomb.length(); j++){
                    if(stack.elementAt(stack.size()-bomb.length()+j)!=bomb.charAt(j)){
                        bool=false;
                        break;
                    }
                }
                if(bool){
                    for(int j=0; j<bomb.length(); j++){
                        stack.pop();
                    }
                } 
            }   
        }
        if(stack.isEmpty()){
            bw.write("FRULA");
        }
        else{
            for(Character c : stack){
                sb.append(c);
            }
            
            bw.write(sb.toString());
        }
        bw.close();
    }
}
