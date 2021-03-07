#pragma once

namespace command {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WindowsForm
	/// </summary>
	public ref class WindowsForm : public System::Windows::Forms::Form
	{
	public:
		WindowsForm(void)
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
		~WindowsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ picture_box;
	protected:

	private: System::Windows::Forms::Button^ button_undo;
	private: System::Windows::Forms::Button^ button_clear;
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
			this->picture_box = (gcnew System::Windows::Forms::PictureBox());
			this->button_undo = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_box))->BeginInit();
			this->SuspendLayout();
			// 
			// picture_box
			// 
			this->picture_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->picture_box->BackColor = System::Drawing::SystemColors::Window;
			this->picture_box->Location = System::Drawing::Point(0, 1);
			this->picture_box->Name = L"picture_box";
			this->picture_box->Size = System::Drawing::Size(572, 375);
			this->picture_box->TabIndex = 0;
			this->picture_box->TabStop = false;
			// 
			// button_undo
			// 
			this->button_undo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button_undo->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button_undo->Location = System::Drawing::Point(160, 386);
			this->button_undo->Name = L"button_undo";
			this->button_undo->Size = System::Drawing::Size(120, 30);
			this->button_undo->TabIndex = 1;
			this->button_undo->TabStop = false;
			this->button_undo->Text = L"Undo";
			this->button_undo->UseVisualStyleBackColor = true;
			// 
			// button_clear
			// 
			this->button_clear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button_clear->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button_clear->Location = System::Drawing::Point(286, 386);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(120, 30);
			this->button_clear->TabIndex = 2;
			this->button_clear->TabStop = false;
			this->button_clear->Text = L"Clear";
			this->button_clear->UseVisualStyleBackColor = true;
			// 
			// WindowsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 428);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_undo);
			this->Controls->Add(this->picture_box);
			this->Name = L"WindowsForm";
			this->Text = L"Command Example";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_box))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		System::Windows::Forms::PictureBox^ getPictureBox();
		System::Windows::Forms::Button^ getButtonUndo();
		System::Windows::Forms::Button^ getButtonClear();

	};
}
