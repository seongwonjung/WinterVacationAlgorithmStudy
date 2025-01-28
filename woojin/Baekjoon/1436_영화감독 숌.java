package woojin.Baekjoon;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class cal1436 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt(); // 1<= N <= 10000
        int num = 666;
        int cnt = 1;
        // 숫자가 작은 순으로 증가한다
        // 666, 1666, 2666, 3666, 4666, 5666, 다음은 6666이 아닌 6660
        // 6661, 6662, 6663, 6665, 6665, 6666, 6667 6668 6669
        // 7666, 8666, 9666, 10666, 11666, 12666, 13666, 14666, 15666,
        // 16660, 16661, 16662, 16663, 16664, 16665, 16666, 16667, 

        // 1. list에 1씩 증가시킨 값을 수들을 다 넣고 666이 포함된 요소들만 뽑아내서 다른 배열에 넣고 N-1번째 인덱스 출력
        //    또는 숫자를 666부터 1씩 증가시켜서 666을 포함할 때마다 cnt 1증가시키고 cnt==N일 때의 숫자 출력


        while(N!=cnt){
            num++;
            
            if(Integer.toString(num).contains("666")){
                cnt++;
            }
        }


        System.out.println(num);
        


        
 

    }
}
