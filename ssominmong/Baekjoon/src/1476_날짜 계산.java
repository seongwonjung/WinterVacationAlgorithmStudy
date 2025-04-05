import java.io.*;
import java.util.*;

class Date_calculation {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int E = Integer.parseInt(st.nextToken());
        int S = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int year = 0;
        for(int  i = 1; i <= 7980; i++) {
            if((i - 1) % 15 + 1 == E && (i - 1) % 28 + 1 == S && (i - 1) % 19 + 1 == M) {
                year += i;
                break;
            }
        }
        System.out.println(year);
    }
}
