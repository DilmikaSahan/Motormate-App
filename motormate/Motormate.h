#pragma once
#include "Login.h"


namespace Motormate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for motormate
	/// </summary>
	public ref class motormate : public System::Windows::Forms::Form
	{
	public:
		motormate(void)
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
		~motormate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ welcome;
	private: System::Windows::Forms::Button^ btn_start;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(motormate::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_start = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->welcome = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->btn_start);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->Title);
			this->panel1->Controls->Add(this->welcome);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(884, 561);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &motormate::panel1_Paint);
			// 
			// btn_start
			// 
			this->btn_start->BackColor = System::Drawing::Color::Transparent;
			this->btn_start->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_start->Location = System::Drawing::Point(338, 178);
			this->btn_start->Name = L"btn_start";
			this->btn_start->Size = System::Drawing::Size(196, 70);
			this->btn_start->TabIndex = 3;
			this->btn_start->Text = L"START";
			this->btn_start->UseVisualStyleBackColor = false;
			this->btn_start->Click += gcnew System::EventHandler(this, &motormate::btn_start_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 329);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(884, 232);
			this->panel2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(884, 232);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Title
			// 
			this->Title->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->Location = System::Drawing::Point(274, 93);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(416, 41);
			this->Title->TabIndex = 0;
			this->Title->Text = L"Motormate e-service center";
			// 
			// welcome
			// 
			this->welcome->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcome->Location = System::Drawing::Point(282, 134);
			this->welcome->Name = L"welcome";
			this->welcome->Size = System::Drawing::Size(347, 47);
			this->welcome->TabIndex = 2;
			this->welcome->Text = L"Welcome to the Vehicle Service Center Management System";
			// 
			// motormate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(900, 600);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"motormate";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"motormate";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void btn_start_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); 
	Login^ login = gcnew Login();
	login->ShowDialog(); 
	this->Close(); 
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
