import java.io.*;

class Maximum_value {
    public static void main(String[]args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int location = 0;
        int max = 0;

        for(int i = 1; i <= 9; i++) {
            int n = Integer.parseInt(br.readLine());
            if(n > max) {
                location = i;
                max = n;
            }
        }
        System.out.println(max);
        System.out.println(location);
    }
}
