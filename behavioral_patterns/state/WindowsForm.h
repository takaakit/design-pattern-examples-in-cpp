#pragma once

namespace state {

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
	private: System::Windows::Forms::TextBox^ text_time;
	private: System::Windows::Forms::TextBox^ text_message;
	private: System::Windows::Forms::Button^ button_use;
	private: System::Windows::Forms::Button^ button_alarm;
	private: System::Windows::Forms::Button^ button_phone;
	private: System::Windows::Forms::Button^ button_exit;

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
			this->text_message = (gcnew System::Windows::Forms::TextBox());
			this->button_use = (gcnew System::Windows::Forms::Button());
			this->button_alarm = (gcnew System::Windows::Forms::Button());
			this->button_phone = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->text_time = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// text_message
			// 
			this->text_message->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->text_message->BackColor = System::Drawing::SystemColors::Window;
			this->text_message->Location = System::Drawing::Point(1, 39);
			this->text_message->Multiline = true;
			this->text_message->Name = L"text_message";
			this->text_message->ReadOnly = true;
			this->text_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->text_message->Size = System::Drawing::Size(498, 287);
			this->text_message->TabIndex = 0;
			// 
			// button_use
			// 
			this->button_use->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button_use->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button_use->Location = System::Drawing::Point(1, 340);
			this->button_use->Name = L"button_use";
			this->button_use->Size = System::Drawing::Size(120, 30);
			this->button_use->TabIndex = 1;
			this->button_use->Text = L"Use";
			this->button_use->UseVisualStyleBackColor = true;
			// 
			// button_alarm
			// 
			this->button_alarm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button_alarm->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button_alarm->Location = System::Drawing::Point(127, 340);
			this->button_alarm->Name = L"button_alarm";
			this->button_alarm->Size = System::Drawing::Size(120, 30);
			this->button_alarm->TabIndex = 2;
			this->button_alarm->Text = L"Alarm";
			this->button_alarm->UseVisualStyleBackColor = true;
			// 
			// button_phone
			// 
			this->button_phone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button_phone->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button_phone->Location = System::Drawing::Point(253, 340);
			this->button_phone->Name = L"button_phone";
			this->button_phone->Size = System::Drawing::Size(120, 30);
			this->button_phone->TabIndex = 3;
			this->button_phone->Text = L"Phone";
			this->button_phone->UseVisualStyleBackColor = true;
			// 
			// button_exit
			// 
			this->button_exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button_exit->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button_exit->Location = System::Drawing::Point(379, 340);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(120, 30);
			this->button_exit->TabIndex = 4;
			this->button_exit->Text = L"Exit";
			this->button_exit->UseVisualStyleBackColor = true;
			// 
			// text_time
			// 
			this->text_time->BackColor = System::Drawing::SystemColors::Window;
			this->text_time->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->text_time->Location = System::Drawing::Point(1, 6);
			this->text_time->Name = L"text_time";
			this->text_time->ReadOnly = true;
			this->text_time->Size = System::Drawing::Size(200, 27);
			this->text_time->TabIndex = 5;
			// 
			// WindowsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 381);
			this->Controls->Add(this->text_time);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_phone);
			this->Controls->Add(this->button_alarm);
			this->Controls->Add(this->button_use);
			this->Controls->Add(this->text_message);
			this->Name = L"WindowsForm";
			this->Text = L"State Example";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		System::Windows::Forms::TextBox^ getTextTime();
		System::Windows::Forms::TextBox^ getTextMessage();
		System::Windows::Forms::Button^ getButtonUse();
		System::Windows::Forms::Button^ getButtonAlarm();
		System::Windows::Forms::Button^ getButtonPhone();
		System::Windows::Forms::Button^ getButtonExit();

	};
}
