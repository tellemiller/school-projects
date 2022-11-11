//<CountSOL.h> - Header file to count SOL
//<CSIS 215-B01> Telle Miller

#include <iomanip>

#include "SelfOrderedListADT.h"
#include "llist.h"

template <typename E>
class CountSOL : public SelfOrderedListADT<E> {
public:

	CountSOL() : SelfOrderedListADT<E>() {}   // Constructor

	~CountSOL() {}	bool find(const E& it) override {  // Destructor
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
		if (!(currPos == 0)) {
			linkedList->moveToPos(currPos);
			while (linkedList->isFreqOutOfOrder()) {
				linkedList->moveToPos(currPos);
				freqTemp = linkedList->getFrequency();
				temp = linkedList->remove();
				currPos--;
				linkedList->moveToPos(currPos);
				linkedList->insert(temp);
				linkedList->setFrequency(freqTemp);
			}
			linkedList->moveToStart();
		}
	}

};