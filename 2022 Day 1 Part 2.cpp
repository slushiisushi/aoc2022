#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main(){


    string in;
    int counter =0;
    int highestsmurf=0;
    int highest_total=0;
    int currsmurf=1;
    int curr_total=0;
    int secondhighestsmurf=0;
    int thirdhighestsmurf=0;
    int second_total=0;
    int third_total=0;
    int temp;

    while (counter <2255){

        getline(cin, in);


        if (in == ""){
//            cout<<"hit"<<'\n';
            cout << in<< " :newline"<<'\n';
//            cout<<curr_total<<", "<<highest_total<<'\n';
            if (curr_total > highest_total){
                third_total = second_total;
                second_total = highest_total;
                highest_total = curr_total;
                thirdhighestsmurf = secondhighestsmurf;
                secondhighestsmurf = highestsmurf;
                highestsmurf = currsmurf;
            }
            else if (curr_total > second_total){
                third_total = second_total;
                second_total = curr_total;
                thirdhighestsmurf = secondhighestsmurf;
                secondhighestsmurf = currsmurf;
            }
            else if (curr_total > third_total){
                third_total = curr_total;
                thirdhighestsmurf = currsmurf;
            }
            cout << highestsmurf<<secondhighestsmurf<<thirdhighestsmurf<<'\n';
            curr_total =0;
            currsmurf += 1;
        }

        else{
            stringstream ss;
            ss << in;
            ss >> temp;
            cout << temp<< " :newline"<<'\n';
            curr_total += temp;
        }
        counter = counter +1;
    }

    cout<<"the highest smurf is: "<< highestsmurf<<'\n';
    cout<<"the second smurf is: "<< secondhighestsmurf<< '\n';
    cout << "the third smurf is: " << thirdhighestsmurf<<'\n';
    cout <<"their total is: "<< highest_total+second_total+third_total;
    return 0;
}

