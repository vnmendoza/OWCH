#pragma once
#include "pugixml-1.9/src/pugixml.hpp"
#include "pugixml-1.9/src/pugiconfig.hpp"
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>
#include <iostream>


void sToc(System::String^ oParameter)
{
	msclr::interop::marshal_context oMarshalContext;

	const char* pParameter = oMarshalContext.marshal_as<const char*>(oParameter);
	
	// the memory pointed to by pParameter will no longer be valid when oMarshalContext goes out of scope
}


namespace OUCH {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//
	void parse(String^);

	
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
		


	private: System::Windows::Forms::GroupBox^ windloadInfoBox;




	private: System::Windows::Forms::Label^ owchLabel;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;


	private: System::Windows::Forms::GroupBox^ currentBox;
	private: System::Windows::Forms::RadioButton^ lightRadio;
	private: System::Windows::Forms::RadioButton^ heavyRadio;
	private: System::Windows::Forms::GroupBox^ typeBox;
	private: System::Windows::Forms::GroupBox^ windBox;
	private: System::Windows::Forms::GroupBox^ loadBox;
	private: System::Windows::Forms::GroupBox^ gradeBox;
	private: System::Windows::Forms::RadioButton^ bRadio;
	private: System::Windows::Forms::RadioButton^ aRadio;
	private: System::Windows::Forms::RadioButton^ replRadio;

	private: System::Windows::Forms::RadioButton^ instRadio;
	private: System::Windows::Forms::RadioButton^ sixteenRadio;

	private: System::Windows::Forms::RadioButton^ twelveRadio;
	private: System::Windows::Forms::RadioButton^ eightRadio;
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
	private: System::Windows::Forms::RadioButton^ eighteenRadio;
	private: System::Windows::Forms::RadioButton^ twntyfrRadio;
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
private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
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
			this->windloadInfoBox = (gcnew System::Windows::Forms::GroupBox());
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
			this->currentBox = (gcnew System::Windows::Forms::GroupBox());
			this->loadBox = (gcnew System::Windows::Forms::GroupBox());
			this->eighteenRadio = (gcnew System::Windows::Forms::RadioButton());
			this->twntyfrRadio = (gcnew System::Windows::Forms::RadioButton());
			this->sixteenRadio = (gcnew System::Windows::Forms::RadioButton());
			this->twelveRadio = (gcnew System::Windows::Forms::RadioButton());
			this->eightRadio = (gcnew System::Windows::Forms::RadioButton());
			this->gradeBox = (gcnew System::Windows::Forms::GroupBox());
			this->bRadio = (gcnew System::Windows::Forms::RadioButton());
			this->aRadio = (gcnew System::Windows::Forms::RadioButton());
			this->typeBox = (gcnew System::Windows::Forms::GroupBox());
			this->replRadio = (gcnew System::Windows::Forms::RadioButton());
			this->instRadio = (gcnew System::Windows::Forms::RadioButton());
			this->windBox = (gcnew System::Windows::Forms::GroupBox());
			this->lightRadio = (gcnew System::Windows::Forms::RadioButton());
			this->heavyRadio = (gcnew System::Windows::Forms::RadioButton());
			this->owchLabel = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->exportBtn = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->windloadInfoBox->SuspendLayout();
			this->desiredBox->SuspendLayout();
			this->loadBox2->SuspendLayout();
			this->gradeBox2->SuspendLayout();
			this->typeBox2->SuspendLayout();
			this->windBox2->SuspendLayout();
			this->currentBox->SuspendLayout();
			this->loadBox->SuspendLayout();
			this->gradeBox->SuspendLayout();
			this->typeBox->SuspendLayout();
			this->windBox->SuspendLayout();
			this->SuspendLayout();
			this->locationLabel->AutoSize = true;
			this->locationLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->locationLabel->Location = System::Drawing::Point(0, 0);
			this->locationLabel->Name = L"locationLabel";
			this->locationLabel->Padding = System::Windows::Forms::Padding(0, 104, 0, 0);
			this->locationLabel->Size = System::Drawing::Size(100, 129);
			this->locationLabel->TabIndex = 0;
			this->locationLabel->Text = L"Location:";
			this->locationLabel->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			this->locationTxtbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->locationTxtbox->Location = System::Drawing::Point(211, 115);
			this->locationTxtbox->Name = L"locationTxtbox";
			this->locationTxtbox->Size = System::Drawing::Size(459, 31);
			this->locationTxtbox->TabIndex = 1;
			this->locationTxtbox->Text = L"C:\\";
			this->browseBtn->Location = System::Drawing::Point(1241, 108);
			this->browseBtn->Name = L"browseBtn";
			this->browseBtn->Size = System::Drawing::Size(109, 36);
			this->browseBtn->TabIndex = 2;
			this->browseBtn->Text = L"Browse";
			this->browseBtn->UseVisualStyleBackColor = true;
			this->browseBtn->Click += gcnew System::EventHandler(this, &MyForm::BrowseBtn_Click);
			this->windloadInfoBox->Controls->Add(this->desiredBox);
			this->windloadInfoBox->Controls->Add(this->currentBox);
			this->windloadInfoBox->Location = System::Drawing::Point(109, 190);
			this->windloadInfoBox->Name = L"windloadInfoBox";
			this->windloadInfoBox->Size = System::Drawing::Size(1226, 566);
			this->windloadInfoBox->TabIndex = 5;
			this->windloadInfoBox->TabStop = false;
			this->windloadInfoBox->Text = L"WindLoad Information";
			this->windloadInfoBox->Enter += gcnew System::EventHandler(this, &MyForm::GroupBox1_Enter);
			this->desiredBox->Controls->Add(this->loadBox2);
			this->desiredBox->Controls->Add(this->gradeBox2);
			this->desiredBox->Controls->Add(this->typeBox2);
			this->desiredBox->Controls->Add(this->windBox2);
			this->desiredBox->Location = System::Drawing::Point(7, 301);
			this->desiredBox->Name = L"desiredBox";
			this->desiredBox->Size = System::Drawing::Size(1213, 239);
			this->desiredBox->TabIndex = 6;
			this->desiredBox->TabStop = false;
			this->desiredBox->Text = L"Desired Windload";
			this->loadBox2->Controls->Add(this->eighteenRadio2);
			this->loadBox2->Controls->Add(this->twntyfrRadio2);
			this->loadBox2->Controls->Add(this->sixteenRadio2);
			this->loadBox2->Controls->Add(this->twelveRadio2);
			this->loadBox2->Controls->Add(this->eightRadio2);
			this->loadBox2->Location = System::Drawing::Point(883, 43);
			this->loadBox2->Name = L"loadBox2";
			this->loadBox2->Size = System::Drawing::Size(296, 141);
			this->loadBox2->TabIndex = 5;
			this->loadBox2->TabStop = false;
			this->loadBox2->Text = L"Load";
			this->eighteenRadio2->AutoSize = true;
			this->eighteenRadio2->Location = System::Drawing::Point(131, 89);
			this->eighteenRadio2->Name = L"eighteenRadio2";
			this->eighteenRadio2->Size = System::Drawing::Size(67, 29);
			this->eighteenRadio2->TabIndex = 4;
			this->eighteenRadio2->TabStop = true;
			this->eighteenRadio2->Text = L"18";
			this->eighteenRadio2->UseVisualStyleBackColor = true;
			this->eighteenRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EighteenRadio2_CheckedChanged);
			this->twntyfrRadio2->AutoSize = true;
			this->twntyfrRadio2->Location = System::Drawing::Point(215, 64);
			this->twntyfrRadio2->Name = L"twntyfrRadio2";
			this->twntyfrRadio2->Size = System::Drawing::Size(67, 29);
			this->twntyfrRadio2->TabIndex = 3;
			this->twntyfrRadio2->TabStop = true;
			this->twntyfrRadio2->Text = L"24";
			this->twntyfrRadio2->UseVisualStyleBackColor = true;
			this->twntyfrRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TwntyfrRadio2_CheckedChanged);
			this->sixteenRadio2->AutoSize = true;
			this->sixteenRadio2->Location = System::Drawing::Point(131, 42);
			this->sixteenRadio2->Name = L"sixteenRadio2";
			this->sixteenRadio2->Size = System::Drawing::Size(67, 29);
			this->sixteenRadio2->TabIndex = 2;
			this->sixteenRadio2->TabStop = true;
			this->sixteenRadio2->Text = L"16";
			this->sixteenRadio2->UseVisualStyleBackColor = true;
			this->sixteenRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SixteenRadio2_CheckedChanged);
			this->twelveRadio2->AutoSize = true;
			this->twelveRadio2->Location = System::Drawing::Point(20, 89);
			this->twelveRadio2->Name = L"twelveRadio2";
			this->twelveRadio2->Size = System::Drawing::Size(67, 29);
			this->twelveRadio2->TabIndex = 1;
			this->twelveRadio2->TabStop = true;
			this->twelveRadio2->Text = L"12";
			this->twelveRadio2->UseVisualStyleBackColor = true;
			this->twelveRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TwelveRadio2_CheckedChanged);
			this->eightRadio2->AutoSize = true;
			this->eightRadio2->Location = System::Drawing::Point(20, 42);
			this->eightRadio2->Name = L"eightRadio2";
			this->eightRadio2->Size = System::Drawing::Size(55, 29);
			this->eightRadio2->TabIndex = 0;
			this->eightRadio2->TabStop = true;
			this->eightRadio2->Text = L"8";
			this->eightRadio2->UseVisualStyleBackColor = true;
			this->eightRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EightRadio2_CheckedChanged);
			this->gradeBox2->Controls->Add(this->bRadio2);
			this->gradeBox2->Controls->Add(this->aRadio2);
			this->gradeBox2->Location = System::Drawing::Point(682, 43);
			this->gradeBox2->Name = L"gradeBox2";
			this->gradeBox2->Size = System::Drawing::Size(112, 141);
			this->gradeBox2->TabIndex = 4;
			this->gradeBox2->TabStop = false;
			this->gradeBox2->Text = L"Grade";
			this->bRadio2->AutoSize = true;
			this->bRadio2->Location = System::Drawing::Point(25, 89);
			this->bRadio2->Name = L"bRadio2";
			this->bRadio2->Size = System::Drawing::Size(57, 29);
			this->bRadio2->TabIndex = 1;
			this->bRadio2->TabStop = true;
			this->bRadio2->Text = L"B";
			this->bRadio2->UseVisualStyleBackColor = true;
			this->bRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BRadio2_CheckedChanged);
			this->aRadio2->AutoSize = true;
			this->aRadio2->Location = System::Drawing::Point(25, 42);
			this->aRadio2->Name = L"aRadio2";
			this->aRadio2->Size = System::Drawing::Size(57, 29);
			this->aRadio2->TabIndex = 0;
			this->aRadio2->TabStop = true;
			this->aRadio2->Text = L"A";
			this->aRadio2->UseVisualStyleBackColor = true;
			this->aRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ARadio2_CheckedChanged);
			this->typeBox2->Controls->Add(this->replRadio2);
			this->typeBox2->Controls->Add(this->instRadio2);
			this->typeBox2->Location = System::Drawing::Point(338, 43);
			this->typeBox2->Name = L"typeBox2";
			this->typeBox2->Size = System::Drawing::Size(256, 141);
			this->typeBox2->TabIndex = 3;
			this->typeBox2->TabStop = false;
			this->typeBox2->Text = L"Type";
			this->replRadio2->AutoSize = true;
			this->replRadio2->Location = System::Drawing::Point(27, 89);
			this->replRadio2->Name = L"replRadio2";
			this->replRadio2->Size = System::Drawing::Size(222, 29);
			this->replRadio2->TabIndex = 1;
			this->replRadio2->TabStop = true;
			this->replRadio2->Text = L"Replacement (Old)";
			this->replRadio2->UseVisualStyleBackColor = true;
			this->replRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ReplRadio2_CheckedChanged);
			this->instRadio2->AutoSize = true;
			this->instRadio2->Location = System::Drawing::Point(27, 42);
			this->instRadio2->Name = L"instRadio2";
			this->instRadio2->Size = System::Drawing::Size(208, 29);
			this->instRadio2->TabIndex = 0;
			this->instRadio2->TabStop = true;
			this->instRadio2->Text = L"Installation (New)";
			this->instRadio2->UseVisualStyleBackColor = true;
			this->instRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::InstRadio2_CheckedChanged);
			this->windBox2->Controls->Add(this->lightRadio2);
			this->windBox2->Controls->Add(this->heavyRadio2);
			this->windBox2->Location = System::Drawing::Point(41, 43);
			this->windBox2->Name = L"windBox2";
			this->windBox2->Size = System::Drawing::Size(218, 141);
			this->windBox2->TabIndex = 2;
			this->windBox2->TabStop = false;
			this->windBox2->Text = L"Wind";
			this->lightRadio2->AutoSize = true;
			this->lightRadio2->Location = System::Drawing::Point(43, 42);
			this->lightRadio2->Name = L"lightRadio2";
			this->lightRadio2->Size = System::Drawing::Size(90, 29);
			this->lightRadio2->TabIndex = 0;
			this->lightRadio2->TabStop = true;
			this->lightRadio2->Text = L"Light";
			this->lightRadio2->UseVisualStyleBackColor = true;
			this->lightRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::LightRadio2_CheckedChanged);
			this->heavyRadio2->AutoSize = true;
			this->heavyRadio2->Location = System::Drawing::Point(43, 89);
			this->heavyRadio2->Name = L"heavyRadio2";
			this->heavyRadio2->Size = System::Drawing::Size(104, 29);
			this->heavyRadio2->TabIndex = 1;
			this->heavyRadio2->TabStop = true;
			this->heavyRadio2->Text = L"Heavy";
			this->heavyRadio2->UseVisualStyleBackColor = true;
			this->heavyRadio2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::HeavyRadio2_CheckedChanged);
			this->currentBox->Controls->Add(this->loadBox);
			this->currentBox->Controls->Add(this->gradeBox);
			this->currentBox->Controls->Add(this->typeBox);
			this->currentBox->Controls->Add(this->windBox);
			this->currentBox->Location = System::Drawing::Point(7, 41);
			this->currentBox->Name = L"currentBox";
			this->currentBox->Size = System::Drawing::Size(1213, 239);
			this->currentBox->TabIndex = 4;
			this->currentBox->TabStop = false;
			this->currentBox->Text = L"Current Windload";
			this->loadBox->Controls->Add(this->eighteenRadio);
			this->loadBox->Controls->Add(this->twntyfrRadio);
			this->loadBox->Controls->Add(this->sixteenRadio);
			this->loadBox->Controls->Add(this->twelveRadio);
			this->loadBox->Controls->Add(this->eightRadio);
			this->loadBox->Location = System::Drawing::Point(883, 43);
			this->loadBox->Name = L"loadBox";
			this->loadBox->Size = System::Drawing::Size(296, 141);
			this->loadBox->TabIndex = 5;
			this->loadBox->TabStop = false;
			this->loadBox->Text = L"Load";
			this->loadBox->Enter += gcnew System::EventHandler(this, &MyForm::LoadBox_Enter);
			this->eighteenRadio->AutoSize = true;
			this->eighteenRadio->Location = System::Drawing::Point(131, 89);
			this->eighteenRadio->Name = L"eighteenRadio";
			this->eighteenRadio->Size = System::Drawing::Size(67, 29);
			this->eighteenRadio->TabIndex = 4;
			this->eighteenRadio->TabStop = true;
			this->eighteenRadio->Text = L"18";
			this->eighteenRadio->UseVisualStyleBackColor = true;
			this->twntyfrRadio->AutoSize = true;
			this->twntyfrRadio->Location = System::Drawing::Point(215, 64);
			this->twntyfrRadio->Name = L"twntyfrRadio";
			this->twntyfrRadio->Size = System::Drawing::Size(67, 29);
			this->twntyfrRadio->TabIndex = 3;
			this->twntyfrRadio->TabStop = true;
			this->twntyfrRadio->Text = L"24";
			this->twntyfrRadio->UseVisualStyleBackColor = true;
			this->twntyfrRadio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TwntyfrRadio_CheckedChanged);
			this->sixteenRadio->AutoSize = true;
			this->sixteenRadio->Location = System::Drawing::Point(131, 42);
			this->sixteenRadio->Name = L"sixteenRadio";
			this->sixteenRadio->Size = System::Drawing::Size(67, 29);
			this->sixteenRadio->TabIndex = 2;
			this->sixteenRadio->TabStop = true;
			this->sixteenRadio->Text = L"16";
			this->sixteenRadio->UseVisualStyleBackColor = true;
			this->sixteenRadio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SixteenRadio_CheckedChanged);
			this->twelveRadio->AutoSize = true;
			this->twelveRadio->Location = System::Drawing::Point(20, 89);
			this->twelveRadio->Name = L"twelveRadio";
			this->twelveRadio->Size = System::Drawing::Size(67, 29);
			this->twelveRadio->TabIndex = 1;
			this->twelveRadio->TabStop = true;
			this->twelveRadio->Text = L"12";
			this->twelveRadio->UseVisualStyleBackColor = true;
			this->twelveRadio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TwelveRadio_CheckedChanged);
			this->eightRadio->AutoSize = true;
			this->eightRadio->Location = System::Drawing::Point(20, 42);
			this->eightRadio->Name = L"eightRadio";
			this->eightRadio->Size = System::Drawing::Size(55, 29);
			this->eightRadio->TabIndex = 0;
			this->eightRadio->TabStop = true;
			this->eightRadio->Text = L"8";
			this->eightRadio->UseVisualStyleBackColor = true;
			this->eightRadio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EightRadio_CheckedChanged);
			this->gradeBox->Controls->Add(this->bRadio);
			this->gradeBox->Controls->Add(this->aRadio);
			this->gradeBox->Location = System::Drawing::Point(682, 43);
			this->gradeBox->Name = L"gradeBox";
			this->gradeBox->Size = System::Drawing::Size(112, 141);
			this->gradeBox->TabIndex = 4;
			this->gradeBox->TabStop = false;
			this->gradeBox->Text = L"Grade";
			this->bRadio->AutoSize = true;
			this->bRadio->Location = System::Drawing::Point(25, 89);
			this->bRadio->Name = L"bRadio";
			this->bRadio->Size = System::Drawing::Size(57, 29);
			this->bRadio->TabIndex = 1;
			this->bRadio->TabStop = true;
			this->bRadio->Text = L"B";
			this->bRadio->UseVisualStyleBackColor = true;
			this->bRadio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BRadio_CheckedChanged);
			this->aRadio->AutoSize = true;
			this->aRadio->Location = System::Drawing::Point(25, 42);
			this->aRadio->Name = L"aRadio";
			this->aRadio->Size = System::Drawing::Size(57, 29);
			this->aRadio->TabIndex = 0;
			this->aRadio->TabStop = true;
			this->aRadio->Text = L"A";
			this->aRadio->UseVisualStyleBackColor = true;
			this->aRadio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ARadio_CheckedChanged);
			this->typeBox->Controls->Add(this->replRadio);
			this->typeBox->Controls->Add(this->instRadio);
			this->typeBox->Location = System::Drawing::Point(338, 43);
			this->typeBox->Name = L"typeBox";
			this->typeBox->Size = System::Drawing::Size(256, 141);
			this->typeBox->TabIndex = 3;
			this->typeBox->TabStop = false;
			this->typeBox->Text = L"Type";
			this->replRadio->AutoSize = true;
			this->replRadio->Location = System::Drawing::Point(27, 89);
			this->replRadio->Name = L"replRadio";
			this->replRadio->Size = System::Drawing::Size(222, 29);
			this->replRadio->TabIndex = 1;
			this->replRadio->TabStop = true;
			this->replRadio->Text = L"Replacement (Old)";
			this->replRadio->UseVisualStyleBackColor = true;
			this->replRadio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ReplRadio_CheckedChanged);
			this->instRadio->AutoSize = true;
			this->instRadio->Location = System::Drawing::Point(27, 42);
			this->instRadio->Name = L"instRadio";
			this->instRadio->Size = System::Drawing::Size(208, 29);
			this->instRadio->TabIndex = 0;
			this->instRadio->TabStop = true;
			this->instRadio->Text = L"Installation (New)";
			this->instRadio->UseVisualStyleBackColor = true;
			this->instRadio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::InstRadio_CheckedChanged);
			this->windBox->Controls->Add(this->lightRadio);
			this->windBox->Controls->Add(this->heavyRadio);
			this->windBox->Location = System::Drawing::Point(41, 43);
			this->windBox->Name = L"windBox";
			this->windBox->Size = System::Drawing::Size(218, 141);
			this->windBox->TabIndex = 2;
			this->windBox->TabStop = false;
			this->windBox->Text = L"Wind";
			this->lightRadio->AutoSize = true;
			this->lightRadio->Location = System::Drawing::Point(43, 42);
			this->lightRadio->Name = L"lightRadio";
			this->lightRadio->Size = System::Drawing::Size(90, 29);
			this->lightRadio->TabIndex = 0;
			this->lightRadio->TabStop = true;
			this->lightRadio->Text = L"Light";
			this->lightRadio->UseVisualStyleBackColor = true;
			this->lightRadio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::LightRadio_CheckedChanged);
			this->heavyRadio->AutoSize = true;
			this->heavyRadio->Location = System::Drawing::Point(43, 89);
			this->heavyRadio->Name = L"heavyRadio";
			this->heavyRadio->Size = System::Drawing::Size(104, 29);
			this->heavyRadio->TabIndex = 1;
			this->heavyRadio->TabStop = true;
			this->heavyRadio->Text = L"Heavy";
			this->heavyRadio->UseVisualStyleBackColor = true;
			this->heavyRadio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::HeavyRadio_CheckedChanged);
			this->owchLabel->AutoSize = true;
			this->owchLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->owchLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875));
			this->owchLabel->Location = System::Drawing::Point(100, 0);
			this->owchLabel->Name = L"owchLabel";
			this->owchLabel->Padding = System::Windows::Forms::Padding(0, 21, 0, 0);
			this->owchLabel->Size = System::Drawing::Size(463, 54);
			this->owchLabel->TabIndex = 6;
			this->owchLabel->Text = L"OCalc Windload Correction Helper";
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &MyForm::FolderBrowserDialog1_HelpRequest);
			this->exportBtn->Location = System::Drawing::Point(607, 797);
			this->exportBtn->Name = L"exportBtn";
			this->exportBtn->Size = System::Drawing::Size(189, 60);
			this->exportBtn->TabIndex = 8;
			this->exportBtn->Text = L"Export";
			this->exportBtn->UseVisualStyleBackColor = true;
			this->exportBtn->Click += gcnew System::EventHandler(this, &MyForm::ExportBtn_Click);
			this->maskedTextBox1->Location = System::Drawing::Point(360, 886);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(688, 31);
			this->maskedTextBox1->TabIndex = 9;
			this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::MaskedTextBox1_MaskInputRejected);
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1364, 943);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->exportBtn);
			this->Controls->Add(this->owchLabel);
			this->Controls->Add(this->windloadInfoBox);
			this->Controls->Add(this->browseBtn);
			this->Controls->Add(this->locationTxtbox);
			this->Controls->Add(this->locationLabel);
			this->Name = L"MyForm";
			this->Text = L"OWCH";
			this->windloadInfoBox->ResumeLayout(false);
			this->desiredBox->ResumeLayout(false);
			this->loadBox2->ResumeLayout(false);
			this->loadBox2->PerformLayout();
			this->gradeBox2->ResumeLayout(false);
			this->gradeBox2->PerformLayout();
			this->typeBox2->ResumeLayout(false);
			this->typeBox2->PerformLayout();
			this->windBox2->ResumeLayout(false);
			this->windBox2->PerformLayout();
			this->currentBox->ResumeLayout(false);
			this->loadBox->ResumeLayout(false);
			this->loadBox->PerformLayout();
			this->gradeBox->ResumeLayout(false);
			this->gradeBox->PerformLayout();
			this->typeBox->ResumeLayout(false);
			this->typeBox->PerformLayout();
			this->windBox->ResumeLayout(false);
			this->windBox->PerformLayout();
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

	parse(address);
		
}
private: System::Void MaskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}

void parse(String^ p)
{

	std::cout << "Parsing..." << std::endl;
	//make a xml doc
	pugi::xml_document doc;
	//make set the address to a string pointer	
	System::String^ maddress = address;
	//add a specific pole (later this will be changed to a folder location)
	maddress += "\\test.pplx";
	//make the string pointer into a string literal
	std::string unmaddress = msclr::interop::marshal_as<std::string>(maddress);
	//make the string into a char so it can be handled by the pugiParser.
	const char* type = unmaddress.c_str();
	//load the doc
	pugi::xml_parse_result result = doc.load_file(type);	
	pugi::xml_node root = doc.document_element();
	//checking if it worked.
	
	if (!result)
	{
		std::cout<< "no result \n";
	}
	else
	{
		std::cout << "result \n";
		
		pugi::xpath_node attributes = doc.select_node("PPL/PPLScene/PPLChildElements/WoodPole/PPLChildElements/LoadCase/ATTRIBUTES");

		pugi::xml_text description = attributes.node().find_child_by_attribute("VALUE", "NAME", "DescriptionOverride").text();
		pugi::xml_text name = attributes.node().find_child_by_attribute("VALUE", "NAME", "Name").text();
		pugi::xml_text windSpeed = attributes.node().find_child_by_attribute("VALUE", "NAME", "Wind Speed").text();
		pugi::xml_text ice = attributes.node().find_child_by_attribute("VALUE", "NAME", "Radial Ice").text();		
		pugi::xml_text HorizWindPress = attributes.node().find_child_by_attribute("VALUE", "NAME", "Horiz Wind Pres").text();
		pugi::xml_text tempMin = attributes.node().find_child_by_attribute("VALUE", "NAME", "TempMin").text();
		pugi::xml_text grade = attributes.node().find_child_by_attribute("VALUE", "NAME", "Construction Grade").text();
		pugi::xml_text instRepl = attributes.node().find_child_by_attribute("VALUE", "NAME", "Installation or Replacement").text();
		pugi::xml_text poleStength = attributes.node().find_child_by_attribute("VALUE", "NAME", "Pole Strength Factor").text();
		pugi::xml_text xarmStrength = attributes.node().find_child_by_attribute("VALUE", "NAME", "Crossarm Strength Factor").text();
		pugi::xml_text guyStrength = attributes.node().find_child_by_attribute("VALUE", "NAME", "Guy Strength Factor").text();
		pugi::xml_text anchorStregth = attributes.node().find_child_by_attribute("VALUE", "NAME", "Anchor Strength Factor").text();
		std::cout << attributes.node().find_child_by_attribute("VALUE", "NAME", "DescriptionOverride").child_value() << std::endl;
	

		if (eightRad2)
		{
			if (lightRad2)
			{
				if (instRad2)
				{
					if (agradeRad2)
					{
						description.set("Wood- GO 95 Grade A - Light Loading at Installation (8 lbs.)");
						name.set("GO 95 Light Grade A at Installation");
						ice.set("0");
						windSpeed.set("55.9016994374947");
						HorizWindPress.set("8");
						tempMin.set("25");
						grade.set("A");
						instRepl.set("At Installation");
						poleStength.set("0.25");
						xarmStrength.set("0.5");
						guyStrength.set("0.5");
						anchorStregth.set("0.5");
					}
					else if (bgradeRad2)
					{
						
					}
				}
				else if (replRad2)
				{

				}

			}
			else if (heavyRad2)
			{
				if (instRad2)
				{
					if (agradeRad2)

					{

					}
					else if (bgradeRad2)
					{

					}
				}
				else if (replRad2)
				{

				}
			}
		}
		else if (twelveRad2)
		{
			if (lightRad2)
			{
				if (instRad2)
				{
					if (agradeRad2)

					{

					}
					else if (bgradeRad2)
					{

					}
				}
				else if (replRad2)
				{

				}

			}
			else if (heavyRad2)
			{
				if (instRad2)
				{
					if (agradeRad2)

					{

					}
					else if (bgradeRad2)
					{

					}
				}
				else if (replRad2)
				{

				}
			}

		}
		else if (sixteenRad2)
		{
			if (lightRad2)
			{
				if (instRad2)
				{
					if (agradeRad2)

					{

					}
					else if (bgradeRad2)
					{

					}
				}
				else if (replRad2)
				{

				}

			}
			else if (heavyRad2)
			{
				if (instRad2)
				{
					if (agradeRad2)

					{

					}
					else if (bgradeRad2)
					{

					}
				}
				else if (replRad2)
				{

				}
			}
		}
		else if (eighteenRad2)
		{
			if (lightRad2)
			{
				if (instRad2)
				{
					if (agradeRad2)

					{

					}
					else if (bgradeRad2)
					{

					}
				}
				else if (replRad2)
				{

				}

			}
			else if (heavyRad2)
			{
				if (instRad2)
				{
					if (agradeRad2)

					{

					}
					else if (bgradeRad2)
					{

					}
				}
				else if (replRad2)
				{

				}
			}
		}
		else if (twntyfrRad2)
		{
			if (lightRad2)
			{
				if (instRad2)
				{
					if (agradeRad2)

					{

					}
					else if (bgradeRad2)
					{

					}
				}
				else if (replRad2)
				{

				}

			}
			else if (heavyRad2)
			{
				if (instRad2)
				{
					if (agradeRad2)

					{

					}
					else if (bgradeRad2)
					{

					}
				}
				else if (replRad2)
				{

				}
			}
		}
	}
		doc.save_file("C:\\Users\\vmend\\Desktop\\test.pplx");
	
			
	

	//C:\Users\vmend\Desktop
	/*
	for (auto& node : tools)
	{
		std::cout << node.node().child_value() << '\n';

		std::cout << node.node().child_value() << '\n';
	}
	*/

	
	std::cout << "Complete \n";

}

};



}
