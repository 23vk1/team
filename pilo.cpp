

#include<iostream>
using namespace std;

void reverse_str();			// function to make reverse of string
// void concatenation();		// function to concatenate string
// void palindrome();			// function to find string is palindrome or not
// void copy_str();			// function to copy string
// void str_length();			// function to find length of string
// void char_freq_in_str();	// function to find frequency of character in string
// void vowel_cons();			// function to find number of vowels and consonants in string
// void space_and_digit();		// function to find number of space and numbers in string


int main(){
	int selection;	
	
	repeat:		// declare (repeat:) to use goto function
	cout<<"\n input string";		// take string from user
	
	// """ IMP """" * menu jate banavje topa * """" IMP """"
	
	// first make manu for all function and show it on display so user can selecct which function he/she wants to use(like he/she wants to copy string)
	switch(selection){	
		case 1:reverse_str();
		case 2:concatenation();
		case 3:palindrome();
		case 4:copy_str();
		case 5:str_length();
		case 6:char_freq_in_str();
		case 7:vowel_cons();
		case 8:space_and_digit();
			
	}	
	
	cout<<"\n press 1 to continue";cin>>b;
	if(b==1){
		goto repeat;
	}
	
}

void reverse_str(){			// function to make reverse of string
	
}
void concatenation(){		// function to concatenate string
	
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


