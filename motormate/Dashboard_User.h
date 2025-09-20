#pragma once
#include "ViewService.h"
#include "Booking.h"
#include "History.h"
namespace Motormate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard_User
	/// </summary>
	public ref class Dashboard_User : public System::Windows::Forms::Form
	{
	public:
		Dashboard_User(void)
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
		~Dashboard_User()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_serviceView;
	private: System::Windows::Forms::Button^ btn_bookService;
	private: System::Windows::Forms::Button^ btn_srviceHistry;
	private: System::Windows::Forms::Button^ btn_logOut;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lb_welcome;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard_User::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btn_serviceView = (gcnew System::Windows::Forms::Button());
			this->btn_bookService = (gcnew System::Windows::Forms::Button());
			this->btn_srviceHistry = (gcnew System::Windows::Forms::Button());
			this->btn_logOut = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb_welcome = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(884, 561);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->tableLayoutPanel1);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->lb_welcome);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(884, 561);
			this->panel2->TabIndex = 1;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(223, 428);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 88);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(223, 334);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 88);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(223, 240);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 88);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(223, 149);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 88);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->btn_serviceView, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_bookService, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn_srviceHistry, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn_logOut, 0, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(326, 149);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(392, 365);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// btn_serviceView
			// 
			this->btn_serviceView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_serviceView->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->btn_serviceView->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_serviceView->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_serviceView->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_serviceView->Location = System::Drawing::Point(3, 3);
			this->btn_serviceView->Name = L"btn_serviceView";
			this->btn_serviceView->Size = System::Drawing::Size(386, 85);
			this->btn_serviceView->TabIndex = 0;
			this->btn_serviceView->Text = L"View Services";
			this->btn_serviceView->UseVisualStyleBackColor = true;
			this->btn_serviceView->Click += gcnew System::EventHandler(this, &Dashboard_User::btn_serviceView_Click);
			// 
			// btn_bookService
			// 
			this->btn_bookService->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_bookService->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->btn_bookService->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_bookService->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_bookService->Location = System::Drawing::Point(3, 94);
			this->btn_bookService->Name = L"btn_bookService";
			this->btn_bookService->Size = System::Drawing::Size(386, 85);
			this->btn_bookService->TabIndex = 1;
			this->btn_bookService->Text = L"Book Services";
			this->btn_bookService->UseVisualStyleBackColor = true;
			this->btn_bookService->Click += gcnew System::EventHandler(this, &Dashboard_User::btn_bookService_Click);
			// 
			// btn_srviceHistry
			// 
			this->btn_srviceHistry->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_srviceHistry->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->btn_srviceHistry->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_srviceHistry->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_srviceHistry->Location = System::Drawing::Point(3, 185);
			this->btn_srviceHistry->Name = L"btn_srviceHistry";
			this->btn_srviceHistry->Size = System::Drawing::Size(386, 85);
			this->btn_srviceHistry->TabIndex = 1;
			this->btn_srviceHistry->Text = L"View Service History ";
			this->btn_srviceHistry->UseVisualStyleBackColor = true;
			this->btn_srviceHistry->Click += gcnew System::EventHandler(this, &Dashboard_User::btn_srviceHistry_Click);
			// 
			// btn_logOut
			// 
			this->btn_logOut->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_logOut->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->btn_logOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_logOut->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_logOut->Location = System::Drawing::Point(3, 276);
			this->btn_logOut->Name = L"btn_logOut";
			this->btn_logOut->Size = System::Drawing::Size(386, 86);
			this->btn_logOut->TabIndex = 1;
			this->btn_logOut->Text = L"Log Out";
			this->btn_logOut->UseVisualStyleBackColor = true;
			this->btn_logOut->Click += gcnew System::EventHandler(this, &Dashboard_User::btn_logOut_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(884, 96);
			this->panel3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(240, 20, 20, 20);
			this->label1->Size = System::Drawing::Size(884, 96);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Motormate e-service center";
			// 
			// lb_welcome
			// 
			this->lb_welcome->AutoSize = true;
			this->lb_welcome->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semilight", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_welcome->Location = System::Drawing::Point(360, 108);
			this->lb_welcome->Name = L"lb_welcome";
			this->lb_welcome->Size = System::Drawing::Size(0, 30);
			this->lb_welcome->TabIndex = 1;
			// 
			// Dashboard_User
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(900, 600);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"Dashboard_User";
			this->Text = L"User Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard_User::Dashboard_User_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_serviceView_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ViewService^ viewservice = gcnew ViewService();
		viewservice->ShowDialog();
		this->Show();
	}
	private: System::Void btn_bookService_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Booking^ booking = gcnew Booking();
		booking->ShowDialog();
		this->Show();
}
private: System::Void btn_srviceHistry_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		History^ hstry = gcnew History();
		hstry->ShowDialog();
		this->Show();
}
private: System::Void btn_logOut_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to log out?", "Confirm Logout",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		this->Hide();  

	}
}
private: System::Void Dashboard_User_Load(System::Object^ sender, System::EventArgs^ e) {
	int userID = SessionManager::CurrentUserID;
	String^ username = DatabaseManager::GetUsernameByID(userID);
	if (username != nullptr)
	{
		lb_welcome->Text = "Welcome " + username + " !";
	}
	else
	{
		lb_welcome->Text = "Welcome!";
	}
}
};
}
