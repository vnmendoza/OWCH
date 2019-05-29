#pragma once
#include "pugixml-1.9/src/pugixml.hpp"
#include "pugixml-1.9/src/pugiconfig.hpp"
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <sys/types.h>
#include <dirent.h>
#include <vector>
#include <string>






namespace OUCH {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//
	void parse(std::string);
	typedef std::vector<std::string> stringvec;
	void read_directory(const std::string&, stringvec&);
	std::string convToString(System::String^);
	
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
		String^ address;
		
	private: System::Windows::Forms::Label^ locationLabel;
	private: System::Windows::Forms::MaskedTextBox^ locationTxtbox;

	protected:

	private: System::Windows::Forms::Button^ browseBtn;
		







	private: System::Windows::Forms::Label^ owchLabel;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;


















	private: System::Windows::Forms::GroupBox^ desiredBox;
	private: System::Windows::Forms::GroupBox^ loadBox2;
	private: System::Windows::Forms::RadioButton^ eighteenRadio2;
	private: System::Windows::Forms::RadioButton^ twntyfrRadio2;


	private: System::Windows::Forms::RadioButton^ sixteenRadio2;

	private: System::Windows::Forms::RadioButton^ twelveRadio2;

	private: System::Windows::Forms::RadioButton^ eightRadio2;

	private: System::Windows::Forms::GroupBox^ gradeBox2;
	private: System::Windows::Forms::RadioButton^ bRadio2;

	private: System::Windows::Forms::RadioButton^ aRadio2;

	private: System::Windows::Forms::GroupBox^ typeBox2;
	private: System::Windows::Forms::RadioButton^ replRadio2;
	private: System::Windows::Forms::RadioButton^ instRadio2;
	private: System::Windows::Forms::GroupBox^ windBox2;
	private: System::Windows::Forms::RadioButton^ lightRadio2;
	private: System::Windows::Forms::RadioButton^ heavyRadio2;


	private: System::Windows::Forms::Button^ exportBtn;







	protected:
		//flags for current windload radio buttons
		bool lightRad = false;
		bool heavyRad = false;
		bool instRad = false;
		bool replRad = false;
		bool agradeRad = false;
		bool bgradeRad = false;
		bool eightRad = false;
		bool twelveRad= false;
		bool sixteenRad = false;
		bool eighteenRad = false;
		bool twntyfrRad = false;

		//flags for desired windload radio buttons
		bool lightRad2 = false;
		bool heavyRad2 = false;
		bool instRad2 = false;
		bool replRad2 = false;
		bool agradeRad2 = false;
		bool bgradeRad2 = false;
		bool eightRad2 = false;
		bool twelveRad2 = false;
		bool sixteenRad2 = false;
		bool eighteenRad2 = false;
		bool twntyfrRad2 = false;

protected:




		

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
			this->locationLabel = (gcnew System::Windows::Forms::Label());
			this->locationTxtbox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->browseBtn = (gcnew System::Windows::Forms::Button());
			this->desiredBox = (gcnew System::Windows::Forms::GroupBox());
			this->loadBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->eighteenRadio2 = (gcnew System::Windows::Forms::RadioButton());
			this->twntyfrRadio2 = (gcnew System::Windows::Forms::RadioButton());
			this->sixteenRadio2 = (gcnew System::Windows::Forms::RadioButton());
			this->twelveRadio2 = (gcnew System::Windows::Forms::RadioButton());
			this->eightRadio2 = (gcnew System::Windows::Forms::RadioButton());
			this->gradeBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->bRadio2 = (gcnew System::Windows::Forms::RadioButton());
			this->aRadio2 = (gcnew System::Windows::Forms::RadioButton());
			this->typeBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->replRadio2 = (gcnew System::Windows::Forms::RadioButton());
			this->instRadio2 = (gcnew System::Windows::Forms::RadioButton());
			this->windBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lightRadio2 = (gcnew System::Windows::Forms::RadioButton());
			this->heavyRadio2 = (gcnew System::Windows::Forms::RadioButton());
			this->owchLabel = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->exportBtn = (gcnew System::Windows::Forms::Button());
			this->desiredBox->SuspendLayout();
			this->loadBox2->SuspendLayout();
			this->gradeBox2->SuspendLayout();
			this->typeBox2->SuspendLayout();
			this->windBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// locationLabel
			// 
			this->locationLabel->Location = System::Drawing::Point(11, 46);
			this->locationLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->locationLabel->MinimumSize = System::Drawing::Size(55, 20);
			this->locationLabel->Name = L"locationLabel";
			this->locationLabel->Size = System::Drawing::Size(55, 20);
			this->locationLabel->TabIndex = 0;
			this->locationLabel->Text = L"Location:";
			this->locationLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->locationLabel->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// locationTxtbox
			// 
			this->locationTxtbox->Location = System::Drawing::Point(70, 46);
			this->locationTxtbox->Margin = System::Windows::Forms::Padding(2);
			this->locationTxtbox->MinimumSize = System::Drawing::Size(230, 20);
			this->locationTxtbox->Name = L"locationTxtbox";
			this->locationTxtbox->Size = System::Drawing::Size(264, 20);
			this->locationTxtbox->TabIndex = 1;
			this->locationTxtbox->Text = L"C:\\";
			// 
			// browseBtn
			// 
			this->browseBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->browseBtn->Location = System::Drawing::Point(353, 46);
			this->browseBtn->Margin = System::Windows::Forms::Padding(2);
			this->browseBtn->Name = L"browseBtn";
			this->browseBtn->Size = System::Drawing::Size(55, 20);
			this->browseBtn->TabIndex = 2;
			this->browseBtn->Text = L"Browse";
			this->browseBtn->UseVisualStyleBackColor = true;
			this->browseBtn->Click += gcnew System::EventHandler(this, &MyForm::BrowseBtn_Click);
			// 
			// desiredBox
			// 
			this->desiredBox->Controls->Add(this->loadBox2);
			this->desiredBox->Controls->Add(this->gradeBox2);
			this->desiredBox->Controls->Add(this->typeBox2);
			this->desiredBox->Controls->Add(this->windBox2);
			this->desiredBox->Location = System::Drawing::Point(14, 79);
			this->desiredBox->Margin = System::Windows::Forms::Padding(2);
			this->desiredBox->Name = L"desiredBox";
			this->desiredBox->Padding = System::Windows::Forms::Padding(2);
			this->desiredBox->Size = System::Drawing::Size(394, 232);
			this->desiredBox->TabIndex = 6;
			this->desiredBox->TabStop = false;
			this->desiredBox->Text = L"Desired Windload";
			// 
			// loadBox2
			// 
			this->loadBox2->Controls->Add(this->eighteenRadio2);
			this->loadBox2->Controls->Add(this->twntyfrRadio2);
			this->loadBox2->Controls->Add(this->sixteenRadio2);
			this->loadBox2->Controls->Add(this->twelveRadio2);
			this->loadBox2->Controls->Add(this->eightRadio2);
			this->loadBox2->Location = System::Drawing::Point(30, 26);
			this->loadBox2->Margin = System::Windows::Forms::Padding(2);
			this->loadBox2->MinimumSize = System::Drawing::Size(150, 75);
			this->loadBox2->Name = L"loadBox2";
			this->loadBox2->Padding = System::Windows::Forms::Padding(2);
			this->loadBox2->Size = System::Drawing::Size(150, 75);
			this->loadBox2->TabIndex = 5;
			this->loadBox2->TabStop = false;
			this->loadBox2->Text = L"Load";
			// 
			// eighteenRadio2
			// 
			this->eighteenRadio2->AutoSize = true;
			this->eighteenRadio2->Location = System::Drawing::Point(66, 46);
			this->eighteenRadio2->Margin = System::Windows::Forms::Padding(2);
			this->eighteenRadio2->Name = L"eighteenRadio2";
			this->eighteenRadio2->Size = System::Drawing::Size(37, 17);
			this->eighteenRadio2->TabIndex = 4;
			this->eighteenRadio2->TabStop = true;
			this->eighteenRadio2->Text = L"18";
			this->eighteenRadio2->UseVisualStyleBackColor = true;
			this->eighteenRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EighteenRadio2_CheckedChanged);
			// 
			// twntyfrRadio2
			// 
			this->twntyfrRadio2->AutoSize = true;
			this->twntyfrRadio2->Location = System::Drawing::Point(108, 33);
			this->twntyfrRadio2->Margin = System::Windows::Forms::Padding(2);
			this->twntyfrRadio2->Name = L"twntyfrRadio2";
			this->twntyfrRadio2->Size = System::Drawing::Size(37, 17);
			this->twntyfrRadio2->TabIndex = 3;
			this->twntyfrRadio2->TabStop = true;
			this->twntyfrRadio2->Text = L"24";
			this->twntyfrRadio2->UseVisualStyleBackColor = true;
			this->twntyfrRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TwntyfrRadio2_CheckedChanged);
			// 
			// sixteenRadio2
			// 
			this->sixteenRadio2->AutoSize = true;
			this->sixteenRadio2->Location = System::Drawing::Point(66, 22);
			this->sixteenRadio2->Margin = System::Windows::Forms::Padding(2);
			this->sixteenRadio2->Name = L"sixteenRadio2";
			this->sixteenRadio2->Size = System::Drawing::Size(37, 17);
			this->sixteenRadio2->TabIndex = 2;
			this->sixteenRadio2->TabStop = true;
			this->sixteenRadio2->Text = L"16";
			this->sixteenRadio2->UseVisualStyleBackColor = true;
			this->sixteenRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SixteenRadio2_CheckedChanged);
			// 
			// twelveRadio2
			// 
			this->twelveRadio2->AutoSize = true;
			this->twelveRadio2->Location = System::Drawing::Point(10, 46);
			this->twelveRadio2->Margin = System::Windows::Forms::Padding(2);
			this->twelveRadio2->Name = L"twelveRadio2";
			this->twelveRadio2->Size = System::Drawing::Size(37, 17);
			this->twelveRadio2->TabIndex = 1;
			this->twelveRadio2->TabStop = true;
			this->twelveRadio2->Text = L"12";
			this->twelveRadio2->UseVisualStyleBackColor = true;
			this->twelveRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TwelveRadio2_CheckedChanged);
			// 
			// eightRadio2
			// 
			this->eightRadio2->AutoSize = true;
			this->eightRadio2->Location = System::Drawing::Point(10, 22);
			this->eightRadio2->Margin = System::Windows::Forms::Padding(2);
			this->eightRadio2->Name = L"eightRadio2";
			this->eightRadio2->Size = System::Drawing::Size(31, 17);
			this->eightRadio2->TabIndex = 0;
			this->eightRadio2->TabStop = true;
			this->eightRadio2->Text = L"8";
			this->eightRadio2->UseVisualStyleBackColor = true;
			this->eightRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EightRadio2_CheckedChanged);
			// 
			// gradeBox2
			// 
			this->gradeBox2->Controls->Add(this->bRadio2);
			this->gradeBox2->Controls->Add(this->aRadio2);
			this->gradeBox2->Location = System::Drawing::Point(246, 26);
			this->gradeBox2->Margin = System::Windows::Forms::Padding(2);
			this->gradeBox2->MinimumSize = System::Drawing::Size(110, 75);
			this->gradeBox2->Name = L"gradeBox2";
			this->gradeBox2->Padding = System::Windows::Forms::Padding(2);
			this->gradeBox2->Size = System::Drawing::Size(110, 75);
			this->gradeBox2->TabIndex = 4;
			this->gradeBox2->TabStop = false;
			this->gradeBox2->Text = L"Grade";
			// 
			// bRadio2
			// 
			this->bRadio2->AutoSize = true;
			this->bRadio2->Location = System::Drawing::Point(22, 46);
			this->bRadio2->Margin = System::Windows::Forms::Padding(2);
			this->bRadio2->Name = L"bRadio2";
			this->bRadio2->Padding = System::Windows::Forms::Padding(0, 0, 0, 5);
			this->bRadio2->Size = System::Drawing::Size(32, 22);
			this->bRadio2->TabIndex = 1;
			this->bRadio2->TabStop = true;
			this->bRadio2->Text = L"B";
			this->bRadio2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bRadio2->UseVisualStyleBackColor = true;
			this->bRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BRadio2_CheckedChanged);
			// 
			// aRadio2
			// 
			this->aRadio2->AutoSize = true;
			this->aRadio2->Location = System::Drawing::Point(22, 17);
			this->aRadio2->Margin = System::Windows::Forms::Padding(2);
			this->aRadio2->Name = L"aRadio2";
			this->aRadio2->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->aRadio2->Size = System::Drawing::Size(32, 22);
			this->aRadio2->TabIndex = 0;
			this->aRadio2->TabStop = true;
			this->aRadio2->Text = L"A";
			this->aRadio2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->aRadio2->UseVisualStyleBackColor = true;
			this->aRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ARadio2_CheckedChanged);
			// 
			// typeBox2
			// 
			this->typeBox2->Controls->Add(this->replRadio2);
			this->typeBox2->Controls->Add(this->instRadio2);
			this->typeBox2->Location = System::Drawing::Point(30, 135);
			this->typeBox2->Margin = System::Windows::Forms::Padding(2);
			this->typeBox2->MinimumSize = System::Drawing::Size(150, 75);
			this->typeBox2->Name = L"typeBox2";
			this->typeBox2->Padding = System::Windows::Forms::Padding(2);
			this->typeBox2->Size = System::Drawing::Size(150, 75);
			this->typeBox2->TabIndex = 3;
			this->typeBox2->TabStop = false;
			this->typeBox2->Text = L"Type";
			// 
			// replRadio2
			// 
			this->replRadio2->AutoSize = true;
			this->replRadio2->Location = System::Drawing::Point(14, 46);
			this->replRadio2->Margin = System::Windows::Forms::Padding(2);
			this->replRadio2->Name = L"replRadio2";
			this->replRadio2->Size = System::Drawing::Size(113, 17);
			this->replRadio2->TabIndex = 1;
			this->replRadio2->TabStop = true;
			this->replRadio2->Text = L"Replacement (Old)";
			this->replRadio2->UseVisualStyleBackColor = true;
			this->replRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ReplRadio2_CheckedChanged);
			// 
			// instRadio2
			// 
			this->instRadio2->AutoSize = true;
			this->instRadio2->Location = System::Drawing::Point(14, 22);
			this->instRadio2->Margin = System::Windows::Forms::Padding(2);
			this->instRadio2->Name = L"instRadio2";
			this->instRadio2->Size = System::Drawing::Size(106, 17);
			this->instRadio2->TabIndex = 0;
			this->instRadio2->TabStop = true;
			this->instRadio2->Text = L"Installation (New)";
			this->instRadio2->UseVisualStyleBackColor = true;
			this->instRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::InstRadio2_CheckedChanged);
			// 
			// windBox2
			// 
			this->windBox2->Controls->Add(this->lightRadio2);
			this->windBox2->Controls->Add(this->heavyRadio2);
			this->windBox2->Location = System::Drawing::Point(246, 135);
			this->windBox2->Margin = System::Windows::Forms::Padding(2);
			this->windBox2->MinimumSize = System::Drawing::Size(110, 75);
			this->windBox2->Name = L"windBox2";
			this->windBox2->Padding = System::Windows::Forms::Padding(2);
			this->windBox2->Size = System::Drawing::Size(110, 75);
			this->windBox2->TabIndex = 2;
			this->windBox2->TabStop = false;
			this->windBox2->Text = L"Wind";
			// 
			// lightRadio2
			// 
			this->lightRadio2->AutoSize = true;
			this->lightRadio2->Location = System::Drawing::Point(22, 22);
			this->lightRadio2->Margin = System::Windows::Forms::Padding(2);
			this->lightRadio2->Name = L"lightRadio2";
			this->lightRadio2->Size = System::Drawing::Size(48, 17);
			this->lightRadio2->TabIndex = 0;
			this->lightRadio2->TabStop = true;
			this->lightRadio2->Text = L"Light";
			this->lightRadio2->UseVisualStyleBackColor = true;
			this->lightRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::LightRadio2_CheckedChanged);
			// 
			// heavyRadio2
			// 
			this->heavyRadio2->AutoSize = true;
			this->heavyRadio2->Location = System::Drawing::Point(22, 46);
			this->heavyRadio2->Margin = System::Windows::Forms::Padding(2);
			this->heavyRadio2->Name = L"heavyRadio2";
			this->heavyRadio2->Size = System::Drawing::Size(56, 17);
			this->heavyRadio2->TabIndex = 1;
			this->heavyRadio2->TabStop = true;
			this->heavyRadio2->Text = L"Heavy";
			this->heavyRadio2->UseVisualStyleBackColor = true;
			this->heavyRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::HeavyRadio2_CheckedChanged);
			// 
			// owchLabel
			// 
			this->owchLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->owchLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F));
			this->owchLabel->Location = System::Drawing::Point(0, 0);
			this->owchLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->owchLabel->Name = L"owchLabel";
			this->owchLabel->Padding = System::Windows::Forms::Padding(0, 15, 0, 0);
			this->owchLabel->Size = System::Drawing::Size(419, 33);
			this->owchLabel->TabIndex = 6;
			this->owchLabel->Text = L"OCalc Windload Correction Helper";
			this->owchLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &MyForm::FolderBrowserDialog1_HelpRequest);
			// 
			// exportBtn
			// 
			this->exportBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->exportBtn->Location = System::Drawing::Point(170, 315);
			this->exportBtn->Margin = System::Windows::Forms::Padding(2);
			this->exportBtn->Name = L"exportBtn";
			this->exportBtn->Size = System::Drawing::Size(95, 30);
			this->exportBtn->TabIndex = 8;
			this->exportBtn->Text = L"Export";
			this->exportBtn->UseVisualStyleBackColor = true;
			this->exportBtn->Click += gcnew System::EventHandler(this, &MyForm::ExportBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 361);
			this->Controls->Add(this->desiredBox);
			this->Controls->Add(this->exportBtn);
			this->Controls->Add(this->owchLabel);
			this->Controls->Add(this->browseBtn);
			this->Controls->Add(this->locationTxtbox);
			this->Controls->Add(this->locationLabel);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"OWCH";
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->desiredBox->ResumeLayout(false);
			this->loadBox2->ResumeLayout(false);
			this->loadBox2->PerformLayout();
			this->gradeBox2->ResumeLayout(false);
			this->gradeBox2->PerformLayout();
			this->typeBox2->ResumeLayout(false);
			this->typeBox2->PerformLayout();
			this->windBox2->ResumeLayout(false);
			this->windBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GroupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BrowseBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	folderBrowserDialog1->ShowDialog();
	this->locationTxtbox->Text = folderBrowserDialog1->SelectedPath;
}
private: System::Void FolderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FolderBrowserDialog2_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LoadBox_Enter(System::Object^ sender, System::EventArgs^ e) {
}
// Radio Buttons
	//Current Windloads
private: System::Void LightRadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	lightRad = true;
	heavyRad = false;
}
private: System::Void HeavyRadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	heavyRad = true;
	lightRad = false;
}
private: System::Void InstRadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	instRad = true;
	replRad = false;
}
private: System::Void ReplRadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	instRad = false;
	replRad = true;
}
private: System::Void ARadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	agradeRad = true;
	bgradeRad = false;
}
private: System::Void BRadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	bgradeRad = true;
	agradeRad = false;
}
private: System::Void EightRadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	eightRad = true;
	twelveRad = false;
	sixteenRad = false;
	eighteenRad = false;
	twntyfrRad = false;

}
private: System::Void TwelveRadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	eightRad = false;
	twelveRad = true;
	sixteenRad = false;
	eighteenRad = false;
	twntyfrRad = false;
}
private: System::Void SixteenRadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	eightRad = false;
	twelveRad = false;
	sixteenRad = true;
	eighteenRad = false;
	twntyfrRad = false;
}
private: System::Void TwntyfrRadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	eightRad = false;
	twelveRad = false;
	sixteenRad = false;
	eighteenRad = false;
	twntyfrRad = true;
}
	//Desired Windloads
private: System::Void LightRadio2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	lightRad2 = true;
	heavyRad2 = false;
}
private: System::Void HeavyRadio2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	heavyRad2 = true;
	lightRad2 = false;
}
private: System::Void InstRadio2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	instRad2 = true;
	replRad2 = false;
}
private: System::Void ReplRadio2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	replRad2 = true;
	instRad2 = false;
}
private: System::Void ARadio2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	agradeRad2 = true;
	bgradeRad2 = false;
}
private: System::Void BRadio2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	bgradeRad2 = true;
	agradeRad2 = false;
}
private: System::Void EightRadio2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	eightRad2 = true;
	twelveRad2 = false;
	sixteenRad2 = false;
	eighteenRad2 = false;
	twntyfrRad2 = false;
}
private: System::Void TwelveRadio2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	eightRad2 = false;
	twelveRad2 = true;
	sixteenRad2 = false;
	eighteenRad2 = false;
	twntyfrRad2 = false;
}
private: System::Void SixteenRadio2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	eightRad2 = false;
	twelveRad2 = false;
	sixteenRad2 = true;
	eighteenRad2 = false;
	twntyfrRad2 = false;
}
private: System::Void EighteenRadio2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	eightRad2 = false;
	twelveRad2 = false;
	sixteenRad2 = false;
	eighteenRad2 = true;
	twntyfrRad2 = false;
}
private: System::Void TwntyfrRadio2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	eightRad2 = false;
	twelveRad2 = false;
	sixteenRad2 = false;
	eighteenRad2 = false;
	twntyfrRad2 = true;
}

private: System::Void ExportBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	address = locationTxtbox->Text;
	std::vector<std::string> vec;
	std::string strAddress = convToString(address);
	read_directory(strAddress,vec);
	strAddress = strAddress + "\\";
	std::string fileAddress;
	for (std::vector<std::string>::const_iterator i = vec.begin(); i != vec.end(); ++i)
	{
		
		//std::cout << strAddress << *i << "\n";
		fileAddress = strAddress + *i;
		parse(fileAddress);
	}
		
	
	
		
}
private: System::Void MaskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}

std::string convToString(System::String^ sysStr)
{
	std::string str = msclr::interop::marshal_as<std::string>(sysStr);
	return str;
}
void parse(std::string p)
{

	//std::cout << "Parsing..." << std::endl;
	//make a xml doc
	pugi::xml_document doc;
	/*
	System::String^ maddress = address;
	//add a specific pole (later this will be changed to a folder location)
	maddress += "\\test.pplx";
	//make the string pointer into a string literal
	std::string unmaddress = msclr::interop::marshal_as<std::string>(maddress);
	
	*/
	
	//make the string into a char so it can be handled by the pugiParser.
	const char* type = p.c_str();
	//load the doc
	pugi::xml_parse_result result = doc.load_file(type);	
	pugi::xml_node root = doc.document_element();
	//checking if it worked.
	
	if (!result)
	{
		//std::cout<< "no result \n";
	}
	else
	{
		//std::cout << "result \n";
		
		pugi::xpath_node attributes = doc.select_node("PPL/PPLScene/PPLChildElements/WoodPole/PPLChildElements/LoadCase/ATTRIBUTES");

		pugi::xml_text description = attributes.node().find_child_by_attribute("VALUE", "NAME", "DescriptionOverride").text();
		pugi::xml_text name = attributes.node().find_child_by_attribute("VALUE", "NAME", "Name").text();
		pugi::xml_text lightHeavy = attributes.node().find_child_by_attribute("VALUE", "NAME", "District").text();
		pugi::xml_text ice = attributes.node().find_child_by_attribute("VALUE", "NAME", "Radial Ice").text();
		pugi::xml_text windSpeed = attributes.node().find_child_by_attribute("VALUE", "NAME", "Wind Speed").text();
		pugi::xml_text HorizWindPress = attributes.node().find_child_by_attribute("VALUE", "NAME", "Horiz Wind Pres").text();
		pugi::xml_text tempMin = attributes.node().find_child_by_attribute("VALUE", "NAME", "TempMin").text();
		pugi::xml_text grade = attributes.node().find_child_by_attribute("VALUE", "NAME", "Construction Grade").text();
		pugi::xml_text instRepl = attributes.node().find_child_by_attribute("VALUE", "NAME", "Installation or Replacement").text();
		pugi::xml_text poleStrength = attributes.node().find_child_by_attribute("VALUE", "NAME", "Pole Strength Factor").text();
		pugi::xml_text xarmStrength = attributes.node().find_child_by_attribute("VALUE", "NAME", "Crossarm Strength Factor").text();
		pugi::xml_text guyStrength = attributes.node().find_child_by_attribute("VALUE", "NAME", "Guy Strength Factor").text();
		pugi::xml_text anchorStregth = attributes.node().find_child_by_attribute("VALUE", "NAME", "Anchor Strength Factor").text();
		//std::cout << attributes.node().find_child_by_attribute("VALUE", "NAME", "DescriptionOverride").child_value() << std::endl;
		/*
		description.set("");
		name.set("");
		lightHeavy.set("");
		ice.set("");
		windSpeed.set("");
		HorizWindPress.set("");
		tempMin.set("");
		grade.set("");
		instRepl.set("");
		poleStrength.set("");
		xarmStrength.set("");
		guyStrength.set("");
		anchorStregth.set("");
		*/
		

		if (eightRad2) //8 lb
		{
			if (lightRad2)
			{
				if (instRad2)
				{
					if (agradeRad2) // done
					{
						description.set("Wood- GO 95 Grade A - Light Loading at Installation (8 lbs.)");
						name.set("GO 95 Light Grade A at Installation");
						lightHeavy.set("Light");
						ice.set("0");
						windSpeed.set("55.9016994374947");
						HorizWindPress.set("8");
						tempMin.set("25");
						grade.set("A");
						instRepl.set("At Installation");
						poleStrength.set("0.25");
						xarmStrength.set("0.5");
						guyStrength.set("0.5");
						anchorStregth.set("0.5");
					}
					else if (bgradeRad2)//done
					{
						description.set("Wood- GO 95 Grade B - Light Loading at Installation (8 lbs.)");
						name.set("GO 95 Light Grade B at Installation");
						lightHeavy.set("Light");
						ice.set("0");
						windSpeed.set("55.9016994374947");
						HorizWindPress.set("8");
						tempMin.set("25");
						grade.set("B");
						instRepl.set("At Installation");
						poleStrength.set("0.33");
						xarmStrength.set("0.5");
						guyStrength.set("0.5");
						anchorStregth.set("0.5");
					}
				}
				else if (replRad2)
				{
					if (agradeRad2) //done
					{
						description.set("Wood- GO 95 Grade A - Light Loading at Replacement (8 lbs.)");
						name.set("GO 95 Light Grade A at Replacement");
						lightHeavy.set("Light");
						ice.set("0");
						windSpeed.set("55.9016994374947");
						HorizWindPress.set("8");
						tempMin.set("25");
						grade.set("A");
						instRepl.set("At Replacement");
						poleStrength.set("0.375");
						xarmStrength.set("0.75");
						guyStrength.set("0.75");
						anchorStregth.set("0.75");
					}
					else if (bgradeRad2) //done
					{
						description.set("Wood- GO 95 Grade B - Light Loading at Replacement (8 lbs.)");
						name.set("GO 95 Light Grade B at Replacement");
						lightHeavy.set("Light");
						ice.set("0");
						windSpeed.set("55.9016994374947");
						HorizWindPress.set("8");
						tempMin.set("25");
						grade.set("B");
						instRepl.set("At Replacement");
						poleStrength.set("0.5");
						xarmStrength.set("0.75");
						guyStrength.set("0.75");
						anchorStregth.set("0.75");
					}					
				}
			}
			else if (heavyRad2)
			{
				if (instRad2)
				{
					if (agradeRad2)//done
					{
						description.set("Wood- GO 95 Grade A - Light Loading at Installation (6 lbs.)");
						name.set("User defined LoadCase");
						lightHeavy.set("Heavy");
						ice.set("0.5");
						windSpeed.set("48.4122918275927");
						HorizWindPress.set("6");
						tempMin.set("0");
						grade.set("N/A");
						instRepl.set("At Installation");
						poleStrength.set("0.25");
						xarmStrength.set("0.5");
						guyStrength.set("0.5");
						anchorStregth.set("0.5");
					}
					else if (bgradeRad2) //done
					{
						description.set("Wood- GO 95 Grade B - Light Loading at Installation (6 lbs.)");
						name.set("User defined LoadCase");
						lightHeavy.set("Heavy");
						ice.set("0.5");
						windSpeed.set("48.4122918275927");
						HorizWindPress.set("6");
						tempMin.set("0");
						grade.set("N/A");
						instRepl.set("At Installation");
						poleStrength.set("0.3333");
						xarmStrength.set("0.5");
						guyStrength.set("0.5");
						anchorStregth.set("0.5");
					}
				}
				else if (replRad2)
				{
					if (agradeRad2) //done
					{
						description.set("Wood- GO 95 Grade A - Light Loading at Replacement (6 lbs.)");
						name.set("User defined LoadCase");
						lightHeavy.set("Heavy");
						ice.set("0.5");
						windSpeed.set("48.4122918275927");
						HorizWindPress.set("6");
						tempMin.set("0");
						grade.set("N/A");
						instRepl.set("At Replacement");
						poleStrength.set("0.5");
						xarmStrength.set("0.75");
						guyStrength.set("0.75");
						anchorStregth.set("0.75");
					}
					else if (bgradeRad2) //done
					{
						description.set("Wood- GO 95 Grade B - Light Loading at Replacement (6 lbs.)");
						name.set("User defined LoadCase");
						lightHeavy.set("Heavy");
						ice.set("0.5");
						windSpeed.set("48.4122918275927");
						HorizWindPress.set("6");
						tempMin.set("0");
						grade.set("N/A");
						instRepl.set("At Replacement");
						poleStrength.set("0.5");
						xarmStrength.set("0.75");
						guyStrength.set("0.75");
						anchorStregth.set("0.75");
					}
				}
			}
		}
		else if (twelveRad2) // 12 lb
		{
		if (lightRad2)
		{
			if (instRad2)
			{
				if (agradeRad2) //done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Installation (12 lbs.)");
					name.set("GO 95 Light Grade A at Installation");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("68.4653196881458");
					HorizWindPress.set("12");
					tempMin.set("25");
					grade.set("A");
					instRepl.set("At Installation");
					poleStrength.set("0.25");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
				else if (bgradeRad2)//done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Installation (12 lbs.)");
					name.set("GO 95 Light Grade B at Installation");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("68.4653196881458");
					HorizWindPress.set("12");
					tempMin.set("25");
					grade.set("B");
					instRepl.set("At Installation");
					poleStrength.set("0.33");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
			}
			else if (replRad2)
			{
				if (agradeRad2) //done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Replacement (12 lbs.)");
					name.set("GO 95 Light Grade A at Replacement");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("68.4653196881458");
					HorizWindPress.set("12");
					tempMin.set("25");
					grade.set("A");
					instRepl.set("At Replacement");
					poleStrength.set("0.375");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
				else if (bgradeRad2)  //done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Replacement (12 lbs.)");
					name.set("GO 95 Light Grade B at Replacement");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("68.4653196881458");
					HorizWindPress.set("12");
					tempMin.set("25");
					grade.set("B");
					instRepl.set("At Replacement");
					poleStrength.set("0.5");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
			}
		}
		else if (heavyRad2)
		{
			if (instRad2)
			{
				if (agradeRad2) //done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Installation (12 lbs.)");
					name.set("GO 95 Heavy Grade A at Installation");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("68.4653196881458");
					HorizWindPress.set("12");
					tempMin.set("0");
					grade.set("A");
					instRepl.set("At Installation");
					poleStrength.set("0.25");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
				else if (bgradeRad2) //done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Installation (12 lbs.)");
					name.set("GO 95 Heavy Grade B at Installation");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("68.4653196881458");
					HorizWindPress.set("12");
					tempMin.set("0");
					grade.set("B");
					instRepl.set("At Installation");
					poleStrength.set("0.3333");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
			}
			else if (replRad2)
			{
				if (agradeRad2) //done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Replacement (12 lbs.)");
					name.set("GO 95 Heavy Grade A At Replacement");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("68.4653196881458");
					HorizWindPress.set("12");
					tempMin.set("0");
					grade.set("A");
					instRepl.set("At Replacement");
					poleStrength.set("0.375");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
				else if (bgradeRad2) //done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Replacement (12 lbs.)");
					name.set("GO 95 Heavy Grade B At Replacement");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("68.4653196881458");
					HorizWindPress.set("12");
					tempMin.set("0");
					grade.set("B");
					instRepl.set("At Replacement");
					poleStrength.set("0.5");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
			}
		}

		}
		else if (sixteenRad2) //16 lb
		{
		if (lightRad2)
		{
			if (instRad2)
			{
				if (agradeRad2) //done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Installation (16 lbs.)");
					name.set("GO 95 Light Grade A at Installation");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("79.0569415042095");
					HorizWindPress.set("16");
					tempMin.set("25");
					grade.set("A");
					instRepl.set("At Installation");
					poleStrength.set("0.25");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
				else if (bgradeRad2) //done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Installation (16 lbs.)");
					name.set("GO 95 Light Grade B at Installation");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("79.0569415042095");
					HorizWindPress.set("16");
					tempMin.set("25");
					grade.set("B");
					instRepl.set("At Installation");
					poleStrength.set("0.33");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
			}
			else if (replRad2)
			{
				if (agradeRad2) // done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Replacement (16 lbs.)");
					name.set("GO 95 Light Grade A at Replacement");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("79.0569415042095");
					HorizWindPress.set("16");
					tempMin.set("25");
					grade.set("A");
					instRepl.set("At Replacement");
					poleStrength.set("0.375");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
				else if (bgradeRad2)  //done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Replacement (16 lbs.)");
					name.set("GO 95 Light Grade B at Replacement");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("79.0569415042095");
					HorizWindPress.set("16");
					tempMin.set("25");
					grade.set("B");
					instRepl.set("At Replacement");
					poleStrength.set("0.5");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
			}
		}
		else if (heavyRad2)
		{
			if (instRad2)
			{
				if (agradeRad2) //done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Installation (16 lbs.)");
					name.set("GO 95 Heavy Grade A at Installation");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("79.0569415042095");
					HorizWindPress.set("16");
					tempMin.set("0");
					grade.set("A");
					instRepl.set("At Installation");
					poleStrength.set("0.25");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
				else if (bgradeRad2) //done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Installation (16 lbs.)");
					name.set("GO 95 Heavy Grade B at Installation");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("79.0569415042095");
					HorizWindPress.set("16");
					tempMin.set("0");
					grade.set("B");
					instRepl.set("At Installation");
					poleStrength.set("0.3333");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
			}
			else if (replRad2)
			{
				if (agradeRad2) //done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Replacement (16 lbs.)");
					name.set("GO 95 Heavy Grade A At Replacement");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("79.0569415042095");
					HorizWindPress.set("16");
					tempMin.set("0");
					grade.set("A");
					instRepl.set("At Replacement");
					poleStrength.set("0.375");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
				else if (bgradeRad2) 
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Replacement (16 lbs.)");
					name.set("GO 95 Heavy Grade B At Replacement");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("79.0569415042095");
					HorizWindPress.set("16");
					tempMin.set("0");
					grade.set("B");
					instRepl.set("At Replacement");
					poleStrength.set("0.5");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
			}
		}
		}
		else if (eighteenRad2) //18 lb
		{
		if (lightRad2)
		{
			if (instRad2)
			{
				if (agradeRad2) //done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Installation (18 lbs.)");
					name.set("GO 95 Light Grade A at Installation");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("83.8525491562421");
					HorizWindPress.set("18");
					tempMin.set("25");
					grade.set("A");
					instRepl.set("At Installation");
					poleStrength.set("0.25");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
				else if (bgradeRad2) //done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Installation (18 lbs.)");
					name.set("GO 95 Light Grade B at Installation");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("83.8525491562421");
					HorizWindPress.set("18");
					tempMin.set("25");
					grade.set("B");
					instRepl.set("At Installation");
					poleStrength.set("0.33");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
			}
			else if (replRad2)
			{
				if (agradeRad2) //done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Replacement (18 lbs.)");
					name.set("GO 95 Light Grade A at Replacement");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("83.8525491562421");
					HorizWindPress.set("18");
					tempMin.set("25");
					grade.set("A");
					instRepl.set("At Replacement");
					poleStrength.set("0.375");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
				else if (bgradeRad2) //done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Replacement (18 lbs.)");
					name.set("GO 95 Light Grade B at Replacement");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("83.8525491562421");
					HorizWindPress.set("18");
					tempMin.set("25");
					grade.set("B");
					instRepl.set("At Replacement");
					poleStrength.set("0.5");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
			}
		}
		else if (heavyRad2)
		{
			if (instRad2)
			{
				if (agradeRad2) 
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Installation (18 lbs.)");
					name.set("GO 95 Heavy Grade A at Installation");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("83.8525491562421");
					HorizWindPress.set("18");
					tempMin.set("0");
					grade.set("A");
					instRepl.set("At Installation");
					poleStrength.set("0.25");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
				else if (bgradeRad2) //done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Installation (18 lbs.)");
					name.set("GO 95 Heavy Grade B at Installation");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("83.8525491562421");
					HorizWindPress.set("18");
					tempMin.set("0");
					grade.set("B");
					instRepl.set("At Installation");
					poleStrength.set("0.3333");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
			}
			else if (replRad2) // done
			{
				if (agradeRad2) 
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Replacement (18 lbs.)");
					name.set("GO 95 Heavy Grade A At Replacement");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("83.8525491562421");
					HorizWindPress.set("18");
					tempMin.set("0");
					grade.set("A");
					instRepl.set("At Replacement");
					poleStrength.set("0.375");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
				else if (bgradeRad2) // done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Replacement (18 lbs.)");
					name.set("GO 95 Heavy Grade B At Replacement");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("83.8525491562421");
					HorizWindPress.set("18");
					tempMin.set("0");
					grade.set("B");
					instRepl.set("At Replacement");
					poleStrength.set("0.5");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
			}
		}
		}
		else if (twntyfrRad2) //24 lb
		{
		if (lightRad2)
		{
			if (instRad2)
			{
				if (agradeRad2) //done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Installation (24 lbs.)");
					name.set("GO 95 Light Grade A at Installation");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("96.8245836551854");
					HorizWindPress.set("24");
					tempMin.set("25");
					grade.set("A");
					instRepl.set("At Installation");
					poleStrength.set("0.25");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
				else if (bgradeRad2) //done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Installation (24 lbs.)");
					name.set("GO 95 Light Grade B at Installation");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("96.8245836551854");
					HorizWindPress.set("24");
					tempMin.set("25");
					grade.set("B");
					instRepl.set("At Installation");
					poleStrength.set("0.33");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
			}
			else if (replRad2)
			{
				if (agradeRad2) //done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Replacement (24 lbs.)");
					name.set("GO 95 Light Grade A at Replacement");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("96.8245836551854");
					HorizWindPress.set("24");
					tempMin.set("25");
					grade.set("A");
					instRepl.set("At Replacement");
					poleStrength.set("0.375");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
				else if (bgradeRad2) //done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Replacement (24 lbs.)");
					name.set("GO 95 Light Grade B at Replacement");
					lightHeavy.set("Light");
					ice.set("0");
					windSpeed.set("96.8245836551854");
					HorizWindPress.set("24");
					tempMin.set("25");
					grade.set("B");
					instRepl.set("At Replacement");
					poleStrength.set("0.5");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
			}
		}
		else if (heavyRad2)
		{
			if (instRad2)
			{
				if (agradeRad2)//done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Installation (24 lbs.)");
					name.set("GO 95 Heavy Grade A at Installation");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("96.8245836551854");
					HorizWindPress.set("24");
					tempMin.set("0");
					grade.set("A");
					instRepl.set("At Installation");
					poleStrength.set("0.25");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
				else if (bgradeRad2) //done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Installation (24 lbs.)");
					name.set("GO 95 Heavy Grade B at Installation");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("96.8245836551854");
					HorizWindPress.set("24");
					tempMin.set("0");
					grade.set("B");
					instRepl.set("At Installation");
					poleStrength.set("0.3333");
					xarmStrength.set("0.5");
					guyStrength.set("0.5");
					anchorStregth.set("0.5");
				}
			}
			else if (replRad2) 
			{
				if (agradeRad2) //done
				{
					description.set("Wood- GO 95 Grade A - Light Loading at Replacement (24 lbs.)");
					name.set("GO 95 Heavy Grade A At Replacement");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("96.8245836551854");
					HorizWindPress.set("24");
					tempMin.set("0");
					grade.set("A");
					instRepl.set("At Replacement");
					poleStrength.set("0.375");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
				else if (bgradeRad2) //done
				{
					description.set("Wood- GO 95 Grade B - Light Loading at Replacement (24 lbs.)");
					name.set("GO 95 Heavy Grade B At Replacement");
					lightHeavy.set("Heavy");
					ice.set("0.5");
					windSpeed.set("96.8245836551854");
					HorizWindPress.set("24");
					tempMin.set("0");
					grade.set("B");
					instRepl.set("At Replacement");
					poleStrength.set("0.5");
					xarmStrength.set("0.75");
					guyStrength.set("0.75");
					anchorStregth.set("0.75");
				}
			}
		}
		}
	}
		doc.save_file(type);	
	//std::cout << "Complete \n\n";

}

void read_directory(const std::string& name, stringvec& v)
{
	DIR* dirp = opendir(name.c_str());
	struct dirent* dp;
	while ((dp = readdir(dirp)) != NULL) {
		v.push_back(dp->d_name);
	}
	closedir(dirp);
}


private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
	//owchLabel->Location = this->Width/2;
	locationTxtbox->Width = (this->Width - browseBtn->Width - locationLabel->Width - 50);
	desiredBox->Width = (this->Width - 40);
	desiredBox->Height = (this->Height - owchLabel->Height - locationLabel->Height - exportBtn->Height - 100);
	//loadBox2->Width = (desiredBox->Width - gradeBox2->Width - 100);

}
};



}
