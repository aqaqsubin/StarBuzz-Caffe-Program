/*
#include <iostream>
using namespace std;

enum beverageSize {
	TALL,
	GRANDE,
	VENTI,
};
class Beverage {
public:
	beverageSize size;
	void displayDescription(){cout << this->getDescription() << " $" << cost() << endl;}
	virtual beverageSize getSize() { return size; }
	string description = "Unknown Beverage";
	virtual string getDescription() {
		return description;
	}
	virtual void setSize(beverageSize size) { this->size = size; }
	virtual double cost() = 0;

};

class CondimentDecorator : public Beverage {
public:
	Beverage* beverage = nullptr;
};

class DarkRoast : public Beverage {
public:
	DarkRoast(beverageSize x) {
		description = "Dark Rost Coffee";
		this-> setSize(x); //size = x;
	}
	virtual double cost() override {
		if (getSize() == TALL)
			return .99;
		else if (getSize() == GRANDE)
			return .99 + .10;
		else if (getSize() == VENTI)
			return .99 + .20;
	}
};

class Decaf : public Beverage {
public:
	Decaf(beverageSize x) {
		description = "Decaf Coffee";
		setSize(x); //size = x;
	}
	double cost() override {
		switch (getSize()) {
		case TALL:
			return 1.05;
		case GRANDE:
			return 1.05 + 0.10;
		case VENTI:
			return 1.05 + 0.20;
		default:
			return 0;
		}
	}
};

class Espresso : public Beverage {
public:
	Espresso(beverageSize x) {
		description = "Espresso Coffee";
		setSize(x); //size = x;
	}
	double cost() override {
		switch (getSize()) {
		case TALL:
			return 1.99;
		case GRANDE:
			return 1.99 + 0.10;
		case VENTI:
			return 1.99 + 0.20;
		default:
			return 0;
		}
	}
};

class HouseBlend : public Beverage {
public:
	HouseBlend(beverageSize x) {
		description = "HouseBlend Coffee";
		setSize(x); //size = x;
	}
	double cost() override {
		switch (getSize()) {
		case TALL:
			return 0.89;
		case GRANDE:
			return 0.89 + 0.10;
		case VENTI:
			return 0.89 + 0.20;
		default:
			return 0;
		}
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
	beverageSize getSize() override {
		return beverage->getSize();
	}
	double cost() override {
		switch (getSize()) {
		case TALL:
			return 0.10 + beverage->cost();
		case GRANDE:
			return 0.20 + beverage->cost();
		case VENTI:
			return 0.30 + beverage->cost();
		default:
			return 0;
		}
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
	beverageSize getSize() override {
		return beverage->getSize();
	}
	double cost() override {
		switch (this->getSize()) {
		case TALL:
			return 0.20 + beverage->cost();
		case GRANDE:
			return 0.40 + beverage->cost();
		case VENTI:
			return 0.60 + beverage->cost();
		default:
			return 0;
		}
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
	beverageSize getSize() override {
		return beverage->getSize();
	}
	double cost() override {
		switch (getSize()) {
		case TALL:
			return 0.15 + beverage->cost();
		case GRANDE:
			return 0.30 + beverage->cost();
		case VENTI:
			return 0.45 + beverage->cost();
		default:
			return 0;
		}
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
	beverageSize getSize() override {
		return beverage->getSize();
	}
	double cost() override {
		switch (getSize()) {
		case TALL:
			return 0.10 + beverage->cost();
		case GRANDE:
			return 0.20 + beverage->cost();
		case VENTI:
			return 0.30 + beverage->cost();
		default:
			return 0;
		}
	}
};

int main() {

	Beverage* beverage1 = new Espresso(TALL);
	beverage1->displayDescription();

	Beverage* beverage2 = new DarkRoast(GRANDE);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	beverage2->displayDescription();

	Beverage* beverage3 = new HouseBlend(VENTI);
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	beverage3->displayDescription();


	return 0;

}*/