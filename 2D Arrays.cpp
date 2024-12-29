#include<iostream>
using namespace std;
int main(){
	const int row=2;
	const int col=2;
	
	int matrix1[row][col];
		int matrix2[row][col];
			int matrix3[row][col];
	for(int i=0; i< row ; i++){
		for(int j=0; j < col; j++){
		cout<<"Enter the value of "<<i+1 << j+1 <<": ";
		cin>> matrix1[ i ] [ j ];
}
}
    for(int i=0; i<row ; i++){
	    for(int j=0; j < col; j++){
		cout<<matrix1[i][j]<<" ";
		
	}
	cout<<endl;
}
for(int i=0; i< row ; i++){
		for(int j=0; j < col; j++){
		cout<<"Enter the value of "<<i+1 << j+1 <<": ";
		cin>> matrix2[ i ] [ j ];
	}
	
}
for(int i=0; i<row; i++){
	for(int j=0 ; j< col ; j++){
		cout<<matrix2[i][j]<<" ";
	}
	cout<<endl;
}

for(int i=0 ; i<row ;i++){
	for(int j=0; j<col; j++){
		matrix3[i][j] = matrix2[i][j] + matrix1[i][j];
	}
}
cout<<"Sum: "<<endl;
for(int i=0; i<row ; i++){
	for(int j=0; j<col; j++){
		cout<<matrix3[i][j]<<" ";
	}
	cout<<endl;
}
}


