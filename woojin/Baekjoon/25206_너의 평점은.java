package woojin.Baekjoon;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class bj_25206  {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] str = new String[20];
        Double numXgrade=0.0;  
        double gradeSum = 0.0;

        for(int i=0; i<str.length; i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            String string = st.nextToken();
            double num = Double.parseDouble(st.nextToken());
            String grade = st.nextToken();
            Double score = 0.0;

            if(!grade.equals("P")){
                switch (grade) {
                    case "A+":
                        score=4.5;
                        break;
                    case "A0":
                        score=4.0;
                        break;
                    case "B+":
                        score=3.5;
                        break;
                    case "B0":
                        score=3.0;
                        break;
                    case "C+":
                        score=2.5;
                        break;
                    case "C0":
                        score=2.0;
                        break;
                    case "D+":
                        score=1.5;
                        break;
                    case "D0":
                        score=1.0;
                        break;
                    case "F":
                        score=0.0;
                        break;                                                                                                                                        
                    default:
                        break;
                }

                numXgrade+=(score*num);
                gradeSum+=num;
            }
        }
        System.out.printf("%.6f", numXgrade/gradeSum);
        
    }
}
