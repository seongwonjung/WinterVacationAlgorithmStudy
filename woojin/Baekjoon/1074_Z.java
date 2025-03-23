package woojin.Baekjoon;

import java.util.Scanner;

class bj_1074 {
    static int cnt = 0; 
    static int r, c; 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        r = sc.nextInt();
        c = sc.nextInt();

        int size = (int)Math.pow(2, N);
        sc.close();

        function(size, 0, 0);

        System.out.println(cnt);
    }

    public static void function(int size, int row, int col){
        if(size==1){
            return;
        }

        //좌상
        if(r < row + size/2 && c < col + size/2){
            function(size/2, row, col);
        }
        //우상
        else if(r < row + size/2 && c >= col + size/2){
            cnt += size*size/4;
            function(size/2, row, col + size/2);
        }
        //좌하
        else if(r >= row + size/2 && c < col + size/2){
            cnt+= (size*size/4)*2;
            function(size/2, row + size/2, col);
        }
        //우하
        else{
            cnt +=3*(size*size/4);
            function(size/2, row + size/2, col + size/2);
        }

    }
}
