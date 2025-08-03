#include <iostream>
using namespace std;

int main() {
    int n, temp = 0;

    cout << "Enter number of scores: ";
    cin >> n;

    cout << "******************************\n";

    int player1[n];
    int player2[n];

    cout << "Enter scores for Player 1:\n";
    for (int i = 0; i < n; i++) {
        cin >> player1[i];
        cout << "----------------------------\n";
    }

    cout << "Enter scores for Player 2:\n";
    for (int i = 0; i < n; i++) {
        cin >> player2[i];
        cout << "----------------------------\n";
    }

    // Sort Player 1 scores in descending order
    for (int p = 0; p < n; p++) {
        for (int c = 0; c < n - p - 1; c++) {
            if (player1[c] < player1[c + 1]) {
                temp = player1[c];
                player1[c] = player1[c + 1];
                player1[c + 1] = temp;
                cout << "Swapping score of " << player1[c] << " with " << player1[c + 1] << "\nLevel up!\n";
            }
            cout << "----------------------------\n";
        }
    }

    cout << "Scores of Player 1 (sorted):\n";
    for (int i = 0; i < n; i++) {
        cout << "Score: " << player1[i] << "\n";
    }

    cout << "Level complete! Scores sorted!\n";
    cout << "******************************\n";

    // Sort Player 2 scores in ascending order
    for (int p = 0; p < n; p++) {
        for (int c = 0; c < n - p - 1; c++) {
            if (player2[c] > player2[c + 1]) {
                temp = player2[c];
                player2[c] = player2[c + 1];
                player2[c + 1] = temp;
                cout << "Swapping score of " << player2[c] << " with " << player2[c + 1] << "\nLevel up!\n";
            }
            cout << "----------------------------\n";
        }
    }

    cout << "Scores of Player 2 (sorted):\n";
    for (int i = 0; i < n; i++) {
        cout << "Score: " << player2[i] << "\n";
    }

    cout << "Level complete! Scores sorted!\n";
    cout << "******************************\n";

    // Compare top scores and declare winner
    if (player1[0] > player2[n - 1]) {
        cout << "\n******************************\n";
        cout << "Player 1 is the winner!\n";
        cout << "******************************\n";
    } else if (player2[n - 1] > player1[0]) {
        cout << "\n******************************\n";
        cout << "Player 2 is the winner!\n";
        cout << "******************************\n";
    } else {
        cout << "******************************\n";
        cout << "It's a tie!\n";
        cout << "******************************\n";
    }

    cout << "----------------------------\n";
    cout << "Congratulations!!!!\n";
    cout << "----------------------------\n";

    return 0;
}
