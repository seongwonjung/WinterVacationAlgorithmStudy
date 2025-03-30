import java.io.*;

class Hamburger {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int hb1 = Integer.parseInt(br.readLine());
        int hb2 = Integer.parseInt(br.readLine());
        int hb3 = Integer.parseInt(br.readLine());
        int drink1 = Integer.parseInt(br.readLine());
        int drink2 = Integer.parseInt(br.readLine());
        int total_price = Math.min(hb1, (Math.min(hb2, hb3))) + Math.min(drink1, drink2) - 50;

        System.out.println(total_price);
    }
}

