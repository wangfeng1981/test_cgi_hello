// test_cgi_hello.cpp : 定义控制台应用程序的入口点。
//
 
#include <iostream>
#include <string>

#include "cgi-lib.h"
#include "html-lib.h"

using namespace std;

int main(int argc, char* argv[])
{
	LIST *head = cgi_input_parse();

	cout << "Content-type:text/html\r\n\r\n";
	cout<<"<html>"<<endl ;
	cout<<"<body>"<<endl ;
	cout<<"<p>hello cgi program.</p>"<<endl ;
	if(head == NULL){
		cout<<"<p>null list</p>"<<endl ;
	}
	else {
		if( find_val(head,"x") ){
			printf("x=%s<br>" , find_val(head,"x") ) ;
		}
		if( find_val(head,"y") ){
			printf("y=%s<br>" , find_val(head,"x") ) ;
		}
		if( find_val(head,"z") ){
			printf("z=%s<br>" , find_val(head,"x") ) ;
		}
	}
	

	cout<<"</body>"<<endl ;
	cout<<"</html>"<<endl ;

	

	return 0;
}

