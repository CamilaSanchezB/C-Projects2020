#include <iostream>
using namespace std;

int main(){
	
	int A,B,C;
	
	cout<<"";cin>>A>>B>>C;
	
	if (A<B && A<C && B<C){
		cout<<A<<B<<C<<endl;
	}
	if (A<B && A<C && C<B){
		cout<<A<<C<<B<<endl;
	}
	if (B<A && B<C && C<A){
		cout<<B<<C<<A<<endl;
	}
	if (B<A && B<C && A<C){
		cout<<B<<A<<C<<endl;
	}
	if (C<A && C<B && A<B){
		cout<<C<<A<<B;
	}
	if (C<A && C<B && B<A){
		cout<<C<<B<<A;
	}
	
	return 0;
}
