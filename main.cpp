#include <iostream>
using namespace std;
void displayResults(double*, int, double);
double calculateAverage(double*, int);
void sortScores(double*, int);
int main()
{
	int NumScores;
	cout << "Please input the Number of Scores that you want: ";
	cin >> NumScores;
	while (NumScores <= 0)
	{
		cout << "Invalid input. Please enter a positive number: ";
		cin >> NumScores;
	}
	double* scores = new double[NumScores];
	for (int counter = 0; counter < NumScores; counter++)
	{
		cout << "Enter score " << counter + 1 << ": ";
		cin >> scores[counter];
		while (scores[counter] < 0)
		{
			cout << "Invalid input. Please enter a non-negative score: ";
			cin >> scores[counter];
		}
	}
	sortScores(scores, NumScores);
	double average = calculateAverage(scores, NumScores);
	displayResults(scores, NumScores, average);
}