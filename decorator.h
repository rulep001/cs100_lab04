#ifndef DECORATOR_H
#define DECORATOR_H

#include <iostream>
#include <cmath>
#include "Base.h"

using namespace std;

class Decorator : public Base {
    protected:
	Base* base;
    public:
	Decorator(Base* b) : base(b) { }
	double evaluate() {
		return base->evaluate();
	}
};

class CeilDecorator : public Decorator {
	CeilDirector(Base *b) : Decorator(b) { };
	double evaluate() {
		return ceil(base->evaluate());
	}
};

class FloorDecorator : public Decorator {
        FloorDirector(Base *b) : Decorator(b) { };
        double evaluate() {
                return floor(base->evaluate());
        }
};

class AbsDecorator : public Decorator {
        AbsDirector(Base *b) : Decorator(b) { };
        double evaluate() {
                return abs(base->evaluate());
        }
};


#endif
