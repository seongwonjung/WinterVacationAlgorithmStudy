package woojin.Baekjoon;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;

class cal10825 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        Student[] students = new Student[N];

        for(int i=0; i<N; i++){
            String[] input = br.readLine().split(" ");
            String name = input[0];
            int kor = Integer.parseInt(input[1]);
            int eng = Integer.parseInt(input[2]);
            int math = Integer.parseInt(input[3]);
            
            students[i] = new Student(name, kor, eng, math);
        }

        Arrays.sort(students, new Comparator<Student>() {
            @Override
            public int compare(Student a, Student b){
                if(a.kor != b.kor){
                    return b.kor - a.kor;
                }
                if(a.eng != b.eng){
                    return a.eng - b.eng;
                }
                if(a.math != b.math){
                    return b.math - a.math;
                }
                return a.name.compareTo(b.name);
            }
        });
        
        for(Student student : students){
            System.out.println(student.name);
        }
    }   
    
    static class Student {
        String name;
        int kor, eng, math;
        
        public Student(String name, int kor, int eng, int math){
            this.name = name;
            this.kor = kor;
            this.eng = eng;
            this.math = math;
        }
    }
}