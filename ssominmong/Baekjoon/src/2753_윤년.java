import java.io.*;

class Leap_year {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int year = Integer.parseInt(br.readLine());
        int answer = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 1 : 0;

        System.out.println(answer);
    }
}
