#pragma once

namespace TestGUI {
	public ref class Player {
	public:
		void decrement_unplayed() { unplayed--; }
		void increment_onboard() { onboard++; }
		void decrement_onboard() { onboard--; }
		void increment_removed() { removed++; }
		void set_Name(System::String^ setName) { name = setName; }
		int get_unplayed() { return unplayed; }
		int get_onboard() { return onboard; }
		int get_removed() { return removed; }
		System::String^ get_Name() { return name; }
		System::Collections::Generic::List<System::String^> occupied;
	private:
		System::String^ name;
		int unplayed = 9;
		int onboard = 0;
		int removed = 0;
	};
}