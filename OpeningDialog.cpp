#include "OpeningDialog.h"

inline System::Void TestGUI::OpeningDialog::Begin_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ gameMode = "";
	String^ firstTurn = "";
	if (HumanvHuman->Checked) { gameMode = "Human"; }
	else if (HumanvComputer->Checked) { 
		/*gameMode = "Computer"; */ //to be implemented
		MessageBox::Show("Computer Mode Not Enabled, Please Select Human v. Human", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		MessageBox::Show("Please select Game Mode", "Error: No Game Mode Selected",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	if (Black->Checked) { firstTurn = "Black"; }
	else if (White->Checked) { firstTurn = "White"; }
	else {
		MessageBox::Show("Please select Human/First Player Color",
			"Error: No Color Selected",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	if (gameMode != "" && firstTurn != "") {
		this->Hide();
		GameBoardUI^ gbUI = gcnew GameBoardUI(gameMode, firstTurn);
		gbUI->Show();
	}
}

inline System::Void TestGUI::OpeningDialog::Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to exit?", "Exit",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
