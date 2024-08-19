#include <iostream>

using namespace std;

int main() {
    double score1;
    double score2;
    double score3;
    double numScores = 3; // Total number of scores to calculate the average
    double avgScore;

    // Ask the user for the values of score1, score2, and score3
    cout << "Please input Score1: ";
    cin >> score1;
    cout << "Please input Score2: ";
    cin >> score2;
    cout << "Please input Score3: ";
    cin >> score3;

    // Calculate the average score
    avgScore = (score1 + score2 + score3) / numScores;

    // Display the average score
    cout << "Average Score: " << avgScore << endl;

    return 0;
}
