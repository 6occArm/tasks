void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize;
    
    // Шаг 1: Транспонирование матрицы (отражение по главной диагонали)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    
    // Шаг 2: Отражение каждой строки по горизонтали
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - 1 - j];
            matrix[i][n - 1 - j] = temp;
        }
    }
}
