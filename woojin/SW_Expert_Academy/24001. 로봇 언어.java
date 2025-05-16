package woojin.SW_Expert_Academy;

import java.util.Scanner;

class swea24001 {
    public static int func(String c, String str) {
        int pos = 0, max=0;
        str = str.replace("?", c);

        for (int j = 0; j < str.length(); j++) {
            if (str.charAt(j) == 'L') {
                pos--;
                if (Math.abs(pos) > max) {
                    max = Math.abs(pos);
                }
            } else if (str.charAt(j) == 'R') {
                pos++;
                if (Math.abs(pos) > max) {
                    max = Math.abs(pos);
                }
            }
        }
        return max;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < T; i++) {
            String str = new String();
            str = sc.nextLine();
            int L = func("L", str);
            int R = func("R", str);
            
            if(L>R){
                System.out.println(L);
            }
            else{
                System.out.println(R);
            }
        }
        sc.close();
    }
}