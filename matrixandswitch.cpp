#include <iostream>
using namespace std;

const int MAX = 10;





void add(int m1[][MAX], int m2[][MAX], int res[][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res[i][j] = m1[i][j] + m2[i][j];
        }
    }
}


void subtract(int m1[][MAX], int m2[][MAX], int res[][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res[i][j] = m1[i][j] - m2[i][j];
        }
    }
}


void multiply(int m1[][MAX], int m2[][MAX], int res[][MAX], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}


void transpose(int m[][MAX], int res[][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res[j][i] = m[i][j];
        }
    }
}
void display(int m[][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    
    int R_1, C_1, R_2, C_2;
    int M1[MAX][MAX], M2[MAX][MAX], Result[MAX][MAX];

    cout << "Enter size of Matrix 1 (R_1 C_1): ";
    cin >> R_1 >> C_1;
    cout << "Enter elements of Matrix 1:\n";
    
    for (int i = 0; i < R_1; i++) {
        for (int j = 0; j < C_1; j++) {
            cin >> M1[i][j];
        }
    }

    cout << "Enter size of Matrix 2 (R_2 C_2): ";
    cin >> R_2 >> C_2;
    cout << "Enter elements of Matrix 2:\n";
    
    for (int i = 0; i < R_2; i++) {
        for (int j = 0; j < C_2; j++) {
            cin >> M2[i][j];
        }
    }
    cout<<"--Display the both Matrix--\n";
    cout<<"Matrix 1:\n";
    display(M1,R_1,C_1);
    cout<<"Matrix 2:\n";
    display(M2,R_2,C_2);

    
    int choice;
    cout << "\nOperations Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Transpose\n";
    cout << "Enter your choice: ";
    cin >> choice;

    
    switch (choice) {
        case 1:
           
            if (R_1 == R_2 && C_1 == C_2) {
                add(M1, M2, Result, R_1, C_1);
                cout << "\nAddition Result:\n";
                display(Result, R_1, C_1);
            } else {
                cout << "\nError: Dimensions must match for addition (R_1 == R_2 and C_1 == C_2).\n";
            }
            break;

        case 2:
            
            if (R_1 == R_2 && C_1 == C_2) {
                subtract(M1, M2, Result, R_1, C_1);
                cout << "\nSubtraction Result:\n";
                display(Result, R_1, C_1);
            } else {
                cout << "\nError: Dimensions must match for subtraction (R_1 == R_2 and C_1 == C_2).\n";
            }
            break;

        case 3:
            
            if (C_1 == R_2) {
                multiply(M1, M2, Result, R_1, C_1, R_2, C_2);
                cout << "\nMultiplication Result:\n";
                display(Result, R_1, C_2);
            } else {
                cout << "\nError: Columns of Matrix 1 must equal Rows of Matrix 2 (C_1 == R_2).\n";
            }
            break;

        case 4:
            // Call Transpose function
            cout << "\nTranspose of Matrix 1:\n";
            transpose(M1, Result, R_1, C_1);
            display(Result, C_1, R_1); // Rows and columns swap when displayed
            
            cout << "\nTranspose of Matrix 2:\n";
            transpose(M2, Result, R_2, C_2);
            display(Result, C_2, R_2);
            break;

        default:
            
            cout << "\nInvalid Choice\n";
            break;
    }

    
    return 0;
}