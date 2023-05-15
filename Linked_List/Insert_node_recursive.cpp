#include <algorithm>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
void insertNumberAt(int a[], int i) {
	// Write your code here.
	int num = a[i];

	int j = i-1;
	while(j >= 0 && a[j] > num){
		a[j+1] = a[j];
		j--;
	}
	a[j+1] = num;
}

void insertionSort(int a[], int n) {
	// Write your code here.
	for(int i=0;i<n;i++)
		insertNumberAt(a,i);
}
class Runner {
    vector<int> v;

public:
    void takeInput() {
        int n;
        cin >> n;
        v.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
    }

    void execute() {
        int n = (int)v.size();
        int* a = new int[n];
        for (int i = 0; i < n; i++)
            a[i] = v[i];
        insertionSort(a, n);
        free(a);
    }

    void executeAndPrintOutput() {
        int n = (int)v.size();
        int* a = new int[n];
        for (int i = 0; i < n; i++)
            a[i] = v[i];
        insertionSort(a, n);
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << '\n';
        free(a);
    }
};

int main() {
    // freopen("./Testcases/large/in/input.txt", "r", stdin);
    // freopen("./Testcases/large/out/output.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}