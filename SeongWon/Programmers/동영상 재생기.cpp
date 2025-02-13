#include <string>
#include <vector>
#include <iostream>
using namespace std;
int len_m, len_s, pos_m, pos_s, op_start_m, op_start_s, op_end_m, op_end_s;
void time_to_int(string str, int &m, int &s){
    m = stoi(str.substr(0,2));
    s = stoi(str.substr(3,2));
}
void is_op(int &pos_m, int &pos_s){
    if((pos_m > op_start_m || (pos_m == op_start_m && pos_s >= op_start_s))&&(pos_m < op_end_m || (pos_m == op_end_m &&pos_s <= op_end_s))){
        pos_m = op_end_m;
        pos_s = op_end_s;
        cout << "is_op실행됨" << pos_m <<":"<<pos_s << '\n';
    }
}
string to2d(int time){
    if(time < 10){
        return "0" + to_string(time);
    }else{
        return to_string(time);
    }
}
void next(string &pos, int pos_m, int pos_s){
    string m, s;
    if(pos_s + 10 < 60){
        pos_s += 10;
    }else{
        pos_m++;
        pos_s -= 50;
    }
    if(pos_m >= len_m && pos_s >= len_s){
        pos_m = len_m;
        pos_s = len_s;
    }
    is_op(pos_m, pos_s);
    pos = to2d(pos_m) + ":" + to2d(pos_s);
    cout << "next = " << pos << endl;
    return;
}
void prev(string &pos, int pos_m, int pos_s){
    if(pos_s - 10 >= 0){
        pos_s -= 10;
    }else{
        pos_m--;
        pos_s += 50;
    }
    if(pos_m < 0 || pos_s < 0){
        pos_m = 0;
        pos_s = 0;
    }
    is_op(pos_m, pos_s);
    pos = to2d(pos_m) + ":" + to2d(pos_s);
    cout << "prev = " << pos << endl;
    return;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    time_to_int(op_start, op_start_m, op_start_s);
    time_to_int(op_end, op_end_m, op_end_s);
    time_to_int(video_len, len_m, len_s);
    cout << "오프닝 구간" << op_start_m << ":" << op_start_s << " ~ " << op_end_m << ":" << op_end_s << '\n';
    for(int i = 0; i < commands.size(); i++){
        time_to_int(pos, pos_m, pos_s);
        cout << "for문 돌때 시간" << pos_m << ":" << pos_s << '\n';
        is_op(pos_m, pos_s);
        if(commands[i] == "next"){
            cout << "next실행\n";
            next(pos, pos_m, pos_s);
        }else{
            cout << "prev실행\n";
            prev(pos, pos_m, pos_s);
        }
    }
    time_to_int(pos, pos_m, pos_s);
    is_op(pos_m, pos_s);
    return to2d(pos_m)+":"+to2d(pos_s);
}
int main(){
    //"34:33"	"13:00"	"00:55"	"02:55"	["next", "prev"]	"13:00"
    //"10:55"	"00:05"	"00:15"	"06:55"	["prev", "next", "next"]	"06:55"
    //"07:22"	"04:05"	"00:15"	"04:07"	["next"]	"04:17"
    string video_len = "07:22";
    string pos = "04:05";
    string op_start = "00:15";
    string op_end = "04:07";
    vector<string> commands = {"next"};
    cout << solution(video_len,pos,op_start,op_end,commands);
    return 0;
}