void displayResults(int* scores, int numScores, double average) {
    std::cout << "Sorted Scores: ";
    for (int i = 0; i < numScores; i++) {
        std::cout << *(scores + i) << " ";
    }
    std::cout << "\nAverage (excluding lowest score): " << average << std::endl;
}
