import java.util.*;

class Dormitory_floor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt();
        int B = sc.nextInt();
        int total = R + B;

        for (int W = 3; W <= Math.sqrt(total); W++) {
            if (total % W != 0) continue;

            int L = total / W;


            if ((L - 2) * (W - 2) == B) {
                System.out.println(Math.max(L, W) + " " + Math.min(L, W));
                break;
            }
        }
    }
}
