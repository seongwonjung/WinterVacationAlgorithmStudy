package woojin.Programmers;

import java.util.Stack;

class Solution {
    public int[] solution(int[] prices) {
        int n = prices.length;
        int[] answer = new int[n];
        Stack<Integer> stack = new Stack<>();

        for (int i = 0; i < n; i++) {
            // 현재 가격이 이전 가격보다 낮아지는 경우, 스택에서 빼면서 지속 시간 계산
            while (!stack.isEmpty() && prices[stack.peek()] > prices[i]) {
                int idx = stack.pop();
                answer[idx] = i - idx;  // 떨어지기 전까지의 기간 저장
            }
            stack.push(i);
            // i=0, stack 0 
            // i=1, stack 0 1
            // i=2, stack 0 1 2
            // i=3, stack 0 1 pop, answer[2]=1, stack 0 1 3
            // i=4, stack 0 1 3 4
        }

        // 끝까지 남아 있는 인덱스는 끝까지 유지된 것이므로 남은 시간 계산
        while (!stack.isEmpty()) {
            int idx = stack.pop();
            answer[idx] = n - 1 - idx;
        }
        // idx=4 answer[4]=0
        // idx=3 answer[3]=1
        // idx=1 answer[1]=3
        // idx=0 answer[0]=4

        return answer;
    }
}
