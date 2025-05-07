#pragma once

namespace TodayPageWinForms {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ backButton;
    private: System::Windows::Forms::Label^ titleLabel;
    private: System::Windows::Forms::Label^ seasonsLabel;
    private: System::Windows::Forms::GroupBox^ caseBox1;
    private: System::Windows::Forms::GroupBox^ caseBox2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->backButton = (gcnew System::Windows::Forms::Button());
               this->titleLabel = (gcnew System::Windows::Forms::Label());
               this->seasonsLabel = (gcnew System::Windows::Forms::Label());
               this->caseBox1 = (gcnew System::Windows::Forms::GroupBox());
               this->caseBox2 = (gcnew System::Windows::Forms::GroupBox());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->caseBox1->SuspendLayout();
               this->caseBox2->SuspendLayout();
               this->SuspendLayout();
               // 
               // backButton
               // 
               this->backButton->Location = System::Drawing::Point(188, 52);
               this->backButton->Name = L"backButton";
               this->backButton->Size = System::Drawing::Size(200, 30);
               this->backButton->TabIndex = 0;
               this->backButton->Text = L"الرجوع إلى الصفحة الرئيسية";
               // 
               // titleLabel
               // 
               this->titleLabel->AutoSize = true;
               this->titleLabel->Location = System::Drawing::Point(261, 19);
               this->titleLabel->Name = L"titleLabel";
               this->titleLabel->Size = System::Drawing::Size(59, 16);
               this->titleLabel->TabIndex = 1;
               this->titleLabel->Text = L"صفحة اليوم";
               // 
               // seasonsLabel
               // 
               this->seasonsLabel->AutoSize = true;
               this->seasonsLabel->Location = System::Drawing::Point(435, 115);
               this->seasonsLabel->Name = L"seasonsLabel";
               this->seasonsLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
               this->seasonsLabel->Size = System::Drawing::Size(45, 16);
               this->seasonsLabel->TabIndex = 2;
               this->seasonsLabel->Text = L"المواسم:";
               // 
               // caseBox1
               // 
               this->caseBox1->Controls->Add(this->label2);
               this->caseBox1->Controls->Add(this->label1);
               this->caseBox1->Location = System::Drawing::Point(117, 170);
               this->caseBox1->Name = L"caseBox1";
               this->caseBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
               this->caseBox1->Size = System::Drawing::Size(360, 80);
               this->caseBox1->TabIndex = 3;
               this->caseBox1->TabStop = false;
               this->caseBox1->Text = L"اسم الحالة: ...\nنوع المساعدة: ...\nقيمة المساعدة: ...\nالحالة: جاري التوزيع";
               // 
               // caseBox2
               // 
               this->caseBox2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
               this->caseBox2->Controls->Add(this->label3);
               this->caseBox2->Controls->Add(this->label4);
               this->caseBox2->Location = System::Drawing::Point(120, 273);
               this->caseBox2->Name = L"caseBox2";
               this->caseBox2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
               this->caseBox2->Size = System::Drawing::Size(357, 80);
               this->caseBox2->TabIndex = 4;
               this->caseBox2->TabStop = false;
               this->caseBox2->Text = L"اسم الحالة: ...\nنوع المساعدة: ...\nقيمة المساعدة: ...\nالحالة: جاري التوزيع";
               this->caseBox2->Enter += gcnew System::EventHandler(this, &Form1::caseBox2_Enter);
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(52, 45);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(53, 16);
               this->label1->TabIndex = 5;
               this->label1->Text = L"تم التسليم:";
               this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(52, 18);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(68, 16);
               this->label2->TabIndex = 6;
               this->label2->Text = L"موعد التسليم:";
               this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(49, 18);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(68, 16);
               this->label3->TabIndex = 8;
               this->label3->Text = L"موعد التسليم:";
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Location = System::Drawing::Point(49, 45);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(53, 16);
               this->label4->TabIndex = 7;
               this->label4->Text = L"تم التسليم:";
               // 
               // Form1
               // 
               this->ClientSize = System::Drawing::Size(532, 469);
               this->Controls->Add(this->backButton);
               this->Controls->Add(this->titleLabel);
               this->Controls->Add(this->seasonsLabel);
               this->Controls->Add(this->caseBox1);
               this->Controls->Add(this->caseBox2);
               this->Name = L"Form1";
               this->Text = L"صفحة اليوم";
               this->caseBox1->ResumeLayout(false);
               this->caseBox1->PerformLayout();
               this->caseBox2->ResumeLayout(false);
               this->caseBox2->PerformLayout();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion
    private: System::Void caseBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}