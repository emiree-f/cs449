#pragma once
#include <string>

class Player {
public:
	void decrement_unplayed() { unplayed--; }
	void increment_onboard() { onboard++; }
	void decrement_onboard() { onboard--; }
	int get_unplayed() const { return unplayed; }
	int get_onboard() const { return onboard; }
private:
	int unplayed = 9;
	int onboard = 0;
};