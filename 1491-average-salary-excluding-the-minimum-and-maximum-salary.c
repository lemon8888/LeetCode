double average(int* salary, int salarySize) {
    int max = salary[0], min = salary[0];
    double sum = 0;
    for(int i = 0; i < salarySize; i++) {
        if(salary[i] < min) {
            min = salary[i];
        }
        if(salary[i] > max) {
            max = salary[i];
        }
        sum += salary[i];
    }
    return (sum - max - min) / (salarySize - 2);
}
