#include <iostream>
using namespace std;

int main() {

    int numStates, initialState, acceptingState, currentState;
    string inputString;


    cout << "Enter number of states: ";
    cin >> numStates;

    cout << "Enter initial state: ";
    cin >> initialState;
    currentState = initialState;

    cout << "Enter accepting state: ";
    cin >> acceptingState;


    int transitionTable[numStates + 1][2];


    for (int i = 1; i <= numStates; ++i) {
        cout << "State " << i << " to a: ";
        cin >> transitionTable[i][0];

        cout << "State " << i << " to b: ";
        cin >> transitionTable[i][1];
    }

    cout << "Enter input string: ";
    cin >> inputString;


    for (char symbol : inputString) {
        if (symbol == 'a') currentState = transitionTable[currentState][0];
        else if (symbol == 'b') currentState = transitionTable[currentState][1];
        else {
            cout << "Invalid input symbol encountered. Rejected." << endl;
            return 0;
        }
    }


    if (currentState == acceptingState) {
        cout << "String accepted by the finite automaton." << endl;
    } else {
        cout << "String rejected by the finite automaton." << endl;
    }

    return 0;
}
