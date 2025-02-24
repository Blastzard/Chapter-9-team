void sortScores(int* scores, int numScores) {
    for (int i = 0; i < numScores - 1; i++) {
        for (int j = i + 1; j < numScores; j++) {
            if (*(scores + i) > *(scores + j)) {
                // Swap values
                int temp = *(scores + i);
                *(scores + i) = *(scores + j);
                *(scores + j) = temp;
            }
        }
    }
}
