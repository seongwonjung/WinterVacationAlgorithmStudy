package woojin.Baekjoon;

import java.util.Scanner;

class cal1018 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int N= sc.nextInt();
        int M= sc.nextInt();
        sc.nextLine();
        
        String[][] arr = new String[N][M];
        int num = Integer.MAX_VALUE; //최솟값

        // 배열 입력받기
        for (int i = 0; i < N; i++) {
            String line = sc.nextLine();
            for (int j = 0; j < M; j++) {
                arr[i][j] = String.valueOf(line.charAt(j));
            }
        }


        // 체스판 검사
        for(int i=0; i<=N-8; i++){  // 체스판 이동 반복문
            for(int j=0; j<=M-8; j++){
                int cntB=0; // 첫 번째 칸이 B인 경우 바꿔야 하는 횟수 
                int cntW=0; // 첫 번째 칸이 W인 경우 바꿔야 하는 횟수

                for(int k=0; k<8; k++){
                    for(int l=0; l<8; l++){
                        if ((k + l) % 2 == 0) { 
                            // 짝수 행일 때 짝수 칸, 홀수 행일 때 홀수 칸 검사
                            if (!arr[i + k][j + l].equals("B")) cntB++;
                            if (!arr[i + k][j + l].equals("W")) cntW++;
                        } else {
                            if (!arr[i + k][j + l].equals("W")) cntB++;
                            if (!arr[i + k][j + l].equals("B")) cntW++;
                        }
                    }
                }

                int currentMin = (cntB < cntW) ? cntB : cntW;
                if (currentMin < num) {
                    num = currentMin;
                }
            }
        }

        System.out.println(num);
    }
}
