#include <bits/stdc++.h>
using namespace std;

int eval(char elf, char me){
    int me_int;
    int elf_int;
    me_int = int(me) - 87; // rock, paper, scissors --> 1,2,3
    elf_int = int(elf) - 64; // rock, paper, scissors --> 1,2,3

    // remap me_int

    int total = me_int;

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

char decide_me(char elf, char result){
    int elf_int;
    elf_int = int(elf) - 64; // rock, paper, scissors --> 1,2,3

    char output;
    if (result == 'Y'){ //DRAW
        return char(elf + 23);
    }
    if (result == 'Z'){ //WIN
        elf_int -= 1;
        elf_int = (elf_int+1)%3 + 1;
        return char(elf_int + 87);
    }
    else{ //LOSE
        if (elf_int == 1){
            return char(3+87);
        }
        else{
            return char(elf_int-1 +87);
        }
    }
}

int main(){
    int counter =0;
    int total =0;
    char elf_input;
    char me_result;
    while (counter < 2500){

        cin >> elf_input;
        cin >> me_result;


        cout << decide_me(elf_input, me_result)<<'\n';
        total += eval(elf_input, decide_me(elf_input, me_result));

        counter += 1;
    }
    cout << "the new total is: " << total <<'\n';
    return 0;
}

