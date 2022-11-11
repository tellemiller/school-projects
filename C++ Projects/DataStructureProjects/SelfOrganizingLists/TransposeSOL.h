//<TransposeSOL.h> - File to transpose SOL list
//<CSIS 215-B01> Telle Miller

#include <iomanip>

#include "SelfOrderedListADT.h"
#include "llist.h"

template <typename E>
class TransposeSOL : public SelfOrderedListADT<E> {
public:

	TransposeSOL() : SelfOrderedListADT<E>() {}    // Constructor
	~TransposeSOL() {}     // Destructor

	bool find(const E& it) override {
		linkedList->moveToStart();
		unsigned int currPos{ 0 };
		bool found{ false };
		for (int i{ 0 }; i < linkedList->length(); i++) {
			compareCount++;
			if (linkedList->getValue() == it) {
				found = true;
				linkedList->incrementFrequency();
				currPos = linkedList->currPos();
				break;
			}
			linkedList->next();
		}
		if (!found) {
			add(it);
			currPos = linkedList->length() - 1;
		}
		reorder(currPos);
		linkedList->moveToStart();
		return found;
	}

	void add(const E& it) override { linkedList->append(it); }

	int getCompares() const override { return compareCount; }

	int size() const override { return linkedList->length(); }

	void printlist() const override {
		unsigned int count{ 0 };
		linkedList->moveToStart();
		for (int i{ 0 }; i < linkedList->length(); i++) {
			if ((i + 1) % 10 == 0) {
				std::cout << '\n';
			}
			std::cout << linkedList->getValue() << '-' << linkedList->getFrequency() << "  ";
			linkedList->next();
		}
		linkedList->moveToStart();
	}

	void printlist(int n) const override {
		linkedList->moveToStart();
		for (int i{ 0 }; i < n; i++) {
			std::cout << linkedList->getValue() << '-' << linkedList->getFrequency() << "  ";
			linkedList->next();
		}
		linkedList->moveToStart();
	}


private:
	LList<E>* linkedList = new LList<E>();
	unsigned int compareCount{ 0 };

	void reorder(unsigned int currPos) {
		E temp;
		unsigned int freqTemp{ 0 };
		linkedList->moveToPos(currPos);
		freqTemp = linkedList->getFrequency();
		temp = linkedList->remove();
		linkedList->moveToPos((currPos == 0 ? currPos : currPos - 1));
		linkedList->insert(temp);
		linkedList->setFrequency(freqTemp);
		linkedList->moveToStart();
	}

};