
#include <iostream>
using namespace std;

class Beverage {
public:
	string description = "Unknown Beverage";
	virtual string getDescription() {
		return description;
	}
	virtual double cost() = 0;
};

class CondimentDecorator : public Beverage {
public:
	Beverage* beverage = nullptr;
};

class DarkRoast : public Beverage {
public:
	DarkRoast() {
		description = "Dark Rost Coffee";
	}
	double cost() override {
		return 1.05;
	}
};

class Decaf : public Beverage {
public:
	Decaf() {
		description = "Decaf Coffee";
	}
	double cost() override {
		return 0.99;
	}
};

class Espresso : public Beverage {
public:
	Espresso() {
		description = "Espresso Coffee";
	}
	double cost() override {
		return 1.99;
	}
};

class HouseBlend : public Beverage {
public:
	HouseBlend() {
		description = "HouseBlend Coffee";
	}
	double cost() override {
		return 0.89;
	}
};

class Milk : public CondimentDecorator {
public:
	Milk(Beverage* beverage) {
		this->beverage = beverage;
	}
	string getDescription() override {
		return beverage->getDescription() + ", Milk";
	}
	double cost() override {
		return 0.10 + beverage->cost();
	}
};

class Mocha : public CondimentDecorator {
public:
	Mocha(Beverage* beverage) {
		this->beverage = beverage;
	}
	string getDescription() override {
		return beverage->getDescription() + ", Mocha";
	}
	double cost() override {
		return 0.20 + beverage->cost();
	}
};

class Soy : public CondimentDecorator {
public:
	Soy(Beverage* beverage) {
		this->beverage = beverage;
	}
	string getDescription() override {
		return beverage->getDescription() + ", Soy";
	}
	double cost() override {
		return 0.15 + beverage->cost();
	}
};

class Whip : public CondimentDecorator {
public:
	Whip(Beverage* beverage) {
		this->beverage = beverage;
	}
	string getDescription() override {
		return beverage->getDescription() + ", Whip";
	}
	double cost() override {
		return 0.10 + beverage->cost();
	}
};

int main() {

	Beverage* beverage1 = new Espresso();
	cout << beverage1->getDescription() << " $" << beverage1->cost() << endl;

	Beverage* beverage2 = new DarkRoast();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;

	Beverage* beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	cout << beverage3->getDescription() << " $" << beverage3->cost() << endl;


	return 1;

}