import java.util.*;
import java.io.*;

class Oven_clock {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int A = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        int C = Integer.parseInt(st.nextToken());
        int endHour = A;
        int endMinute = B + C;

        if(endMinute >= 60) {
            endHour = endHour + endMinute / 60;
            endMinute %= 60;
        }
        if(endHour >= 24) {
            endHour -= 24;
        }
        System.out.println(endHour + " " + endMinute);
    }
}
