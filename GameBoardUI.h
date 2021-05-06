#pragma once
#include "Game.h"

namespace TestGUI {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GameBoardUI
	/// </summary>
	public ref class GameBoardUI : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Label^ turnIndicator;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ nextEventIndicator;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ removedIndicatorBlack;
	private: System::Windows::Forms::Label^ onboardIndicatorBlack;
	private: System::Windows::Forms::Label^ unplayedIndicatorBlack;
	private: System::Windows::Forms::Label^ humanIndicatorBlack;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ humanIndicatorWhite;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ removedIndicatorWhite;

	private: System::Windows::Forms::Label^ unplayedIndicatorWhite;
	private: System::Windows::Forms::Label^ onboardIndicatorWhite;


	public:
		String^ gameMode;
		String^ firstTurn;
		Player^ currentPlayer;
		Game^ currentGame;
		bool turn1st;
		System::Windows::Forms::Button^ moveOrFlyFromLocation;
		GameBoardUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		GameBoardUI(String^gameModeData, String^firstTurnData)
		{
			gameMode = gameModeData;
			firstTurn = firstTurnData;
			InitializeComponent();
			currentGame = gcnew Game();
			currentGame->set_nextEvent("place piece");
			currentGame->set_startingPlayer(firstTurn);
			currentPlayer = currentGame->get_startingPlayer();
			//
			//TODO: Add the constructor code here
			//
		}
		//#pragma endregion
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GameBoardUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ a7;
	private: System::Windows::Forms::Button^ d7;
	private: System::Windows::Forms::Button^ g7;
	private: System::Windows::Forms::Button^ g1;
	private: System::Windows::Forms::Button^ d1;
	private: System::Windows::Forms::Button^ a1;
	private: System::Windows::Forms::Button^ g4;
	private: System::Windows::Forms::Button^ b4;
	private: System::Windows::Forms::Button^ a4;
	private: System::Windows::Forms::Button^ c4;
	private: System::Windows::Forms::Button^ f4;
	private: System::Windows::Forms::Button^ e4;
	private: System::Windows::Forms::Button^ c3;
	private: System::Windows::Forms::Button^ d3;
	private: System::Windows::Forms::Button^ e3;
	private: System::Windows::Forms::Button^ e5;
	private: System::Windows::Forms::Button^ d5;
	private: System::Windows::Forms::Button^ c5;
	private: System::Windows::Forms::Button^ d6;
	private: System::Windows::Forms::Button^ f6;
	private: System::Windows::Forms::Button^ b6;
	private: System::Windows::Forms::Button^ d2;
	private: System::Windows::Forms::Button^ f2;
	private: System::Windows::Forms::Button^ b2;



	private: System::Windows::Forms::Label^ label3;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
#pragma endregion
		void Enable_False();
	private: System::Void play_nextTurn(System::Windows::Forms::Button^ thisButton);
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void a7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void d7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void g7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void b6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void d6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void f6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void c5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void d5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void e5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void a4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void b4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void c4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void e4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void f4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void g4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void c3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void d3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void e3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void b2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void d2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void f2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void a1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void d1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void g1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void GameBoardUI_Load(System::Object^ sender, System::EventArgs^ e) {
	turnIndicator->Text = currentPlayer->get_Name();
	nextEventIndicator->Text = currentGame->get_nextEvent();
}
};
}