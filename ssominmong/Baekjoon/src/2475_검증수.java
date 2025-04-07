import java.io.*;
import java.util.StringTokenizer;

class Number_of_verifications {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int[] arr = new int[5];
        int Number_of_verifications = 0;
        for(int i = 0; i < 5; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
            Number_of_verifications += (arr[i] * arr[i]);
        }
        System.out.println(Number_of_verifications % 10);
    }
}
