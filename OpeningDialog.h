#pragma once
#include "GameBoardUI.h"

namespace TestGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OpeningDialog
	/// </summary>
	public ref class OpeningDialog : public System::Windows::Forms::Form
	{
	public:
		OpeningDialog(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OpeningDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Begin;
	private: System::Windows::Forms::Button^ Exit;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ HumanvComputer;

	private: System::Windows::Forms::RadioButton^ HumanvHuman;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ White;

	private: System::Windows::Forms::RadioButton^ Black;

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
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Begin = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->HumanvComputer = (gcnew System::Windows::Forms::RadioButton());
			this->HumanvHuman = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->White = (gcnew System::Windows::Forms::RadioButton());
			this->Black = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Nine Men\'s Morris!";
			// 
			// Begin
			// 
			this->Begin->Location = System::Drawing::Point(32, 202);
			this->Begin->Name = L"Begin";
			this->Begin->Size = System::Drawing::Size(75, 23);
			this->Begin->TabIndex = 5;
			this->Begin->Text = L"Begin";
			this->Begin->UseVisualStyleBackColor = true;
			this->Begin->Click += gcnew System::EventHandler(this, &OpeningDialog::Begin_Click);
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(167, 202);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(75, 23);
			this->Exit->TabIndex = 6;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &OpeningDialog::Exit_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->HumanvComputer);
			this->groupBox1->Controls->Add(this->HumanvHuman);
			this->groupBox1->Location = System::Drawing::Point(16, 38);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(226, 69);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Please Select Game Mode:";
			// 
			// HumanvComputer
			// 
			this->HumanvComputer->AutoSize = true;
			this->HumanvComputer->Location = System::Drawing::Point(16, 42);
			this->HumanvComputer->Name = L"HumanvComputer";
			this->HumanvComputer->Size = System::Drawing::Size(119, 17);
			this->HumanvComputer->TabIndex = 1;
			this->HumanvComputer->TabStop = true;
			this->HumanvComputer->Text = L"Human v. Computer";
			this->HumanvComputer->UseVisualStyleBackColor = true;
			// 
			// HumanvHuman
			// 
			this->HumanvHuman->AutoSize = true;
			this->HumanvHuman->Location = System::Drawing::Point(16, 19);
			this->HumanvHuman->Name = L"HumanvHuman";
			this->HumanvHuman->Size = System::Drawing::Size(108, 17);
			this->HumanvHuman->TabIndex = 0;
			this->HumanvHuman->TabStop = true;
			this->HumanvHuman->Text = L"Human v. Human";
			this->HumanvHuman->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->White);
			this->groupBox2->Controls->Add(this->Black);
			this->groupBox2->Location = System::Drawing::Point(16, 113);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(226, 69);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Please Select Human/First Player Color:";
			// 
			// White
			// 
			this->White->AutoSize = true;
			this->White->Location = System::Drawing::Point(16, 42);
			this->White->Name = L"White";
			this->White->Size = System::Drawing::Size(53, 17);
			this->White->TabIndex = 1;
			this->White->TabStop = true;
			this->White->Text = L"White";
			this->White->UseVisualStyleBackColor = true;
			// 
			// Black
			// 
			this->Black->AutoSize = true;
			this->Black->Location = System::Drawing::Point(16, 19);
			this->Black->Name = L"Black";
			this->Black->Size = System::Drawing::Size(52, 17);
			this->Black->TabIndex = 0;
			this->Black->TabStop = true;
			this->Black->Text = L"Black";
			this->Black->UseVisualStyleBackColor = true;
			// 
			// OpeningDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Begin);
			this->Controls->Add(this->label1);
			this->Name = L"OpeningDialog";
			this->Text = L"OpeningDialog";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Begin_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e);
};
}