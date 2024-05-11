#include <iostream>
class Matrix {
 int a[5][5], b[5][5], c[5][5], d[5][5], e[5][5], f[5][5];
 int p, q, i, j, k, n, m;
public:
 void get();
 void add();
 void sub();
 void trans();
 void mul();
};
void Matrix::get() {
 std::cout << "\nEnter Number of Rows & Columns for the first matrix: ";
 std::cin >> n >> m;
 std::cout << "\nEnter the first Matrix:\n";
 for (i = 0; i < n; i++) {
 for (j = 0; j < m; j++) {
 std::cin >> a[i][j];
 }
 }
 std::cout << "\nEnter Number of Rows & Columns for the second matrix: ";
 std::cin >> p >> q;
 std::cout << "\nEnter the second Matrix:\n";
 for (i = 0; i < p; i++) {
 for (j = 0; j < q; j++) {
 std::cin >> b[i][j];
 }
 }
}
void Matrix::add() {
 std::cout << "\nThe addition of two matrices is :\n";
 for (i = 0; i < n; i++) {
 for (j = 0; j < m; j++) {
 c[i][j] = a[i][j] + b[i][j];
 std::cout << c[i][j] << "\t";
 }
 std::cout << std::endl;
 }
}
void Matrix::sub() {
 std::cout << "\nThe subtraction of two matrices is :\n";
 for (i = 0; i < n; i++) {
 for (j = 0; j < m; j++) {
 d[i][j] = a[i][j] - b[i][j];
 std::cout << d[i][j] << "\t";
 }
 std::cout << std::endl;
 }
}
void Matrix::trans() {
 std::cout << "\nThe transpose of the first matrix is :\n";
 for (i = 0; i < n; i++) {
 for (j = 0; j < m; j++) {
 e[i][j] = a[j][i];
 std::cout << e[i][j] << "\t";
 }
 std::cout << std::endl;
 }
}
void Matrix::mul() {
 std::cout << "\nThe multiplication of two matrices is :\n";
 if (m != p) {
 std::cout << "Matrix multiplication is not possible." << std::endl;
 return;
 }
 for (i = 0; i < n; i++) {
 for (j = 0; j < q; j++) {
 c[i][j] = 0;
 for (k = 0; k < p; k++) {
 c[i][j] += a[i][k] * b[k][j];
 }
 std::cout << c[i][j] << "\t";
 }
 std::cout << std::endl;
 }
}
int main() {
 Matrix m;
 m.get();
 m.add();
 m.sub();
 m.trans();
 m.mul();
 return 0;
}

