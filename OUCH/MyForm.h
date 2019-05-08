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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SuspendLayout();
			// 
			// locationLabel
			// 
			this->locationLabel->AutoSize = true;
			this->locationLabel->Location = System::Drawing::Point(63, 53);
			this->locationLabel->Name = L"locationLabel";
			this->locationLabel->Size = System::Drawing::Size(100, 25);
			this->locationLabel->TabIndex = 0;
			this->locationLabel->Text = L"Location:";
			this->locationLabel->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// locationBox
			// 
			this->locationBox->Location = System::Drawing::Point(169, 50);
			this->locationBox->Name = L"locationBox";
			this->locationBox->Size = System::Drawing::Size(459, 31);
			this->locationBox->TabIndex = 1;
			this->locationBox->Text = L"C:\\";
			// 
			// browseBtn
			// 
			this->browseBtn->Location = System::Drawing::Point(651, 47);
			this->browseBtn->Name = L"browseBtn";
			this->browseBtn->Size = System::Drawing::Size(109, 36);
			this->browseBtn->TabIndex = 2;
			this->browseBtn->Text = L"Browse";
			this->browseBtn->UseVisualStyleBackColor = true;
			// 
			// exportLabel
			// 
			this->exportLabel->AutoSize = true;
			this->exportLabel->Location = System::Drawing::Point(68, 116);
			this->exportLabel->Name = L"exportLabel";
			this->exportLabel->Size = System::Drawing::Size(80, 25);
			this->exportLabel->TabIndex = 3;
			this->exportLabel->Text = L"Export:";
			// 
			// exportBox
			// 
			this->exportBox->Location = System::Drawing::Point(169, 113);
			this->exportBox->Name = L"exportBox";
			this->exportBox->Size = System::Drawing::Size(459, 31);
			this->exportBox->TabIndex = 4;
			this->exportBox->Text = L"C:\\";
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(73, 222);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(687, 317);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(837, 701);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->exportBox);
			this->Controls->Add(this->exportLabel);
			this->Controls->Add(this->browseBtn);
			this->Controls->Add(this->locationBox);
			this->Controls->Add(this->locationLabel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
