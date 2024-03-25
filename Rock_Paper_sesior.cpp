#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int random();
 string input();
 string compChoice();
bool compare( string,  string);

int main() {
     string human, computer;
    int result;
    cout<<" rock Or paper Or scissors"<< endl;
while(human!="exit"){
    computer = compChoice();
    human = input();
    result = compare(computer, human);

    if (result == 1) {
         cout << "You Win!" <<  endl;
         cout << human << " wins over " << computer <<  endl;
    }
    else if (result == 0) {
         cout << "It's a tie!" <<  endl;
    }
    else {
         cout << "Computer Wins!" <<  endl;
         cout << computer << " wins over " << human <<  endl;
    }
}
    return 0;

}

int random() {
    int num = rand() % 3 + 1;
    switch (num) {
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
    }
}

 string input() {
     string inp;
    bool valid = false;
    while (!valid) {
         cout << "Enter your choice: ";
         cin >> inp;
        if (inp == "rock" || inp == "paper" || inp == "scissors") {
            valid = true;
        }else if(inp=="exit")
        {
            exit(0);
        }
        else {
             cout << "Invalid input! Try again." <<  endl;
        }
    }
    return inp;
}

 string compChoice() {
    int num = random();
    switch (num) {
        case 1:
            return "rock";
        case 2:
            return "paper";
        case 3:
            return "scissors";
    }
}

bool compare( string a,  string b) {
    if (a == b) {
        return 0;
    }
    else if (a == "rock" && b == "scissors") {
        return 1;
    }
    else if (a == "scissors" && b == "paper") {
        return 1;
    }
    else if (a == "paper" && b == "rock") {
        return 1;
    }
    else {
        return 2;
    }
}
