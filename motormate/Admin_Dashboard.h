#pragma once
#include "adminHistory.h"
#include "adminViewBooking.h"
#include "UpdateServices.h"
namespace Motormate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin_Dashboard
	/// </summary>
	public ref class Admin_Dashboard : public System::Windows::Forms::Form
	{
	public:
		Admin_Dashboard(void)
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
		~Admin_Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_addService;

	private: System::Windows::Forms::Button^ btn_srviceHistry;
	private: System::Windows::Forms::Button^ btn_logOut;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btn_bookingView;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin_Dashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btn_bookingView = (gcnew System::Windows::Forms::Button());
			this->btn_addService = (gcnew System::Windows::Forms::Button());
			this->btn_srviceHistry = (gcnew System::Windows::Forms::Button());
			this->btn_logOut = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(884, 561);
			this->panel1->TabIndex = 1;
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
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
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
			this->tableLayoutPanel1->Controls->Add(this->btn_bookingView, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_addService, 0, 1);
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
			// btn_bookingView
			// 
			this->btn_bookingView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_bookingView->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->btn_bookingView->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_bookingView->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_bookingView->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_bookingView->Location = System::Drawing::Point(3, 3);
			this->btn_bookingView->Name = L"btn_bookingView";
			this->btn_bookingView->Size = System::Drawing::Size(386, 85);
			this->btn_bookingView->TabIndex = 0;
			this->btn_bookingView->Text = L"View Bookings";
			this->btn_bookingView->UseVisualStyleBackColor = true;
			this->btn_bookingView->Click += gcnew System::EventHandler(this, &Admin_Dashboard::btn_bookingView_Click);
			// 
			// btn_addService
			// 
			this->btn_addService->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_addService->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->btn_addService->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_addService->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_addService->Location = System::Drawing::Point(3, 94);
			this->btn_addService->Name = L"btn_addService";
			this->btn_addService->Size = System::Drawing::Size(386, 85);
			this->btn_addService->TabIndex = 1;
			this->btn_addService->Text = L"Manage Services ";
			this->btn_addService->UseVisualStyleBackColor = true;
			this->btn_addService->Click += gcnew System::EventHandler(this, &Admin_Dashboard::btn_addService_Click);
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
			this->btn_srviceHistry->Click += gcnew System::EventHandler(this, &Admin_Dashboard::btn_srviceHistry_Click);
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
			this->btn_logOut->Click += gcnew System::EventHandler(this, &Admin_Dashboard::btn_logOut_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(884, 96);
			this->panel2->TabIndex = 2;
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
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semilight", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(377, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Welcome !";
			// 
			// Admin_Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(900, 600);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"Admin_Dashboard";
			this->Text = L"Admin Dashboard";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void btn_bookingView_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	adminViewBooking^ viewbkForm = gcnew adminViewBooking();
	viewbkForm->ShowDialog();  
	this->Show();
}

	private: System::Void btn_addService_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		UpdateServices^ upService = gcnew UpdateServices();
		upService->ShowDialog();  
		this->Show();
	}
private: System::Void btn_srviceHistry_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	adminHistory^ adminHistry = gcnew adminHistory();
	adminHistry->ShowDialog();  
	this->Show();
}
private: System::Void btn_logOut_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to log out?", "Confirm Logout",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		this->Hide();

	}
}
};
}
