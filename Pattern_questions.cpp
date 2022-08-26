# include <bits/stdc++.h>
using namespace std;

/* PATTERN - 1
*****
*****
*****
*****
*****
*/ 
/*
int main(){
	for(int i = 1; i<=5 ; i++){
		for(int j = 1; j<=5; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
	
}
*/


/* PATTERN - 2
*
**
***
****
*****
*/
/*
int main(){
	for(int i =1 ; i<=5; i++ ){
		for(int j = 1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
	
}
*/


/* PATTERN - 3
1
12
123
1234
12345
*/
/*
int main(){
	for(int i =1 ; i<=5; i++ ){
		for(int j = 1; j<=i; j++){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
	
	
}
*/


/* PATTERN - 4
1
22
333
4444
55555
*/
/*
int main(){
	for(int i =1 ; i<=5; i++ ){
		for(int j = 1; j<=i; j++){
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
	
	
}
*/


/* PATTERN - 5
*****
****
***
**
*
*/
/*
int main(){
	for(int i =5 ; i>=1; i-- ){
		for(int j = 1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
	
}
*/


/* PATTERN - 6
12345
1234
123
12
1
*/
/*
int main(){
	for(int i =5 ; i>=1; i-- ){
		for(int j = 1; j<=i; j++){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
	
}
*/

/* PATTERN - 7
    *
   ***
  *****
 *******
*********
*/
/*
int main(){
	int sum = 1;
	for(int i = 1; i<=5; i++){
		for(int j = 4; j>=i; j--){
			cout<<" ";	
		}
		for(int k = 1; k<=sum; k++){
			cout<<"*";
		}
		sum = sum+2;
		cout<<endl;
	}
	return 0;
}
*/


/* PATTERN - 8
*********
 *******
  ***** 
   ***
    *    
*/
/*
int main(){
	int sum = 9;
	for(int i = 1; i<=5; i++){
		for(int j = 0; j<=i; j++){
			cout<<" ";	
		}
		for(int k = 1; k<=sum; k++){
			cout<<"*";
		}
		sum = sum-2;
		cout<<endl;
	}
	return 0;
} 
*/

   
/* PATTERN - 9
    *
   ***
  *****
 *******
*********
*********
 *******
  ***** 
   ***
    * 
*/
/*
int main(){
	int sum1 = 1;
	for(int i = 0; i<5; i++){
		for(int j = 4; j>=i; j--){
			cout<<" ";	
		}
		for(int k = 1; k<=sum1; k++){
			cout<<"*";
		}
		sum1 = sum1+2;
		cout<<endl;
	}
	int sum2 = 9;
	for(int i = 0; i<5; i++){
		for(int j = 0; j<=i; j++){
			cout<<" ";	
		}
		for(int k = 1; k<=sum2; k++){
			cout<<"*";
		}
		sum2 = sum2-2;
		cout<<endl;
	}
	return 0;
}
*/


/* PATTERN - 10
*
**
***
****
*****
****
***
**
*
*/
/*
int main(){
	for(int i =1 ; i<=5; i++ ){
		for(int j = 1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i =4 ; i>=1; i-- ){
		for(int j = 1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
	
}
*/

/* PATTERN - 11
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
/*
int main(){
	for ( int i = 1; i<=5; i++ ){
		for(int j = 1 ; j<=i; j++){
			int ans = i+j;
			if(ans%2==0){
				cout<<"1"<<" ";
			}
			else{
				cout<<"0"<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
*/


/* PATTERN  - 12
1      1
12    21
123  321
12344321
*/
/*
int main(){
	int sum = 6;
	for(int i =1 ; i<=4; i++ ){
		for(int j = 1; j<=i; j++){
			cout<<j;
		}
		for(int k =1 ; k<=sum; k++){
			cout<<" ";
		}
		for(int l = i; l>=1; l--){
			cout<<l;
		}
		
		sum = sum-2;
		cout<<endl;
	}
	return 0;
}
*/


/* PATTERN - 13
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
/*
int main(){
	int sum = 1;
	for(int i =1 ; i<=5; i++ ){
		for(int j = 1; j<=i; j++){
			cout<<sum<<" ";
			sum =sum+1;
		}
		
		cout<<endl;
	}
	return 0;	
}
*/


/* PATTERN - 14
A
AB
ABC
ABCD
ABCDE
*/
/*
int main(){
	
	for(int i =1 ; i<=5; i++ ){
		int asc = 65;
		for(int j = 1; j<=i; j++){
			char alp = (char)asc;
			cout<<alp;
			asc = asc+1;
		}
		cout<<endl;
	}
	return 0;
	
	
}
*/


/* PATTERN - 15
ABCDE
ABCD
ABC
AB
A
*/
/*
int main(){
	
	for(int i =1 ; i<=5; i++ ){
		int asc = 65;
		for(int j = 5; j>=i; j--){
			char alp = (char)asc;
			cout<<alp;
			asc = asc+1;
		}
		cout<<endl;
	}
	return 0;	
}
*/


/* PATTERN - 16
A
BB
CCC
DDDD
EEEEE
*/
/*
int main(){
	int asc = 65;
	for(int i =1 ; i<=5; i++ ){
		
		for(int j = 1; j<=i; j++){
			char alp = (char)asc;
			cout<<alp;
			
		}
		asc = asc+1;
		cout<<endl;
	}
	return 0;	
}
*/


/* PATTERN - 17
   A
  ABA
 ABCBA
ABCDCBA
*/
/*
int main(){
	int sum = 1;
	int dsc;
	for(int i = 4;i>=1;i--){
		int asc= 65;
		
		
		for(int j = 1; j<i; j++ ){
			cout<<" ";
		}
		for( int k = 1; k<=sum; k++){
			cout<<(char)asc;
			asc = asc+1;
		}
		dsc = asc-2;
		for(int m =1; m<sum; m++ ){
			cout<<(char)dsc;
			dsc = dsc-1;
		}
		sum=sum+1;
		cout<<endl;
	}
	
	return 0;
}
*/



/* PATTERN - 18
E 
D E
C D E
B C D E
A B C D E
*/
/*
int main(){
	int asc = 'E';
	for(int i = 1; i<=5; i++){
		int dsc = asc-i+1;
		for(int j =1; j<=i; j++){
			
			cout<<(char)dsc<<" ";
			dsc = dsc+1;
		}
		cout<<endl;	 
	}
	return 0;
}
*/


/* PATTERN - 19
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
/*
int main(){
	for(int i =5; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		for(int m = 5; m>i; m--){
			cout<<"  ";
		}
		for(int k = 1; k<=i; k++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i =1; i<=5; i++){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		for(int m = 5; m>i; m--){
			cout<<"  ";
		}
		for(int k = 1; k<=i; k++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
*/


/* PATTERN - 20
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
/*
int main(){ 
	for(int i =1; i<=5; i++){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		for(int m = 5; m>i; m--){
			cout<<"  ";
		}
		for(int k = 1; k<=i; k++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i =4; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		for(int m = 4; m>=i; m--){
			cout<<"  ";
		}
		for(int k = 1; k<=i; k++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
*/


/* PATTERN - 21
****
*  *
*  *
*  *
****
*/
int main(){
	int n = 5;
	for(int i = 1; i<=n; i++){
		if(i==1 || i ==n){
			cout<<"****";
		}
		else{
			cout<<"*  *";
		}
		cout<<endl;
	}
	return 0;
}

