#include<iostream>
using namespace std;

void Display(int num[2][3]);
void Transpose(int num[2][3]);
int main()
{
	int num[2][3];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout << "Input "<<i+1<<" "<<j+1<<" : ";
			cin >> num[i][j];
		}
	}
	Display(num);
	Transpose(num);
}

void Display(int num[2][3]){
	cout << "***************Display Array*****************"<< endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout << num[i][j] << " ";
		}
		cout << endl;
	}
}

void Transpose(int num[2][3]){
	cout << "***************Transpose Matrix*****************"<< endl;
	for(int j=0;j<3;j++){
		for(int i=0;i<2;i++){
			cout << num[i][j] << " ";
		}
		cout << endl;
	}
}