import java.io.*;
import java.util.StringTokenizer;
import java.util.Arrays;

class Three_num {
    public static void main(String[]args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());


        int A = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());
        int C = Integer.parseInt(st.nextToken());   
        int[] array = new int[] {A, B, C};
        Arrays.sort(array);
        System.out.println(array[1]);

    }
}
