#include <bits/stdc++.h>
using namespace std;

int eval(char elf, char me){
    int me_int;
    int elf_int;
    me_int = int(me) - 87; // rock, paper, scissors --> 1,2,3
    elf_int = int(elf) - 64; // rock, paper, scissors --> 1,2,3

    int total = me_int;
    //remap int
    if (me_int == 1){
        me_int = 3;
    }
    else{
        me_int = me_int -1;
    }

    // WIN
    int condition = elf_int - me_int;
    if (condition == 0){
        total += 6;
    }
    // DRAW
    else if (condition == 1 || condition == -2){
        total += 3;
    }

    //LOSE
    return total;
}


int main(){
    int counter = 0;
    int total =0;
    while (counter < 2500){
        char elf;
        char me;
        cin >> elf;
        cin >> me;
        total += eval(elf, me);
        counter += 1;
    }

    cout << "total is: "<< total;
    return 0;
}
