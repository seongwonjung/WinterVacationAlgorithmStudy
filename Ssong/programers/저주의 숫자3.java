class Solution {
    public int solution(int n) {
        /*
            1	1	6	8
            2	2	7	10
            3	4	8	11
            4	5	9	14
            5	7	10	16
         */
        int answer = 0;
        int result = 0;
        for(int i = 1; result != n; i++){
            if(i % 3 != 0 && i % 10 != 3 && (i / 10) % 10 != 3){
                answer = i;
                result++;
            }
        }
        return answer;
    }
}
// n = result answer = result