import java.io.*;
import java.util.*;

class Score_calculation2 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        List<problem> problems = new ArrayList<>();

        for(int i = 1; i <= 8; i++) {
            int score = Integer.parseInt(br.readLine());
            problems.add(new problem(score, i));
        }

        problems.sort((a, b) -> a.score - b.score);
        int totalscore = 0;
        List<Integer> selectedProblems = new ArrayList<>();

        for(int i = 3; i < 8; i++) {
            totalscore += problems.get(i).score;
            selectedProblems.add(problems.get(i).index);
        }

        Collections.sort(selectedProblems);

        System.out.println(totalscore);
        for(int idx:selectedProblems) {
            System.out.print(idx + " ");
        }
    }

    static class problem {
        int score;
        int index;

        public problem(int score, int index) {
            this.score = score;
            this.index = index;
        }
    }
}

