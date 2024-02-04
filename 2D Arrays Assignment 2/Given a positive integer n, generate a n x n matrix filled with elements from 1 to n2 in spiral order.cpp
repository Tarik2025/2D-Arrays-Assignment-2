#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows and columns respectively: " << endl;
    cin >> n;

    vector< vector<int> > v (n, vector<int>(n));
    int n1 = v.size();
    int m = v[0].size();
    int mir = 0, mic = 0;
    int mar = n1 - 1, mac = m - 1;
    int count = 0;
    int tn = n1 * m;
    int a = 1;

    while (mir <= mar && mic <= mac) {
        for (int j = mic; j <= mac && count < tn; j++) {
            v[mir][j] = a++;
            count++;
        }
        mir++;
        for (int i = mir; i <= mar && count < tn; i++) {
            v[i][mac] = a++;
            count++;
        }
        mac--;
        for (int j = mac; j >= mic && count < tn; j--) {
            v[mar][j] = a++;
            count++;
        }
        mar--;
        for (int i = mar; i >= mir && count < tn; i--) {
            v[i][mic] = a++;
            count++;
        }
        mic++;
    }

    cout << "The matrix is: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
