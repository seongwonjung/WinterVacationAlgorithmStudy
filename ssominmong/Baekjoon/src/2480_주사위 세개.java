import java.io.*;
import java.util.StringTokenizer;

class Three_dice {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());
        int price;

        if(a == b && b == c) price = 10000 + a * 1000;
        else if(a == b) price = 1000 + a * 100;
        else if(a == c) price = 1000 + a * 100;
        else if(b == c) price = 1000 + b * 100;
        else {
            int max = Math.max(a, Math.max(b, c));
            price = max * 100;
        }
        System.out.println(price);
    }
}
