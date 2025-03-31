import java.io.*;
import java.util.StringTokenizer;
import java.util.Arrays;

class Intelligent_train {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int total = 0;
        int[] max = new int[4];

        for(int i = 0; i < 4; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int out = Integer.parseInt(st.nextToken());
            int in = Integer.parseInt(st.nextToken());

            total += in-out;
            max[i] = total;
        }
        Arrays.sort(max);
        System.out.println(max[3]);
    }
}
