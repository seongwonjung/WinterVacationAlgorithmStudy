package woojin.Programmers;

class Solution {
    public String solution(String video_len, String pos, String op_start, String op_end, String[] commands) {
        int minute = Integer.valueOf(pos.substring(0, 2));
        int second = Integer.valueOf(pos.substring(3, 5));
        int vid_m = Integer.valueOf(video_len.substring(0, 2));
        int vid_s = Integer.valueOf(video_len.substring(3, 5));

        int op_start_m = Integer.valueOf(op_start.substring(0, 2));
        int op_start_s = Integer.valueOf(op_start.substring(3, 5));

        int op_end_m = Integer.valueOf(op_end.substring(0, 2));
        int op_end_s = Integer.valueOf(op_end.substring(3, 5));

        if ((minute > op_start_m || (minute == op_start_m && second >= op_start_s)) &&
            (minute < op_end_m || (minute == op_end_m && second <= op_end_s))) {
            minute = op_end_m;
            second = op_end_s;
        }

        for (int i = 0; i < commands.length; i++) {
            if (commands[i].equals("next")) {
                second += 10;
                if (second >= 60) {
                    minute++;
                    second -= 60;
                }

                if (minute > vid_m || (minute == vid_m && second > vid_s)) {
                    minute = vid_m;
                    second = vid_s;
                }

            } else { // prev
                second -= 10;
                if (second < 0) {
                    minute--;
                    second += 60;
                }

                if (minute < 0) {
                    minute = 0;
                    second = 0;
                }
            }

            if ((minute > op_start_m || (minute == op_start_m && second >= op_start_s)) &&
                (minute < op_end_m || (minute == op_end_m && second <= op_end_s))) {
                minute = op_end_m;
                second = op_end_s;
            }
        }

        return String.format("%02d:%02d", minute, second);
    }
}
