import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


class Star_2 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader (new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        for(int i = 1; i <= N; i++) {
          for(int j = 0; j < N-i; j++) {
              System.out.print(" ");
          }
          for(int star = 0; star < i; star++) {
              System.out.print("*");
          }
            System.out.println();
        }
    }
}
