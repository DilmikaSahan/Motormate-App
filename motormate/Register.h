#pragma once
#include "DatabaseManager.h"

namespace Motormate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tb_email;

	private: System::Windows::Forms::TextBox^ tb_phoneNumber;
	private: System::Windows::Forms::TextBox^ tb_fullName;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tb_password;
	private: System::Windows::Forms::TextBox^ tb_userName;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btn_submit;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tb_address;
	private: System::Windows::Forms::Label^ label9;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_submit = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tb_password = (gcnew System::Windows::Forms::TextBox());
			this->tb_userName = (gcnew System::Windows::Forms::TextBox());
			this->tb_address = (gcnew System::Windows::Forms::TextBox());
			this->tb_email = (gcnew System::Windows::Forms::TextBox());
			this->tb_phoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->tb_fullName = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(884, 561);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(481, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(403, 561);
			this->panel3->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(403, 561);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btn_submit);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->tb_password);
			this->panel2->Controls->Add(this->tb_userName);
			this->panel2->Controls->Add(this->tb_address);
			this->panel2->Controls->Add(this->tb_email);
			this->panel2->Controls->Add(this->tb_phoneNumber);
			this->panel2->Controls->Add(this->tb_fullName);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(485, 561);
			this->panel2->TabIndex = 0;
			// 
			// btn_submit
			// 
			this->btn_submit->BackColor = System::Drawing::Color::Gold;
			this->btn_submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_submit->Location = System::Drawing::Point(361, 369);
			this->btn_submit->Name = L"btn_submit";
			this->btn_submit->Size = System::Drawing::Size(75, 23);
			this->btn_submit->TabIndex = 6;
			this->btn_submit->Text = L"Submit";
			this->btn_submit->UseVisualStyleBackColor = false;
			this->btn_submit->Click += gcnew System::EventHandler(this, &Register::btn_submit_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::IndianRed;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(258, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// tb_password
			// 
			this->tb_password->Location = System::Drawing::Point(189, 283);
			this->tb_password->Name = L"tb_password";
			this->tb_password->Size = System::Drawing::Size(247, 20);
			this->tb_password->TabIndex = 5;
			this->tb_password->TextChanged += gcnew System::EventHandler(this, &Register::tb_email_TextChanged);
			// 
			// tb_userName
			// 
			this->tb_userName->Location = System::Drawing::Point(189, 225);
			this->tb_userName->Name = L"tb_userName";
			this->tb_userName->Size = System::Drawing::Size(247, 20);
			this->tb_userName->TabIndex = 5;
			this->tb_userName->TextChanged += gcnew System::EventHandler(this, &Register::tb_email_TextChanged);
			// 
			// tb_address
			// 
			this->tb_address->Location = System::Drawing::Point(189, 189);
			this->tb_address->Name = L"tb_address";
			this->tb_address->Size = System::Drawing::Size(247, 20);
			this->tb_address->TabIndex = 5;
			this->tb_address->TextChanged += gcnew System::EventHandler(this, &Register::tb_email_TextChanged);
			// 
			// tb_email
			// 
			this->tb_email->Location = System::Drawing::Point(189, 154);
			this->tb_email->Name = L"tb_email";
			this->tb_email->Size = System::Drawing::Size(247, 20);
			this->tb_email->TabIndex = 5;
			this->tb_email->TextChanged += gcnew System::EventHandler(this, &Register::tb_email_TextChanged);
			// 
			// tb_phoneNumber
			// 
			this->tb_phoneNumber->Location = System::Drawing::Point(189, 120);
			this->tb_phoneNumber->Name = L"tb_phoneNumber";
			this->tb_phoneNumber->Size = System::Drawing::Size(247, 20);
			this->tb_phoneNumber->TabIndex = 5;
			// 
			// tb_fullName
			// 
			this->tb_fullName->Location = System::Drawing::Point(189, 88);
			this->tb_fullName->Name = L"tb_fullName";
			this->tb_fullName->Size = System::Drawing::Size(247, 20);
			this->tb_fullName->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(53, 189);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 23);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Address :";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(53, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Phone Number :";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(53, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Email :";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(53, 283);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Password :";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(53, 306);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(422, 34);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Create a strong password. It should be at least 6 characters and include \r\na mix "
				L"of letters and numbers.\r\n\r\n\r\n";
			this->label8->Click += gcnew System::EventHandler(this, &Register::label8_Click);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(53, 248);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(371, 23);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Choose a unique username. It must be 4–15 characters long and can include letters"
				L" and numbers.";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(53, 225);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"User Name :";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(53, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Full Name :";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(98, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register Form";
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(900, 600);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"Register";
			this->Text = L"Register";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tb_email_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_submit_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ fullName = tb_fullName->Text;
		String^ phone = tb_phoneNumber->Text;
		String^ email = tb_email->Text;
		String^ address = tb_address->Text;
		String^ username = tb_userName->Text;
		String^ password = tb_password->Text;
		String^ role = "user"; 

		if (fullName->Length == 0 || phone->Length == 0 || email->Length == 0 ||
			address->Length == 0 || username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please fill in all fields.");
			return;
		}

		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=VehicleServiceCenter_db;Integrated Security=True;";
			SqlConnection^ conn = gcnew SqlConnection(connStr);
			conn->Open();

			// Check if user already exists
			String^ checkQuery = "SELECT COUNT(*) FROM Users WHERE Username = @username OR Email = @email";
			SqlCommand^ checkCmd = gcnew SqlCommand(checkQuery, conn);
			checkCmd->Parameters->AddWithValue("@username", username);
			checkCmd->Parameters->AddWithValue("@email", email);
			int userCount = (int)checkCmd->ExecuteScalar();

			if (userCount > 0) {
				MessageBox::Show("User already registered with this username or email.");
				conn->Close();
				return;
			}

			// Insert new user
			String^ insertQuery = "INSERT INTO Users (FullName, PhoneNumber, Email, Address, Username, Password, Role) " +
				"VALUES (@fullname, @phone, @email, @address, @username, @password, @role)";
			SqlCommand^ insertCmd = gcnew SqlCommand(insertQuery, conn);
			insertCmd->Parameters->AddWithValue("@fullname", fullName);
			insertCmd->Parameters->AddWithValue("@phone", phone);
			insertCmd->Parameters->AddWithValue("@email", email);
			insertCmd->Parameters->AddWithValue("@address", address);
			insertCmd->Parameters->AddWithValue("@username", username);
			insertCmd->Parameters->AddWithValue("@password", password);
			insertCmd->Parameters->AddWithValue("@role", role);

			int rows = insertCmd->ExecuteNonQuery();
			if (rows > 0) {
				MessageBox::Show("Registration successful!");
				this->Close(); 

			}
			else {
				MessageBox::Show("Registration failed.");
			}
			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	tb_fullName->Text = "";
	tb_address->Text = "";
	tb_email->Text = "";
	tb_phoneNumber->Text = "";
	tb_password->Text = "";
	tb_password->Text = "";
}

};
}
