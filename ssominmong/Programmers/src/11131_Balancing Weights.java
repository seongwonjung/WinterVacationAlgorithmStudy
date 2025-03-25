import java.io.*;
import java.util.StringTokenizer;

class Balancing_Weights{
    public static void main(String[] args)  throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        for(int i = 0; i < T; i++) {
            int num = Integer.parseInt(br.readLine());
            StringTokenizer st = new StringTokenizer(br.readLine());
            int total = 0;

            for(int j = 0; j < num; j++) {
                int W = Integer.parseInt(st.nextToken());
                total += W;
            }
            if(total < 0) System.out.println("Left");
            else if(total > 0) System.out.println("Right");
            else System.out.println("Equilibrium");
        }
    }
}
