double calculateAverage(double* scores, int numScores) 
{
    if (numScores <= 1) return 0;
    double sum = 0;
    for (int i = 1; i < numScores; i++)
    {
        sum += scores[i];
    }
    return sum / (numScores - 1);
}