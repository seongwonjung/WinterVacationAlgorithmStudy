package woojin.Baekjoon;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;
    
class cal10816 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    
        int N = Integer.parseInt(br.readLine());    // 가진 카드 개수
        int[] arr = new int[20000001]; // -10,000,000 ~ 10,000,000
    
        // 숫자 카드 개수 저장
        String[] cards = br.readLine().split(" ");
        for(int i = 0; i < N; i++) {
            int num = Integer.parseInt(cards[i]);
            arr[num + 10000000]++;
        }
    
        int M = Integer.parseInt(br.readLine());    // 카드 개수 M번 세기
        String[] cards2 = br.readLine().split(" "); // 개수 셀 카드 저장할 배열열
    
        // 숫자 카드 개수 출력
        for (int i = 0; i < M; i++) {
            int x = Integer.parseInt(cards2[i]);
            bw.write(arr[x + 10000000] + " ");
        }
    
        bw.flush(); 
    }
}
