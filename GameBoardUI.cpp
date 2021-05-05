#include "GameBoardUI.h"

/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>

inline void TestGUI::GameBoardUI::InitializeComponent(void)
{
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameBoardUI::typeid));
	this->a7 = (gcnew System::Windows::Forms::Button());
	this->d7 = (gcnew System::Windows::Forms::Button());
	this->g7 = (gcnew System::Windows::Forms::Button());
	this->g1 = (gcnew System::Windows::Forms::Button());
	this->d1 = (gcnew System::Windows::Forms::Button());
	this->a1 = (gcnew System::Windows::Forms::Button());
	this->g4 = (gcnew System::Windows::Forms::Button());
	this->b4 = (gcnew System::Windows::Forms::Button());
	this->a4 = (gcnew System::Windows::Forms::Button());
	this->c4 = (gcnew System::Windows::Forms::Button());
	this->f4 = (gcnew System::Windows::Forms::Button());
	this->e4 = (gcnew System::Windows::Forms::Button());
	this->c3 = (gcnew System::Windows::Forms::Button());
	this->d3 = (gcnew System::Windows::Forms::Button());
	this->e3 = (gcnew System::Windows::Forms::Button());
	this->e5 = (gcnew System::Windows::Forms::Button());
	this->d5 = (gcnew System::Windows::Forms::Button());
	this->c5 = (gcnew System::Windows::Forms::Button());
	this->d6 = (gcnew System::Windows::Forms::Button());
	this->f6 = (gcnew System::Windows::Forms::Button());
	this->b6 = (gcnew System::Windows::Forms::Button());
	this->d2 = (gcnew System::Windows::Forms::Button());
	this->f2 = (gcnew System::Windows::Forms::Button());
	this->b2 = (gcnew System::Windows::Forms::Button());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->Exit = (gcnew System::Windows::Forms::Button());
	this->turnIndicator = (gcnew System::Windows::Forms::Label());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->nextEventIndicator = (gcnew System::Windows::Forms::Label());
	this->panel1 = (gcnew System::Windows::Forms::Panel());
	this->label8 = (gcnew System::Windows::Forms::Label());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->removedIndicatorBlack = (gcnew System::Windows::Forms::Label());
	this->onboardIndicatorBlack = (gcnew System::Windows::Forms::Label());
	this->unplayedIndicatorBlack = (gcnew System::Windows::Forms::Label());
	this->humanIndicatorBlack = (gcnew System::Windows::Forms::Label());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->panel2 = (gcnew System::Windows::Forms::Panel());
	this->label9 = (gcnew System::Windows::Forms::Label());
	this->humanIndicatorWhite = (gcnew System::Windows::Forms::Label());
	this->label10 = (gcnew System::Windows::Forms::Label());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->label11 = (gcnew System::Windows::Forms::Label());
	this->removedIndicatorWhite = (gcnew System::Windows::Forms::Label());
	this->unplayedIndicatorWhite = (gcnew System::Windows::Forms::Label());
	this->onboardIndicatorWhite = (gcnew System::Windows::Forms::Label());
	this->panel1->SuspendLayout();
	this->panel2->SuspendLayout();
	this->SuspendLayout();
	// 
	// a7
	// 
	this->a7->Location = System::Drawing::Point(197, 72);
	this->a7->Name = L"a7";
	this->a7->Size = System::Drawing::Size(57, 55);
	this->a7->TabIndex = 0;
	this->a7->Text = L"a7";
	this->a7->UseVisualStyleBackColor = true;
	this->a7->Click += gcnew System::EventHandler(this, &GameBoardUI::a7_Click);
	// 
	// d7
	// 
	this->d7->Location = System::Drawing::Point(470, 72);
	this->d7->Name = L"d7";
	this->d7->Size = System::Drawing::Size(57, 55);
	this->d7->TabIndex = 1;
	this->d7->Text = L"d7";
	this->d7->UseVisualStyleBackColor = true;
	this->d7->Click += gcnew System::EventHandler(this, &GameBoardUI::d7_Click);
	// 
	// g7
	// 
	this->g7->Location = System::Drawing::Point(755, 72);
	this->g7->Name = L"g7";
	this->g7->Size = System::Drawing::Size(57, 55);
	this->g7->TabIndex = 2;
	this->g7->Text = L"g7";
	this->g7->UseVisualStyleBackColor = true;
	this->g7->Click += gcnew System::EventHandler(this, &GameBoardUI::g7_Click);
	// 
	// g1
	// 
	this->g1->Location = System::Drawing::Point(755, 635);
	this->g1->Name = L"g1";
	this->g1->Size = System::Drawing::Size(57, 55);
	this->g1->TabIndex = 5;
	this->g1->Text = L"g1";
	this->g1->UseVisualStyleBackColor = true;
	this->g1->Click += gcnew System::EventHandler(this, &GameBoardUI::g1_Click);
	// 
	// d1
	// 
	this->d1->Location = System::Drawing::Point(470, 635);
	this->d1->Name = L"d1";
	this->d1->Size = System::Drawing::Size(57, 55);
	this->d1->TabIndex = 4;
	this->d1->Text = L"d1";
	this->d1->UseVisualStyleBackColor = true;
	this->d1->Click += gcnew System::EventHandler(this, &GameBoardUI::d1_Click);
	// 
	// a1
	// 
	this->a1->Location = System::Drawing::Point(197, 635);
	this->a1->Name = L"a1";
	this->a1->Size = System::Drawing::Size(57, 55);
	this->a1->TabIndex = 3;
	this->a1->Text = L"a1";
	this->a1->UseVisualStyleBackColor = true;
	this->a1->Click += gcnew System::EventHandler(this, &GameBoardUI::a1_Click);
	// 
	// g4
	// 
	this->g4->Location = System::Drawing::Point(753, 347);
	this->g4->Name = L"g4";
	this->g4->Size = System::Drawing::Size(57, 55);
	this->g4->TabIndex = 8;
	this->g4->Text = L"g4";
	this->g4->UseVisualStyleBackColor = true;
	this->g4->Click += gcnew System::EventHandler(this, &GameBoardUI::g4_Click);
	// 
	// b4
	// 
	this->b4->Location = System::Drawing::Point(284, 347);
	this->b4->Name = L"b4";
	this->b4->Size = System::Drawing::Size(57, 55);
	this->b4->TabIndex = 7;
	this->b4->Text = L"b4";
	this->b4->UseVisualStyleBackColor = true;
	this->b4->Click += gcnew System::EventHandler(this, &GameBoardUI::b4_Click);
	// 
	// a4
	// 
	this->a4->Location = System::Drawing::Point(195, 347);
	this->a4->Name = L"a4";
	this->a4->Size = System::Drawing::Size(57, 55);
	this->a4->TabIndex = 6;
	this->a4->Text = L"a4";
	this->a4->UseVisualStyleBackColor = true;
	this->a4->Click += gcnew System::EventHandler(this, &GameBoardUI::a4_Click);
	// 
	// c4
	// 
	this->c4->Location = System::Drawing::Point(382, 347);
	this->c4->Name = L"c4";
	this->c4->Size = System::Drawing::Size(57, 55);
	this->c4->TabIndex = 9;
	this->c4->Text = L"c4";
	this->c4->UseVisualStyleBackColor = true;
	this->c4->Click += gcnew System::EventHandler(this, &GameBoardUI::c4_Click);
	// 
	// f4
	// 
	this->f4->Location = System::Drawing::Point(661, 347);
	this->f4->Name = L"f4";
	this->f4->Size = System::Drawing::Size(57, 55);
	this->f4->TabIndex = 10;
	this->f4->Text = L"f4";
	this->f4->UseVisualStyleBackColor = true;
	this->f4->Click += gcnew System::EventHandler(this, &GameBoardUI::f4_Click);
	// 
	// e4
	// 
	this->e4->Location = System::Drawing::Point(569, 347);
	this->e4->Name = L"e4";
	this->e4->Size = System::Drawing::Size(57, 55);
	this->e4->TabIndex = 11;
	this->e4->Text = L"e4";
	this->e4->UseVisualStyleBackColor = true;
	this->e4->Click += gcnew System::EventHandler(this, &GameBoardUI::e4_Click);
	// 
	// c3
	// 
	this->c3->Location = System::Drawing::Point(382, 442);
	this->c3->Name = L"c3";
	this->c3->Size = System::Drawing::Size(57, 55);
	this->c3->TabIndex = 12;
	this->c3->Text = L"c3";
	this->c3->UseVisualStyleBackColor = true;
	this->c3->Click += gcnew System::EventHandler(this, &GameBoardUI::c3_Click);
	// 
	// d3
	// 
	this->d3->Location = System::Drawing::Point(470, 442);
	this->d3->Name = L"d3";
	this->d3->Size = System::Drawing::Size(57, 55);
	this->d3->TabIndex = 13;
	this->d3->Text = L"d3";
	this->d3->UseVisualStyleBackColor = true;
	this->d3->Click += gcnew System::EventHandler(this, &GameBoardUI::d3_Click);
	// 
	// e3
	// 
	this->e3->Location = System::Drawing::Point(569, 442);
	this->e3->Name = L"e3";
	this->e3->Size = System::Drawing::Size(57, 55);
	this->e3->TabIndex = 14;
	this->e3->Text = L"e3";
	this->e3->UseVisualStyleBackColor = true;
	this->e3->Click += gcnew System::EventHandler(this, &GameBoardUI::e3_Click);
	// 
	// e5
	// 
	this->e5->Location = System::Drawing::Point(569, 257);
	this->e5->Name = L"e5";
	this->e5->Size = System::Drawing::Size(57, 55);
	this->e5->TabIndex = 17;
	this->e5->Text = L"e5";
	this->e5->UseVisualStyleBackColor = true;
	this->e5->Click += gcnew System::EventHandler(this, &GameBoardUI::e5_Click);
	// 
	// d5
	// 
	this->d5->Location = System::Drawing::Point(470, 257);
	this->d5->Name = L"d5";
	this->d5->Size = System::Drawing::Size(57, 55);
	this->d5->TabIndex = 16;
	this->d5->Text = L"d5";
	this->d5->UseVisualStyleBackColor = true;
	this->d5->Click += gcnew System::EventHandler(this, &GameBoardUI::d5_Click);
	// 
	// c5
	// 
	this->c5->Location = System::Drawing::Point(382, 257);
	this->c5->Name = L"c5";
	this->c5->Size = System::Drawing::Size(57, 55);
	this->c5->TabIndex = 15;
	this->c5->Text = L"c5";
	this->c5->UseVisualStyleBackColor = true;
	this->c5->Click += gcnew System::EventHandler(this, &GameBoardUI::c5_Click);
	// 
	// d6
	// 
	this->d6->Location = System::Drawing::Point(470, 162);
	this->d6->Name = L"d6";
	this->d6->Size = System::Drawing::Size(57, 55);
	this->d6->TabIndex = 20;
	this->d6->Text = L"d6";
	this->d6->UseVisualStyleBackColor = true;
	this->d6->Click += gcnew System::EventHandler(this, &GameBoardUI::d6_Click);
	// 
	// f6
	// 
	this->f6->Location = System::Drawing::Point(661, 162);
	this->f6->Name = L"f6";
	this->f6->Size = System::Drawing::Size(57, 55);
	this->f6->TabIndex = 19;
	this->f6->Text = L"f6";
	this->f6->UseVisualStyleBackColor = true;
	this->f6->Click += gcnew System::EventHandler(this, &GameBoardUI::f6_Click);
	// 
	// b6
	// 
	this->b6->Location = System::Drawing::Point(294, 162);
	this->b6->Name = L"b6";
	this->b6->Size = System::Drawing::Size(57, 55);
	this->b6->TabIndex = 18;
	this->b6->Text = L"b6";
	this->b6->UseVisualStyleBackColor = true;
	this->b6->Click += gcnew System::EventHandler(this, &GameBoardUI::b6_Click);
	// 
	// d2
	// 
	this->d2->Location = System::Drawing::Point(470, 540);
	this->d2->Name = L"d2";
	this->d2->Size = System::Drawing::Size(57, 55);
	this->d2->TabIndex = 23;
	this->d2->Text = L"d2";
	this->d2->UseVisualStyleBackColor = true;
	this->d2->Click += gcnew System::EventHandler(this, &GameBoardUI::d2_Click);
	// 
	// f2
	// 
	this->f2->Location = System::Drawing::Point(661, 540);
	this->f2->Name = L"f2";
	this->f2->Size = System::Drawing::Size(57, 55);
	this->f2->TabIndex = 22;
	this->f2->Text = L"f2";
	this->f2->UseVisualStyleBackColor = true;
	this->f2->Click += gcnew System::EventHandler(this, &GameBoardUI::f2_Click);
	// 
	// b2
	// 
	this->b2->Location = System::Drawing::Point(294, 540);
	this->b2->Name = L"b2";
	this->b2->Size = System::Drawing::Size(57, 55);
	this->b2->TabIndex = 21;
	this->b2->Text = L"b2";
	this->b2->UseVisualStyleBackColor = true;
	this->b2->Click += gcnew System::EventHandler(this, &GameBoardUI::b2_Click);
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
	this->label3->Location = System::Drawing::Point(80, 19);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(0, 29);
	this->label3->TabIndex = 26;
	// 
	// Exit
	// 
	this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
	this->Exit->Location = System::Drawing::Point(836, 12);
	this->Exit->Name = L"Exit";
	this->Exit->Size = System::Drawing::Size(136, 51);
	this->Exit->TabIndex = 27;
	this->Exit->Text = L"Exit";
	this->Exit->UseVisualStyleBackColor = true;
	this->Exit->Click += gcnew System::EventHandler(this, &GameBoardUI::Exit_Click);
	// 
	// turnIndicator
	// 
	this->turnIndicator->AutoSize = true;
	this->turnIndicator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
	this->turnIndicator->Location = System::Drawing::Point(23, 18);
	this->turnIndicator->Name = L"turnIndicator";
	this->turnIndicator->Size = System::Drawing::Size(101, 39);
	this->turnIndicator->TabIndex = 28;
	this->turnIndicator->Text = L"Black";
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
	this->label1->Location = System::Drawing::Point(115, 18);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(400, 39);
	this->label1->TabIndex = 29;
	this->label1->Text = L"player select a location to";
	// 
	// nextEventIndicator
	// 
	this->nextEventIndicator->AutoSize = true;
	this->nextEventIndicator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
	this->nextEventIndicator->Location = System::Drawing::Point(507, 18);
	this->nextEventIndicator->Name = L"nextEventIndicator";
	this->nextEventIndicator->Size = System::Drawing::Size(190, 39);
	this->nextEventIndicator->TabIndex = 30;
	this->nextEventIndicator->Text = L"place piece";
	// 
	// panel1
	// 
	this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)));
	this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	this->panel1->Controls->Add(this->label8);
	this->panel1->Controls->Add(this->label7);
	this->panel1->Controls->Add(this->label6);
	this->panel1->Controls->Add(this->removedIndicatorBlack);
	this->panel1->Controls->Add(this->onboardIndicatorBlack);
	this->panel1->Controls->Add(this->unplayedIndicatorBlack);
	this->panel1->Controls->Add(this->humanIndicatorBlack);
	this->panel1->Controls->Add(this->label2);
	this->panel1->Location = System::Drawing::Point(12, 92);
	this->panel1->Name = L"panel1";
	this->panel1->Size = System::Drawing::Size(165, 174);
	this->panel1->TabIndex = 31;
	// 
	// label8
	// 
	this->label8->AutoSize = true;
	this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
	this->label8->Location = System::Drawing::Point(40, 129);
	this->label8->Name = L"label8";
	this->label8->Size = System::Drawing::Size(70, 20);
	this->label8->TabIndex = 36;
	this->label8->Text = L"removed";
	// 
	// label7
	// 
	this->label7->AutoSize = true;
	this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
	this->label7->Location = System::Drawing::Point(40, 91);
	this->label7->Name = L"label7";
	this->label7->Size = System::Drawing::Size(72, 20);
	this->label7->TabIndex = 36;
	this->label7->Text = L"on board";
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
	this->label6->Location = System::Drawing::Point(39, 56);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(73, 20);
	this->label6->TabIndex = 35;
	this->label6->Text = L"unplayed";
	// 
	// removedIndicatorBlack
	// 
	this->removedIndicatorBlack->AutoSize = true;
	this->removedIndicatorBlack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
	this->removedIndicatorBlack->Location = System::Drawing::Point(16, 129);
	this->removedIndicatorBlack->Name = L"removedIndicatorBlack";
	this->removedIndicatorBlack->Size = System::Drawing::Size(18, 20);
	this->removedIndicatorBlack->TabIndex = 35;
	this->removedIndicatorBlack->Text = L"0";
	// 
	// onboardIndicatorBlack
	// 
	this->onboardIndicatorBlack->AutoSize = true;
	this->onboardIndicatorBlack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
	this->onboardIndicatorBlack->Location = System::Drawing::Point(16, 91);
	this->onboardIndicatorBlack->Name = L"onboardIndicatorBlack";
	this->onboardIndicatorBlack->Size = System::Drawing::Size(18, 20);
	this->onboardIndicatorBlack->TabIndex = 35;
	this->onboardIndicatorBlack->Text = L"0";
	// 
	// unplayedIndicatorBlack
	// 
	this->unplayedIndicatorBlack->AutoSize = true;
	this->unplayedIndicatorBlack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
	this->unplayedIndicatorBlack->Location = System::Drawing::Point(16, 56);
	this->unplayedIndicatorBlack->Name = L"unplayedIndicatorBlack";
	this->unplayedIndicatorBlack->Size = System::Drawing::Size(18, 20);
	this->unplayedIndicatorBlack->TabIndex = 34;
	this->unplayedIndicatorBlack->Text = L"9";
	// 
	// humanIndicatorBlack
	// 
	this->humanIndicatorBlack->AutoSize = true;
	this->humanIndicatorBlack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
	this->humanIndicatorBlack->Location = System::Drawing::Point(81, 15);
	this->humanIndicatorBlack->Name = L"humanIndicatorBlack";
	this->humanIndicatorBlack->Size = System::Drawing::Size(75, 25);
	this->humanIndicatorBlack->TabIndex = 33;
	this->humanIndicatorBlack->Text = L"Human";
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
	this->label2->Location = System::Drawing::Point(12, 15);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(79, 25);
	this->label2->TabIndex = 0;
	this->label2->Text = L"Black — ";
	// 
	// panel2
	// 
	this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)));
	this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	this->panel2->Controls->Add(this->label9);
	this->panel2->Controls->Add(this->humanIndicatorWhite);
	this->panel2->Controls->Add(this->label10);
	this->panel2->Controls->Add(this->label5);
	this->panel2->Controls->Add(this->label11);
	this->panel2->Controls->Add(this->removedIndicatorWhite);
	this->panel2->Controls->Add(this->unplayedIndicatorWhite);
	this->panel2->Controls->Add(this->onboardIndicatorWhite);
	this->panel2->Location = System::Drawing::Point(12, 272);
	this->panel2->Name = L"panel2";
	this->panel2->Size = System::Drawing::Size(165, 168);
	this->panel2->TabIndex = 32;
	// 
	// label9
	// 
	this->label9->AutoSize = true;
	this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
	this->label9->Location = System::Drawing::Point(41, 130);
	this->label9->Name = L"label9";
	this->label9->Size = System::Drawing::Size(70, 20);
	this->label9->TabIndex = 41;
	this->label9->Text = L"removed";
	// 
	// humanIndicatorWhite
	// 
	this->humanIndicatorWhite->AutoSize = true;
	this->humanIndicatorWhite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
	this->humanIndicatorWhite->Location = System::Drawing::Point(81, 14);
	this->humanIndicatorWhite->Name = L"humanIndicatorWhite";
	this->humanIndicatorWhite->Size = System::Drawing::Size(75, 25);
	this->humanIndicatorWhite->TabIndex = 34;
	this->humanIndicatorWhite->Text = L"Human";
	// 
	// label10
	// 
	this->label10->AutoSize = true;
	this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
	this->label10->Location = System::Drawing::Point(41, 92);
	this->label10->Name = L"label10";
	this->label10->Size = System::Drawing::Size(72, 20);
	this->label10->TabIndex = 42;
	this->label10->Text = L"on board";
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
	this->label5->Location = System::Drawing::Point(13, 14);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(82, 25);
	this->label5->TabIndex = 33;
	this->label5->Text = L"White — ";
	// 
	// label11
	// 
	this->label11->AutoSize = true;
	this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
	this->label11->Location = System::Drawing::Point(40, 57);
	this->label11->Name = L"label11";
	this->label11->Size = System::Drawing::Size(73, 20);
	this->label11->TabIndex = 38;
	this->label11->Text = L"unplayed";
	// 
	// removedIndicatorWhite
	// 
	this->removedIndicatorWhite->AutoSize = true;
	this->removedIndicatorWhite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
	this->removedIndicatorWhite->Location = System::Drawing::Point(17, 130);
	this->removedIndicatorWhite->Name = L"removedIndicatorWhite";
	this->removedIndicatorWhite->Size = System::Drawing::Size(18, 20);
	this->removedIndicatorWhite->TabIndex = 39;
	this->removedIndicatorWhite->Text = L"0";
	// 
	// unplayedIndicatorWhite
	// 
	this->unplayedIndicatorWhite->AutoSize = true;
	this->unplayedIndicatorWhite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
	this->unplayedIndicatorWhite->Location = System::Drawing::Point(17, 57);
	this->unplayedIndicatorWhite->Name = L"unplayedIndicatorWhite";
	this->unplayedIndicatorWhite->Size = System::Drawing::Size(18, 20);
	this->unplayedIndicatorWhite->TabIndex = 37;
	this->unplayedIndicatorWhite->Text = L"9";
	// 
	// onboardIndicatorWhite
	// 
	this->onboardIndicatorWhite->AutoSize = true;
	this->onboardIndicatorWhite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
	this->onboardIndicatorWhite->Location = System::Drawing::Point(17, 92);
	this->onboardIndicatorWhite->Name = L"onboardIndicatorWhite";
	this->onboardIndicatorWhite->Size = System::Drawing::Size(18, 20);
	this->onboardIndicatorWhite->TabIndex = 40;
	this->onboardIndicatorWhite->Text = L"0";
	// 
	// GameBoardUI
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
	this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
	this->ClientSize = System::Drawing::Size(1005, 749);
	this->Controls->Add(this->panel2);
	this->Controls->Add(this->panel1);
	this->Controls->Add(this->nextEventIndicator);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->turnIndicator);
	this->Controls->Add(this->Exit);
	this->Controls->Add(this->label3);
	this->Controls->Add(this->d2);
	this->Controls->Add(this->f2);
	this->Controls->Add(this->b2);
	this->Controls->Add(this->d6);
	this->Controls->Add(this->f6);
	this->Controls->Add(this->b6);
	this->Controls->Add(this->e5);
	this->Controls->Add(this->d5);
	this->Controls->Add(this->c5);
	this->Controls->Add(this->e3);
	this->Controls->Add(this->d3);
	this->Controls->Add(this->c3);
	this->Controls->Add(this->e4);
	this->Controls->Add(this->f4);
	this->Controls->Add(this->c4);
	this->Controls->Add(this->g4);
	this->Controls->Add(this->b4);
	this->Controls->Add(this->a4);
	this->Controls->Add(this->g1);
	this->Controls->Add(this->d1);
	this->Controls->Add(this->a1);
	this->Controls->Add(this->g7);
	this->Controls->Add(this->d7);
	this->Controls->Add(this->a7);
	this->DoubleBuffered = true;
	this->Name = L"GameBoardUI";
	this->Text = L"Nine Men\'s Morris";
	this->Load += gcnew System::EventHandler(this, &GameBoardUI::GameBoardUI_Load);
	this->panel1->ResumeLayout(false);
	this->panel1->PerformLayout();
	this->panel2->ResumeLayout(false);
	this->panel2->PerformLayout();
	this->ResumeLayout(false);
	this->PerformLayout();

}

inline void TestGUI::GameBoardUI::Enable_False() {
	a7->Enabled = false;
	d7->Enabled = false;
	g7->Enabled = false;
	g1->Enabled = false;
	d1->Enabled = false;
	a1->Enabled = false;
	g4->Enabled = false;
	b4->Enabled = false;
	a4->Enabled = false;
	c4->Enabled = false;
	f4->Enabled = false;
	e4->Enabled = false;
	c3->Enabled = false;
	d3->Enabled = false;
	e3->Enabled = false;
	e5->Enabled = false;
	d5->Enabled = false;
	c5->Enabled = false;
	d6->Enabled = false;
	f6->Enabled = false;
	b6->Enabled = false;
	d2->Enabled = false;
	f2->Enabled = false;
	b2->Enabled = false;
}

inline System::Void TestGUI::GameBoardUI::Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to exit?", "Exit",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}

inline System::Void TestGUI::GameBoardUI::a7_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = a7;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::d7_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = d7;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::g7_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = g7;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::b6_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = b6;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::d6_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = d6;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::f6_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = f6;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::c5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = c5;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::d5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = d5;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::e5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = e5;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::a4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = a4;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::b4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = b4;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::c4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = c4;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::e4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = e4;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::f4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = f4;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::g4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = g4;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::c3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = c3;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::d3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = d3;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::e3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = e3;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::b2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = b2;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::d2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = d2;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::f2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = f2;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::a1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = a1;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::d1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = d1;
	play_nextTurn(currentButton);
}
inline System::Void TestGUI::GameBoardUI::g1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ currentButton = g1;
	play_nextTurn(currentButton);
}

System::Void TestGUI::GameBoardUI::play_nextTurn(System::Windows::Forms::Button^ thisButton)
{
	Player^ opposingPlayer = currentGame->get_Opponent(currentPlayer);

	//place piece
	if (currentGame->get_nextEvent() == "place piece") {
		if (currentGame->get_Occupier(thisButton->Text) != nullptr) {
			MessageBox::Show(
				"Location is already occupied. Please select another location to place your piece.",
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return System::Void();
		}
		thisButton->BackColor = 
			(currentPlayer->get_Name() == "Black") ? Color::Black : Color::White;
		currentPlayer->decrement_unplayed();
		if (currentPlayer->get_Name() == "Black") {
			unplayedIndicatorBlack->Text = currentPlayer->get_unplayed().ToString();
		}
		else {
			unplayedIndicatorWhite->Text = currentPlayer->get_unplayed().ToString();
		}
		currentPlayer->increment_onboard();
		if (currentPlayer->get_Name() == "Black") {
			onboardIndicatorBlack->Text = currentPlayer->get_onboard().ToString();
		}
		else {
			onboardIndicatorWhite->Text = currentPlayer->get_onboard().ToString();
		}
		currentGame->set_Occupied(thisButton->Text, currentPlayer);
	}

	//move piece
	else if (currentGame->get_nextEvent() == "move from") {
		if (currentGame->get_Occupier(thisButton->Text) != currentPlayer) {
			MessageBox::Show(
				"You must select a location you occupy to move from.",
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return System::Void();
		}
		if (currentGame->check_AdjacentsAllOccupied(thisButton->Text)) {
			MessageBox::Show(
				"You must select a location with an open adjacent space.",
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return System::Void();
		}
		currentGame->set_nextEvent("move to");
		//player stays the same
		turnIndicator->Text = currentPlayer->get_Name();
		nextEventIndicator->Text = currentGame->get_nextEvent();
		moveOrFlyFromLocation = thisButton->Text;
		return System::Void();
	}
	else if (currentGame->get_nextEvent() == "move to") {
		if (currentGame->get_Occupier(thisButton->Text) != nullptr) {
			MessageBox::Show(
				"Location is already occupied. Please select another location to place your piece.",
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return System::Void();
		}
		if (!currentGame->check_IsAdjacent(moveOrFlyFromLocation, thisButton->Text)) {
			MessageBox::Show(
				"You must move to an adjacent location.", "Error", 
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return System::Void();
		}
		currentGame->set_Unoccupied(moveOrFlyFromLocation);
		currentGame->set_Occupied(thisButton->Text, currentPlayer);
	}

	//fly piece
	else if (currentGame->get_nextEvent() == "fly from") {
	
		currentGame->set_nextEvent("fly to");
		//player stays the same
		turnIndicator->Text = currentPlayer->get_Name();
		nextEventIndicator->Text = currentGame->get_nextEvent();
		return System::Void();
	}
	else if (currentGame->get_nextEvent() == "fly to") {}

	//remove piece
	else if (currentGame->get_nextEvent() == "remove piece") {
		if (currentGame->get_Occupier(thisButton->Text) != opposingPlayer) {
			MessageBox::Show(
				"You must select a location occupied by your opponent.",
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return System::Void();
		}
		if (currentGame->check_IsMill(thisButton->Text)) {
			MessageBox::Show(
				"You must select a location that is not part of a mill.",
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return System::Void();
		}
		opposingPlayer->decrement_onboard();
		if (opposingPlayer->get_Name() == "Black") {
			onboardIndicatorBlack->Text = opposingPlayer->get_onboard().ToString();
		}
		else {
			onboardIndicatorWhite->Text = opposingPlayer->get_onboard().ToString();
		}
		opposingPlayer->increment_removed();
		if (opposingPlayer->get_Name() == "Black") {
			removedIndicatorBlack->Text = opposingPlayer->get_removed().ToString();
		}
		else {
			removedIndicatorWhite->Text = opposingPlayer->get_removed().ToString();
		}
		currentGame->set_Unoccupied(thisButton->Text);
		thisButton->UseVisualStyleBackColor = true;
	}

	//check if game is over
	if (opposingPlayer->get_unplayed() == 0 && opposingPlayer->get_onboard() == 2) {
		String^ winner = currentPlayer->get_Name();
		MessageBox::Show("Game Over, " + winner + " wins!", "Game Over", MessageBoxButtons::OK,
			MessageBoxIcon::Information);
		Application::Exit();
	}

	//check for mill
	if (currentGame->check_IsMill(thisButton->Text)) {
		//player stays the same
		currentGame->set_nextEvent("remove piece");
		turnIndicator->Text = currentPlayer->get_Name();
		nextEventIndicator->Text = currentGame->get_nextEvent();
		return System::Void();
	}

	//find next event
	if (opposingPlayer->get_unplayed() != 0) {
		currentGame->set_nextEvent("place piece");
	}
	else if (opposingPlayer->get_unplayed() == 0 && opposingPlayer->get_onboard() >= 3) {
		currentGame->set_nextEvent("move from");
	}
	else if (opposingPlayer->get_unplayed() == 0 && opposingPlayer->get_onboard() == 3) {
		currentGame->set_nextEvent("fly from");
	}
	//player switches
	currentPlayer = opposingPlayer;

	turnIndicator->Text = currentPlayer->get_Name();
	nextEventIndicator->Text = currentGame->get_nextEvent();
	return System::Void();
}