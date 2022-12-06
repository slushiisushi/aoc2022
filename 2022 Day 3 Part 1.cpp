#include <bits/stdc++.h>
using namespace std;

int main(){
// angry how to split by strings
    int counter =0;
    int pairs =0;
    while (counter < 1000){
        string str_1;
        string str_2;
        getline(cin, str_1, ',');
        getline(cin, str_2);

        stringstream a(str_1);
        string b,c;
        getline(a, b, '-');
        getline(a, c);

        stringstream d(str_2);
        string e,f;
        getline(d, e, '-');
        getline(d, f);

        int b_int;
        stringstream bbb;
        bbb << b;
        bbb >> b_int;
        int c_int;
        stringstream ccc;
        ccc << c;
        ccc >> c_int;
        int e_int;
        stringstream eee;
        eee << e;
        eee >> e_int;
        int f_int;
        stringstream fff;
        fff << f;
        fff >> f_int;

//        cout << b_int << ' '<< c_int <<' '<< e_int<< ' '<< f_int<<'\n';
        if ((b_int <=e_int) && (c_int >= f_int)){
            pairs += 1;
        }
        else if ((e_int <= b_int) && (f_int >= c_int)){
            pairs += 1;
        }
        counter += 1;
    }

    cout << "pairs: " << pairs;
    return 0;
}
