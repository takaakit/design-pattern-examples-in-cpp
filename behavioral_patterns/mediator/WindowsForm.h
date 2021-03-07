#pragma once

namespace mediator {

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
	private: System::Windows::Forms::RadioButton^ forms_radio_guest;
	private: System::Windows::Forms::RadioButton^ forms_radio_login;
	private: System::Windows::Forms::TextBox^ forms_text_username;
	private: System::Windows::Forms::TextBox^ forms_text_password;
	protected:




	private: System::Windows::Forms::Label^ forms_label_username;
	private: System::Windows::Forms::Label^ forms_label_password;
	private: System::Windows::Forms::Button^ forms_button_ok;
	private: System::Windows::Forms::Button^ forms_button_cancel;




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
			this->forms_radio_guest = (gcnew System::Windows::Forms::RadioButton());
			this->forms_radio_login = (gcnew System::Windows::Forms::RadioButton());
			this->forms_text_username = (gcnew System::Windows::Forms::TextBox());
			this->forms_text_password = (gcnew System::Windows::Forms::TextBox());
			this->forms_label_username = (gcnew System::Windows::Forms::Label());
			this->forms_label_password = (gcnew System::Windows::Forms::Label());
			this->forms_button_ok = (gcnew System::Windows::Forms::Button());
			this->forms_button_cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// forms_radio_guest
			// 
			this->forms_radio_guest->AutoSize = true;
			this->forms_radio_guest->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->forms_radio_guest->Location = System::Drawing::Point(12, 27);
			this->forms_radio_guest->Name = L"forms_radio_guest";
			this->forms_radio_guest->Size = System::Drawing::Size(80, 24);
			this->forms_radio_guest->TabIndex = 0;
			this->forms_radio_guest->TabStop = true;
			this->forms_radio_guest->Text = L"Guest";
			this->forms_radio_guest->UseVisualStyleBackColor = true;
			// 
			// forms_radio_login
			// 
			this->forms_radio_login->AutoSize = true;
			this->forms_radio_login->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->forms_radio_login->Location = System::Drawing::Point(108, 27);
			this->forms_radio_login->Name = L"forms_radio_login";
			this->forms_radio_login->Size = System::Drawing::Size(74, 24);
			this->forms_radio_login->TabIndex = 1;
			this->forms_radio_login->TabStop = true;
			this->forms_radio_login->Text = L"Login";
			this->forms_radio_login->UseVisualStyleBackColor = true;
			// 
			// forms_text_username
			// 
			this->forms_text_username->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->forms_text_username->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->forms_text_username->Location = System::Drawing::Point(114, 64);
			this->forms_text_username->Name = L"forms_text_username";
			this->forms_text_username->Size = System::Drawing::Size(210, 27);
			this->forms_text_username->TabIndex = 2;
			// 
			// forms_text_password
			// 
			this->forms_text_password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->forms_text_password->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->forms_text_password->Location = System::Drawing::Point(114, 104);
			this->forms_text_password->Name = L"forms_text_password";
			this->forms_text_password->PasswordChar = '*';
			this->forms_text_password->Size = System::Drawing::Size(210, 27);
			this->forms_text_password->TabIndex = 3;
			// 
			// forms_label_username
			// 
			this->forms_label_username->AutoSize = true;
			this->forms_label_username->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->forms_label_username->Location = System::Drawing::Point(8, 67);
			this->forms_label_username->Name = L"forms_label_username";
			this->forms_label_username->Size = System::Drawing::Size(97, 20);
			this->forms_label_username->TabIndex = 4;
			this->forms_label_username->Text = L"Username:";
			// 
			// forms_label_password
			// 
			this->forms_label_password->AutoSize = true;
			this->forms_label_password->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->forms_label_password->Location = System::Drawing::Point(8, 107);
			this->forms_label_password->Name = L"forms_label_password";
			this->forms_label_password->Size = System::Drawing::Size(93, 20);
			this->forms_label_password->TabIndex = 5;
			this->forms_label_password->Text = L"Password:";
			// 
			// forms_button_ok
			// 
			this->forms_button_ok->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->forms_button_ok->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->forms_button_ok->Location = System::Drawing::Point(118, 149);
			this->forms_button_ok->Name = L"forms_button_ok";
			this->forms_button_ok->Size = System::Drawing::Size(100, 30);
			this->forms_button_ok->TabIndex = 6;
			this->forms_button_ok->Text = L"OK";
			this->forms_button_ok->UseVisualStyleBackColor = true;
			// 
			// forms_button_cancel
			// 
			this->forms_button_cancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->forms_button_cancel->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->forms_button_cancel->Location = System::Drawing::Point(224, 149);
			this->forms_button_cancel->Name = L"forms_button_cancel";
			this->forms_button_cancel->Size = System::Drawing::Size(100, 30);
			this->forms_button_cancel->TabIndex = 7;
			this->forms_button_cancel->Text = L"Cancel";
			this->forms_button_cancel->UseVisualStyleBackColor = true;
			// 
			// WindowsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(332, 203);
			this->Controls->Add(this->forms_button_cancel);
			this->Controls->Add(this->forms_button_ok);
			this->Controls->Add(this->forms_label_password);
			this->Controls->Add(this->forms_label_username);
			this->Controls->Add(this->forms_text_password);
			this->Controls->Add(this->forms_text_username);
			this->Controls->Add(this->forms_radio_login);
			this->Controls->Add(this->forms_radio_guest);
			this->Name = L"WindowsForm";
			this->Text = L"Mediator Example";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		System::Windows::Forms::RadioButton^ getFormsRadioGuest();
		System::Windows::Forms::RadioButton^ getFormsRadioLogin();
		System::Windows::Forms::TextBox^ getFormsTextUsername();
		System::Windows::Forms::TextBox^ getFormsTextPassword();
		System::Windows::Forms::Button^ getFormsButtonOk();
		System::Windows::Forms::Button^ getFormsButtonCancel();
	};
}
