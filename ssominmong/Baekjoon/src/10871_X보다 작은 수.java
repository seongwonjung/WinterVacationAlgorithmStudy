import java.io.*;
import java.util.StringTokenizer;

class Less_than_X {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int X = Integer.parseInt(st.nextToken());
       st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) {
            int a = Integer.parseInt(st.nextToken());
            if(a<X) System.out.print(a + " ");
        }

    }
}
