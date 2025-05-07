#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel9;
	protected:
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::LinkLabel^ linkLabel9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::LinkLabel^ linkLabel10;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::LinkLabel^ linkLabel7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::LinkLabel^ linkLabel8;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::LinkLabel^ linkLabel5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::LinkLabel^ linkLabel6;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label47;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->linkLabel9 = (gcnew System::Windows::Forms::LinkLabel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->linkLabel10 = (gcnew System::Windows::Forms::LinkLabel());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->linkLabel7 = (gcnew System::Windows::Forms::LinkLabel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->linkLabel8 = (gcnew System::Windows::Forms::LinkLabel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel9->Controls->Add(this->button14);
			this->panel9->Controls->Add(this->button16);
			this->panel9->Controls->Add(this->panel10);
			this->panel9->Controls->Add(this->linkLabel10);
			this->panel9->Controls->Add(this->label37);
			this->panel9->Controls->Add(this->label38);
			this->panel9->Controls->Add(this->label39);
			this->panel9->Controls->Add(this->label5);
			this->panel9->Controls->Add(this->label9);
			this->panel9->Controls->Add(this->label11);
			this->panel9->Location = System::Drawing::Point(92, 453);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(806, 124);
			this->panel9->TabIndex = 38;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Red;
			this->button14->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->button14->Location = System::Drawing::Point(98, 43);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 32);
			this->button14->TabIndex = 27;
			this->button14->TabStop = false;
			this->button14->Text = L"ÍÐÝ";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Red;
			this->button16->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->button16->Location = System::Drawing::Point(98, 86);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 32);
			this->button16->TabIndex = 24;
			this->button16->TabStop = false;
			this->button16->Text = L"ÍÐÝ";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel10->Controls->Add(this->label34);
			this->panel10->Controls->Add(this->label35);
			this->panel10->Controls->Add(this->linkLabel9);
			this->panel10->Controls->Add(this->button6);
			this->panel10->Controls->Add(this->label36);
			this->panel10->Location = System::Drawing::Point(-6, 138);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(727, 161);
			this->panel10->TabIndex = 21;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(616, 97);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(110, 17);
			this->label34->TabIndex = 11;
			this->label34->Text = L"ÅíÌÇÑ - 1000 Ìäíå";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(576, 52);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(153, 17);
			this->label35->TabIndex = 10;
			this->label35->Text = L"ÑÇÊÈ ÔåÑí - 5000 Ìäíå";
			// 
			// linkLabel9
			// 
			this->linkLabel9->AutoSize = true;
			this->linkLabel9->Location = System::Drawing::Point(101, 103);
			this->linkLabel9->Name = L"linkLabel9";
			this->linkLabel9->Size = System::Drawing::Size(0, 17);
			this->linkLabel9->TabIndex = 9;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Red;
			this->button6->Location = System::Drawing::Point(153, 52);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 5;
			this->button6->TabStop = false;
			this->button6->Text = L"ÍÐÝ";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::AntiqueWhite;
			this->label36->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label36->Location = System::Drawing::Point(436, 5);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(290, 24);
			this->label36->TabIndex = 0;
			this->label36->Text = L"ÌÏæá ÇáãÓÇÚÏÇÊ ÇáÏæÑíÉ (ÇáãÇáíÉ)";
			// 
			// linkLabel10
			// 
			this->linkLabel10->AutoSize = true;
			this->linkLabel10->Location = System::Drawing::Point(101, 103);
			this->linkLabel10->Name = L"linkLabel10";
			this->linkLabel10->Size = System::Drawing::Size(0, 17);
			this->linkLabel10->TabIndex = 9;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::AliceBlue;
			this->label37->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label37->Location = System::Drawing::Point(447, 9);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(0, 24);
			this->label37->TabIndex = 3;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(539, 74);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(0, 17);
			this->label38->TabIndex = 17;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(519, 39);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(0, 17);
			this->label39->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label5->Location = System::Drawing::Point(587, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(207, 24);
			this->label5->TabIndex = 8;
			this->label5->Text = L"ÌÏæá ÇáãæÇÓã (ÇáãÇáíÉ)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label9->Location = System::Drawing::Point(623, 92);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(177, 21);
			this->label9->TabIndex = 13;
			this->label9->Text = L"ÚíÏ ÇáÃÖÍì - 500 Ìäíå";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label11->Location = System::Drawing::Point(630, 49);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(160, 21);
			this->label11->TabIndex = 15;
			this->label11->Text = L"ÒßÇÉ ÇáÝØÑ - 200 Ìäíå";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel7->Controls->Add(this->button13);
			this->panel7->Controls->Add(this->button10);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->linkLabel8);
			this->panel7->Controls->Add(this->label31);
			this->panel7->Controls->Add(this->label32);
			this->panel7->Controls->Add(this->label33);
			this->panel7->Controls->Add(this->label15);
			this->panel7->Controls->Add(this->label4);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Location = System::Drawing::Point(92, 586);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(803, 133);
			this->panel7->TabIndex = 39;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Red;
			this->button13->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->button13->Location = System::Drawing::Point(95, 39);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 32);
			this->button13->TabIndex = 26;
			this->button13->TabStop = false;
			this->button13->Text = L"ÍÐÝ";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Red;
			this->button10->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->button10->Location = System::Drawing::Point(95, 84);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 32);
			this->button10->TabIndex = 25;
			this->button10->TabStop = false;
			this->button10->Text = L"ÍÐÝ";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel8->Controls->Add(this->label28);
			this->panel8->Controls->Add(this->label29);
			this->panel8->Controls->Add(this->linkLabel7);
			this->panel8->Controls->Add(this->button5);
			this->panel8->Controls->Add(this->label30);
			this->panel8->Location = System::Drawing::Point(-6, 174);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(727, 125);
			this->panel8->TabIndex = 21;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(616, 97);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(110, 17);
			this->label28->TabIndex = 11;
			this->label28->Text = L"ÅíÌÇÑ - 1000 Ìäíå";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(576, 52);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(153, 17);
			this->label29->TabIndex = 10;
			this->label29->Text = L"ÑÇÊÈ ÔåÑí - 5000 Ìäíå";
			// 
			// linkLabel7
			// 
			this->linkLabel7->AutoSize = true;
			this->linkLabel7->Location = System::Drawing::Point(101, 103);
			this->linkLabel7->Name = L"linkLabel7";
			this->linkLabel7->Size = System::Drawing::Size(0, 17);
			this->linkLabel7->TabIndex = 9;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->Location = System::Drawing::Point(153, 52);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->TabStop = false;
			this->button5->Text = L"ÍÐÝ";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::AntiqueWhite;
			this->label30->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label30->Location = System::Drawing::Point(436, 5);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(290, 24);
			this->label30->TabIndex = 0;
			this->label30->Text = L"ÌÏæá ÇáãÓÇÚÏÇÊ ÇáÏæÑíÉ (ÇáãÇáíÉ)";
			// 
			// linkLabel8
			// 
			this->linkLabel8->AutoSize = true;
			this->linkLabel8->Location = System::Drawing::Point(101, 103);
			this->linkLabel8->Name = L"linkLabel8";
			this->linkLabel8->Size = System::Drawing::Size(0, 17);
			this->linkLabel8->TabIndex = 9;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::AliceBlue;
			this->label31->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label31->Location = System::Drawing::Point(447, 9);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(0, 24);
			this->label31->TabIndex = 3;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(539, 74);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(0, 17);
			this->label32->TabIndex = 17;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(519, 39);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(0, 17);
			this->label33->TabIndex = 18;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label15->Location = System::Drawing::Point(590, 90);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(202, 21);
			this->label15->TabIndex = 19;
			this->label15->Text = L"ÈØÇäíÉ ÇáÔÊÇÁ - ÈØÇäíÉ ÕæÝ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label4->Location = System::Drawing::Point(584, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(207, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"ÌÏæá ÇáãæÇÓã (ÇáÚíäíÉ)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label8->Location = System::Drawing::Point(590, 45);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(196, 21);
			this->label8->TabIndex = 12;
			this->label8->Text = L"ÔäØÉ ÑãÖÇä - ÊãæÑ¡ ÚÕíÑ";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel5->Controls->Add(this->button9);
			this->panel5->Controls->Add(this->button17);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->linkLabel6);
			this->panel5->Controls->Add(this->label25);
			this->panel5->Controls->Add(this->label26);
			this->panel5->Controls->Add(this->label27);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Location = System::Drawing::Point(92, 330);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(803, 108);
			this->panel5->TabIndex = 37;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Red;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->button9->Location = System::Drawing::Point(95, 70);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 32);
			this->button9->TabIndex = 26;
			this->button9->TabStop = false;
			this->button9->Text = L"ÍÐÝ";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Red;
			this->button17->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->button17->Location = System::Drawing::Point(95, 32);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 32);
			this->button17->TabIndex = 25;
			this->button17->TabStop = false;
			this->button17->Text = L"ÍÐÝ";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel6->Controls->Add(this->label22);
			this->panel6->Controls->Add(this->label23);
			this->panel6->Controls->Add(this->linkLabel5);
			this->panel6->Controls->Add(this->button4);
			this->panel6->Controls->Add(this->label24);
			this->panel6->Location = System::Drawing::Point(-6, 138);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(727, 161);
			this->panel6->TabIndex = 21;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(616, 97);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(110, 17);
			this->label22->TabIndex = 11;
			this->label22->Text = L"ÅíÌÇÑ - 1000 Ìäíå";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(576, 52);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(153, 17);
			this->label23->TabIndex = 10;
			this->label23->Text = L"ÑÇÊÈ ÔåÑí - 5000 Ìäíå";
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->Location = System::Drawing::Point(101, 103);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(0, 17);
			this->linkLabel5->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(153, 52);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->TabStop = false;
			this->button4->Text = L"ÍÐÝ";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::AntiqueWhite;
			this->label24->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label24->Location = System::Drawing::Point(436, 5);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(290, 24);
			this->label24->TabIndex = 0;
			this->label24->Text = L"ÌÏæá ÇáãÓÇÚÏÇÊ ÇáÏæÑíÉ (ÇáãÇáíÉ)";
			// 
			// linkLabel6
			// 
			this->linkLabel6->AutoSize = true;
			this->linkLabel6->Location = System::Drawing::Point(101, 103);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(0, 17);
			this->linkLabel6->TabIndex = 9;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::AliceBlue;
			this->label25->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label25->Location = System::Drawing::Point(447, 9);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 24);
			this->label25->TabIndex = 3;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(539, 74);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 17);
			this->label26->TabIndex = 17;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(519, 39);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 17);
			this->label27->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label2->Location = System::Drawing::Point(575, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(218, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ÌÏæá ÇáãÓÇÚÏÇÊ ÇáÎÇÕÉ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label12->Location = System::Drawing::Point(591, 74);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(205, 21);
			this->label12->TabIndex = 16;
			this->label12->Text = L"ÚãáíÉ ÌÑÇÍíÉ - 10000 Ìäíå";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label10->Location = System::Drawing::Point(600, 43);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(189, 21);
			this->label10->TabIndex = 14;
			this->label10->Text = L"ÊÌåíÒ ÚÑæÓ - 8000 Ìäíå";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Controls->Add(this->button18);
			this->panel3->Controls->Add(this->button19);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->linkLabel4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Location = System::Drawing::Point(92, 187);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(800, 124);
			this->panel3->TabIndex = 36;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Red;
			this->button18->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->button18->Location = System::Drawing::Point(92, 82);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 32);
			this->button18->TabIndex = 26;
			this->button18->TabStop = false;
			this->button18->Text = L"ÍÐÝ";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Red;
			this->button19->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->button19->Location = System::Drawing::Point(92, 39);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 32);
			this->button19->TabIndex = 27;
			this->button19->TabStop = false;
			this->button19->Text = L"ÍÐÝ";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->linkLabel3);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->label21);
			this->panel4->Location = System::Drawing::Point(-6, 138);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(727, 161);
			this->panel4->TabIndex = 21;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(616, 97);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(110, 17);
			this->label19->TabIndex = 11;
			this->label19->Text = L"ÅíÌÇÑ - 1000 Ìäíå";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(576, 52);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(153, 17);
			this->label20->TabIndex = 10;
			this->label20->Text = L"ÑÇÊÈ ÔåÑí - 5000 Ìäíå";
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Location = System::Drawing::Point(101, 103);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(0, 17);
			this->linkLabel3->TabIndex = 9;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(153, 52);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->TabStop = false;
			this->button3->Text = L"ÍÐÝ";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::AntiqueWhite;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label21->Location = System::Drawing::Point(436, 5);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(290, 24);
			this->label21->TabIndex = 0;
			this->label21->Text = L"ÌÏæá ÇáãÓÇÚÏÇÊ ÇáÏæÑíÉ (ÇáãÇáíÉ)";
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Location = System::Drawing::Point(101, 103);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(0, 17);
			this->linkLabel4->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label3->Location = System::Drawing::Point(500, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(290, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"ÌÏæá ÇáãÓÇÚÏÇÊ ÇáÏæÑíÉ (ÇáÚíäíÉ)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label13->Location = System::Drawing::Point(563, 82);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(223, 21);
			this->label13->TabIndex = 17;
			this->label13->Text = L"ãáÇÈÓ ÔÊæíÉ - ÈØÇäíÉ¡ ãÚØÝ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label14->Location = System::Drawing::Point(538, 50);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(252, 21);
			this->label14->TabIndex = 18;
			this->label14->Text = L"ÔäØÉ ãæÇÏ ÛÐÇÆíÉ - ÃÑÒ¡ ÒíÊ¡ ÓßÑ";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(89, 53);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(800, 121);
			this->panel1->TabIndex = 35;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Red;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->button8->Location = System::Drawing::Point(95, 86);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 32);
			this->button8->TabIndex = 23;
			this->button8->TabStop = false;
			this->button8->Text = L"ÍÐÝ";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Red;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->button7->Location = System::Drawing::Point(95, 42);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 32);
			this->button7->TabIndex = 22;
			this->button7->TabStop = false;
			this->button7->Text = L"ÍÐÝ";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->linkLabel2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Location = System::Drawing::Point(153, 138);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(592, 67);
			this->panel2->TabIndex = 21;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(616, 97);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(110, 17);
			this->label16->TabIndex = 11;
			this->label16->Text = L"ÅíÌÇÑ - 1000 Ìäíå";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(576, 52);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(153, 17);
			this->label17->TabIndex = 10;
			this->label17->Text = L"ÑÇÊÈ ÔåÑí - 5000 Ìäíå";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(101, 103);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(0, 17);
			this->linkLabel2->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(153, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->TabStop = false;
			this->button1->Text = L"ÍÐÝ";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::AntiqueWhite;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label18->Location = System::Drawing::Point(436, 5);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(290, 24);
			this->label18->TabIndex = 0;
			this->label18->Text = L"ÌÏæá ÇáãÓÇÚÏÇÊ ÇáÏæÑíÉ (ÇáãÇáíÉ)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label7->Location = System::Drawing::Point(665, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(132, 21);
			this->label7->TabIndex = 11;
			this->label7->Text = L"ÅíÌÇÑ - 1000 Ìäíå";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label6->Location = System::Drawing::Point(612, 53);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(184, 21);
			this->label6->TabIndex = 10;
			this->label6->Text = L"ÑÇÊÈ ÔåÑí - 5000 Ìäíå";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(101, 103);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(0, 17);
			this->linkLabel1->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label1->Location = System::Drawing::Point(503, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(290, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ÌÏæá ÇáãÓÇÚÏÇÊ ÇáÏæÑíÉ (ÇáãÇáíÉ)";
			// 
			// label47
			// 
			this->label47->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(388, 9);
			this->label47->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(176, 39);
			this->label47->TabIndex = 40;
			this->label47->Text = L"ÍÐÝ ãÓÇÚÏÉ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(932, 740);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
