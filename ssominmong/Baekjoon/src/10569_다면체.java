import java.io.*;
import java.util.StringTokenizer;

class Polyhedron {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        for(int i = 0; i < T; i++) {
                 StringTokenizer st = new StringTokenizer(br.readLine());
                 int V = Integer.parseInt(st.nextToken());
                 int E = Integer.parseInt(st.nextToken());

                 int F = 2-V+E;
                 System.out.println(F);
        }
        br.close();
    }
}
