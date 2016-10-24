#include "Base.h"
#include "container.h"
#include "vectorcontainer.h"
#include "listcontainer.h"
#include "decorator.h"

using namespace std;

int main() {
	Op *op1 = new Op (-5.3 );
	Op *op2 = new Op (2.1);
	Op *op3 = new Op (-4.2);
	Op *op4 = new Op (6.5);
	Mult *A = new Mult ( op1 ,  op4 );
	Add *B = new Add ( op3 ,  A );
	Sub *C = new Sub ( B ,  op2 );
	Sqr *D = new Sqr ( C );
	
	Base* X = (new CeilDecorator(D));
	cout << "test Ceil: \n" << X->evaluate() << endl;
	
	Base* Y = (new FloorDecorator(D));
	cout << "test Floor: \n" << Y->evaluate() << endl;
	
	Base* Z = (new AbsDecorator(A));
	cout << "test Abs: \n" << Z->evaluate() << endl;
};
