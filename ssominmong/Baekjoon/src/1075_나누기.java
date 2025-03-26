import java.util.*;

class divide {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int F = sc.nextInt();
        int answer = (N/100)*100;   

        while(true) {
            if(answer%F==0) {
                break;
            }
            answer++;
        }
        System.out.printf("%02d", answer%100);
        sc.close();
    }
}
