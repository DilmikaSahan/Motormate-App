#pragma once
#include "DatabaseManager.h"
#include "Admin_Dashboard.h"
#include "Dashboard_User.h"
#include "Register.h"

namespace Motormate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lbl_password;
	private: System::Windows::Forms::Label^ lbl_userName;
	private: System::Windows::Forms::Label^ lbl_log;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tb_password;

	private: System::Windows::Forms::TextBox^ tb_username;

	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Button^ btn_login;
	private: System::Windows::Forms::Button^ btn_register;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->btn_register = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_password = (gcnew System::Windows::Forms::TextBox());
			this->tb_username = (gcnew System::Windows::Forms::TextBox());
			this->lbl_password = (gcnew System::Windows::Forms::Label());
			this->lbl_userName = (gcnew System::Windows::Forms::Label());
			this->lbl_log = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->panel2);
			this->panel4->Controls->Add(this->panel1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(884, 561);
			this->panel4->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightCyan;
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->btn_clear);
			this->panel2->Controls->Add(this->btn_login);
			this->panel2->Controls->Add(this->btn_register);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->tb_password);
			this->panel2->Controls->Add(this->tb_username);
			this->panel2->Controls->Add(this->lbl_password);
			this->panel2->Controls->Add(this->lbl_userName);
			this->panel2->Controls->Add(this->lbl_log);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(444, 561);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::panel2_Paint);
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(387, 163);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(27, 21);
			this->button1->TabIndex = 10;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// btn_clear
			// 
			this->btn_clear->BackColor = System::Drawing::Color::LightCoral;
			this->btn_clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clear->Location = System::Drawing::Point(218, 208);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(72, 32);
			this->btn_clear->TabIndex = 9;
			this->btn_clear->Text = L"clear";
			this->btn_clear->UseVisualStyleBackColor = false;
			this->btn_clear->Click += gcnew System::EventHandler(this, &Login::btn_clear_Click);
			// 
			// btn_login
			// 
			this->btn_login->BackColor = System::Drawing::Color::Orange;
			this->btn_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_login->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_login->Location = System::Drawing::Point(309, 208);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(72, 32);
			this->btn_login->TabIndex = 8;
			this->btn_login->Text = L"Log in";
			this->btn_login->UseVisualStyleBackColor = false;
			this->btn_login->Click += gcnew System::EventHandler(this, &Login::btn_login_Click);
			// 
			// btn_register
			// 
			this->btn_register->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->btn_register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_register->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_register->Location = System::Drawing::Point(167, 300);
			this->btn_register->Name = L"btn_register";
			this->btn_register->Size = System::Drawing::Size(72, 32);
			this->btn_register->TabIndex = 7;
			this->btn_register->Text = L"Register";
			this->btn_register->UseVisualStyleBackColor = false;
			this->btn_register->Click += gcnew System::EventHandler(this, &Login::btn_register_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 267);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(306, 30);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Don’t have an account\? Register here.";
			// 
			// tb_password
			// 
			this->tb_password->Location = System::Drawing::Point(167, 163);
			this->tb_password->Name = L"tb_password";
			this->tb_password->Size = System::Drawing::Size(214, 20);
			this->tb_password->TabIndex = 5;
			this->tb_password->UseSystemPasswordChar = true;
			// 
			// tb_username
			// 
			this->tb_username->Location = System::Drawing::Point(167, 126);
			this->tb_username->Name = L"tb_username";
			this->tb_username->Size = System::Drawing::Size(214, 20);
			this->tb_username->TabIndex = 4;
			// 
			// lbl_password
			// 
			this->lbl_password->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_password->Location = System::Drawing::Point(66, 163);
			this->lbl_password->Name = L"lbl_password";
			this->lbl_password->Size = System::Drawing::Size(100, 30);
			this->lbl_password->TabIndex = 3;
			this->lbl_password->Text = L"Password :";
			// 
			// lbl_userName
			// 
			this->lbl_userName->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_userName->Location = System::Drawing::Point(66, 123);
			this->lbl_userName->Name = L"lbl_userName";
			this->lbl_userName->Size = System::Drawing::Size(100, 30);
			this->lbl_userName->TabIndex = 2;
			this->lbl_userName->Text = L"User Name :";
			// 
			// lbl_log
			// 
			this->lbl_log->AutoSize = true;
			this->lbl_log->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_log->Location = System::Drawing::Point(65, 76);
			this->lbl_log->Name = L"lbl_log";
			this->lbl_log->Size = System::Drawing::Size(76, 30);
			this->lbl_log->TabIndex = 0;
			this->lbl_log->Text = L"Login ";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(442, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(442, 561);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(442, 561);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->panel4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(900, 600);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"Login";
			this->Text = L"Login";
			this->panel4->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void lbl_log_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_register_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Register^ reg = gcnew Register();
	reg->ShowDialog();
	this->Show();

	}
private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = tb_username->Text;
	String^ password = tb_password->Text;

	String^ role = DatabaseManager::GetUserRole(username, password);


	if (role == nullptr) {
		MessageBox::Show("Invalid username or password!", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (role == "admin") {
		this->Hide();
		Admin_Dashboard^ adminDash = gcnew Admin_Dashboard();
		adminDash->ShowDialog();
		tb_username->Text = "";
		tb_password->Text = "";


		this->Show();

	}
	else if (role == "user") {
		this->Hide();
		Dashboard_User^ udash = gcnew Dashboard_User();
		udash->ShowDialog();
		tb_username->Text = "";
		tb_password->Text = "";
		this->Show();


	}
}
private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tb_username->Text = "";
	this->tb_password->Text = "";

}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tb_password->UseSystemPasswordChar) {
		tb_password->UseSystemPasswordChar = false;  // un-mask

	}
	else {
		tb_password->UseSystemPasswordChar = true;   // mask

	}

}
};
}
