import java.io.*;
import java.util.*;

class Score_calculation {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int score = 0;
        int bonus = 0;

        for(int i = 0; i < N; i++) {
            int result = Integer.parseInt(st.nextToken());

            if(result == 1) {
                bonus++;
                score += bonus;
            }
            else if(result == 0) {
                bonus = 0;
            }
        }
        System.out.println(score);
    }
}
