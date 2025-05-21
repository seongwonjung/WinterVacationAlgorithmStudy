package woojin.Baekjoon;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

class bj_18258{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int N = Integer.valueOf(br.readLine());
        Queue<Integer> queue = new LinkedList<>();
        int back=0;

        for(int i=0; i<N; i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            String str = st.nextToken();
            switch (str) {
                case "push":
                    int x = Integer.valueOf(st.nextToken());
                    queue.add((x));
                    back=x;
                    break;
                case "pop":
                    Integer num=queue.poll();
                    if(num==null){
                        sb.append("-1").append("\n");
                    }
                    else{
                        sb.append(num).append("\n");;
                    }
                    break;
                case "size":
                    sb.append(queue.size()).append("\n");
                    break;
                case "empty":
                    if(queue.isEmpty()){
                        sb.append(1).append("\n");;
                    }
                    else{
                        sb.append(0).append("\n");;
                    }
                    break;
                case "front":
                    Integer num2 = queue.peek();
                    if(num2==null){
                        sb.append("-1").append("\n");;
                    }
                    else{
                        sb.append(num2).append("\n");
                    }
                    break;
                case "back":
                    if(queue.isEmpty()){
                        sb.append("-1").append("\n");;
                    }
                    else{
                        sb.append(back).append("\n");;
                    }
                default:
                    break;
            }

        }
        

        System.out.println(sb);
        
    }
}
