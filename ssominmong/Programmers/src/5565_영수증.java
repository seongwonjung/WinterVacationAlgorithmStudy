import java.util.*;

class Receipt {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int total = sc.nextInt();
        int A =0;
        for(int i = 0; i < 9; i++) {

            A += sc.nextInt();

        }
        System.out.println(total-A);
        sc.close();
    }
}
