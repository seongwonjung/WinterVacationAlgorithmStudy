import java.io.*;

public class SumOfDigit {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(bf.readLine());
        String numbers = bf.readLine();

        int sum = 0;
        for(int i = 0; i < N; i++) {
            sum += numbers.charAt(i)-'0';
        }

        System.out.println(sum);
        bf.close();
    }
}
    