import java.util.*;

class Number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long A = sc.nextLong();
        long B = sc.nextLong();
        long count_integers = B-A-1;

        if(A>B) {
            count_integers = A-B-1;
            System.out.println(count_integers);
            for(long j = 1; j <= count_integers; j++) {
                System.out.print((B+j) + " ");
            }
        }
        else if(A<B) {
            System.out.println(count_integers);
            for(long j = 1; j <= count_integers; j++) {
                System.out.print((A+j) + " ");
            }
        }
        else System.out.println(0);
    }
}
