#ifndef CALCULATOR_H_
#define CALCULATOR_H_

class Calculator {
private:
	int _value;
public:
	Calculator(): _value(0){};
	virtual ~Calculator(){};

	void clear() {
		_value = 0;
	}

	int value() {
		return _value;
	}

	void add(int addend) {
		_value += addend;
	}

	void sub(int subtrahend) {
		_value -= subtrahend;
	}

	void mul(int multiplier) {
		_value *= multiplier;
	}

	void div(int divisor) {
		_value /= divisor;
	}

};

#endif /* CALCULATOR_H_ */
