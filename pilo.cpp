

#include<iostream>
#include<string>
using namespace std;

// variable declaration
char a[20],b[20],c[40];
int i,j;

// function declaration
void reverse_str();			// function to make reverse of string
void concatenation();		// function to concatenate string
// void palindrome();			// function to find string is palindrome or not
// void copy_str();			// function to copy string
// void str_length();			// function to find length of string
// void char_freq_in_str();	// function to find frequency of character in string
// void vowel_cons();			// function to find number of vowels and consonants in string
// void space_and_digit();		// function to find number of space and numbers in string


int main(){
	int selection,b;	
	
	cout<<"\n Enter string :";
	cin>>a;
	
	repeat:		// declare (repeat:) to use goto function
	
	cout<<"\n 1). reverse \n 2). concatenate \n 3). palindrome \n 4). copy string \n 5). length of string \n 6). frequency of character in string \n 7). number of vowels and consonant \n 8). number of space and digits \n";
	cin>>selection;
	
	 switch(selection){	
	 	case 1:{
	 		reverse_str();
			break;
		 }
	 	case 2:{
	 		concatenation();
			break;
		 }
	 	case 3:{
//	 		palindrome();
			break;
		 }
	 	case 4:{
//	 		copy_str();
			break;
		 }
	 	case 5:{
//	 		str_length();
			break;
		 }
	 	case 6:{
//	 		char_freq_in_str();
			break;
		 }
	 	case 7:{
//	 		vowel_cons();
			break;
		 }
	 	case 8:{
//	 		space_and_digit();
			break;
		 }
		 	
	 }	
	cout<<"\n press 1 to continue";cin>>b;
	if(b==1){
		goto repeat;
	}
	
}

void reverse_str(){			// function to make reverse of string
	int m=0;
	
	for(i=0;a[i]!='\0';i++){
		m++;
	}
	m = m-1;
	for(i=0;i<=a[i]!='\0';i++){
		b[i]=a[m];
		m--;
	}
	cout<<"\n reverse of the string is "<<b;
}
void concatenation(){		// function to concatenate string
	int m=0;
	
	cout<<"\n Enter another string to concatenate :";
	cin>>b;
	
	for(i=0;a[i]!='\0';i++){
		c[i]=a[i];
		m++;
	}
	for(i=0;b[i]!='\0';i++){
		c[m++]=b[i];
	}
	c[m]='\0';
	cout<<"\n concatenate of two string is "<<c;
}
void palindrome(){		// function to find string is palindrome or not

}
void copy_str(){			// function to copy string

}
void str_length(){		// function to find length of string

}
void char_freq_in_str(){	// function to find frequency of character in string

}
void vowel_cons(){		// function to find number of vowels and consonants in string

}
void space_and_digit(){	// function to find number of space and numbers in string

}


