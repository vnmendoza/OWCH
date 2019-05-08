#pragma once

namespace OUCH {

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
	private: System::Windows::Forms::Label^ locationLabel;
	private: System::Windows::Forms::MaskedTextBox^ locationBox;
	protected:


	private: System::Windows::Forms::Button^ browseBtn;
	private: System::Windows::Forms::Label^ exportLabel;
	private: System::Windows::Forms::MaskedTextBox^ exportBox;
	private: System::Windows::Forms::GroupBox^ windloadInfoBox;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ owchLabel;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::Button^ browsebtn2;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog2;


	private: System::Windows::Forms::GroupBox^ groupBox1;

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
			this->locationBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->browseBtn = (gcnew System::Windows::Forms::Button());
			this->exportLabel = (gcnew System::Windows::Forms::Label());
			this->exportBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->windloadInfoBox = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->owchLabel = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->browsebtn2 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog2 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->windloadInfoBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// locationLabel
			// 
			this->locationLabel->AutoSize = true;
			this->locationLabel->Location = System::Drawing::Point(104, 118);
			this->locationLabel->Name = L"locationLabel";
			this->locationLabel->Size = System::Drawing::Size(100, 25);
			this->locationLabel->TabIndex = 0;
			this->locationLabel->Text = L"Location:";
			this->locationLabel->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// locationBox
			// 
			this->locationBox->Location = System::Drawing::Point(210, 115);
			this->locationBox->Name = L"locationBox";
			this->locationBox->Size = System::Drawing::Size(459, 31);
			this->locationBox->TabIndex = 1;
			this->locationBox->Text = L"C:\\";
			// 
			// browseBtn
			// 
			this->browseBtn->Location = System::Drawing::Point(692, 112);
			this->browseBtn->Name = L"browseBtn";
			this->browseBtn->Size = System::Drawing::Size(109, 36);
			this->browseBtn->TabIndex = 2;
			this->browseBtn->Text = L"Browse";
			this->browseBtn->UseVisualStyleBackColor = true;
			this->browseBtn->Click += gcnew System::EventHandler(this, &MyForm::BrowseBtn_Click);
			// 
			// exportLabel
			// 
			this->exportLabel->AutoSize = true;
			this->exportLabel->Location = System::Drawing::Point(109, 181);
			this->exportLabel->Name = L"exportLabel";
			this->exportLabel->Size = System::Drawing::Size(80, 25);
			this->exportLabel->TabIndex = 3;
			this->exportLabel->Text = L"Export:";
			// 
			// exportBox
			// 
			this->exportBox->Location = System::Drawing::Point(210, 178);
			this->exportBox->Name = L"exportBox";
			this->exportBox->Size = System::Drawing::Size(459, 31);
			this->exportBox->TabIndex = 4;
			this->exportBox->Text = L"C:\\";
			// 
			// windloadInfoBox
			// 
			this->windloadInfoBox->Controls->Add(this->groupBox1);
			this->windloadInfoBox->Controls->Add(this->label2);
			this->windloadInfoBox->Controls->Add(this->label1);
			this->windloadInfoBox->Location = System::Drawing::Point(114, 287);
			this->windloadInfoBox->Name = L"windloadInfoBox";
			this->windloadInfoBox->Size = System::Drawing::Size(1028, 646);
			this->windloadInfoBox->TabIndex = 5;
			this->windloadInfoBox->TabStop = false;
			this->windloadInfoBox->Text = L"WindLoad Information";
			this->windloadInfoBox->Enter += gcnew System::EventHandler(this, &MyForm::GroupBox1_Enter);
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(96, 215);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(379, 377);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Desired Windload:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::Label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(379, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Current Windload:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click_1);
			// 
			// owchLabel
			// 
			this->owchLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->owchLabel->AutoSize = true;
			this->owchLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F));
			this->owchLabel->Location = System::Drawing::Point(413, 9);
			this->owchLabel->Name = L"owchLabel";
			this->owchLabel->Size = System::Drawing::Size(463, 33);
			this->owchLabel->TabIndex = 6;
			this->owchLabel->Text = L"OCalc Windload Correction Helper";
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &MyForm::FolderBrowserDialog1_HelpRequest);
			// 
			// browsebtn2
			// 
			this->browsebtn2->Location = System::Drawing::Point(692, 175);
			this->browsebtn2->Name = L"browsebtn2";
			this->browsebtn2->Size = System::Drawing::Size(109, 36);
			this->browsebtn2->TabIndex = 7;
			this->browsebtn2->Text = L"Browse";
			this->browsebtn2->UseVisualStyleBackColor = true;
			this->browsebtn2->Click += gcnew System::EventHandler(this, &MyForm::Browsebtn2_Click);
			// 
			// folderBrowserDialog2
			// 
			this->folderBrowserDialog2->HelpRequest += gcnew System::EventHandler(this, &MyForm::FolderBrowserDialog2_HelpRequest);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1321, 1036);
			this->Controls->Add(this->browsebtn2);
			this->Controls->Add(this->owchLabel);
			this->Controls->Add(this->windloadInfoBox);
			this->Controls->Add(this->exportBox);
			this->Controls->Add(this->exportLabel);
			this->Controls->Add(this->browseBtn);
			this->Controls->Add(this->locationBox);
			this->Controls->Add(this->locationLabel);
			this->Name = L"MyForm";
			this->Text = L"OWCH";
			this->windloadInfoBox->ResumeLayout(false);
			this->windloadInfoBox->PerformLayout();
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
	this->locationBox->Text = folderBrowserDialog1->SelectedPath;
}
private: System::Void FolderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Browsebtn2_Click(System::Object^ sender, System::EventArgs^ e) {
	folderBrowserDialog2->ShowDialog();
	this->exportBox->Text = folderBrowserDialog2->SelectedPath;
}
private: System::Void FolderBrowserDialog2_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
}
};
}
