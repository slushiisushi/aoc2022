#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main(){


    string in;
    int counter =0;
    int highestsmurf=1;
    int highest_total=0;
    int currsmurf=1;
    int curr_total=0;
    int temp;

    while (counter <2254){

        getline(cin, in);


        if (in == ""){
//            cout<<"hit"<<'\n';
//            cout << in<< " :newline"<<'\n';
//            cout<<curr_total<<", "<<highest_total<<'\n';
            if (curr_total > highest_total){
                highest_total = curr_total;
                highestsmurf = currsmurf;
            }
            curr_total =0;
            currsmurf += 1;
        }

        else{
            stringstream ss;
            ss << in;
            ss >> temp;
//            cout << temp<< " :newline"<<'\n';
            curr_total += temp;
        }
        counter = counter +1;
    }

    cout<<"the highest smurf is: "<< highestsmurf<<'\n';
    cout<<"he is carring: "<< highest_total;
    return 0;
}
