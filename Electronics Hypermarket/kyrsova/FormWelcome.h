#pragma once
#include <cstdlib>

#include "Electronics.h"
#include "Employees.h"
#include "Contacts.h"
#include "Delivery.h"
#include "Adresses.h"

namespace kyrsova {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormWelcome
	/// </summary>
	public ref class FormWelcome : public System::Windows::Forms::Form
	{
	public:
		int budget = -1;
		System::String^ CCart = "";
		System::String^ CName = "";
		int CPrice = 0, CAmount = 0;
		bool buffStore = 0;

		FormWelcome(void)
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
		~FormWelcome()
		{
			if (components)
			{
				delete components;
			}
		}
		//Buttons
	private: System::Windows::Forms::Button^ buttonCart;
	private: System::Windows::Forms::Button^ buttonMoney;
	private: System::Windows::Forms::Button^ buttonToAdresses;
	private: System::Windows::Forms::Button^ buttonToAS;
	private: System::Windows::Forms::Button^ buttonToCD;
	private: System::Windows::Forms::Button^ buttonToContacts;
	private: System::Windows::Forms::Button^ buttonToDelivery;
	private: System::Windows::Forms::Button^ buttonToEmail;
	private: System::Windows::Forms::Button^ buttonToEmployees;
	private: System::Windows::Forms::Button^ buttonToHD;
	private: System::Windows::Forms::Button^ buttonToLeave;
	private: System::Windows::Forms::Button^ buttonToLeaveAdresses;
	private: System::Windows::Forms::Button^ buttonToLeaveAS;
	private: System::Windows::Forms::Button^ buttonToLeaveCD;
	private: System::Windows::Forms::Button^ buttonToLeaveContacts;
	private: System::Windows::Forms::Button^ buttonToLeaveDelivery;
	private: System::Windows::Forms::Button^ buttonToLeaveEmails;
	private: System::Windows::Forms::Button^ buttonToLeaveEmployees;
	private: System::Windows::Forms::Button^ buttonToLeaveHD;
	private: System::Windows::Forms::Button^ buttonToLeaveMP;
	private: System::Windows::Forms::Button^ buttonToLeaveOA;
	private: System::Windows::Forms::Button^ buttonToLeaveOP;
	private: System::Windows::Forms::Button^ buttonToLeavePhones;
	private: System::Windows::Forms::Button^ buttonToLeaveStore;
	private: System::Windows::Forms::Button^ buttonToMP;
	private: System::Windows::Forms::Button^ buttonToMenu;
	private: System::Windows::Forms::Button^ buttonToOA;
	private: System::Windows::Forms::Button^ buttonToOP;
	private: System::Windows::Forms::Button^ buttonToPhone;
	private: System::Windows::Forms::Button^ buttonToStore;
		   //Combo Boxes
	private: System::Windows::Forms::ComboBox^ boxAccessories;
	private: System::Windows::Forms::ComboBox^ boxAS;
	private: System::Windows::Forms::ComboBox^ boxCategories;
	private: System::Windows::Forms::ComboBox^ boxCD;
	private: System::Windows::Forms::ComboBox^ boxDevices;
	private: System::Windows::Forms::ComboBox^ boxEmails;
	private: System::Windows::Forms::ComboBox^ boxHA;
	private: System::Windows::Forms::ComboBox^ boxHD;
	private: System::Windows::Forms::ComboBox^ boxOA;
	private: System::Windows::Forms::ComboBox^ boxPCC;
	private: System::Windows::Forms::ComboBox^ boxPhones;
	private: System::Windows::Forms::ComboBox^ boxProffesionsOP;
	private: System::Windows::Forms::ComboBox^ boxProffesionsMP;
		   //Labels
	private: System::Windows::Forms::Label^ labelPress;
	private: System::Windows::Forms::Label^ labelBudget;
	private: System::Windows::Forms::Label^ labelContact1;
	private: System::Windows::Forms::Label^ labelContact2;
	private: System::Windows::Forms::Label^ labelContact3;
	private: System::Windows::Forms::Label^ labelContact4;
	private: System::Windows::Forms::Label^ labelContact5;
	private: System::Windows::Forms::Label^ labelContact6;
	private: System::Windows::Forms::Label^ labelContact7;
	private: System::Windows::Forms::Label^ labelCountry;
	private: System::Windows::Forms::Label^ labelCountry1;
	private: System::Windows::Forms::Label^ labelCountry2;
	private: System::Windows::Forms::Label^ labelCountry3;
	private: System::Windows::Forms::Label^ labelCountry4;
	private: System::Windows::Forms::Label^ labelCountry5;
	private: System::Windows::Forms::Label^ labelCountry6;
	private: System::Windows::Forms::Label^ labelCountry7;
	private: System::Windows::Forms::Label^ labelCountry8;
	private: System::Windows::Forms::Label^ labelCountry9;
	private: System::Windows::Forms::Label^ labelDefault;
	private: System::Windows::Forms::Label^ labelID;
	private: System::Windows::Forms::Label^ labelID1;
	private: System::Windows::Forms::Label^ labelID2;
	private: System::Windows::Forms::Label^ labelID3;
	private: System::Windows::Forms::Label^ labelID4;
	private: System::Windows::Forms::Label^ labelID5;
	private: System::Windows::Forms::Label^ labelID6;
	private: System::Windows::Forms::Label^ labelID7;
	private: System::Windows::Forms::Label^ labelID8;
	private: System::Windows::Forms::Label^ labelID9;
	private: System::Windows::Forms::Label^ labelLeft;
	private: System::Windows::Forms::Label^ labelLeft1;
	private: System::Windows::Forms::Label^ labelLeft2;
	private: System::Windows::Forms::Label^ labelLeft3;
	private: System::Windows::Forms::Label^ labelLeft4;
	private: System::Windows::Forms::Label^ labelLeft5;
	private: System::Windows::Forms::Label^ labelLeft6;
	private: System::Windows::Forms::Label^ labelLeft7;
	private: System::Windows::Forms::Label^ labelLeft8;
	private: System::Windows::Forms::Label^ labelLeft9;
	private: System::Windows::Forms::Label^ labelName1;
	private: System::Windows::Forms::Label^ labelName2;
	private: System::Windows::Forms::Label^ labelName3;
	private: System::Windows::Forms::Label^ labelName4;
	private: System::Windows::Forms::Label^ labelName5;
	private: System::Windows::Forms::Label^ labelName6;
	private: System::Windows::Forms::Label^ labelName7;
	private: System::Windows::Forms::Label^ labelPrice;
	private: System::Windows::Forms::Label^ labelPrice1;
	private: System::Windows::Forms::Label^ labelPrice2;
	private: System::Windows::Forms::Label^ labelPrice3;
	private: System::Windows::Forms::Label^ labelPrice4;
	private: System::Windows::Forms::Label^ labelPrice5;
	private: System::Windows::Forms::Label^ labelPrice6;
	private: System::Windows::Forms::Label^ labelPrice7;
	private: System::Windows::Forms::Label^ labelPrice8;
	private: System::Windows::Forms::Label^ labelPrice9;
	private: System::Windows::Forms::Label^ labelProduct;
	private: System::Windows::Forms::Label^ labelProduct1;
	private: System::Windows::Forms::Label^ labelProduct2;
	private: System::Windows::Forms::Label^ labelProduct3;
	private: System::Windows::Forms::Label^ labelProduct4;
	private: System::Windows::Forms::Label^ labelProduct5;
	private: System::Windows::Forms::Label^ labelProduct6;
	private: System::Windows::Forms::Label^ labelProduct7;
	private: System::Windows::Forms::Label^ labelProduct8;
	private: System::Windows::Forms::Label^ labelProduct9;
	private: System::Windows::Forms::Label^ labelTime1;
	private: System::Windows::Forms::Label^ labelTime2;
		   //Table Layout Panels
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelAdresses;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelContacts;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelDelivery;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelEmployees;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelMenu;
		   //Text Boxes
	private: System::Windows::Forms::TextBox^ textBoxMoney;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormWelcome::typeid));
			this->boxAccessories = (gcnew System::Windows::Forms::ComboBox());
			this->boxAS = (gcnew System::Windows::Forms::ComboBox());
			this->boxCategories = (gcnew System::Windows::Forms::ComboBox());
			this->boxCD = (gcnew System::Windows::Forms::ComboBox());
			this->boxDevices = (gcnew System::Windows::Forms::ComboBox());
			this->boxEmails = (gcnew System::Windows::Forms::ComboBox());
			this->boxHA = (gcnew System::Windows::Forms::ComboBox());
			this->boxHD = (gcnew System::Windows::Forms::ComboBox());
			this->boxOA = (gcnew System::Windows::Forms::ComboBox());
			this->boxPCC = (gcnew System::Windows::Forms::ComboBox());
			this->boxPhones = (gcnew System::Windows::Forms::ComboBox());
			this->boxProffesionsOP = (gcnew System::Windows::Forms::ComboBox());
			this->boxProffesionsMP = (gcnew System::Windows::Forms::ComboBox());
			this->buttonCart = (gcnew System::Windows::Forms::Button());
			this->buttonMoney = (gcnew System::Windows::Forms::Button());
			this->buttonToAdresses = (gcnew System::Windows::Forms::Button());
			this->buttonToAS = (gcnew System::Windows::Forms::Button());
			this->buttonToCD = (gcnew System::Windows::Forms::Button());
			this->buttonToContacts = (gcnew System::Windows::Forms::Button());
			this->buttonToDelivery = (gcnew System::Windows::Forms::Button());
			this->buttonToEmail = (gcnew System::Windows::Forms::Button());
			this->buttonToEmployees = (gcnew System::Windows::Forms::Button());
			this->buttonToHD = (gcnew System::Windows::Forms::Button());
			this->buttonToLeave = (gcnew System::Windows::Forms::Button());
			this->buttonToLeaveAdresses = (gcnew System::Windows::Forms::Button());
			this->buttonToLeaveAS = (gcnew System::Windows::Forms::Button());
			this->buttonToLeaveCD = (gcnew System::Windows::Forms::Button());
			this->buttonToLeaveContacts = (gcnew System::Windows::Forms::Button());
			this->buttonToLeaveDelivery = (gcnew System::Windows::Forms::Button());
			this->buttonToLeaveEmails = (gcnew System::Windows::Forms::Button());
			this->buttonToLeaveEmployees = (gcnew System::Windows::Forms::Button());
			this->buttonToLeaveHD = (gcnew System::Windows::Forms::Button());
			this->buttonToLeaveMP = (gcnew System::Windows::Forms::Button());
			this->buttonToLeaveOA = (gcnew System::Windows::Forms::Button());
			this->buttonToLeaveOP = (gcnew System::Windows::Forms::Button());
			this->buttonToLeavePhones = (gcnew System::Windows::Forms::Button());
			this->buttonToLeaveStore = (gcnew System::Windows::Forms::Button());
			this->buttonToMP = (gcnew System::Windows::Forms::Button());
			this->buttonToMenu = (gcnew System::Windows::Forms::Button());
			this->buttonToOA = (gcnew System::Windows::Forms::Button());
			this->buttonToOP = (gcnew System::Windows::Forms::Button());
			this->buttonToPhone = (gcnew System::Windows::Forms::Button());
			this->buttonToStore = (gcnew System::Windows::Forms::Button());
			this->labelPress = (gcnew System::Windows::Forms::Label());
			this->labelBudget = (gcnew System::Windows::Forms::Label());
			this->labelContact1 = (gcnew System::Windows::Forms::Label());
			this->labelContact2 = (gcnew System::Windows::Forms::Label());
			this->labelContact3 = (gcnew System::Windows::Forms::Label());
			this->labelContact4 = (gcnew System::Windows::Forms::Label());
			this->labelContact5 = (gcnew System::Windows::Forms::Label());
			this->labelContact6 = (gcnew System::Windows::Forms::Label());
			this->labelContact7 = (gcnew System::Windows::Forms::Label());
			this->labelCountry = (gcnew System::Windows::Forms::Label());
			this->labelCountry1 = (gcnew System::Windows::Forms::Label());
			this->labelCountry2 = (gcnew System::Windows::Forms::Label());
			this->labelCountry3 = (gcnew System::Windows::Forms::Label());
			this->labelCountry4 = (gcnew System::Windows::Forms::Label());
			this->labelCountry5 = (gcnew System::Windows::Forms::Label());
			this->labelCountry6 = (gcnew System::Windows::Forms::Label());
			this->labelCountry7 = (gcnew System::Windows::Forms::Label());
			this->labelCountry8 = (gcnew System::Windows::Forms::Label());
			this->labelCountry9 = (gcnew System::Windows::Forms::Label());
			this->labelDefault = (gcnew System::Windows::Forms::Label());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->labelID1 = (gcnew System::Windows::Forms::Label());
			this->labelID2 = (gcnew System::Windows::Forms::Label());
			this->labelID3 = (gcnew System::Windows::Forms::Label());
			this->labelID4 = (gcnew System::Windows::Forms::Label());
			this->labelID5 = (gcnew System::Windows::Forms::Label());
			this->labelID6 = (gcnew System::Windows::Forms::Label());
			this->labelID7 = (gcnew System::Windows::Forms::Label());
			this->labelID8 = (gcnew System::Windows::Forms::Label());
			this->labelID9 = (gcnew System::Windows::Forms::Label());
			this->labelLeft = (gcnew System::Windows::Forms::Label());
			this->labelLeft1 = (gcnew System::Windows::Forms::Label());
			this->labelLeft2 = (gcnew System::Windows::Forms::Label());
			this->labelLeft3 = (gcnew System::Windows::Forms::Label());
			this->labelLeft4 = (gcnew System::Windows::Forms::Label());
			this->labelLeft5 = (gcnew System::Windows::Forms::Label());
			this->labelLeft6 = (gcnew System::Windows::Forms::Label());
			this->labelLeft7 = (gcnew System::Windows::Forms::Label());
			this->labelLeft8 = (gcnew System::Windows::Forms::Label());
			this->labelLeft9 = (gcnew System::Windows::Forms::Label());
			this->labelName1 = (gcnew System::Windows::Forms::Label());
			this->labelName2 = (gcnew System::Windows::Forms::Label());
			this->labelName3 = (gcnew System::Windows::Forms::Label());
			this->labelName4 = (gcnew System::Windows::Forms::Label());
			this->labelName5 = (gcnew System::Windows::Forms::Label());
			this->labelName6 = (gcnew System::Windows::Forms::Label());
			this->labelName7 = (gcnew System::Windows::Forms::Label());
			this->labelPrice = (gcnew System::Windows::Forms::Label());
			this->labelPrice1 = (gcnew System::Windows::Forms::Label());
			this->labelPrice2 = (gcnew System::Windows::Forms::Label());
			this->labelPrice3 = (gcnew System::Windows::Forms::Label());
			this->labelPrice4 = (gcnew System::Windows::Forms::Label());
			this->labelPrice5 = (gcnew System::Windows::Forms::Label());
			this->labelPrice6 = (gcnew System::Windows::Forms::Label());
			this->labelPrice7 = (gcnew System::Windows::Forms::Label());
			this->labelPrice8 = (gcnew System::Windows::Forms::Label());
			this->labelPrice9 = (gcnew System::Windows::Forms::Label());
			this->labelProduct = (gcnew System::Windows::Forms::Label());
			this->labelProduct1 = (gcnew System::Windows::Forms::Label());
			this->labelProduct2 = (gcnew System::Windows::Forms::Label());
			this->labelProduct3 = (gcnew System::Windows::Forms::Label());
			this->labelProduct4 = (gcnew System::Windows::Forms::Label());
			this->labelProduct5 = (gcnew System::Windows::Forms::Label());
			this->labelProduct6 = (gcnew System::Windows::Forms::Label());
			this->labelProduct7 = (gcnew System::Windows::Forms::Label());
			this->labelProduct8 = (gcnew System::Windows::Forms::Label());
			this->labelProduct9 = (gcnew System::Windows::Forms::Label());
			this->labelTime1 = (gcnew System::Windows::Forms::Label());
			this->labelTime2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanelAdresses = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanelContacts = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanelDelivery = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanelEmployees = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanelMenu = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBoxMoney = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();

			//
			// buttonToMenu
			//
			this->buttonToMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonToMenu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonToMenu.BackgroundImage")));
			this->buttonToMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonToMenu->Location = System::Drawing::Point(841, 387);
			this->buttonToMenu->Name = L"buttonToMenu";
			this->buttonToMenu->Size = System::Drawing::Size(85, 85);
			this->buttonToMenu->TabIndex = 0;
			this->buttonToMenu->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToMenu_Click);
			//
			// labelDefault
			//
			this->labelDefault->AutoSize = true;
			this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDefault->Location = System::Drawing::Point(115, 180);
			this->labelDefault->Name = L"labelDefault";
			this->labelDefault->Size = System::Drawing::Size(729, 68);
			this->labelDefault->TabIndex = 0;
			this->labelDefault->Text = L"Welcome to the hypermarket!";
			//
			// FormWelcome
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(938, 484);
			this->Controls->Add(this->buttonToMenu);
			this->Controls->Add(this->labelDefault);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormWelcome";
			this->Text = L"Hypermarket";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void buttonToMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(625, 315);
		this->Controls->Remove(this->buttonToMenu);

		this->Controls->Add(this->tableLayoutPanelMenu);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(230, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(288, 59);
		this->labelDefault->TabIndex = 0;
		this->labelDefault->Text = L"Hypermarket";
		//
		// tableLayoutPanelMenu
		//
		this->tableLayoutPanelMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->tableLayoutPanelMenu->ColumnCount = 1;
		this->tableLayoutPanelMenu->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToLeave, 0, 5);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToAdresses, 0, 4);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToDelivery, 0, 3);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToContacts, 0, 2);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToEmployees, 0, 1);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToStore, 0, 0);
		this->tableLayoutPanelMenu->Location = System::Drawing::Point(12, 71);
		this->tableLayoutPanelMenu->Name = L"tableLayoutPanelMenu";
		this->tableLayoutPanelMenu->RowCount = 6;
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->Size = System::Drawing::Size(600, 235);
		this->tableLayoutPanelMenu->TabIndex = 1;
		//
		// buttonToLeave
		//
		this->buttonToLeave->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeave->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToLeave->Location = System::Drawing::Point(3, 333);
		this->buttonToLeave->Name = L"buttonToLeave";
		this->buttonToLeave->Size = System::Drawing::Size(908, 60);
		this->buttonToLeave->TabIndex = 5;
		this->buttonToLeave->Text = L"Leave the Hypermarket";
		this->buttonToLeave->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeave->UseVisualStyleBackColor = false;
		this->buttonToLeave->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeave_Click);
		//
		// buttonToAdresses
		//
		this->buttonToAdresses->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToAdresses->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToAdresses->Location = System::Drawing::Point(3, 267);
		this->buttonToAdresses->Name = L"buttonToAdresses";
		this->buttonToAdresses->Size = System::Drawing::Size(908, 60);
		this->buttonToAdresses->TabIndex = 4;
		this->buttonToAdresses->Text = L"Adresses";
		this->buttonToAdresses->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToAdresses->UseVisualStyleBackColor = false;
		this->buttonToAdresses->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToAdresses_Click);
		//
		// buttonToDelivery
		//
		this->buttonToDelivery->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToDelivery->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToDelivery->Location = System::Drawing::Point(3, 201);
		this->buttonToDelivery->Name = L"buttonToDelivery";
		this->buttonToDelivery->Size = System::Drawing::Size(908, 60);
		this->buttonToDelivery->TabIndex = 3;
		this->buttonToDelivery->Text = L"Delivery";
		this->buttonToDelivery->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToDelivery->UseVisualStyleBackColor = false;
		this->buttonToDelivery->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToDelivery_Click);
		//
		// buttonToContacts
		//
		this->buttonToContacts->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToContacts->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToContacts->Location = System::Drawing::Point(3, 135);
		this->buttonToContacts->Name = L"buttonToContacts";
		this->buttonToContacts->Size = System::Drawing::Size(908, 60);
		this->buttonToContacts->TabIndex = 2;
		this->buttonToContacts->Text = L"Contacts";
		this->buttonToContacts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToContacts->UseVisualStyleBackColor = false;
		this->buttonToContacts->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToContacts_Click);
		//
		// buttonToEmployees
		//
		this->buttonToEmployees->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToEmployees->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToEmployees->Location = System::Drawing::Point(3, 69);
		this->buttonToEmployees->Name = L"buttonToEmployees";
		this->buttonToEmployees->Size = System::Drawing::Size(908, 60);
		this->buttonToEmployees->TabIndex = 1;
		this->buttonToEmployees->Text = L"Employees";
		this->buttonToEmployees->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToEmployees->UseVisualStyleBackColor = false;
		this->buttonToEmployees->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToEmployees_Click);
		//
		// buttonToStore
		//
		this->buttonToStore->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToStore->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToStore->Location = System::Drawing::Point(3, 3);
		this->buttonToStore->Name = L"buttonToStore";
		this->buttonToStore->Size = System::Drawing::Size(908, 60);
		this->buttonToStore->TabIndex = 0;
		this->buttonToStore->Text = L"Electronics store";
		this->buttonToStore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToStore->UseVisualStyleBackColor = false;
		this->buttonToStore->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToStore_Click);
	}

	private: System::Void buttonToLeave_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Thank you for visiting the Hypermarket!\n\n\tHave a nice day!");
		Application::Exit();
	}

	private: System::Void buttonToStore_Click(System::Object^ sender, System::EventArgs^ e) {
		if (budget == -1) {
			this->ClientSize = System::Drawing::Size(305, 165);
			this->Controls->Remove(this->tableLayoutPanelMenu);

			this->Controls->Add(this->buttonMoney);
			this->Controls->Add(this->textBoxMoney);
			//
			// labelDefault
			//
			this->labelDefault->AutoSize = true;
			this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
			this->labelDefault->Location = System::Drawing::Point(12, 9);
			this->labelDefault->Name = L"labelDefault";
			this->labelDefault->Size = System::Drawing::Size(277, 29);
			this->labelDefault->TabIndex = 0;
			this->labelDefault->Text = L"Enter your budget (in uah) ";
			//
			// textBoxMoney
			//
			this->textBoxMoney->Location = System::Drawing::Point(17, 58);
			this->textBoxMoney->Name = L"textBoxMoney";
			this->textBoxMoney->Size = System::Drawing::Size(272, 26);
			this->textBoxMoney->TabIndex = 1;
			//
			// buttonMoney
			//
			this->buttonMoney->Location = System::Drawing::Point(17, 95);
			this->buttonMoney->Name = L"buttonMoney";
			this->buttonMoney->Size = System::Drawing::Size(272, 54);
			this->buttonMoney->TabIndex = 2;
			this->buttonMoney->Text = L"OK";
			this->buttonMoney->UseVisualStyleBackColor = true;
			this->buttonMoney->Click += gcnew System::EventHandler(this, &FormWelcome::buttonMoney_Click);
		}
		else {
			if (textBoxMoney->Text != "-1") {
				budget = Convert::ToInt32(textBoxMoney->Text);
				textBoxMoney->Text = "-1";
			}

			this->ClientSize = System::Drawing::Size(625, 315);
			this->Controls->Remove(this->buttonMoney);
			this->Controls->Remove(this->textBoxMoney);
			this->Controls->Remove(this->tableLayoutPanelMenu);

			this->Controls->Add(this->boxCategories);
			//
			// labelDefault
			//
			this->labelDefault->AutoSize = true;
			this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelDefault->Location = System::Drawing::Point(12, 9);
			this->labelDefault->Name = L"labelDefault";
			this->labelDefault->Size = System::Drawing::Size(89, 24);
			this->labelDefault->TabIndex = 0;
			this->labelDefault->Text = L"Category:";
			//
			// boxCategories
			//
			this->boxCategories->BackColor = System::Drawing::Color::Silver;
			this->boxCategories->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->boxCategories->FormattingEnabled = true;
			this->boxCategories->Items->Clear();
			this->boxCategories->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Accessories", L"Devices", L"PC components",
					L"Household Appliances"
			});
			this->boxCategories->Location = System::Drawing::Point(107, 6);
			this->boxCategories->Name = L"boxCategories";
			this->boxCategories->Size = System::Drawing::Size(169, 32);
			this->boxCategories->TabIndex = 3;
			this->boxCategories->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxCategories_SelectedIndexChanged);
			//
			// buttonToLeaveStore
			//
			this->Controls->Add(this->buttonToLeaveStore);
			this->buttonToLeaveStore->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonToLeaveStore->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
			this->buttonToLeaveStore->Location = System::Drawing::Point(510, 280);
			this->buttonToLeaveStore->Name = L"buttonToLeaveStore";
			this->buttonToLeaveStore->Size = System::Drawing::Size(110, 30);
			this->buttonToLeaveStore->TabIndex = 2;
			this->buttonToLeaveStore->Text = L"Back to Menu";
			this->buttonToLeaveStore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonToLeaveStore->UseVisualStyleBackColor = false;
			this->buttonToLeaveStore->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeaveStore_Click);
		}
	}

	private: System::Void buttonMoney_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxMoney->Text != "-1") {
			budget = Convert::ToInt32(textBoxMoney->Text);
			textBoxMoney->Text = "-1";
		}

		this->ClientSize = System::Drawing::Size(625, 315);
		this->Controls->Remove(this->buttonMoney);
		this->Controls->Remove(this->textBoxMoney);
		this->Controls->Remove(this->tableLayoutPanelMenu);

		this->Controls->Add(this->boxCategories);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(89, 24);
		this->labelDefault->TabIndex = 0;
		this->labelDefault->Text = L"Category:";
		//
		// boxCategories
		//
		this->boxCategories->BackColor = System::Drawing::Color::Silver;
		this->boxCategories->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->boxCategories->FormattingEnabled = true;
		this->boxCategories->Items->Clear();
		this->boxCategories->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
			L"Accessories", L"Devices", L"PC components",
				L"Household Appliances"
		});
		this->boxCategories->Location = System::Drawing::Point(107, 6);
		this->boxCategories->Name = L"boxCategories";
		this->boxCategories->Size = System::Drawing::Size(169, 32);
		this->boxCategories->TabIndex = 3;
		this->boxCategories->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxCategories_SelectedIndexChanged);
		//
		// buttonToLeaveStore
		//
		this->Controls->Add(this->buttonToLeaveStore);
		this->buttonToLeaveStore->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeaveStore->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
		this->buttonToLeaveStore->Location = System::Drawing::Point(510, 280);
		this->buttonToLeaveStore->Name = L"buttonToLeaveStore";
		this->buttonToLeaveStore->Size = System::Drawing::Size(110, 30);
		this->buttonToLeaveStore->TabIndex = 2;
		this->buttonToLeaveStore->Text = L"Back to Menu";
		this->buttonToLeaveStore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeaveStore->UseVisualStyleBackColor = false;
		this->buttonToLeaveStore->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeaveStore_Click);
	}

	private: System::Void buttonToLeaveStore_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Remove(this->labelPress);
		this->Controls->Remove(this->labelBudget);
		this->Controls->Remove(this->buttonCart);
		this->Controls->Remove(this->boxCategories);
		this->Controls->Remove(this->boxAccessories);
		this->Controls->Remove(this->boxDevices);
		this->Controls->Remove(this->boxPCC);
		this->Controls->Remove(this->boxHA);
		this->Controls->Remove(this->labelProduct);
		this->Controls->Remove(this->labelCountry);
		this->Controls->Remove(this->labelPrice);
		this->Controls->Remove(this->labelLeft);
		this->Controls->Remove(this->labelID);
		this->Controls->Remove(this->labelProduct1);
		this->Controls->Remove(this->labelCountry1);
		this->Controls->Remove(this->labelPrice1);
		this->Controls->Remove(this->labelLeft1);
		this->Controls->Remove(this->labelID1);
		this->Controls->Remove(this->labelProduct2);
		this->Controls->Remove(this->labelCountry2);
		this->Controls->Remove(this->labelPrice2);
		this->Controls->Remove(this->labelLeft2);
		this->Controls->Remove(this->labelID2);
		this->Controls->Remove(this->labelProduct3);
		this->Controls->Remove(this->labelCountry3);
		this->Controls->Remove(this->labelPrice3);
		this->Controls->Remove(this->labelLeft3);
		this->Controls->Remove(this->labelID3);
		this->Controls->Remove(this->labelProduct4);
		this->Controls->Remove(this->labelCountry4);
		this->Controls->Remove(this->labelPrice4);
		this->Controls->Remove(this->labelLeft4);
		this->Controls->Remove(this->labelID4);
		this->Controls->Remove(this->labelProduct5);
		this->Controls->Remove(this->labelCountry5);
		this->Controls->Remove(this->labelPrice5);
		this->Controls->Remove(this->labelLeft5);
		this->Controls->Remove(this->labelID5);
		this->Controls->Remove(this->labelProduct6);
		this->Controls->Remove(this->labelCountry6);
		this->Controls->Remove(this->labelPrice6);
		this->Controls->Remove(this->labelLeft6);
		this->Controls->Remove(this->labelID6);
		this->Controls->Remove(this->labelProduct7);
		this->Controls->Remove(this->labelCountry7);
		this->Controls->Remove(this->labelPrice7);
		this->Controls->Remove(this->labelLeft7);
		this->Controls->Remove(this->labelID7);
		this->Controls->Remove(this->labelProduct8);
		this->Controls->Remove(this->labelCountry8);
		this->Controls->Remove(this->labelPrice8);
		this->Controls->Remove(this->labelLeft8);
		this->Controls->Remove(this->labelID8);
		this->Controls->Remove(this->labelProduct9);
		this->Controls->Remove(this->labelCountry9);
		this->Controls->Remove(this->labelPrice9);
		this->Controls->Remove(this->labelLeft9);
		this->Controls->Remove(this->labelID9);
		this->Controls->Remove(this->buttonToLeaveStore);
		this->Controls->Add(this->tableLayoutPanelMenu);
		buffStore = 0;
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(230, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(288, 59);
		this->labelDefault->TabIndex = 0;
		this->labelDefault->Text = L"Hypermarket";
		//
		// tableLayoutPanelMenu
		//
		this->tableLayoutPanelMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->tableLayoutPanelMenu->ColumnCount = 1;
		this->tableLayoutPanelMenu->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToLeave, 0, 5);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToAdresses, 0, 4);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToDelivery, 0, 3);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToContacts, 0, 2);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToEmployees, 0, 1);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToStore, 0, 0);
		this->tableLayoutPanelMenu->Location = System::Drawing::Point(12, 71);
		this->tableLayoutPanelMenu->Name = L"tableLayoutPanelMenu";
		this->tableLayoutPanelMenu->RowCount = 6;
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->Size = System::Drawing::Size(600, 235);
		this->tableLayoutPanelMenu->TabIndex = 1;
		//
		// buttonToLeave
		//
		this->buttonToLeave->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeave->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToLeave->Location = System::Drawing::Point(3, 333);
		this->buttonToLeave->Name = L"buttonToLeave";
		this->buttonToLeave->Size = System::Drawing::Size(908, 60);
		this->buttonToLeave->TabIndex = 5;
		this->buttonToLeave->Text = L"Leave the Hypermarket";
		this->buttonToLeave->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeave->UseVisualStyleBackColor = false;
		this->buttonToLeave->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeave_Click);
		//
		// buttonToAdresses
		//
		this->buttonToAdresses->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToAdresses->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToAdresses->Location = System::Drawing::Point(3, 267);
		this->buttonToAdresses->Name = L"buttonToAdresses";
		this->buttonToAdresses->Size = System::Drawing::Size(908, 60);
		this->buttonToAdresses->TabIndex = 4;
		this->buttonToAdresses->Text = L"Adresses";
		this->buttonToAdresses->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToAdresses->UseVisualStyleBackColor = false;
		this->buttonToAdresses->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToAdresses_Click);
		//
		// buttonToDelivery
		//
		this->buttonToDelivery->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToDelivery->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToDelivery->Location = System::Drawing::Point(3, 201);
		this->buttonToDelivery->Name = L"buttonToDelivery";
		this->buttonToDelivery->Size = System::Drawing::Size(908, 60);
		this->buttonToDelivery->TabIndex = 3;
		this->buttonToDelivery->Text = L"Delivery";
		this->buttonToDelivery->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToDelivery->UseVisualStyleBackColor = false;
		this->buttonToDelivery->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToDelivery_Click);
		//
		// buttonToContacts
		//
		this->buttonToContacts->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToContacts->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToContacts->Location = System::Drawing::Point(3, 135);
		this->buttonToContacts->Name = L"buttonToContacts";
		this->buttonToContacts->Size = System::Drawing::Size(908, 60);
		this->buttonToContacts->TabIndex = 2;
		this->buttonToContacts->Text = L"Contacts";
		this->buttonToContacts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToContacts->UseVisualStyleBackColor = false;
		this->buttonToContacts->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToContacts_Click);
		//
		// buttonToEmployees
		//
		this->buttonToEmployees->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToEmployees->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToEmployees->Location = System::Drawing::Point(3, 69);
		this->buttonToEmployees->Name = L"buttonToEmployees";
		this->buttonToEmployees->Size = System::Drawing::Size(908, 60);
		this->buttonToEmployees->TabIndex = 1;
		this->buttonToEmployees->Text = L"Employees";
		this->buttonToEmployees->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToEmployees->UseVisualStyleBackColor = false;
		this->buttonToEmployees->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToEmployees_Click);
		//
		// buttonToStore
		//
		this->buttonToStore->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToStore->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToStore->Location = System::Drawing::Point(3, 3);
		this->buttonToStore->Name = L"buttonToStore";
		this->buttonToStore->Size = System::Drawing::Size(908, 60);
		this->buttonToStore->TabIndex = 0;
		this->buttonToStore->Text = L"Electronics store";
		this->buttonToStore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToStore->UseVisualStyleBackColor = false;
		this->buttonToStore->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToStore_Click);
	}

	public: System::Void boxCategories_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (boxCategories->Text == "Accessories") {
			this->boxAccessories->Text = "";
			this->Controls->Remove(this->boxDevices);
			this->Controls->Remove(this->boxPCC);
			this->Controls->Remove(this->boxHA);
			this->Controls->Add(this->boxAccessories);
			this->boxAccessories->BackColor = System::Drawing::Color::Silver;
			this->boxAccessories->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->boxAccessories->FormattingEnabled = true;
			if (buffStore == 0)
				this->boxAccessories->Location = System::Drawing::Point(300, 6);
			this->boxAccessories->Name = L"boxAccessories";
			this->boxAccessories->Size = System::Drawing::Size(169, 32);
			this->boxAccessories->TabIndex = 3;
			this->boxAccessories->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxAccessories_SelectedIndexChanged);
			this->boxAccessories->Items->Clear();
			this->boxAccessories->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Headphones", L"PC mouses", L"Keyboards" });
		}
		else if (boxCategories->Text == "Devices") {
			this->boxDevices->Text = "";
			this->Controls->Remove(this->boxAccessories);
			this->Controls->Remove(this->boxPCC);
			this->Controls->Remove(this->boxHA);
			this->Controls->Add(this->boxDevices);
			this->boxDevices->BackColor = System::Drawing::Color::Silver;
			this->boxDevices->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->boxDevices->FormattingEnabled = true;
			if (buffStore == 0)
				this->boxDevices->Location = System::Drawing::Point(300, 6);
			this->boxDevices->Name = L"boxDevices";
			this->boxDevices->Size = System::Drawing::Size(169, 32);
			this->boxDevices->TabIndex = 3;
			this->boxDevices->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxDevices_SelectedIndexChanged);
			this->boxDevices->Items->Clear();
			this->boxDevices->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Smartphones", L"Tablets", L"Laptops" });
		}
		else if (boxCategories->Text == "PC components") {
			this->boxPCC->Text = "";
			this->Controls->Remove(this->boxAccessories);
			this->Controls->Remove(this->boxDevices);
			this->Controls->Remove(this->boxHA);
			this->Controls->Add(this->boxPCC);
			this->boxPCC->BackColor = System::Drawing::Color::Silver;
			this->boxPCC->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->boxPCC->FormattingEnabled = true;
			if (buffStore == 0)
				this->boxPCC->Location = System::Drawing::Point(300, 6);
			this->boxPCC->Name = L"boxPCC";
			this->boxPCC->Size = System::Drawing::Size(169, 32);
			this->boxPCC->TabIndex = 3;
			this->boxPCC->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxPCC_SelectedIndexChanged);
			this->boxPCC->Items->Clear();
			this->boxPCC->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Graphic cards", L"Processors", L"RAMs" });
		}
		else if (boxCategories->Text == "Household Appliances") {
			this->boxHA->Text = "";
			this->Controls->Remove(this->boxAccessories);
			this->Controls->Remove(this->boxDevices);
			this->Controls->Remove(this->boxPCC);
			this->Controls->Add(this->boxHA);
			this->boxHA->BackColor = System::Drawing::Color::Silver;
			this->boxHA->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->boxHA->FormattingEnabled = true;
			if (buffStore == 0)
				this->boxHA->Location = System::Drawing::Point(300, 6);
			this->boxHA->Name = L"boxHA";
			this->boxHA->Size = System::Drawing::Size(169, 32);
			this->boxHA->TabIndex = 3;
			this->boxHA->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxHA_SelectedIndexChanged);
			this->boxHA->Items->Clear();
			this->boxHA->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Refrigerators", L"Washing machines", L"Blenders" });
		}
	}

	private: System::Void buttonCart_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("You have bought:\n\n" + CCart);
	}

	private: System::Void boxAccessories_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->boxCategories->Location = System::Drawing::Point(450, 150);
		this->boxAccessories->Location = System::Drawing::Point(450, 190);
		this->boxDevices->Location = System::Drawing::Point(450, 190);
		this->boxPCC->Location = System::Drawing::Point(450, 190);
		this->boxHA->Location = System::Drawing::Point(450, 190);
		buffStore = 1;

		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(25, 3);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Text = boxAccessories->Text;
		//
		// labelPress
		//
		this->Controls->Add(this->labelPress);
		this->labelPress->AutoSize = true;
		this->labelPress->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
		this->labelPress->Location = System::Drawing::Point(45, 260);
		this->labelPress->Name = L"labelPress";
		this->labelPress->Text = L"To purchase an item press on the line.";
		//
		// labelBudget
		//
		this->Controls->Add(this->labelBudget);
		this->labelBudget->AutoSize = true;
		this->labelBudget->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
		this->labelBudget->Location = System::Drawing::Point(340, 10);
		this->labelBudget->Name = L"labelBudget";
		this->labelBudget->Text = budget.ToString() + " uah";
		//
		// buttonCart
		//
		this->Controls->Add(this->buttonCart);
		this->buttonCart->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonCart->Font = (gcnew System::Drawing::Font(L"Calibri", 30));
		this->buttonCart->Location = System::Drawing::Point(495, 60);
		this->buttonCart->Name = L"buttonCart";
		this->buttonCart->Size = System::Drawing::Size(75, 70);
		this->buttonCart->Text = L"🛒";
		this->buttonCart->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonCart->UseVisualStyleBackColor = false;
		this->buttonCart->Click -= gcnew System::EventHandler(this, &FormWelcome::buttonCart_Click);
		this->buttonCart->Click += gcnew System::EventHandler(this, &FormWelcome::buttonCart_Click);

		this->Controls->Remove(this->labelProduct1);
		this->Controls->Remove(this->labelCountry1);
		this->Controls->Remove(this->labelPrice1);
		this->Controls->Remove(this->labelLeft1);
		this->Controls->Remove(this->labelID1);
		this->Controls->Remove(this->labelProduct2);
		this->Controls->Remove(this->labelCountry2);
		this->Controls->Remove(this->labelPrice2);
		this->Controls->Remove(this->labelLeft2);
		this->Controls->Remove(this->labelID2);
		this->Controls->Remove(this->labelProduct3);
		this->Controls->Remove(this->labelCountry3);
		this->Controls->Remove(this->labelPrice3);
		this->Controls->Remove(this->labelLeft3);
		this->Controls->Remove(this->labelID3);
		this->Controls->Remove(this->labelProduct4);
		this->Controls->Remove(this->labelCountry4);
		this->Controls->Remove(this->labelPrice4);
		this->Controls->Remove(this->labelLeft4);
		this->Controls->Remove(this->labelID4);
		this->Controls->Remove(this->labelProduct5);
		this->Controls->Remove(this->labelCountry5);
		this->Controls->Remove(this->labelPrice5);
		this->Controls->Remove(this->labelLeft5);
		this->Controls->Remove(this->labelID5);
		this->Controls->Remove(this->labelProduct6);
		this->Controls->Remove(this->labelCountry6);
		this->Controls->Remove(this->labelPrice6);
		this->Controls->Remove(this->labelLeft6);
		this->Controls->Remove(this->labelID6);
		this->Controls->Remove(this->labelProduct7);
		this->Controls->Remove(this->labelCountry7);
		this->Controls->Remove(this->labelPrice7);
		this->Controls->Remove(this->labelLeft7);
		this->Controls->Remove(this->labelID7);
		this->Controls->Remove(this->labelProduct8);
		this->Controls->Remove(this->labelCountry8);
		this->Controls->Remove(this->labelPrice8);
		this->Controls->Remove(this->labelLeft8);
		this->Controls->Remove(this->labelID8);
		this->Controls->Remove(this->labelProduct9);
		this->Controls->Remove(this->labelCountry9);
		this->Controls->Remove(this->labelPrice9);
		this->Controls->Remove(this->labelLeft9);
		this->Controls->Remove(this->labelID9);

		this->Controls->Add(this->labelProduct);
		this->Controls->Add(this->labelCountry);
		this->Controls->Add(this->labelPrice);
		this->Controls->Add(this->labelLeft);
		this->Controls->Add(this->labelID);

		this->Controls->Add(this->labelProduct1);
		this->Controls->Add(this->labelCountry1);
		this->Controls->Add(this->labelPrice1);
		this->Controls->Add(this->labelLeft1);
		this->Controls->Add(this->labelID1);
		this->Controls->Add(this->labelProduct2);
		this->Controls->Add(this->labelCountry2);
		this->Controls->Add(this->labelPrice2);
		this->Controls->Add(this->labelLeft2);
		this->Controls->Add(this->labelID2);
		this->Controls->Add(this->labelProduct3);
		this->Controls->Add(this->labelCountry3);
		this->Controls->Add(this->labelPrice3);
		this->Controls->Add(this->labelLeft3);
		this->Controls->Add(this->labelID3);
		this->Controls->Add(this->labelProduct4);
		this->Controls->Add(this->labelCountry4);
		this->Controls->Add(this->labelPrice4);
		this->Controls->Add(this->labelLeft4);
		this->Controls->Add(this->labelID4);
		this->Controls->Add(this->labelProduct5);
		this->Controls->Add(this->labelCountry5);
		this->Controls->Add(this->labelPrice5);
		this->Controls->Add(this->labelLeft5);
		this->Controls->Add(this->labelID5);
		this->Controls->Add(this->labelProduct6);
		this->Controls->Add(this->labelCountry6);
		this->Controls->Add(this->labelPrice6);
		this->Controls->Add(this->labelLeft6);
		this->Controls->Add(this->labelID6);
		this->Controls->Add(this->labelProduct7);
		this->Controls->Add(this->labelCountry7);
		this->Controls->Add(this->labelPrice7);
		this->Controls->Add(this->labelLeft7);
		this->Controls->Add(this->labelID7);
		this->Controls->Add(this->labelProduct8);
		this->Controls->Add(this->labelCountry8);
		this->Controls->Add(this->labelPrice8);
		this->Controls->Add(this->labelLeft8);
		this->Controls->Add(this->labelID8);
		this->Controls->Add(this->labelProduct9);
		this->Controls->Add(this->labelCountry9);
		this->Controls->Add(this->labelPrice9);
		this->Controls->Add(this->labelLeft9);
		this->Controls->Add(this->labelID9);

		///////////////////////////////////////////////////////////////////////////
		///Аксесуари
		//Навушники
		Headphones SennheiserHeadPhone;
		SennheiserHeadPhone.setName("Sennheiser HD800S");
		SennheiserHeadPhone.setMadeIn("China");
		SennheiserHeadPhone.setAmount(rand() % 100);
		SennheiserHeadPhone.setId(201);
		SennheiserHeadPhone.setPrice(84168);

		Headphones SonyHeadPhone;
		SonyHeadPhone.setName("Sony WF1000XM4");
		SonyHeadPhone.setMadeIn("China");
		SonyHeadPhone.setAmount(rand() % 100);
		SonyHeadPhone.setId(202);
		SonyHeadPhone.setPrice(8999);

		Headphones JBLHeadPhone;
		JBLHeadPhone.setName("JBL Quantum");
		JBLHeadPhone.setMadeIn("China");
		JBLHeadPhone.setAmount(rand() % 100);
		JBLHeadPhone.setId(203);
		JBLHeadPhone.setPrice(6500);

		Headphones PanasonicHeadPhone;
		PanasonicHeadPhone.setName("Panasonic RPHD");
		PanasonicHeadPhone.setMadeIn("China");
		PanasonicHeadPhone.setAmount(rand() % 100);
		PanasonicHeadPhone.setId(204);
		PanasonicHeadPhone.setPrice(12471);

		Headphones BeatsHeadPhone;
		BeatsHeadPhone.setName("Beats Studio3");
		BeatsHeadPhone.setMadeIn("China");
		BeatsHeadPhone.setAmount(rand() % 100);
		BeatsHeadPhone.setId(205);
		BeatsHeadPhone.setPrice(9562);

		Headphones RazerHeadPhone;
		RazerHeadPhone.setName("Razer Blackshark V2");
		RazerHeadPhone.setMadeIn("China");
		RazerHeadPhone.setAmount(rand() % 100);
		RazerHeadPhone.setId(206);
		RazerHeadPhone.setPrice(14279);

		Headphones HyperXHeadPhone;
		HyperXHeadPhone.setName("HyperX Cloud MIX");
		HyperXHeadPhone.setMadeIn("China");
		HyperXHeadPhone.setAmount(rand() % 100);
		HyperXHeadPhone.setId(207);
		HyperXHeadPhone.setPrice(6200);

		Headphones LogitechHeadPhone;
		LogitechHeadPhone.setName("Logitech G PRO X Wireless");
		LogitechHeadPhone.setMadeIn("China");
		LogitechHeadPhone.setAmount(0);
		LogitechHeadPhone.setId(208);
		LogitechHeadPhone.setPrice(8074);

		Headphones HatorHeadPhone;
		HatorHeadPhone.setName("Hator Hypergang");
		HatorHeadPhone.setMadeIn("Ukraine");
		HatorHeadPhone.setAmount(rand() % 100);
		HatorHeadPhone.setId(209);
		HatorHeadPhone.setPrice(2195);

		//Комп'ютерні мишки
		PC_mouses RazerMouse;
		RazerMouse.setName("Razer Mamba");
		RazerMouse.setMadeIn("China");
		RazerMouse.setAmount(rand() % 100);
		RazerMouse.setId(211);
		RazerMouse.setPrice(9774);

		PC_mouses LogitechMouse;
		LogitechMouse.setName("Logitech G PRO Superlight");
		LogitechMouse.setMadeIn("China");
		LogitechMouse.setAmount(0);
		LogitechMouse.setId(212);
		LogitechMouse.setPrice(4130);

		PC_mouses SteelSeriesMouse;
		SteelSeriesMouse.setName("SteelSeries Prime Wireless");
		SteelSeriesMouse.setMadeIn("China");
		SteelSeriesMouse.setAmount(rand() % 100);
		SteelSeriesMouse.setId(213);
		SteelSeriesMouse.setPrice(4635);

		PC_mouses HPMouse;
		HPMouse.setName("HP Spectre");
		HPMouse.setMadeIn("China");
		HPMouse.setAmount(rand() % 100);
		HPMouse.setId(214);
		HPMouse.setPrice(2049);

		PC_mouses VaxeeMouse;
		VaxeeMouse.setName("Vaxee OUTSET AX");
		VaxeeMouse.setMadeIn("China");
		VaxeeMouse.setAmount(rand() % 100);
		VaxeeMouse.setId(215);
		VaxeeMouse.setPrice(1919);

		PC_mouses CorsairMouse;
		CorsairMouse.setName("Corsair Nightsword");
		CorsairMouse.setMadeIn("China");
		CorsairMouse.setAmount(rand() % 100);
		CorsairMouse.setId(216);
		CorsairMouse.setPrice(3255);

		PC_mouses BenQMouse;
		BenQMouse.setName("BenQ Zowie EC2");
		BenQMouse.setMadeIn("China");
		BenQMouse.setAmount(0);
		BenQMouse.setId(217);
		BenQMouse.setPrice(2250);

		PC_mouses HatorMouse;
		HatorMouse.setName("Hator Vortex");
		HatorMouse.setMadeIn("Ukraine");
		HatorMouse.setAmount(rand() % 100);
		HatorMouse.setId(218);
		HatorMouse.setPrice(1739);

		//Клавіатури
		Keyboards HatorKeyboard;
		HatorKeyboard.setName("Hator Rockfall");
		HatorKeyboard.setMadeIn("Ukraine");
		HatorKeyboard.setAmount(rand() % 100);
		HatorKeyboard.setId(221);
		HatorKeyboard.setPrice(2499);

		Keyboards RazerKeyboard;
		RazerKeyboard.setName("Razer Blackwidow V3");
		RazerKeyboard.setMadeIn("China");
		RazerKeyboard.setAmount(rand() % 100);
		RazerKeyboard.setId(222);
		RazerKeyboard.setPrice(6800);

		Keyboards LogitechKeyboard;
		LogitechKeyboard.setName("Logitech G915 LIGHTSPEED");
		LogitechKeyboard.setMadeIn("China");
		LogitechKeyboard.setAmount(rand() % 100);
		LogitechKeyboard.setId(223);
		LogitechKeyboard.setPrice(11729);

		Keyboards CorsairKeyboard;
		CorsairKeyboard.setName("Corsair K100 Optix");
		CorsairKeyboard.setMadeIn("China");
		CorsairKeyboard.setAmount(rand() % 100);
		CorsairKeyboard.setId(224);
		CorsairKeyboard.setPrice(11000);

		Keyboards AsusKeyboard;
		AsusKeyboard.setName("Asus ROG Strix Scope");
		AsusKeyboard.setMadeIn("China");
		AsusKeyboard.setAmount(0);
		AsusKeyboard.setId(225);
		AsusKeyboard.setPrice(11552);

		Keyboards MSIKeyboard;
		MSIKeyboard.setName("MSI Vigor");
		MSIKeyboard.setMadeIn("China");
		MSIKeyboard.setAmount(rand() % 100);
		MSIKeyboard.setId(226);
		MSIKeyboard.setPrice(2759);
		///////////////////////////////////////////////////////////////////////////

		//
		// labelID
		//
		this->labelID->AutoSize = true;
		this->labelID->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->labelID->Location = System::Drawing::Point(7, 35);
		this->labelID->Name = L"labelID";
		this->labelID->Size = System::Drawing::Size(37, 24);
		this->labelID->TabIndex = 4;
		this->labelID->Text = L"ID  ";
		//
		// labelProduct
		//
		this->labelProduct->AutoSize = true;
		this->labelProduct->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelProduct->Location = System::Drawing::Point(42, 35);
		this->labelProduct->Name = L"labelProduct";
		this->labelProduct->Size = System::Drawing::Size(75, 24);
		this->labelProduct->TabIndex = 10;
		this->labelProduct->Text = L"Product";
		//
		// labelPrice
		//
		this->labelPrice->AutoSize = true;
		this->labelPrice->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelPrice->Location = System::Drawing::Point(217, 35);
		this->labelPrice->Name = L"labelPrice";
		this->labelPrice->Size = System::Drawing::Size(50, 24);
		this->labelPrice->TabIndex = 9;
		this->labelPrice->Text = L"Price";
		//
		// labelLeft
		//
		this->labelLeft->AutoSize = true;
		this->labelLeft->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelLeft->Location = System::Drawing::Point(297, 35);
		this->labelLeft->Name = L"labelLeft";
		this->labelLeft->Size = System::Drawing::Size(80, 24);
		this->labelLeft->TabIndex = 7;
		this->labelLeft->Text = L"Left";
		//
		// labelCountry
		//
		this->labelCountry->AutoSize = true;
		this->labelCountry->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelCountry->Location = System::Drawing::Point(370, 35);
		this->labelCountry->Name = L"labelCountry";
		this->labelCountry->Size = System::Drawing::Size(87, 24);
		this->labelCountry->TabIndex = 8;
		this->labelCountry->Text = L"Country";

		if (boxAccessories->Text == "Headphones") {
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);

			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);

			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);

			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);

			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);

			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);

			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);

			this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);

			this->labelID9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelProduct9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelPrice9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelLeft9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelCountry9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			//
			// labelID1
			//
			this->labelID1->AutoSize = true;
			this->labelID1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID1->Location = System::Drawing::Point(7, 55);
			this->labelID1->Name = L"labelID1";
			this->labelID1->Size = System::Drawing::Size(40, 24);
			this->labelID1->TabIndex = 13;
			this->labelID1->Text = SennheiserHeadPhone.getId().ToString();
			this->labelID1->Click += gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			//
			// labelProduct1
			//
			this->labelProduct1->AutoSize = true;
			this->labelProduct1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct1->Location = System::Drawing::Point(42, 55);
			this->labelProduct1->Name = L"labelProduct1";
			this->labelProduct1->Size = System::Drawing::Size(247, 24);
			this->labelProduct1->TabIndex = 11;
			this->labelProduct1->Text = SennheiserHeadPhone.getName();
			this->labelProduct1->Click += gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice1->Location = System::Drawing::Point(217, 55);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Size = System::Drawing::Size(107, 24);
			this->labelPrice1->TabIndex = 12;
			this->labelPrice1->Text = SennheiserHeadPhone.getPrice().ToString() + " uah";
			this->labelPrice1->Click += gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			//
			// labelLeft1
			//
			this->labelLeft1->AutoSize = true;
			this->labelLeft1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft1->Location = System::Drawing::Point(297, 55);
			this->labelLeft1->Name = L"labelLeft1";
			this->labelLeft1->Size = System::Drawing::Size(97, 24);
			this->labelLeft1->Text = SennheiserHeadPhone.getAmount().ToString() + " pieces";
			this->labelLeft1->Click += gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			//
			// labelCountry1
			//
			this->labelCountry1->AutoSize = true;
			this->labelCountry1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry1->Location = System::Drawing::Point(370, 55);
			this->labelCountry1->Name = L"labelCountry1";
			this->labelCountry1->Size = System::Drawing::Size(87, 24);
			this->labelCountry1->Text = SennheiserHeadPhone.getMadeIn();
			this->labelCountry1->Click += gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			//
			// labelID2
			//
			this->labelID2->AutoSize = true;
			this->labelID2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID2->Location = System::Drawing::Point(7, 75);
			this->labelID2->Name = L"labelID2";
			this->labelID2->Size = System::Drawing::Size(40, 24);
			this->labelID2->TabIndex = 18;
			this->labelID2->Text = SonyHeadPhone.getId().ToString();
			this->labelID2->Click += gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			//
			// labelProduct2
			//
			this->labelProduct2->AutoSize = true;
			this->labelProduct2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct2->Location = System::Drawing::Point(42, 75);
			this->labelProduct2->Name = L"labelProduct2";
			this->labelProduct2->Size = System::Drawing::Size(247, 24);
			this->labelProduct2->TabIndex = 14;
			this->labelProduct2->Text = SonyHeadPhone.getName();
			this->labelProduct2->Click += gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice2->Location = System::Drawing::Point(217, 75);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Size = System::Drawing::Size(107, 24);
			this->labelPrice2->TabIndex = 16;
			this->labelPrice2->Text = SonyHeadPhone.getPrice().ToString() + " uah";
			this->labelPrice2->Click += gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			//
			// labelLeft2
			//
			this->labelLeft2->AutoSize = true;
			this->labelLeft2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft2->Location = System::Drawing::Point(297, 75);
			this->labelLeft2->Name = L"labelLeft2";
			this->labelLeft2->Size = System::Drawing::Size(97, 24);
			this->labelLeft2->Text = SonyHeadPhone.getAmount().ToString() + " pieces";
			this->labelLeft2->Click += gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			//
			// labelCountry2
			//
			this->labelCountry2->AutoSize = true;
			this->labelCountry2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry2->Location = System::Drawing::Point(370, 75);
			this->labelCountry2->Name = L"labelCountry2";
			this->labelCountry2->Size = System::Drawing::Size(87, 24);
			this->labelCountry2->Text = SonyHeadPhone.getMadeIn();
			this->labelCountry2->Click += gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			//
			// labelID3
			//
			this->labelID3->AutoSize = true;
			this->labelID3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID3->Location = System::Drawing::Point(7, 95);
			this->labelID3->Name = L"labelID3";
			this->labelID3->Size = System::Drawing::Size(40, 24);
			this->labelID3->TabIndex = 23;
			this->labelID3->Text = JBLHeadPhone.getId().ToString();
			this->labelID3->Click += gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			//
			// labelProduct3
			//
			this->labelProduct3->AutoSize = true;
			this->labelProduct3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct3->Location = System::Drawing::Point(42, 95);
			this->labelProduct3->Name = L"labelProduct3";
			this->labelProduct3->Size = System::Drawing::Size(247, 24);
			this->labelProduct3->TabIndex = 19;
			this->labelProduct3->Text = JBLHeadPhone.getName();
			this->labelProduct3->Click += gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			//
			// labelPrice3
			//
			this->labelPrice3->AutoSize = true;
			this->labelPrice3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice3->Location = System::Drawing::Point(217, 95);
			this->labelPrice3->Name = L"labelPrice3";
			this->labelPrice3->Size = System::Drawing::Size(107, 24);
			this->labelPrice3->TabIndex = 21;
			this->labelPrice3->Text = JBLHeadPhone.getPrice().ToString() + " uah";
			this->labelPrice3->Click += gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			//
			// labelLeft3
			//
			this->labelLeft3->AutoSize = true;
			this->labelLeft3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft3->Location = System::Drawing::Point(297, 95);
			this->labelLeft3->Name = L"labelLeft3";
			this->labelLeft3->Size = System::Drawing::Size(97, 24);
			this->labelLeft3->Text = JBLHeadPhone.getAmount().ToString() + " pieces";
			this->labelLeft3->Click += gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			//
			// labelCountry3
			//
			this->labelCountry3->AutoSize = true;
			this->labelCountry3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry3->Location = System::Drawing::Point(370, 95);
			this->labelCountry3->Name = L"labelCountry3";
			this->labelCountry3->Size = System::Drawing::Size(87, 24);
			this->labelCountry3->Text = JBLHeadPhone.getMadeIn();
			this->labelCountry3->Click += gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			//
			// labelID4
			//
			this->labelID4->AutoSize = true;
			this->labelID4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID4->Location = System::Drawing::Point(7, 115);
			this->labelID4->Name = L"labelID4";
			this->labelID4->Size = System::Drawing::Size(40, 24);
			this->labelID4->TabIndex = 28;
			this->labelID4->Text = PanasonicHeadPhone.getId().ToString();
			this->labelID4->Click += gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			//
			// labelProduct4
			//
			this->labelProduct4->AutoSize = true;
			this->labelProduct4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct4->Location = System::Drawing::Point(42, 115);
			this->labelProduct4->Name = L"labelProduct4";
			this->labelProduct4->Size = System::Drawing::Size(247, 24);
			this->labelProduct4->TabIndex = 24;
			this->labelProduct4->Text = PanasonicHeadPhone.getName();
			this->labelProduct4->Click += gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			//
			// labelPrice4
			//
			this->labelPrice4->AutoSize = true;
			this->labelPrice4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice4->Location = System::Drawing::Point(217, 115);
			this->labelPrice4->Name = L"labelPrice4";
			this->labelPrice4->Size = System::Drawing::Size(107, 24);
			this->labelPrice4->TabIndex = 26;
			this->labelPrice4->Text = PanasonicHeadPhone.getPrice().ToString() + " uah";
			this->labelPrice4->Click += gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			//
			// labelLeft4
			//
			this->labelLeft4->AutoSize = true;
			this->labelLeft4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft4->Location = System::Drawing::Point(297, 115);
			this->labelLeft4->Name = L"labelLeft4";
			this->labelLeft4->Size = System::Drawing::Size(97, 24);
			this->labelLeft4->Text = PanasonicHeadPhone.getAmount().ToString() + " pieces";
			this->labelLeft4->Click += gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			//
			// labelCountry4
			//
			this->labelCountry4->AutoSize = true;
			this->labelCountry4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry4->Location = System::Drawing::Point(370, 115);
			this->labelCountry4->Name = L"labelCountry4";
			this->labelCountry4->Size = System::Drawing::Size(87, 24);
			this->labelCountry4->Text = PanasonicHeadPhone.getMadeIn();
			this->labelCountry4->Click += gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			//
			// labelID5
			//
			this->labelID5->AutoSize = true;
			this->labelID5->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID5->Location = System::Drawing::Point(7, 135);
			this->labelID5->Name = L"labelID5";
			this->labelID5->Size = System::Drawing::Size(40, 24);
			this->labelID5->TabIndex = 33;
			this->labelID5->Text = BeatsHeadPhone.getId().ToString();
			this->labelID5->Click += gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			//
			// labelProduct5
			//
			this->labelProduct5->AutoSize = true;
			this->labelProduct5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct5->Location = System::Drawing::Point(42, 135);
			this->labelProduct5->Name = L"labelProduct5";
			this->labelProduct5->Size = System::Drawing::Size(247, 24);
			this->labelProduct5->TabIndex = 29;
			this->labelProduct5->Text = BeatsHeadPhone.getName();
			this->labelProduct5->Click += gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			//
			// labelPrice5
			//
			this->labelPrice5->AutoSize = true;
			this->labelPrice5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice5->Location = System::Drawing::Point(217, 135);
			this->labelPrice5->Name = L"labelPrice5";
			this->labelPrice5->Size = System::Drawing::Size(107, 24);
			this->labelPrice5->TabIndex = 31;
			this->labelPrice5->Text = BeatsHeadPhone.getPrice().ToString() + " uah";
			this->labelPrice5->Click += gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			//
			// labelLeft5
			//
			this->labelLeft5->AutoSize = true;
			this->labelLeft5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft5->Location = System::Drawing::Point(297, 135);
			this->labelLeft5->Name = L"labelLeft5";
			this->labelLeft5->Size = System::Drawing::Size(97, 24);
			this->labelLeft5->Text = BeatsHeadPhone.getAmount().ToString() + " pieces";
			this->labelLeft5->Click += gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			//
			// labelCountry5
			//
			this->labelCountry5->AutoSize = true;
			this->labelCountry5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry5->Location = System::Drawing::Point(370, 135);
			this->labelCountry5->Name = L"labelCountry5";
			this->labelCountry5->Size = System::Drawing::Size(87, 24);
			this->labelCountry5->Text = BeatsHeadPhone.getMadeIn();
			this->labelCountry5->Click += gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			//
			// labelID6
			//
			this->labelID6->AutoSize = true;
			this->labelID6->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID6->Location = System::Drawing::Point(7, 155);
			this->labelID6->Name = L"labelID6";
			this->labelID6->Size = System::Drawing::Size(40, 24);
			this->labelID6->TabIndex = 38;
			this->labelID6->Text = RazerHeadPhone.getId().ToString();
			this->labelID6->Click += gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			//
			// labelProduct6
			//
			this->labelProduct6->AutoSize = true;
			this->labelProduct6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct6->Location = System::Drawing::Point(42, 155);
			this->labelProduct6->Name = L"labelProduct6";
			this->labelProduct6->Size = System::Drawing::Size(247, 24);
			this->labelProduct6->TabIndex = 34;
			this->labelProduct6->Text = RazerHeadPhone.getName();
			this->labelProduct6->Click += gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			//
			// labelPrice6
			//
			this->labelPrice6->AutoSize = true;
			this->labelPrice6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice6->Location = System::Drawing::Point(217, 155);
			this->labelPrice6->Name = L"labelPrice6";
			this->labelPrice6->Size = System::Drawing::Size(107, 24);
			this->labelPrice6->TabIndex = 36;
			this->labelPrice6->Text = RazerHeadPhone.getPrice().ToString() + " uah";
			this->labelPrice6->Click += gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			//
			// labelLeft6
			//
			this->labelLeft6->AutoSize = true;
			this->labelLeft6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft6->Location = System::Drawing::Point(297, 155);
			this->labelLeft6->Name = L"labelLeft6";
			this->labelLeft6->Size = System::Drawing::Size(97, 24);
			this->labelLeft6->Text = RazerHeadPhone.getAmount().ToString() + " pieces";
			this->labelLeft6->Click += gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			//
			// labelCountry6
			//
			this->labelCountry6->AutoSize = true;
			this->labelCountry6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry6->Location = System::Drawing::Point(370, 155);
			this->labelCountry6->Name = L"labelCountry6";
			this->labelCountry6->Size = System::Drawing::Size(87, 24);
			this->labelCountry6->Text = RazerHeadPhone.getMadeIn();
			this->labelCountry6->Click += gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			//
			// labelID7
			//
			this->labelID7->AutoSize = true;
			this->labelID7->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID7->Location = System::Drawing::Point(7, 175);
			this->labelID7->Name = L"labelID7";
			this->labelID7->Size = System::Drawing::Size(40, 24);
			this->labelID7->TabIndex = 43;
			this->labelID7->Text = HyperXHeadPhone.getId().ToString();
			this->labelID7->Click += gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			//
			// labelProduct7
			//
			this->labelProduct7->AutoSize = true;
			this->labelProduct7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct7->Location = System::Drawing::Point(42, 175);
			this->labelProduct7->Name = L"labelProduct7";
			this->labelProduct7->Size = System::Drawing::Size(247, 24);
			this->labelProduct7->TabIndex = 39;
			this->labelProduct7->Text = HyperXHeadPhone.getName();
			this->labelProduct7->Click += gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			//
			// labelPrice7
			//
			this->labelPrice7->AutoSize = true;
			this->labelPrice7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice7->Location = System::Drawing::Point(217, 175);
			this->labelPrice7->Name = L"labelPrice7";
			this->labelPrice7->Size = System::Drawing::Size(107, 24);
			this->labelPrice7->TabIndex = 41;
			this->labelPrice7->Text = HyperXHeadPhone.getPrice().ToString() + " uah";
			this->labelPrice7->Click += gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			//
			// labelLeft7
			//
			this->labelLeft7->AutoSize = true;
			this->labelLeft7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft7->Location = System::Drawing::Point(297, 175);
			this->labelLeft7->Name = L"labelLeft7";
			this->labelLeft7->Size = System::Drawing::Size(97, 24);
			this->labelLeft7->Text = HyperXHeadPhone.getAmount().ToString() + " pieces";
			this->labelLeft7->Click += gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			//
			// labelCountry7
			//
			this->labelCountry7->AutoSize = true;
			this->labelCountry7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry7->Location = System::Drawing::Point(370, 175);
			this->labelCountry7->Name = L"labelCountry7";
			this->labelCountry7->Size = System::Drawing::Size(87, 24);
			this->labelCountry7->Text = HyperXHeadPhone.getMadeIn();
			this->labelCountry7->Click += gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			//
			// labelID8
			//
			this->labelID8->AutoSize = true;
			this->labelID8->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID8->Location = System::Drawing::Point(7, 195);
			this->labelID8->Name = L"labelID8";
			this->labelID8->Size = System::Drawing::Size(40, 24);
			this->labelID8->TabIndex = 48;
			this->labelID8->Text = LogitechHeadPhone.getId().ToString();
			this->labelID8->Click += gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			//
			// labelProduct8
			//
			this->labelProduct8->AutoSize = true;
			this->labelProduct8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct8->Location = System::Drawing::Point(42, 195);
			this->labelProduct8->Name = L"labelProduct8";
			this->labelProduct8->Size = System::Drawing::Size(247, 24);
			this->labelProduct8->TabIndex = 44;
			this->labelProduct8->Text = LogitechHeadPhone.getName();
			this->labelProduct8->Click += gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			//
			// labelPrice8
			//
			this->labelPrice8->AutoSize = true;
			this->labelPrice8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice8->Location = System::Drawing::Point(217, 195);
			this->labelPrice8->Name = L"labelPrice8";
			this->labelPrice8->Size = System::Drawing::Size(107, 24);
			this->labelPrice8->TabIndex = 46;
			this->labelPrice8->Text = LogitechHeadPhone.getPrice().ToString() + " uah";
			this->labelPrice8->Click += gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			//
			// labelLeft8
			//
			this->labelLeft8->AutoSize = true;
			this->labelLeft8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft8->Location = System::Drawing::Point(297, 195);
			this->labelLeft8->Name = L"labelLeft8";
			this->labelLeft8->Size = System::Drawing::Size(97, 24);
			this->labelLeft8->Text = LogitechHeadPhone.getAmount().ToString() + " pieces";
			this->labelLeft8->Click += gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			//
			// labelCountry8
			//
			this->labelCountry8->AutoSize = true;
			this->labelCountry8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry8->Location = System::Drawing::Point(370, 195);
			this->labelCountry8->Name = L"labelCountry8";
			this->labelCountry8->Size = System::Drawing::Size(87, 24);
			this->labelCountry8->Text = LogitechHeadPhone.getMadeIn();
			this->labelCountry8->Click += gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			//
			// labelID9
			//
			this->labelID9->AutoSize = true;
			this->labelID9->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID9->Location = System::Drawing::Point(7, 215);
			this->labelID9->Name = L"labelID9";
			this->labelID9->Size = System::Drawing::Size(40, 24);
			this->labelID9->TabIndex = 53;
			this->labelID9->Text = HatorHeadPhone.getId().ToString();
			this->labelID9->Click += gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			//
			// labelProduct9
			//
			this->labelProduct9->AutoSize = true;
			this->labelProduct9->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct9->Location = System::Drawing::Point(42, 215);
			this->labelProduct9->Name = L"labelProduct9";
			this->labelProduct9->Size = System::Drawing::Size(247, 24);
			this->labelProduct9->TabIndex = 49;
			this->labelProduct9->Text = HatorHeadPhone.getName();
			this->labelProduct9->Click += gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			//
			// labelPrice9
			//
			this->labelPrice9->AutoSize = true;
			this->labelPrice9->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice9->Location = System::Drawing::Point(217, 215);
			this->labelPrice9->Name = L"labelPrice9";
			this->labelPrice9->Size = System::Drawing::Size(107, 24);
			this->labelPrice9->TabIndex = 51;
			this->labelPrice9->Text = HatorHeadPhone.getPrice().ToString() + " uah";
			this->labelPrice9->Click += gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			//
			// labelLeft9
			//
			this->labelLeft9->AutoSize = true;
			this->labelLeft9->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft9->Location = System::Drawing::Point(297, 215);
			this->labelLeft9->Name = L"labelLeft9";
			this->labelLeft9->Size = System::Drawing::Size(97, 24);
			this->labelLeft9->Text = HatorHeadPhone.getAmount().ToString() + " pieces";
			this->labelLeft9->Click += gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			//
			// labelCountry9
			//
			this->labelCountry9->AutoSize = true;
			this->labelCountry9->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry9->Location = System::Drawing::Point(370, 215);
			this->labelCountry9->Name = L"labelCountry9";
			this->labelCountry9->Size = System::Drawing::Size(87, 24);
			this->labelCountry9->Text = HatorHeadPhone.getMadeIn();
			this->labelCountry9->Click += gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		}
		else if (boxAccessories->Text == "PC mouses") {
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);

		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);

		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);

		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);

		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);

		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);

		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);

		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);

		this->labelID9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelProduct9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelPrice9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelLeft9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelCountry9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->Controls->Remove(this->labelProduct1);
			this->Controls->Remove(this->labelCountry1);
			this->Controls->Remove(this->labelPrice1);
			this->Controls->Remove(this->labelLeft1);
			this->Controls->Remove(this->labelID1);
			this->Controls->Remove(this->labelProduct2);
			this->Controls->Remove(this->labelCountry2);
			this->Controls->Remove(this->labelPrice2);
			this->Controls->Remove(this->labelLeft2);
			this->Controls->Remove(this->labelID2);
			this->Controls->Remove(this->labelProduct3);
			this->Controls->Remove(this->labelCountry3);
			this->Controls->Remove(this->labelPrice3);
			this->Controls->Remove(this->labelLeft3);
			this->Controls->Remove(this->labelID3);
			this->Controls->Remove(this->labelProduct4);
			this->Controls->Remove(this->labelCountry4);
			this->Controls->Remove(this->labelPrice4);
			this->Controls->Remove(this->labelLeft4);
			this->Controls->Remove(this->labelID4);
			this->Controls->Remove(this->labelProduct5);
			this->Controls->Remove(this->labelCountry5);
			this->Controls->Remove(this->labelPrice5);
			this->Controls->Remove(this->labelLeft5);
			this->Controls->Remove(this->labelID5);
			this->Controls->Remove(this->labelProduct6);
			this->Controls->Remove(this->labelCountry6);
			this->Controls->Remove(this->labelPrice6);
			this->Controls->Remove(this->labelLeft6);
			this->Controls->Remove(this->labelID6);
			this->Controls->Remove(this->labelProduct7);
			this->Controls->Remove(this->labelCountry7);
			this->Controls->Remove(this->labelPrice7);
			this->Controls->Remove(this->labelLeft7);
			this->Controls->Remove(this->labelID7);
			this->Controls->Remove(this->labelProduct8);
			this->Controls->Remove(this->labelCountry8);
			this->Controls->Remove(this->labelPrice8);
			this->Controls->Remove(this->labelLeft8);
			this->Controls->Remove(this->labelID8);
			this->Controls->Remove(this->labelProduct9);
			this->Controls->Remove(this->labelCountry9);
			this->Controls->Remove(this->labelPrice9);
			this->Controls->Remove(this->labelLeft9);
			this->Controls->Remove(this->labelID9);

			this->Controls->Add(this->labelProduct1);
			this->Controls->Add(this->labelCountry1);
			this->Controls->Add(this->labelPrice1);
			this->Controls->Add(this->labelLeft1);
			this->Controls->Add(this->labelID1);
			this->Controls->Add(this->labelProduct2);
			this->Controls->Add(this->labelCountry2);
			this->Controls->Add(this->labelPrice2);
			this->Controls->Add(this->labelLeft2);
			this->Controls->Add(this->labelID2);
			this->Controls->Add(this->labelProduct3);
			this->Controls->Add(this->labelCountry3);
			this->Controls->Add(this->labelPrice3);
			this->Controls->Add(this->labelLeft3);
			this->Controls->Add(this->labelID3);
			this->Controls->Add(this->labelProduct4);
			this->Controls->Add(this->labelCountry4);
			this->Controls->Add(this->labelPrice4);
			this->Controls->Add(this->labelLeft4);
			this->Controls->Add(this->labelID4);
			this->Controls->Add(this->labelProduct5);
			this->Controls->Add(this->labelCountry5);
			this->Controls->Add(this->labelPrice5);
			this->Controls->Add(this->labelLeft5);
			this->Controls->Add(this->labelID5);
			this->Controls->Add(this->labelProduct6);
			this->Controls->Add(this->labelCountry6);
			this->Controls->Add(this->labelPrice6);
			this->Controls->Add(this->labelLeft6);
			this->Controls->Add(this->labelID6);
			this->Controls->Add(this->labelProduct7);
			this->Controls->Add(this->labelCountry7);
			this->Controls->Add(this->labelPrice7);
			this->Controls->Add(this->labelLeft7);
			this->Controls->Add(this->labelID7);
			this->Controls->Add(this->labelProduct8);
			this->Controls->Add(this->labelCountry8);
			this->Controls->Add(this->labelPrice8);
			this->Controls->Add(this->labelLeft8);
			this->Controls->Add(this->labelID8);

			//
			// labelID1
			//
			this->labelID1->AutoSize = true;
			this->labelID1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID1->Location = System::Drawing::Point(7, 55);
			this->labelID1->Name = L"labelID1";
			this->labelID1->Size = System::Drawing::Size(40, 24);
			this->labelID1->TabIndex = 13;
			this->labelID1->Text = RazerMouse.getId().ToString();
			this->labelID1->Click += gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			//
			// labelProduct1
			//
			this->labelProduct1->AutoSize = true;
			this->labelProduct1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct1->Location = System::Drawing::Point(42, 55);
			this->labelProduct1->Name = L"labelProduct1";
			this->labelProduct1->Size = System::Drawing::Size(247, 24);
			this->labelProduct1->TabIndex = 11;
			this->labelProduct1->Text = RazerMouse.getName();
			this->labelProduct1->Click += gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice1->Location = System::Drawing::Point(217, 55);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Size = System::Drawing::Size(107, 24);
			this->labelPrice1->TabIndex = 12;
			this->labelPrice1->Text = RazerMouse.getPrice().ToString() + " uah";
			this->labelPrice1->Click += gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			//
			// labelLeft1
			//
			this->labelLeft1->AutoSize = true;
			this->labelLeft1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft1->Location = System::Drawing::Point(297, 55);
			this->labelLeft1->Name = L"labelLeft1";
			this->labelLeft1->Size = System::Drawing::Size(97, 24);
			this->labelLeft1->Text = RazerMouse.getAmount().ToString() + " pieces";
			this->labelLeft1->Click += gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			//
			// labelCountry1
			//
			this->labelCountry1->AutoSize = true;
			this->labelCountry1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry1->Location = System::Drawing::Point(370, 55);
			this->labelCountry1->Name = L"labelCountry1";
			this->labelCountry1->Size = System::Drawing::Size(87, 24);
			this->labelCountry1->Text = RazerMouse.getMadeIn();
			this->labelCountry1->Click += gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			//
			// labelID2
			//
			this->labelID2->AutoSize = true;
			this->labelID2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID2->Location = System::Drawing::Point(7, 75);
			this->labelID2->Name = L"labelID2";
			this->labelID2->Size = System::Drawing::Size(40, 24);
			this->labelID2->TabIndex = 18;
			this->labelID2->Text = LogitechMouse.getId().ToString();
			this->labelID2->Click += gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			//
			// labelProduct2
			//
			this->labelProduct2->AutoSize = true;
			this->labelProduct2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct2->Location = System::Drawing::Point(42, 75);
			this->labelProduct2->Name = L"labelProduct2";
			this->labelProduct2->Size = System::Drawing::Size(247, 24);
			this->labelProduct2->TabIndex = 14;
			this->labelProduct2->Text = LogitechMouse.getName();
			this->labelProduct2->Click += gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice2->Location = System::Drawing::Point(217, 75);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Size = System::Drawing::Size(107, 24);
			this->labelPrice2->TabIndex = 16;
			this->labelPrice2->Text = LogitechMouse.getPrice().ToString() + " uah";
			this->labelPrice2->Click += gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			//
			// labelLeft2
			//
			this->labelLeft2->AutoSize = true;
			this->labelLeft2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft2->Location = System::Drawing::Point(297, 75);
			this->labelLeft2->Name = L"labelLeft2";
			this->labelLeft2->Size = System::Drawing::Size(97, 24);
			this->labelLeft2->Text = LogitechMouse.getAmount().ToString() + " pieces";
			this->labelLeft2->Click += gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			//
			// labelCountry2
			//
			this->labelCountry2->AutoSize = true;
			this->labelCountry2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry2->Location = System::Drawing::Point(370, 75);
			this->labelCountry2->Name = L"labelCountry2";
			this->labelCountry2->Size = System::Drawing::Size(87, 24);
			this->labelCountry2->Text = LogitechMouse.getMadeIn();
			this->labelCountry2->Click += gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			//
			// labelID3
			//
			this->labelID3->AutoSize = true;
			this->labelID3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID3->Location = System::Drawing::Point(7, 95);
			this->labelID3->Name = L"labelID3";
			this->labelID3->Size = System::Drawing::Size(40, 24);
			this->labelID3->TabIndex = 23;
			this->labelID3->Text = SteelSeriesMouse.getId().ToString();
			this->labelID3->Click += gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			//
			// labelProduct3
			//
			this->labelProduct3->AutoSize = true;
			this->labelProduct3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct3->Location = System::Drawing::Point(42, 95);
			this->labelProduct3->Name = L"labelProduct3";
			this->labelProduct3->Size = System::Drawing::Size(247, 24);
			this->labelProduct3->TabIndex = 19;
			this->labelProduct3->Text = SteelSeriesMouse.getName();
			this->labelProduct3->Click += gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			//
			// labelPrice3
			//
			this->labelPrice3->AutoSize = true;
			this->labelPrice3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice3->Location = System::Drawing::Point(217, 95);
			this->labelPrice3->Name = L"labelPrice3";
			this->labelPrice3->Size = System::Drawing::Size(107, 24);
			this->labelPrice3->TabIndex = 21;
			this->labelPrice3->Text = SteelSeriesMouse.getPrice().ToString() + " uah";
			this->labelPrice3->Click += gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			//
			// labelLeft3
			//
			this->labelLeft3->AutoSize = true;
			this->labelLeft3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft3->Location = System::Drawing::Point(297, 95);
			this->labelLeft3->Name = L"labelLeft3";
			this->labelLeft3->Size = System::Drawing::Size(97, 24);
			this->labelLeft3->Text = SteelSeriesMouse.getAmount().ToString() + " pieces";
			this->labelLeft3->Click += gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			//
			// labelCountry3
			//
			this->labelCountry3->AutoSize = true;
			this->labelCountry3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry3->Location = System::Drawing::Point(370, 95);
			this->labelCountry3->Name = L"labelCountry3";
			this->labelCountry3->Size = System::Drawing::Size(87, 24);
			this->labelCountry3->Text = SteelSeriesMouse.getMadeIn();
			this->labelCountry3->Click += gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			//
			// labelID4
			//
			this->labelID4->AutoSize = true;
			this->labelID4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID4->Location = System::Drawing::Point(7, 115);
			this->labelID4->Name = L"labelID4";
			this->labelID4->Size = System::Drawing::Size(40, 24);
			this->labelID4->TabIndex = 28;
			this->labelID4->Text = HPMouse.getId().ToString();
			this->labelID4->Click += gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			//
			// labelProduct4
			//
			this->labelProduct4->AutoSize = true;
			this->labelProduct4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct4->Location = System::Drawing::Point(42, 115);
			this->labelProduct4->Name = L"labelProduct4";
			this->labelProduct4->Size = System::Drawing::Size(247, 24);
			this->labelProduct4->TabIndex = 24;
			this->labelProduct4->Text = HPMouse.getName();
			this->labelProduct4->Click += gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			//
			// labelPrice4
			//
			this->labelPrice4->AutoSize = true;
			this->labelPrice4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice4->Location = System::Drawing::Point(217, 115);
			this->labelPrice4->Name = L"labelPrice4";
			this->labelPrice4->Size = System::Drawing::Size(107, 24);
			this->labelPrice4->TabIndex = 26;
			this->labelPrice4->Text = HPMouse.getPrice().ToString() + " uah";
			this->labelPrice4->Click += gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			//
			// labelLeft4
			//
			this->labelLeft4->AutoSize = true;
			this->labelLeft4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft4->Location = System::Drawing::Point(297, 115);
			this->labelLeft4->Name = L"labelLeft4";
			this->labelLeft4->Size = System::Drawing::Size(97, 24);
			this->labelLeft4->Text = HPMouse.getAmount().ToString() + " pieces";
			this->labelLeft4->Click += gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			//
			// labelCountry4
			//
			this->labelCountry4->AutoSize = true;
			this->labelCountry4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry4->Location = System::Drawing::Point(370, 115);
			this->labelCountry4->Name = L"labelCountry4";
			this->labelCountry4->Size = System::Drawing::Size(87, 24);
			this->labelCountry4->Text = HPMouse.getMadeIn();
			this->labelCountry4->Click += gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			//
			// labelID5
			//
			this->labelID5->AutoSize = true;
			this->labelID5->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID5->Location = System::Drawing::Point(7, 135);
			this->labelID5->Name = L"labelID5";
			this->labelID5->Size = System::Drawing::Size(40, 24);
			this->labelID5->TabIndex = 33;
			this->labelID5->Text = VaxeeMouse.getId().ToString();
			this->labelID5->Click += gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			//
			// labelProduct5
			//
			this->labelProduct5->AutoSize = true;
			this->labelProduct5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct5->Location = System::Drawing::Point(42, 135);
			this->labelProduct5->Name = L"labelProduct5";
			this->labelProduct5->Size = System::Drawing::Size(247, 24);
			this->labelProduct5->TabIndex = 29;
			this->labelProduct5->Text = VaxeeMouse.getName();
			this->labelProduct5->Click += gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			//
			// labelPrice5
			//
			this->labelPrice5->AutoSize = true;
			this->labelPrice5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice5->Location = System::Drawing::Point(217, 135);
			this->labelPrice5->Name = L"labelPrice5";
			this->labelPrice5->Size = System::Drawing::Size(107, 24);
			this->labelPrice5->TabIndex = 31;
			this->labelPrice5->Text = VaxeeMouse.getPrice().ToString() + " uah";
			this->labelPrice5->Click += gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			//
			// labelLeft5
			//
			this->labelLeft5->AutoSize = true;
			this->labelLeft5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft5->Location = System::Drawing::Point(297, 135);
			this->labelLeft5->Name = L"labelLeft5";
			this->labelLeft5->Size = System::Drawing::Size(97, 24);
			this->labelLeft5->Text = VaxeeMouse.getAmount().ToString() + " pieces";
			this->labelLeft5->Click += gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			//
			// labelCountry5
			//
			this->labelCountry5->AutoSize = true;
			this->labelCountry5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry5->Location = System::Drawing::Point(370, 135);
			this->labelCountry5->Name = L"labelCountry5";
			this->labelCountry5->Size = System::Drawing::Size(87, 24);
			this->labelCountry5->Text = VaxeeMouse.getMadeIn();
			this->labelCountry5->Click += gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			//
			// labelID6
			//
			this->labelID6->AutoSize = true;
			this->labelID6->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID6->Location = System::Drawing::Point(7, 155);
			this->labelID6->Name = L"labelID6";
			this->labelID6->Size = System::Drawing::Size(40, 24);
			this->labelID6->TabIndex = 38;
			this->labelID6->Text = CorsairMouse.getId().ToString();
			this->labelID6->Click += gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			//
			// labelProduct6
			//
			this->labelProduct6->AutoSize = true;
			this->labelProduct6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct6->Location = System::Drawing::Point(42, 155);
			this->labelProduct6->Name = L"labelProduct6";
			this->labelProduct6->Size = System::Drawing::Size(247, 24);
			this->labelProduct6->TabIndex = 34;
			this->labelProduct6->Text = CorsairMouse.getName();
			this->labelProduct6->Click += gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			//
			// labelPrice6
			//
			this->labelPrice6->AutoSize = true;
			this->labelPrice6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice6->Location = System::Drawing::Point(217, 155);
			this->labelPrice6->Name = L"labelPrice6";
			this->labelPrice6->Size = System::Drawing::Size(107, 24);
			this->labelPrice6->TabIndex = 36;
			this->labelPrice6->Text = CorsairMouse.getPrice().ToString() + " uah";
			this->labelPrice6->Click += gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			//
			// labelLeft6
			//
			this->labelLeft6->AutoSize = true;
			this->labelLeft6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft6->Location = System::Drawing::Point(297, 155);
			this->labelLeft6->Name = L"labelLeft6";
			this->labelLeft6->Size = System::Drawing::Size(97, 24);
			this->labelLeft6->Text = CorsairMouse.getAmount().ToString() + " pieces";
			this->labelLeft6->Click += gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			//
			// labelCountry6
			//
			this->labelCountry6->AutoSize = true;
			this->labelCountry6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry6->Location = System::Drawing::Point(370, 155);
			this->labelCountry6->Name = L"labelCountry6";
			this->labelCountry6->Size = System::Drawing::Size(87, 24);
			this->labelCountry6->Text = CorsairMouse.getMadeIn();
			this->labelCountry6->Click += gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			//
			// labelID7
			//
			this->labelID7->AutoSize = true;
			this->labelID7->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID7->Location = System::Drawing::Point(7, 175);
			this->labelID7->Name = L"labelID7";
			this->labelID7->Size = System::Drawing::Size(40, 24);
			this->labelID7->TabIndex = 43;
			this->labelID7->Text = BenQMouse.getId().ToString();
			this->labelID7->Click += gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			//
			// labelProduct7
			//
			this->labelProduct7->AutoSize = true;
			this->labelProduct7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct7->Location = System::Drawing::Point(42, 175);
			this->labelProduct7->Name = L"labelProduct7";
			this->labelProduct7->Size = System::Drawing::Size(247, 24);
			this->labelProduct7->TabIndex = 39;
			this->labelProduct7->Text = BenQMouse.getName();
			this->labelProduct7->Click += gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			//
			// labelPrice7
			//
			this->labelPrice7->AutoSize = true;
			this->labelPrice7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice7->Location = System::Drawing::Point(217, 175);
			this->labelPrice7->Name = L"labelPrice7";
			this->labelPrice7->Size = System::Drawing::Size(107, 24);
			this->labelPrice7->TabIndex = 41;
			this->labelPrice7->Text = BenQMouse.getPrice().ToString() + " uah";
			this->labelPrice7->Click += gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			//
			// labelLeft7
			//
			this->labelLeft7->AutoSize = true;
			this->labelLeft7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft7->Location = System::Drawing::Point(297, 175);
			this->labelLeft7->Name = L"labelLeft7";
			this->labelLeft7->Size = System::Drawing::Size(97, 24);
			this->labelLeft7->Text = BenQMouse.getAmount().ToString() + " pieces";
			this->labelLeft7->Click += gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			//
			// labelCountry7
			//
			this->labelCountry7->AutoSize = true;
			this->labelCountry7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry7->Location = System::Drawing::Point(370, 175);
			this->labelCountry7->Name = L"labelCountry7";
			this->labelCountry7->Size = System::Drawing::Size(87, 24);
			this->labelCountry7->Text = BenQMouse.getMadeIn();
			this->labelCountry7->Click += gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			//
			// labelID8
			//
			this->labelID8->AutoSize = true;
			this->labelID8->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID8->Location = System::Drawing::Point(7, 195);
			this->labelID8->Name = L"labelID8";
			this->labelID8->Size = System::Drawing::Size(40, 24);
			this->labelID8->TabIndex = 48;
			this->labelID8->Text = HatorMouse.getId().ToString();
			this->labelID8->Click += gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			//
			// labelProduct8
			//
			this->labelProduct8->AutoSize = true;
			this->labelProduct8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct8->Location = System::Drawing::Point(42, 195);
			this->labelProduct8->Name = L"labelProduct8";
			this->labelProduct8->Size = System::Drawing::Size(247, 24);
			this->labelProduct8->TabIndex = 44;
			this->labelProduct8->Text = HatorMouse.getName();
			this->labelProduct8->Click += gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			//
			// labelPrice8
			//
			this->labelPrice8->AutoSize = true;
			this->labelPrice8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice8->Location = System::Drawing::Point(217, 195);
			this->labelPrice8->Name = L"labelPrice8";
			this->labelPrice8->Size = System::Drawing::Size(107, 24);
			this->labelPrice8->TabIndex = 46;
			this->labelPrice8->Text = HatorMouse.getPrice().ToString() + " uah";
			this->labelPrice8->Click += gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			//
			// labelLeft8
			//
			this->labelLeft8->AutoSize = true;
			this->labelLeft8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft8->Location = System::Drawing::Point(297, 195);
			this->labelLeft8->Name = L"labelLeft8";
			this->labelLeft8->Size = System::Drawing::Size(97, 24);
			this->labelLeft8->Text = HatorMouse.getAmount().ToString() + " pieces";
			this->labelLeft8->Click += gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			//
			// labelCountry8
			//
			this->labelCountry8->AutoSize = true;
			this->labelCountry8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry8->Location = System::Drawing::Point(370, 195);
			this->labelCountry8->Name = L"labelCountry8";
			this->labelCountry8->Size = System::Drawing::Size(87, 24);
			this->labelCountry8->Text = HatorMouse.getMadeIn();
			this->labelCountry8->Click += gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		}
		else if (boxAccessories->Text == "Keyboards") {
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);

		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);

		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);

		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);

		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);

		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);

		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);

		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);

		this->labelID9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelProduct9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelPrice9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelLeft9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelCountry9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->Controls->Remove(this->labelProduct1);
			this->Controls->Remove(this->labelCountry1);
			this->Controls->Remove(this->labelPrice1);
			this->Controls->Remove(this->labelLeft1);
			this->Controls->Remove(this->labelID1);
			this->Controls->Remove(this->labelProduct2);
			this->Controls->Remove(this->labelCountry2);
			this->Controls->Remove(this->labelPrice2);
			this->Controls->Remove(this->labelLeft2);
			this->Controls->Remove(this->labelID2);
			this->Controls->Remove(this->labelProduct3);
			this->Controls->Remove(this->labelCountry3);
			this->Controls->Remove(this->labelPrice3);
			this->Controls->Remove(this->labelLeft3);
			this->Controls->Remove(this->labelID3);
			this->Controls->Remove(this->labelProduct4);
			this->Controls->Remove(this->labelCountry4);
			this->Controls->Remove(this->labelPrice4);
			this->Controls->Remove(this->labelLeft4);
			this->Controls->Remove(this->labelID4);
			this->Controls->Remove(this->labelProduct5);
			this->Controls->Remove(this->labelCountry5);
			this->Controls->Remove(this->labelPrice5);
			this->Controls->Remove(this->labelLeft5);
			this->Controls->Remove(this->labelID5);
			this->Controls->Remove(this->labelProduct6);
			this->Controls->Remove(this->labelCountry6);
			this->Controls->Remove(this->labelPrice6);
			this->Controls->Remove(this->labelLeft6);
			this->Controls->Remove(this->labelID6);
			this->Controls->Remove(this->labelProduct7);
			this->Controls->Remove(this->labelCountry7);
			this->Controls->Remove(this->labelPrice7);
			this->Controls->Remove(this->labelLeft7);
			this->Controls->Remove(this->labelID7);
			this->Controls->Remove(this->labelProduct8);
			this->Controls->Remove(this->labelCountry8);
			this->Controls->Remove(this->labelPrice8);
			this->Controls->Remove(this->labelLeft8);
			this->Controls->Remove(this->labelID8);
			this->Controls->Remove(this->labelProduct9);
			this->Controls->Remove(this->labelCountry9);
			this->Controls->Remove(this->labelPrice9);
			this->Controls->Remove(this->labelLeft9);
			this->Controls->Remove(this->labelID9);

			this->Controls->Add(this->labelProduct1);
			this->Controls->Add(this->labelCountry1);
			this->Controls->Add(this->labelPrice1);
			this->Controls->Add(this->labelLeft1);
			this->Controls->Add(this->labelID1);
			this->Controls->Add(this->labelProduct2);
			this->Controls->Add(this->labelCountry2);
			this->Controls->Add(this->labelPrice2);
			this->Controls->Add(this->labelLeft2);
			this->Controls->Add(this->labelID2);
			this->Controls->Add(this->labelProduct3);
			this->Controls->Add(this->labelCountry3);
			this->Controls->Add(this->labelPrice3);
			this->Controls->Add(this->labelLeft3);
			this->Controls->Add(this->labelID3);
			this->Controls->Add(this->labelProduct4);
			this->Controls->Add(this->labelCountry4);
			this->Controls->Add(this->labelPrice4);
			this->Controls->Add(this->labelLeft4);
			this->Controls->Add(this->labelID4);
			this->Controls->Add(this->labelProduct5);
			this->Controls->Add(this->labelCountry5);
			this->Controls->Add(this->labelPrice5);
			this->Controls->Add(this->labelLeft5);
			this->Controls->Add(this->labelID5);
			this->Controls->Add(this->labelProduct6);
			this->Controls->Add(this->labelCountry6);
			this->Controls->Add(this->labelPrice6);
			this->Controls->Add(this->labelLeft6);
			this->Controls->Add(this->labelID6);
			//
			// labelID1
			//
			this->labelID1->AutoSize = true;
			this->labelID1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID1->Location = System::Drawing::Point(7, 55);
			this->labelID1->Name = L"labelID1";
			this->labelID1->Size = System::Drawing::Size(40, 24);
			this->labelID1->TabIndex = 13;
			this->labelID1->Text = HatorKeyboard.getId().ToString();
			this->labelID1->Click += gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			//
			// labelProduct1
			//
			this->labelProduct1->AutoSize = true;
			this->labelProduct1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct1->Location = System::Drawing::Point(42, 55);
			this->labelProduct1->Name = L"labelProduct1";
			this->labelProduct1->Size = System::Drawing::Size(247, 24);
			this->labelProduct1->TabIndex = 11;
			this->labelProduct1->Text = HatorKeyboard.getName();
			this->labelProduct1->Click += gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice1->Location = System::Drawing::Point(217, 55);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Size = System::Drawing::Size(107, 24);
			this->labelPrice1->TabIndex = 12;
			this->labelPrice1->Text = HatorKeyboard.getPrice().ToString() + " uah";
			this->labelPrice1->Click += gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			//
			// labelLeft1
			//
			this->labelLeft1->AutoSize = true;
			this->labelLeft1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft1->Location = System::Drawing::Point(297, 55);
			this->labelLeft1->Name = L"labelLeft1";
			this->labelLeft1->Size = System::Drawing::Size(97, 24);
			this->labelLeft1->Text = HatorKeyboard.getAmount().ToString() + " pieces";
			this->labelLeft1->Click += gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			//
			// labelCountry1
			//
			this->labelCountry1->AutoSize = true;
			this->labelCountry1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry1->Location = System::Drawing::Point(370, 55);
			this->labelCountry1->Name = L"labelCountry1";
			this->labelCountry1->Size = System::Drawing::Size(87, 24);
			this->labelCountry1->Text = HatorKeyboard.getMadeIn();
			this->labelCountry1->Click += gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			//
			// labelID2
			//
			this->labelID2->AutoSize = true;
			this->labelID2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID2->Location = System::Drawing::Point(7, 75);
			this->labelID2->Name = L"labelID2";
			this->labelID2->Size = System::Drawing::Size(40, 24);
			this->labelID2->TabIndex = 18;
			this->labelID2->Text = RazerKeyboard.getId().ToString();
			this->labelID2->Click += gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			//
			// labelProduct2
			//
			this->labelProduct2->AutoSize = true;
			this->labelProduct2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct2->Location = System::Drawing::Point(42, 75);
			this->labelProduct2->Name = L"labelProduct2";
			this->labelProduct2->Size = System::Drawing::Size(247, 24);
			this->labelProduct2->TabIndex = 14;
			this->labelProduct2->Text = RazerKeyboard.getName();
			this->labelProduct2->Click += gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice2->Location = System::Drawing::Point(217, 75);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Size = System::Drawing::Size(107, 24);
			this->labelPrice2->TabIndex = 16;
			this->labelPrice2->Text = RazerKeyboard.getPrice().ToString() + " uah";
			this->labelPrice2->Click += gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			//
			// labelLeft2
			//
			this->labelLeft2->AutoSize = true;
			this->labelLeft2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft2->Location = System::Drawing::Point(297, 75);
			this->labelLeft2->Name = L"labelLeft2";
			this->labelLeft2->Size = System::Drawing::Size(97, 24);
			this->labelLeft2->Text = RazerKeyboard.getAmount().ToString() + " pieces";
			this->labelLeft2->Click += gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			//
			// labelCountry2
			//
			this->labelCountry2->AutoSize = true;
			this->labelCountry2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry2->Location = System::Drawing::Point(370, 75);
			this->labelCountry2->Name = L"labelCountry2";
			this->labelCountry2->Size = System::Drawing::Size(87, 24);
			this->labelCountry2->Text = RazerKeyboard.getMadeIn();
			this->labelCountry2->Click += gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			//
			// labelID3
			//
			this->labelID3->AutoSize = true;
			this->labelID3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID3->Location = System::Drawing::Point(7, 95);
			this->labelID3->Name = L"labelID3";
			this->labelID3->Size = System::Drawing::Size(40, 24);
			this->labelID3->TabIndex = 23;
			this->labelID3->Text = LogitechKeyboard.getId().ToString();
			this->labelID3->Click += gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			//
			// labelProduct3
			//
			this->labelProduct3->AutoSize = true;
			this->labelProduct3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct3->Location = System::Drawing::Point(42, 95);
			this->labelProduct3->Name = L"labelProduct3";
			this->labelProduct3->Size = System::Drawing::Size(247, 24);
			this->labelProduct3->TabIndex = 19;
			this->labelProduct3->Text = LogitechKeyboard.getName();
			this->labelProduct3->Click += gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			//
			// labelPrice3
			//
			this->labelPrice3->AutoSize = true;
			this->labelPrice3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice3->Location = System::Drawing::Point(217, 95);
			this->labelPrice3->Name = L"labelPrice3";
			this->labelPrice3->Size = System::Drawing::Size(107, 24);
			this->labelPrice3->TabIndex = 21;
			this->labelPrice3->Text = LogitechKeyboard.getPrice().ToString() + " uah";
			this->labelPrice3->Click += gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			//
			// labelLeft3
			//
			this->labelLeft3->AutoSize = true;
			this->labelLeft3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft3->Location = System::Drawing::Point(297, 95);
			this->labelLeft3->Name = L"labelLeft3";
			this->labelLeft3->Size = System::Drawing::Size(97, 24);
			this->labelLeft3->Text = LogitechKeyboard.getAmount().ToString() + " pieces";
			this->labelLeft3->Click += gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			//
			// labelCountry3
			//
			this->labelCountry3->AutoSize = true;
			this->labelCountry3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry3->Location = System::Drawing::Point(370, 95);
			this->labelCountry3->Name = L"labelCountry3";
			this->labelCountry3->Size = System::Drawing::Size(87, 24);
			this->labelCountry3->Text = LogitechKeyboard.getMadeIn();
			this->labelCountry3->Click += gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			//
			// labelID4
			//
			this->labelID4->AutoSize = true;
			this->labelID4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID4->Location = System::Drawing::Point(7, 115);
			this->labelID4->Name = L"labelID4";
			this->labelID4->Size = System::Drawing::Size(40, 24);
			this->labelID4->TabIndex = 28;
			this->labelID4->Text = CorsairKeyboard.getId().ToString();
			this->labelID4->Click += gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			//
			// labelProduct4
			//
			this->labelProduct4->AutoSize = true;
			this->labelProduct4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct4->Location = System::Drawing::Point(42, 115);
			this->labelProduct4->Name = L"labelProduct4";
			this->labelProduct4->Size = System::Drawing::Size(247, 24);
			this->labelProduct4->TabIndex = 24;
			this->labelProduct4->Text = CorsairKeyboard.getName();
			this->labelProduct4->Click += gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			//
			// labelPrice4
			//
			this->labelPrice4->AutoSize = true;
			this->labelPrice4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice4->Location = System::Drawing::Point(217, 115);
			this->labelPrice4->Name = L"labelPrice4";
			this->labelPrice4->Size = System::Drawing::Size(107, 24);
			this->labelPrice4->TabIndex = 26;
			this->labelPrice4->Text = CorsairKeyboard.getPrice().ToString() + " uah";
			this->labelPrice4->Click += gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			//
			// labelLeft4
			//
			this->labelLeft4->AutoSize = true;
			this->labelLeft4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft4->Location = System::Drawing::Point(297, 115);
			this->labelLeft4->Name = L"labelLeft4";
			this->labelLeft4->Size = System::Drawing::Size(97, 24);
			this->labelLeft4->Text = CorsairKeyboard.getAmount().ToString() + " pieces";
			this->labelLeft4->Click += gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			//
			// labelCountry4
			//
			this->labelCountry4->AutoSize = true;
			this->labelCountry4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry4->Location = System::Drawing::Point(370, 115);
			this->labelCountry4->Name = L"labelCountry4";
			this->labelCountry4->Size = System::Drawing::Size(87, 24);
			this->labelCountry4->Text = CorsairKeyboard.getMadeIn();
			this->labelCountry4->Click += gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			//
			// labelID5
			//
			this->labelID5->AutoSize = true;
			this->labelID5->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID5->Location = System::Drawing::Point(7, 135);
			this->labelID5->Name = L"labelID5";
			this->labelID5->Size = System::Drawing::Size(40, 24);
			this->labelID5->TabIndex = 33;
			this->labelID5->Text = AsusKeyboard.getId().ToString();
			this->labelID5->Click += gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			//
			// labelProduct5
			//
			this->labelProduct5->AutoSize = true;
			this->labelProduct5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct5->Location = System::Drawing::Point(42, 135);
			this->labelProduct5->Name = L"labelProduct5";
			this->labelProduct5->Size = System::Drawing::Size(247, 24);
			this->labelProduct5->TabIndex = 29;
			this->labelProduct5->Text = AsusKeyboard.getName();
			this->labelProduct5->Click += gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			//
			// labelPrice5
			//
			this->labelPrice5->AutoSize = true;
			this->labelPrice5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice5->Location = System::Drawing::Point(217, 135);
			this->labelPrice5->Name = L"labelPrice5";
			this->labelPrice5->Size = System::Drawing::Size(107, 24);
			this->labelPrice5->TabIndex = 31;
			this->labelPrice5->Text = AsusKeyboard.getPrice().ToString() + " uah";
			this->labelPrice5->Click += gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			//
			// labelLeft5
			//
			this->labelLeft5->AutoSize = true;
			this->labelLeft5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft5->Location = System::Drawing::Point(297, 135);
			this->labelLeft5->Name = L"labelLeft5";
			this->labelLeft5->Size = System::Drawing::Size(97, 24);
			this->labelLeft5->Text = AsusKeyboard.getAmount().ToString() + " pieces";
			this->labelLeft5->Click += gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			//
			// labelCountry5
			//
			this->labelCountry5->AutoSize = true;
			this->labelCountry5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry5->Location = System::Drawing::Point(370, 135);
			this->labelCountry5->Name = L"labelCountry5";
			this->labelCountry5->Size = System::Drawing::Size(87, 24);
			this->labelCountry5->Text = AsusKeyboard.getMadeIn();
			this->labelCountry5->Click += gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			//
			// labelID6
			//
			this->labelID6->AutoSize = true;
			this->labelID6->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID6->Location = System::Drawing::Point(7, 155);
			this->labelID6->Name = L"labelID6";
			this->labelID6->Size = System::Drawing::Size(40, 24);
			this->labelID6->TabIndex = 38;
			this->labelID6->Text = MSIKeyboard.getId().ToString();
			this->labelID6->Click += gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			//
			// labelProduct6
			//
			this->labelProduct6->AutoSize = true;
			this->labelProduct6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct6->Location = System::Drawing::Point(42, 155);
			this->labelProduct6->Name = L"labelProduct6";
			this->labelProduct6->Size = System::Drawing::Size(247, 24);
			this->labelProduct6->TabIndex = 34;
			this->labelProduct6->Text = MSIKeyboard.getName();
			this->labelProduct6->Click += gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			//
			// labelPrice6
			//
			this->labelPrice6->AutoSize = true;
			this->labelPrice6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice6->Location = System::Drawing::Point(217, 155);
			this->labelPrice6->Name = L"labelPrice6";
			this->labelPrice6->Size = System::Drawing::Size(107, 24);
			this->labelPrice6->TabIndex = 36;
			this->labelPrice6->Text = MSIKeyboard.getPrice().ToString() + " uah";
			this->labelPrice6->Click += gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			//
			// labelLeft6
			//
			this->labelLeft6->AutoSize = true;
			this->labelLeft6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft6->Location = System::Drawing::Point(297, 155);
			this->labelLeft6->Name = L"labelLeft6";
			this->labelLeft6->Size = System::Drawing::Size(97, 24);
			this->labelLeft6->Text = MSIKeyboard.getAmount().ToString() + " pieces";
			this->labelLeft6->Click += gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			//
			// labelCountry6
			//
			this->labelCountry6->AutoSize = true;
			this->labelCountry6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry6->Location = System::Drawing::Point(370, 155);
			this->labelCountry6->Name = L"labelCountry6";
			this->labelCountry6->Size = System::Drawing::Size(87, 24);
			this->labelCountry6->Text = MSIKeyboard.getMadeIn();
			this->labelCountry6->Click += gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		}
	}

		   ///////////////////////////////////////////////////////////////////////
	private: System::Void label1HP_Click(System::Object^ sender, System::EventArgs^ e) {
		Headphones SennheiserHeadPhone;
		SennheiserHeadPhone.setName("Sennheiser HD800S");
		SennheiserHeadPhone.setMadeIn("China");
		SennheiserHeadPhone.setAmount(rand() % 100);
		SennheiserHeadPhone.setId(201);
		SennheiserHeadPhone.setPrice(84168);

		CPrice = SennheiserHeadPhone.getPrice();
		CAmount = SennheiserHeadPhone.getAmount();
		CName = SennheiserHeadPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			SennheiserHeadPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label2HP_Click(System::Object^ sender, System::EventArgs^ e) {
		Headphones SonyHeadPhone;
		SonyHeadPhone.setName("Sony WF1000XM4");
		SonyHeadPhone.setMadeIn("China");
		SonyHeadPhone.setAmount(rand() % 100);
		SonyHeadPhone.setId(202);
		SonyHeadPhone.setPrice(8999);

		CPrice = SonyHeadPhone.getPrice();
		CAmount = SonyHeadPhone.getAmount();
		CName = SonyHeadPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			SonyHeadPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label3HP_Click(System::Object^ sender, System::EventArgs^ e) {
		Headphones JBLHeadPhone;
		JBLHeadPhone.setName("JBL Quantum");
		JBLHeadPhone.setMadeIn("China");
		JBLHeadPhone.setAmount(rand() % 100);
		JBLHeadPhone.setId(203);
		JBLHeadPhone.setPrice(6500);

		CPrice = JBLHeadPhone.getPrice();
		CAmount = JBLHeadPhone.getAmount();
		CName = JBLHeadPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			JBLHeadPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label4HP_Click(System::Object^ sender, System::EventArgs^ e) {
		Headphones PanasonicHeadPhone;
		PanasonicHeadPhone.setName("Panasonic RPHD");
		PanasonicHeadPhone.setMadeIn("China");
		PanasonicHeadPhone.setAmount(rand() % 100);
		PanasonicHeadPhone.setId(204);
		PanasonicHeadPhone.setPrice(12471);

		CPrice = PanasonicHeadPhone.getPrice();
		CAmount = PanasonicHeadPhone.getAmount();
		CName = PanasonicHeadPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			PanasonicHeadPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label5HP_Click(System::Object^ sender, System::EventArgs^ e) {
		Headphones BeatsHeadPhone;
		BeatsHeadPhone.setName("Beats Studio3");
		BeatsHeadPhone.setMadeIn("China");
		BeatsHeadPhone.setAmount(rand() % 100);
		BeatsHeadPhone.setId(205);
		BeatsHeadPhone.setPrice(9562);
		CPrice = BeatsHeadPhone.getPrice();
		CAmount = BeatsHeadPhone.getAmount();
		CName = BeatsHeadPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			BeatsHeadPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label6HP_Click(System::Object^ sender, System::EventArgs^ e) {
		Headphones RazerHeadPhone;
		RazerHeadPhone.setName("Razer Blackshark V2");
		RazerHeadPhone.setMadeIn("China");
		RazerHeadPhone.setAmount(rand() % 100);
		RazerHeadPhone.setId(206);
		RazerHeadPhone.setPrice(14279);
		CPrice = RazerHeadPhone.getPrice();
		CAmount = RazerHeadPhone.getAmount();
		CName = RazerHeadPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			RazerHeadPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label7HP_Click(System::Object^ sender, System::EventArgs^ e) {
		Headphones HyperXHeadPhone;
		HyperXHeadPhone.setName("HyperX Cloud MIX");
		HyperXHeadPhone.setMadeIn("China");
		HyperXHeadPhone.setAmount(rand() % 100);
		HyperXHeadPhone.setId(207);
		HyperXHeadPhone.setPrice(6200);
		CPrice = HyperXHeadPhone.getPrice();
		CAmount = HyperXHeadPhone.getAmount();
		CName = HyperXHeadPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			HyperXHeadPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label8HP_Click(System::Object^ sender, System::EventArgs^ e) {
		Headphones LogitechHeadPhone;
		LogitechHeadPhone.setName("Logitech G PRO X Wireless");
		LogitechHeadPhone.setMadeIn("China");
		LogitechHeadPhone.setAmount(0);
		LogitechHeadPhone.setId(208);
		LogitechHeadPhone.setPrice(8074);
		CPrice = LogitechHeadPhone.getPrice();
		CAmount = LogitechHeadPhone.getAmount();
		CName = LogitechHeadPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			LogitechHeadPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label9HP_Click(System::Object^ sender, System::EventArgs^ e) {
		Headphones HatorHeadPhone;
		HatorHeadPhone.setName("Hator Hypergang");
		HatorHeadPhone.setMadeIn("Ukraine");
		HatorHeadPhone.setAmount(rand() % 100);
		HatorHeadPhone.setId(209);
		HatorHeadPhone.setPrice(2195);
		CPrice = HatorHeadPhone.getPrice();
		CAmount = HatorHeadPhone.getAmount();
		CName = HatorHeadPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			HatorHeadPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}

	private: System::Void label1PCM_Click(System::Object^ sender, System::EventArgs^ e) {
		PC_mouses RazerMouse;
		RazerMouse.setName("Razer Mamba");
		RazerMouse.setMadeIn("China");
		RazerMouse.setAmount(rand() % 100);
		RazerMouse.setId(211);
		RazerMouse.setPrice(9774);
		CPrice = RazerMouse.getPrice();
		CAmount = RazerMouse.getAmount();
		CName = RazerMouse.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			RazerMouse.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label2PCM_Click(System::Object^ sender, System::EventArgs^ e) {
		PC_mouses LogitechMouse;
		LogitechMouse.setName("Logitech G PRO Superlight");
		LogitechMouse.setMadeIn("China");
		LogitechMouse.setAmount(0);
		LogitechMouse.setId(212);
		LogitechMouse.setPrice(4130);
		CPrice = LogitechMouse.getPrice();
		CAmount = LogitechMouse.getAmount();
		CName = LogitechMouse.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			LogitechMouse.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label3PCM_Click(System::Object^ sender, System::EventArgs^ e) {
		PC_mouses SteelSeriesMouse;
		SteelSeriesMouse.setName("SteelSeries Prime Wireless");
		SteelSeriesMouse.setMadeIn("China");
		SteelSeriesMouse.setAmount(rand() % 100);
		SteelSeriesMouse.setId(213);
		SteelSeriesMouse.setPrice(4635);
		CPrice = SteelSeriesMouse.getPrice();
		CAmount = SteelSeriesMouse.getAmount();
		CName = SteelSeriesMouse.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			SteelSeriesMouse.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label4PCM_Click(System::Object^ sender, System::EventArgs^ e) {
		PC_mouses HPMouse;
		HPMouse.setName("HP Spectre");
		HPMouse.setMadeIn("China");
		HPMouse.setAmount(rand() % 100);
		HPMouse.setId(214);
		HPMouse.setPrice(2049);
		CPrice = HPMouse.getPrice();
		CAmount = HPMouse.getAmount();
		CName = HPMouse.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			HPMouse.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label5PCM_Click(System::Object^ sender, System::EventArgs^ e) {
		PC_mouses VaxeeMouse;
		VaxeeMouse.setName("Vaxee OUTSET AX");
		VaxeeMouse.setMadeIn("China");
		VaxeeMouse.setAmount(rand() % 100);
		VaxeeMouse.setId(215);
		VaxeeMouse.setPrice(1919);
		CPrice = VaxeeMouse.getPrice();
		CAmount = VaxeeMouse.getAmount();
		CName = VaxeeMouse.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			VaxeeMouse.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label6PCM_Click(System::Object^ sender, System::EventArgs^ e) {
		PC_mouses CorsairMouse;
		CorsairMouse.setName("Corsair Nightsword");
		CorsairMouse.setMadeIn("China");
		CorsairMouse.setAmount(rand() % 100);
		CorsairMouse.setId(216);
		CorsairMouse.setPrice(3255);
		CPrice = CorsairMouse.getPrice();
		CAmount = CorsairMouse.getAmount();
		CName = CorsairMouse.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			CorsairMouse.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label7PCM_Click(System::Object^ sender, System::EventArgs^ e) {
		PC_mouses BenQMouse;
		BenQMouse.setName("BenQ Zowie EC2");
		BenQMouse.setMadeIn("China");
		BenQMouse.setAmount(0);
		BenQMouse.setId(217);
		BenQMouse.setPrice(2250);
		CPrice = BenQMouse.getPrice();
		CAmount = BenQMouse.getAmount();
		CName = BenQMouse.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			BenQMouse.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label8PCM_Click(System::Object^ sender, System::EventArgs^ e) {
		PC_mouses HatorMouse;
		HatorMouse.setName("Hator Vortex");
		HatorMouse.setMadeIn("Ukraine");
		HatorMouse.setAmount(rand() % 100);
		HatorMouse.setId(218);
		HatorMouse.setPrice(1739);
		CPrice = HatorMouse.getPrice();
		CAmount = HatorMouse.getAmount();
		CName = HatorMouse.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			HatorMouse.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}

	private: System::Void label1KB_Click(System::Object^ sender, System::EventArgs^ e) {
		Keyboards HatorKeyboard;
		HatorKeyboard.setName("Hator Rockfall");
		HatorKeyboard.setMadeIn("Ukraine");
		HatorKeyboard.setAmount(rand() % 100);
		HatorKeyboard.setId(221);
		HatorKeyboard.setPrice(2499);
		CPrice = HatorKeyboard.getPrice();
		CAmount = HatorKeyboard.getAmount();
		CName = HatorKeyboard.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			HatorKeyboard.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label2KB_Click(System::Object^ sender, System::EventArgs^ e) {
		Keyboards RazerKeyboard;
		RazerKeyboard.setName("Razer Blackwidow V3");
		RazerKeyboard.setMadeIn("China");
		RazerKeyboard.setAmount(rand() % 100);
		RazerKeyboard.setId(222);
		RazerKeyboard.setPrice(6800);
		CPrice = RazerKeyboard.getPrice();
		CAmount = RazerKeyboard.getAmount();
		CName = RazerKeyboard.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			RazerKeyboard.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label3KB_Click(System::Object^ sender, System::EventArgs^ e) {
		Keyboards LogitechKeyboard;
		LogitechKeyboard.setName("Logitech G915 LIGHTSPEED");
		LogitechKeyboard.setMadeIn("China");
		LogitechKeyboard.setAmount(rand() % 100);
		LogitechKeyboard.setId(223);
		LogitechKeyboard.setPrice(11729);
		CPrice = LogitechKeyboard.getPrice();
		CAmount = LogitechKeyboard.getAmount();
		CName = LogitechKeyboard.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			LogitechKeyboard.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label4KB_Click(System::Object^ sender, System::EventArgs^ e) {
		Keyboards CorsairKeyboard;
		CorsairKeyboard.setName("Corsair K100 Optix");
		CorsairKeyboard.setMadeIn("China");
		CorsairKeyboard.setAmount(rand() % 100);
		CorsairKeyboard.setId(224);
		CorsairKeyboard.setPrice(11000);
		CPrice = CorsairKeyboard.getPrice();
		CAmount = CorsairKeyboard.getAmount();
		CName = CorsairKeyboard.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			CorsairKeyboard.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label5KB_Click(System::Object^ sender, System::EventArgs^ e) {
		Keyboards AsusKeyboard;
		AsusKeyboard.setName("Asus ROG Strix Scope");
		AsusKeyboard.setMadeIn("China");
		AsusKeyboard.setAmount(0);
		AsusKeyboard.setId(225);
		AsusKeyboard.setPrice(11552);
		CPrice = AsusKeyboard.getPrice();
		CAmount = AsusKeyboard.getAmount();
		CName = AsusKeyboard.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			AsusKeyboard.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label6KB_Click(System::Object^ sender, System::EventArgs^ e) {
		Keyboards MSIKeyboard;
		MSIKeyboard.setName("MSI Vigor");
		MSIKeyboard.setMadeIn("China");
		MSIKeyboard.setAmount(rand() % 100);
		MSIKeyboard.setId(226);
		MSIKeyboard.setPrice(2759);
		CPrice = MSIKeyboard.getPrice();
		CAmount = MSIKeyboard.getAmount();
		CName = MSIKeyboard.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			MSIKeyboard.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!"); this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}

	private: System::Void boxDevices_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->boxCategories->Location = System::Drawing::Point(450, 150);
		this->boxAccessories->Location = System::Drawing::Point(450, 190);
		this->boxDevices->Location = System::Drawing::Point(450, 190);
		this->boxPCC->Location = System::Drawing::Point(450, 190);
		this->boxHA->Location = System::Drawing::Point(450, 190);
		buffStore = 1;

		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(25, 3);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Text = boxDevices->Text;
		//
		// labelPress
		//
		this->Controls->Add(this->labelPress);
		this->labelPress->AutoSize = true;
		this->labelPress->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
		this->labelPress->Location = System::Drawing::Point(45, 260);
		this->labelPress->Name = L"labelPress";
		this->labelPress->Text = L"To purchase an item press on the line.";
		//
		// labelBudget
		//
		this->Controls->Add(this->labelBudget);
		this->labelBudget->AutoSize = true;
		this->labelBudget->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
		this->labelBudget->Location = System::Drawing::Point(340, 10);
		this->labelBudget->Name = L"labelBudget";
		this->labelBudget->Text = budget.ToString() + " uah";
		//
		// buttonCart
		//
		this->Controls->Add(this->buttonCart);
		this->buttonCart->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonCart->Font = (gcnew System::Drawing::Font(L"Calibri", 30));
		this->buttonCart->Location = System::Drawing::Point(495, 60);
		this->buttonCart->Name = L"buttonCart";
		this->buttonCart->Size = System::Drawing::Size(75, 70);
		this->buttonCart->Text = L"🛒";
		this->buttonCart->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonCart->UseVisualStyleBackColor = false;
		this->buttonCart->Click -= gcnew System::EventHandler(this, &FormWelcome::buttonCart_Click);
		this->buttonCart->Click += gcnew System::EventHandler(this, &FormWelcome::buttonCart_Click);

		this->Controls->Remove(this->labelProduct1);
		this->Controls->Remove(this->labelCountry1);
		this->Controls->Remove(this->labelPrice1);
		this->Controls->Remove(this->labelLeft1);
		this->Controls->Remove(this->labelID1);
		this->Controls->Remove(this->labelProduct2);
		this->Controls->Remove(this->labelCountry2);
		this->Controls->Remove(this->labelPrice2);
		this->Controls->Remove(this->labelLeft2);
		this->Controls->Remove(this->labelID2);
		this->Controls->Remove(this->labelProduct3);
		this->Controls->Remove(this->labelCountry3);
		this->Controls->Remove(this->labelPrice3);
		this->Controls->Remove(this->labelLeft3);
		this->Controls->Remove(this->labelID3);
		this->Controls->Remove(this->labelProduct4);
		this->Controls->Remove(this->labelCountry4);
		this->Controls->Remove(this->labelPrice4);
		this->Controls->Remove(this->labelLeft4);
		this->Controls->Remove(this->labelID4);
		this->Controls->Remove(this->labelProduct5);
		this->Controls->Remove(this->labelCountry5);
		this->Controls->Remove(this->labelPrice5);
		this->Controls->Remove(this->labelLeft5);
		this->Controls->Remove(this->labelID5);
		this->Controls->Remove(this->labelProduct6);
		this->Controls->Remove(this->labelCountry6);
		this->Controls->Remove(this->labelPrice6);
		this->Controls->Remove(this->labelLeft6);
		this->Controls->Remove(this->labelID6);
		this->Controls->Remove(this->labelProduct7);
		this->Controls->Remove(this->labelCountry7);
		this->Controls->Remove(this->labelPrice7);
		this->Controls->Remove(this->labelLeft7);
		this->Controls->Remove(this->labelID7);
		this->Controls->Remove(this->labelProduct8);
		this->Controls->Remove(this->labelCountry8);
		this->Controls->Remove(this->labelPrice8);
		this->Controls->Remove(this->labelLeft8);
		this->Controls->Remove(this->labelID8);
		this->Controls->Remove(this->labelProduct9);
		this->Controls->Remove(this->labelCountry9);
		this->Controls->Remove(this->labelPrice9);
		this->Controls->Remove(this->labelLeft9);
		this->Controls->Remove(this->labelID9);

		this->Controls->Add(this->labelProduct);
		this->Controls->Add(this->labelCountry);
		this->Controls->Add(this->labelPrice);
		this->Controls->Add(this->labelLeft);
		this->Controls->Add(this->labelID);

		this->Controls->Add(this->labelProduct1);
		this->Controls->Add(this->labelCountry1);
		this->Controls->Add(this->labelPrice1);
		this->Controls->Add(this->labelLeft1);
		this->Controls->Add(this->labelID1);
		this->Controls->Add(this->labelProduct2);
		this->Controls->Add(this->labelCountry2);
		this->Controls->Add(this->labelPrice2);
		this->Controls->Add(this->labelLeft2);
		this->Controls->Add(this->labelID2);
		this->Controls->Add(this->labelProduct3);
		this->Controls->Add(this->labelCountry3);
		this->Controls->Add(this->labelPrice3);
		this->Controls->Add(this->labelLeft3);
		this->Controls->Add(this->labelID3);
		this->Controls->Add(this->labelProduct4);
		this->Controls->Add(this->labelCountry4);
		this->Controls->Add(this->labelPrice4);
		this->Controls->Add(this->labelLeft4);
		this->Controls->Add(this->labelID4);
		this->Controls->Add(this->labelProduct5);
		this->Controls->Add(this->labelCountry5);
		this->Controls->Add(this->labelPrice5);
		this->Controls->Add(this->labelLeft5);
		this->Controls->Add(this->labelID5);
		this->Controls->Add(this->labelProduct6);
		this->Controls->Add(this->labelCountry6);
		this->Controls->Add(this->labelPrice6);
		this->Controls->Add(this->labelLeft6);
		this->Controls->Add(this->labelID6);
		this->Controls->Add(this->labelProduct7);
		this->Controls->Add(this->labelCountry7);
		this->Controls->Add(this->labelPrice7);
		this->Controls->Add(this->labelLeft7);
		this->Controls->Add(this->labelID7);
		this->Controls->Add(this->labelProduct8);
		this->Controls->Add(this->labelCountry8);
		this->Controls->Add(this->labelPrice8);
		this->Controls->Add(this->labelLeft8);
		this->Controls->Add(this->labelID8);
		this->Controls->Add(this->labelProduct9);
		this->Controls->Add(this->labelCountry9);
		this->Controls->Add(this->labelPrice9);
		this->Controls->Add(this->labelLeft9);
		this->Controls->Add(this->labelID9);

		///////////////////////////////////////////////////////////////////////////
		///Девайси
		//Смартфони
		Smartphones XiaomiPhone;
		XiaomiPhone.setName("Xiaomi Mi 11");
		XiaomiPhone.setMadeIn("Chine");
		XiaomiPhone.setAmount(rand() % 100);
		XiaomiPhone.setId(101);
		XiaomiPhone.setPrice(32000);

		Smartphones SamsungPhone;
		SamsungPhone.setName("Samsung Galaxy Fold3");
		SamsungPhone.setMadeIn("China");
		SamsungPhone.setAmount(rand() % 100);
		SamsungPhone.setId(102);
		SamsungPhone.setPrice(55000);

		Smartphones ApplePhone;
		ApplePhone.setName("Apple iPhone 13 Pro");
		ApplePhone.setMadeIn("China");
		ApplePhone.setAmount(rand() % 100);
		ApplePhone.setId(103);
		ApplePhone.setPrice(45000);

		Smartphones RealmePhone;
		RealmePhone.setName("Realme Q3 Pro");
		RealmePhone.setMadeIn("China");
		RealmePhone.setAmount(rand() % 100);
		RealmePhone.setId(104);
		RealmePhone.setPrice(12300);

		Smartphones HuaweiPhone;
		HuaweiPhone.setName("Huawei Nova 8i");
		HuaweiPhone.setMadeIn("China");
		HuaweiPhone.setAmount(rand() % 100);
		HuaweiPhone.setId(105);
		HuaweiPhone.setPrice(10999);

		Smartphones OppoPhone;
		OppoPhone.setName("Oppo Reno 4 Pro");
		OppoPhone.setMadeIn("China");
		OppoPhone.setAmount(rand() % 100);
		OppoPhone.setId(106);
		OppoPhone.setPrice(23079);

		Smartphones OnePlusPhone;
		OnePlusPhone.setName("OnePlus 9 Pro");
		OnePlusPhone.setMadeIn("China");
		OnePlusPhone.setAmount(rand() % 100);
		OnePlusPhone.setId(107);
		OnePlusPhone.setPrice(26199);

		//Планшети
		Tablets SamsungTab;
		SamsungTab.setName("Samsung Galaxy Tab S7");
		SamsungTab.setMadeIn("China");
		SamsungTab.setAmount(rand() % 100);
		SamsungTab.setId(111);
		SamsungTab.setPrice(18499);

		Tablets XiaomiTab;
		XiaomiTab.setName("Xiaomi Pad 5");
		XiaomiTab.setMadeIn("China");
		XiaomiTab.setAmount(rand() % 100);
		XiaomiTab.setId(112);
		XiaomiTab.setPrice(15677);

		Tablets AppleTab;
		AppleTab.setName("Apple iPad Pro M1");
		AppleTab.setMadeIn("China");
		AppleTab.setAmount(rand() % 100);
		AppleTab.setId(113);
		AppleTab.setPrice(83499);

		Tablets MicrosoftTab;
		MicrosoftTab.setName("Microsoft Surface Pro 8");
		MicrosoftTab.setMadeIn("China");
		MicrosoftTab.setAmount(rand() % 100);
		MicrosoftTab.setId(114);
		MicrosoftTab.setPrice(69899);

		Tablets AsusTab;
		AsusTab.setName("Asus Transformer");
		AsusTab.setMadeIn("China");
		AsusTab.setAmount(rand() % 100);
		AsusTab.setId(115);
		AsusTab.setPrice(16499);

		Tablets LenovoTab;
		LenovoTab.setName("Lenovo Tab P12 Pro");
		LenovoTab.setMadeIn("China");
		LenovoTab.setAmount(rand() % 100);
		LenovoTab.setId(116);
		LenovoTab.setPrice(29999);

		//Ноутбуки
		Laptops XiaomiLap;
		XiaomiLap.setName("Xiaomi Redmi G 16");
		XiaomiLap.setMadeIn("China");
		XiaomiLap.setAmount(rand() % 100);
		XiaomiLap.setId(121);
		XiaomiLap.setPrice(59349);

		Laptops AppleLap;
		AppleLap.setName("Apple MacBook Pro M1");
		AppleLap.setMadeIn("China");
		AppleLap.setAmount(rand() % 100);
		AppleLap.setId(122);
		AppleLap.setPrice(123000);

		Laptops HPLap;
		HPLap.setName("HP OMEN 17");
		HPLap.setMadeIn("China");
		HPLap.setAmount(rand() % 100);
		HPLap.setId(123);
		HPLap.setPrice(81499);

		Laptops LenovoLap;
		LenovoLap.setName("Lenovo IdeaPad Flex5");
		LenovoLap.setMadeIn("China");
		LenovoLap.setAmount(rand() % 100);
		LenovoLap.setId(124);
		LenovoLap.setPrice(38114);

		Laptops AsusLap;
		AsusLap.setName("Asus ROG Strix G15");
		AsusLap.setMadeIn("China");
		AsusLap.setAmount(rand() % 100);
		AsusLap.setId(125);
		AsusLap.setPrice(47999);

		Laptops DellLap;
		DellLap.setName("Dell XPS 17");
		DellLap.setMadeIn("China");
		DellLap.setAmount(rand() % 100);
		DellLap.setId(127);
		DellLap.setPrice(122667);

		Laptops MSILap;
		MSILap.setName("MSI Creator Z16");
		MSILap.setMadeIn("China");
		MSILap.setAmount(rand() % 100);
		MSILap.setId(128);
		MSILap.setPrice(109599);

		Laptops AcerLap;
		AcerLap.setName("Acer Predator Triton 300");
		AcerLap.setMadeIn("China");
		AcerLap.setAmount(rand() % 100);
		AcerLap.setId(129);
		AcerLap.setPrice(54284);
		///////////////////////////////////////////////////////////////////////////

		//
		// labelID
		//
		this->labelID->AutoSize = true;
		this->labelID->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->labelID->Location = System::Drawing::Point(7, 35);
		this->labelID->Name = L"labelID";
		this->labelID->Size = System::Drawing::Size(37, 24);
		this->labelID->TabIndex = 4;
		this->labelID->Text = L"ID  ";
		//
		// labelProduct
		//
		this->labelProduct->AutoSize = true;
		this->labelProduct->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelProduct->Location = System::Drawing::Point(42, 35);
		this->labelProduct->Name = L"labelProduct";
		this->labelProduct->Size = System::Drawing::Size(75, 24);
		this->labelProduct->TabIndex = 10;
		this->labelProduct->Text = L"Product";
		//
		// labelPrice
		//
		this->labelPrice->AutoSize = true;
		this->labelPrice->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelPrice->Location = System::Drawing::Point(217, 35);
		this->labelPrice->Name = L"labelPrice";
		this->labelPrice->Size = System::Drawing::Size(50, 24);
		this->labelPrice->TabIndex = 9;
		this->labelPrice->Text = L"Price";
		//
		// labelLeft
		//
		this->labelLeft->AutoSize = true;
		this->labelLeft->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelLeft->Location = System::Drawing::Point(297, 35);
		this->labelLeft->Name = L"labelLeft";
		this->labelLeft->Size = System::Drawing::Size(80, 24);
		this->labelLeft->TabIndex = 7;
		this->labelLeft->Text = L"Left";
		//
		// labelCountry
		//
		this->labelCountry->AutoSize = true;
		this->labelCountry->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelCountry->Location = System::Drawing::Point(370, 35);
		this->labelCountry->Name = L"labelCountry";
		this->labelCountry->Size = System::Drawing::Size(87, 24);
		this->labelCountry->TabIndex = 8;
		this->labelCountry->Text = L"Country";

		if (boxDevices->Text == "Smartphones") {
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);

			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);

			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);

			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);

			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);

			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);

			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);

			this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);

			this->labelID9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelProduct9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelPrice9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelLeft9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelCountry9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->Controls->Remove(this->labelProduct1);
			this->Controls->Remove(this->labelCountry1);
			this->Controls->Remove(this->labelPrice1);
			this->Controls->Remove(this->labelLeft1);
			this->Controls->Remove(this->labelID1);
			this->Controls->Remove(this->labelProduct2);
			this->Controls->Remove(this->labelCountry2);
			this->Controls->Remove(this->labelPrice2);
			this->Controls->Remove(this->labelLeft2);
			this->Controls->Remove(this->labelID2);
			this->Controls->Remove(this->labelProduct3);
			this->Controls->Remove(this->labelCountry3);
			this->Controls->Remove(this->labelPrice3);
			this->Controls->Remove(this->labelLeft3);
			this->Controls->Remove(this->labelID3);
			this->Controls->Remove(this->labelProduct4);
			this->Controls->Remove(this->labelCountry4);
			this->Controls->Remove(this->labelPrice4);
			this->Controls->Remove(this->labelLeft4);
			this->Controls->Remove(this->labelID4);
			this->Controls->Remove(this->labelProduct5);
			this->Controls->Remove(this->labelCountry5);
			this->Controls->Remove(this->labelPrice5);
			this->Controls->Remove(this->labelLeft5);
			this->Controls->Remove(this->labelID5);
			this->Controls->Remove(this->labelProduct6);
			this->Controls->Remove(this->labelCountry6);
			this->Controls->Remove(this->labelPrice6);
			this->Controls->Remove(this->labelLeft6);
			this->Controls->Remove(this->labelID6);
			this->Controls->Remove(this->labelProduct7);
			this->Controls->Remove(this->labelCountry7);
			this->Controls->Remove(this->labelPrice7);
			this->Controls->Remove(this->labelLeft7);
			this->Controls->Remove(this->labelID7);
			this->Controls->Remove(this->labelProduct8);
			this->Controls->Remove(this->labelCountry8);
			this->Controls->Remove(this->labelPrice8);
			this->Controls->Remove(this->labelLeft8);
			this->Controls->Remove(this->labelID8);
			this->Controls->Remove(this->labelProduct9);
			this->Controls->Remove(this->labelCountry9);
			this->Controls->Remove(this->labelPrice9);
			this->Controls->Remove(this->labelLeft9);
			this->Controls->Remove(this->labelID9);

			this->Controls->Add(this->labelProduct1);
			this->Controls->Add(this->labelCountry1);
			this->Controls->Add(this->labelPrice1);
			this->Controls->Add(this->labelLeft1);
			this->Controls->Add(this->labelID1);
			this->Controls->Add(this->labelProduct2);
			this->Controls->Add(this->labelCountry2);
			this->Controls->Add(this->labelPrice2);
			this->Controls->Add(this->labelLeft2);
			this->Controls->Add(this->labelID2);
			this->Controls->Add(this->labelProduct3);
			this->Controls->Add(this->labelCountry3);
			this->Controls->Add(this->labelPrice3);
			this->Controls->Add(this->labelLeft3);
			this->Controls->Add(this->labelID3);
			this->Controls->Add(this->labelProduct4);
			this->Controls->Add(this->labelCountry4);
			this->Controls->Add(this->labelPrice4);
			this->Controls->Add(this->labelLeft4);
			this->Controls->Add(this->labelID4);
			this->Controls->Add(this->labelProduct5);
			this->Controls->Add(this->labelCountry5);
			this->Controls->Add(this->labelPrice5);
			this->Controls->Add(this->labelLeft5);
			this->Controls->Add(this->labelID5);
			this->Controls->Add(this->labelProduct6);
			this->Controls->Add(this->labelCountry6);
			this->Controls->Add(this->labelPrice6);
			this->Controls->Add(this->labelLeft6);
			this->Controls->Add(this->labelID6);
			this->Controls->Add(this->labelProduct7);
			this->Controls->Add(this->labelCountry7);
			this->Controls->Add(this->labelPrice7);
			this->Controls->Add(this->labelLeft7);
			this->Controls->Add(this->labelID7);

			//
			// labelID1
			//
			this->labelID1->AutoSize = true;
			this->labelID1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID1->Location = System::Drawing::Point(7, 55);
			this->labelID1->Name = L"labelID1";
			this->labelID1->Size = System::Drawing::Size(40, 24);
			this->labelID1->TabIndex = 13;
			this->labelID1->Text = XiaomiPhone.getId().ToString();
			this->labelID1->Click += gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			//
			// labelProduct1
			//
			this->labelProduct1->AutoSize = true;
			this->labelProduct1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct1->Location = System::Drawing::Point(42, 55);
			this->labelProduct1->Name = L"labelProduct1";
			this->labelProduct1->Size = System::Drawing::Size(247, 24);
			this->labelProduct1->TabIndex = 11;
			this->labelProduct1->Text = XiaomiPhone.getName();
			this->labelProduct1->Click += gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice1->Location = System::Drawing::Point(217, 55);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Size = System::Drawing::Size(107, 24);
			this->labelPrice1->TabIndex = 12;
			this->labelPrice1->Text = XiaomiPhone.getPrice().ToString() + " uah";
			this->labelPrice1->Click += gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			//
			// labelLeft1
			//
			this->labelLeft1->AutoSize = true;
			this->labelLeft1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft1->Location = System::Drawing::Point(297, 55);
			this->labelLeft1->Name = L"labelLeft1";
			this->labelLeft1->Size = System::Drawing::Size(97, 24);
			this->labelLeft1->Text = XiaomiPhone.getAmount().ToString() + " pieces";
			this->labelLeft1->Click += gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			//
			// labelCountry1
			//
			this->labelCountry1->AutoSize = true;
			this->labelCountry1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry1->Location = System::Drawing::Point(370, 55);
			this->labelCountry1->Name = L"labelCountry1";
			this->labelCountry1->Size = System::Drawing::Size(87, 24);
			this->labelCountry1->Text = XiaomiPhone.getMadeIn();
			this->labelCountry1->Click += gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			//
			// labelID2
			//
			this->labelID2->AutoSize = true;
			this->labelID2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID2->Location = System::Drawing::Point(7, 75);
			this->labelID2->Name = L"labelID2";
			this->labelID2->Size = System::Drawing::Size(40, 24);
			this->labelID2->TabIndex = 18;
			this->labelID2->Text = SamsungPhone.getId().ToString();
			this->labelID2->Click += gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			//
			// labelProduct2
			//
			this->labelProduct2->AutoSize = true;
			this->labelProduct2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct2->Location = System::Drawing::Point(42, 75);
			this->labelProduct2->Name = L"labelProduct2";
			this->labelProduct2->Size = System::Drawing::Size(247, 24);
			this->labelProduct2->TabIndex = 14;
			this->labelProduct2->Text = SamsungPhone.getName();
			this->labelProduct2->Click += gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice2->Location = System::Drawing::Point(217, 75);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Size = System::Drawing::Size(107, 24);
			this->labelPrice2->TabIndex = 16;
			this->labelPrice2->Text = SamsungPhone.getPrice().ToString() + " uah";
			this->labelPrice2->Click += gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			//
			// labelLeft2
			//
			this->labelLeft2->AutoSize = true;
			this->labelLeft2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft2->Location = System::Drawing::Point(297, 75);
			this->labelLeft2->Name = L"labelLeft2";
			this->labelLeft2->Size = System::Drawing::Size(97, 24);
			this->labelLeft2->Text = SamsungPhone.getAmount().ToString() + " pieces";
			this->labelLeft2->Click += gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			//
			// labelCountry2
			//
			this->labelCountry2->AutoSize = true;
			this->labelCountry2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry2->Location = System::Drawing::Point(370, 75);
			this->labelCountry2->Name = L"labelCountry2";
			this->labelCountry2->Size = System::Drawing::Size(87, 24);
			this->labelCountry2->Text = SamsungPhone.getMadeIn();
			this->labelCountry2->Click += gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			//
			// labelID3
			//
			this->labelID3->AutoSize = true;
			this->labelID3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID3->Location = System::Drawing::Point(7, 95);
			this->labelID3->Name = L"labelID3";
			this->labelID3->Size = System::Drawing::Size(40, 24);
			this->labelID3->TabIndex = 23;
			this->labelID3->Text = ApplePhone.getId().ToString();
			this->labelID3->Click += gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			//
			// labelProduct3
			//
			this->labelProduct3->AutoSize = true;
			this->labelProduct3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct3->Location = System::Drawing::Point(42, 95);
			this->labelProduct3->Name = L"labelProduct3";
			this->labelProduct3->Size = System::Drawing::Size(247, 24);
			this->labelProduct3->TabIndex = 19;
			this->labelProduct3->Text = ApplePhone.getName();
			this->labelProduct3->Click += gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			//
			// labelPrice3
			//
			this->labelPrice3->AutoSize = true;
			this->labelPrice3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice3->Location = System::Drawing::Point(217, 95);
			this->labelPrice3->Name = L"labelPrice3";
			this->labelPrice3->Size = System::Drawing::Size(107, 24);
			this->labelPrice3->TabIndex = 21;
			this->labelPrice3->Text = ApplePhone.getPrice().ToString() + " uah";
			this->labelPrice3->Click += gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			//
			// labelLeft3
			//
			this->labelLeft3->AutoSize = true;
			this->labelLeft3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft3->Location = System::Drawing::Point(297, 95);
			this->labelLeft3->Name = L"labelLeft3";
			this->labelLeft3->Size = System::Drawing::Size(97, 24);
			this->labelLeft3->Text = ApplePhone.getAmount().ToString() + " pieces";
			this->labelLeft3->Click += gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			//
			// labelCountry3
			//
			this->labelCountry3->AutoSize = true;
			this->labelCountry3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry3->Location = System::Drawing::Point(370, 95);
			this->labelCountry3->Name = L"labelCountry3";
			this->labelCountry3->Size = System::Drawing::Size(87, 24);
			this->labelCountry3->Text = ApplePhone.getMadeIn();
			this->labelCountry3->Click += gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			//
			// labelID4
			//
			this->labelID4->AutoSize = true;
			this->labelID4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID4->Location = System::Drawing::Point(7, 115);
			this->labelID4->Name = L"labelID4";
			this->labelID4->Size = System::Drawing::Size(40, 24);
			this->labelID4->TabIndex = 28;
			this->labelID4->Text = RealmePhone.getId().ToString();
			this->labelID4->Click += gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			//
			// labelProduct4
			//
			this->labelProduct4->AutoSize = true;
			this->labelProduct4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct4->Location = System::Drawing::Point(42, 115);
			this->labelProduct4->Name = L"labelProduct4";
			this->labelProduct4->Size = System::Drawing::Size(247, 24);
			this->labelProduct4->TabIndex = 24;
			this->labelProduct4->Text = RealmePhone.getName();
			this->labelProduct4->Click += gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			//
			// labelPrice4
			//
			this->labelPrice4->AutoSize = true;
			this->labelPrice4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice4->Location = System::Drawing::Point(217, 115);
			this->labelPrice4->Name = L"labelPrice4";
			this->labelPrice4->Size = System::Drawing::Size(107, 24);
			this->labelPrice4->TabIndex = 26;
			this->labelPrice4->Text = RealmePhone.getPrice().ToString() + " uah";
			this->labelPrice4->Click += gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			//
			// labelLeft4
			//
			this->labelLeft4->AutoSize = true;
			this->labelLeft4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft4->Location = System::Drawing::Point(297, 115);
			this->labelLeft4->Name = L"labelLeft4";
			this->labelLeft4->Size = System::Drawing::Size(97, 24);
			this->labelLeft4->Text = RealmePhone.getAmount().ToString() + " pieces";
			this->labelLeft4->Click += gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			//
			// labelCountry4
			//
			this->labelCountry4->AutoSize = true;
			this->labelCountry4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry4->Location = System::Drawing::Point(370, 115);
			this->labelCountry4->Name = L"labelCountry4";
			this->labelCountry4->Size = System::Drawing::Size(87, 24);
			this->labelCountry4->Text = RealmePhone.getMadeIn();
			this->labelCountry4->Click += gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			//
			// labelID5
			//
			this->labelID5->AutoSize = true;
			this->labelID5->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID5->Location = System::Drawing::Point(7, 135);
			this->labelID5->Name = L"labelID5";
			this->labelID5->Size = System::Drawing::Size(40, 24);
			this->labelID5->TabIndex = 33;
			this->labelID5->Text = HuaweiPhone.getId().ToString();
			this->labelID5->Click += gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			//
			// labelProduct5
			//
			this->labelProduct5->AutoSize = true;
			this->labelProduct5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct5->Location = System::Drawing::Point(42, 135);
			this->labelProduct5->Name = L"labelProduct5";
			this->labelProduct5->Size = System::Drawing::Size(247, 24);
			this->labelProduct5->TabIndex = 29;
			this->labelProduct5->Text = HuaweiPhone.getName();
			this->labelProduct5->Click += gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			//
			// labelPrice5
			//
			this->labelPrice5->AutoSize = true;
			this->labelPrice5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice5->Location = System::Drawing::Point(217, 135);
			this->labelPrice5->Name = L"labelPrice5";
			this->labelPrice5->Size = System::Drawing::Size(107, 24);
			this->labelPrice5->TabIndex = 31;
			this->labelPrice5->Text = HuaweiPhone.getPrice().ToString() + " uah";
			this->labelPrice5->Click += gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			//
			// labelLeft5
			//
			this->labelLeft5->AutoSize = true;
			this->labelLeft5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft5->Location = System::Drawing::Point(297, 135);
			this->labelLeft5->Name = L"labelLeft5";
			this->labelLeft5->Size = System::Drawing::Size(97, 24);
			this->labelLeft5->Text = HuaweiPhone.getAmount().ToString() + " pieces";
			this->labelLeft5->Click += gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			//
			// labelCountry5
			//
			this->labelCountry5->AutoSize = true;
			this->labelCountry5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry5->Location = System::Drawing::Point(370, 135);
			this->labelCountry5->Name = L"labelCountry5";
			this->labelCountry5->Size = System::Drawing::Size(87, 24);
			this->labelCountry5->Text = HuaweiPhone.getMadeIn();
			this->labelCountry5->Click += gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			//
			// labelID6
			//
			this->labelID6->AutoSize = true;
			this->labelID6->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID6->Location = System::Drawing::Point(7, 155);
			this->labelID6->Name = L"labelID6";
			this->labelID6->Size = System::Drawing::Size(40, 24);
			this->labelID6->TabIndex = 38;
			this->labelID6->Text = OppoPhone.getId().ToString();
			this->labelID6->Click += gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			//
			// labelProduct6
			//
			this->labelProduct6->AutoSize = true;
			this->labelProduct6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct6->Location = System::Drawing::Point(42, 155);
			this->labelProduct6->Name = L"labelProduct6";
			this->labelProduct6->Size = System::Drawing::Size(247, 24);
			this->labelProduct6->TabIndex = 34;
			this->labelProduct6->Text = OppoPhone.getName();
			this->labelProduct6->Click += gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			//
			// labelPrice6
			//
			this->labelPrice6->AutoSize = true;
			this->labelPrice6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice6->Location = System::Drawing::Point(217, 155);
			this->labelPrice6->Name = L"labelPrice6";
			this->labelPrice6->Size = System::Drawing::Size(107, 24);
			this->labelPrice6->TabIndex = 36;
			this->labelPrice6->Text = OppoPhone.getPrice().ToString() + " uah";
			this->labelPrice6->Click += gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			//
			// labelLeft6
			//
			this->labelLeft6->AutoSize = true;
			this->labelLeft6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft6->Location = System::Drawing::Point(297, 155);
			this->labelLeft6->Name = L"labelLeft6";
			this->labelLeft6->Size = System::Drawing::Size(97, 24);
			this->labelLeft6->Text = OppoPhone.getAmount().ToString() + " pieces";
			this->labelLeft6->Click += gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			//
			// labelCountry6
			//
			this->labelCountry6->AutoSize = true;
			this->labelCountry6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry6->Location = System::Drawing::Point(370, 155);
			this->labelCountry6->Name = L"labelCountry6";
			this->labelCountry6->Size = System::Drawing::Size(87, 24);
			this->labelCountry6->Text = OppoPhone.getMadeIn();
			this->labelCountry6->Click += gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			//
			// labelID7
			//
			this->labelID7->AutoSize = true;
			this->labelID7->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID7->Location = System::Drawing::Point(7, 175);
			this->labelID7->Name = L"labelID7";
			this->labelID7->Size = System::Drawing::Size(40, 24);
			this->labelID7->TabIndex = 43;
			this->labelID7->Text = OnePlusPhone.getId().ToString();
			this->labelID7->Click += gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			//
			// labelProduct7
			//
			this->labelProduct7->AutoSize = true;
			this->labelProduct7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct7->Location = System::Drawing::Point(42, 175);
			this->labelProduct7->Name = L"labelProduct7";
			this->labelProduct7->Size = System::Drawing::Size(247, 24);
			this->labelProduct7->TabIndex = 39;
			this->labelProduct7->Text = OnePlusPhone.getName();
			this->labelProduct7->Click += gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			//
			// labelPrice7
			//
			this->labelPrice7->AutoSize = true;
			this->labelPrice7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice7->Location = System::Drawing::Point(217, 175);
			this->labelPrice7->Name = L"labelPrice7";
			this->labelPrice7->Size = System::Drawing::Size(107, 24);
			this->labelPrice7->TabIndex = 41;
			this->labelPrice7->Text = OnePlusPhone.getPrice().ToString() + " uah";
			this->labelPrice7->Click += gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			//
			// labelLeft7
			//
			this->labelLeft7->AutoSize = true;
			this->labelLeft7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft7->Location = System::Drawing::Point(297, 175);
			this->labelLeft7->Name = L"labelLeft7";
			this->labelLeft7->Size = System::Drawing::Size(97, 24);
			this->labelLeft7->Text = OnePlusPhone.getAmount().ToString() + " pieces";
			this->labelLeft7->Click += gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			//
			// labelCountry7
			//
			this->labelCountry7->AutoSize = true;
			this->labelCountry7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry7->Location = System::Drawing::Point(370, 175);
			this->labelCountry7->Name = L"labelCountry7";
			this->labelCountry7->Size = System::Drawing::Size(87, 24);
			this->labelCountry7->Text = OnePlusPhone.getMadeIn();
			this->labelCountry7->Click += gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		}
		else if (boxDevices->Text == "Tablets") {
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);

		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);

		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);

		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);

		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);

		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);

		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);

		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);

		this->labelID9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelProduct9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelPrice9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelLeft9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelCountry9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->Controls->Remove(this->labelProduct1);
			this->Controls->Remove(this->labelCountry1);
			this->Controls->Remove(this->labelPrice1);
			this->Controls->Remove(this->labelLeft1);
			this->Controls->Remove(this->labelID1);
			this->Controls->Remove(this->labelProduct2);
			this->Controls->Remove(this->labelCountry2);
			this->Controls->Remove(this->labelPrice2);
			this->Controls->Remove(this->labelLeft2);
			this->Controls->Remove(this->labelID2);
			this->Controls->Remove(this->labelProduct3);
			this->Controls->Remove(this->labelCountry3);
			this->Controls->Remove(this->labelPrice3);
			this->Controls->Remove(this->labelLeft3);
			this->Controls->Remove(this->labelID3);
			this->Controls->Remove(this->labelProduct4);
			this->Controls->Remove(this->labelCountry4);
			this->Controls->Remove(this->labelPrice4);
			this->Controls->Remove(this->labelLeft4);
			this->Controls->Remove(this->labelID4);
			this->Controls->Remove(this->labelProduct5);
			this->Controls->Remove(this->labelCountry5);
			this->Controls->Remove(this->labelPrice5);
			this->Controls->Remove(this->labelLeft5);
			this->Controls->Remove(this->labelID5);
			this->Controls->Remove(this->labelProduct6);
			this->Controls->Remove(this->labelCountry6);
			this->Controls->Remove(this->labelPrice6);
			this->Controls->Remove(this->labelLeft6);
			this->Controls->Remove(this->labelID6);
			this->Controls->Remove(this->labelProduct7);
			this->Controls->Remove(this->labelCountry7);
			this->Controls->Remove(this->labelPrice7);
			this->Controls->Remove(this->labelLeft7);
			this->Controls->Remove(this->labelID7);
			this->Controls->Remove(this->labelProduct8);
			this->Controls->Remove(this->labelCountry8);
			this->Controls->Remove(this->labelPrice8);
			this->Controls->Remove(this->labelLeft8);
			this->Controls->Remove(this->labelID8);
			this->Controls->Remove(this->labelProduct9);
			this->Controls->Remove(this->labelCountry9);
			this->Controls->Remove(this->labelPrice9);
			this->Controls->Remove(this->labelLeft9);
			this->Controls->Remove(this->labelID9);

			this->Controls->Add(this->labelProduct1);
			this->Controls->Add(this->labelCountry1);
			this->Controls->Add(this->labelPrice1);
			this->Controls->Add(this->labelLeft1);
			this->Controls->Add(this->labelID1);
			this->Controls->Add(this->labelProduct2);
			this->Controls->Add(this->labelCountry2);
			this->Controls->Add(this->labelPrice2);
			this->Controls->Add(this->labelLeft2);
			this->Controls->Add(this->labelID2);
			this->Controls->Add(this->labelProduct3);
			this->Controls->Add(this->labelCountry3);
			this->Controls->Add(this->labelPrice3);
			this->Controls->Add(this->labelLeft3);
			this->Controls->Add(this->labelID3);
			this->Controls->Add(this->labelProduct4);
			this->Controls->Add(this->labelCountry4);
			this->Controls->Add(this->labelPrice4);
			this->Controls->Add(this->labelLeft4);
			this->Controls->Add(this->labelID4);
			this->Controls->Add(this->labelProduct5);
			this->Controls->Add(this->labelCountry5);
			this->Controls->Add(this->labelPrice5);
			this->Controls->Add(this->labelLeft5);
			this->Controls->Add(this->labelID5);
			this->Controls->Add(this->labelProduct6);
			this->Controls->Add(this->labelCountry6);
			this->Controls->Add(this->labelPrice6);
			this->Controls->Add(this->labelLeft6);
			this->Controls->Add(this->labelID6);

			//
			// labelID1
			//
			this->labelID1->AutoSize = true;
			this->labelID1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID1->Location = System::Drawing::Point(7, 55);
			this->labelID1->Name = L"labelID1";
			this->labelID1->Size = System::Drawing::Size(40, 24);
			this->labelID1->TabIndex = 13;
			this->labelID1->Text = SamsungTab.getId().ToString();
			this->labelID1->Click += gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			//
			// labelProduct1
			//
			this->labelProduct1->AutoSize = true;
			this->labelProduct1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct1->Location = System::Drawing::Point(42, 55);
			this->labelProduct1->Name = L"labelProduct1";
			this->labelProduct1->Size = System::Drawing::Size(247, 24);
			this->labelProduct1->TabIndex = 11;
			this->labelProduct1->Text = SamsungTab.getName();
			this->labelProduct1->Click += gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice1->Location = System::Drawing::Point(217, 55);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Size = System::Drawing::Size(107, 24);
			this->labelPrice1->TabIndex = 12;
			this->labelPrice1->Text = SamsungTab.getPrice().ToString() + " uah";
			this->labelPrice1->Click += gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			//
			// labelLeft1
			//
			this->labelLeft1->AutoSize = true;
			this->labelLeft1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft1->Location = System::Drawing::Point(297, 55);
			this->labelLeft1->Name = L"labelLeft1";
			this->labelLeft1->Size = System::Drawing::Size(97, 24);
			this->labelLeft1->Text = SamsungTab.getAmount().ToString() + " pieces";
			this->labelLeft1->Click += gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			//
			// labelCountry1
			//
			this->labelCountry1->AutoSize = true;
			this->labelCountry1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry1->Location = System::Drawing::Point(370, 55);
			this->labelCountry1->Name = L"labelCountry1";
			this->labelCountry1->Size = System::Drawing::Size(87, 24);
			this->labelCountry1->Text = SamsungTab.getMadeIn();
			this->labelCountry1->Click += gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			//
			// labelID2
			//
			this->labelID2->AutoSize = true;
			this->labelID2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID2->Location = System::Drawing::Point(7, 75);
			this->labelID2->Name = L"labelID2";
			this->labelID2->Size = System::Drawing::Size(40, 24);
			this->labelID2->TabIndex = 18;
			this->labelID2->Text = XiaomiTab.getId().ToString();
			this->labelID2->Click += gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			//
			// labelProduct2
			//
			this->labelProduct2->AutoSize = true;
			this->labelProduct2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct2->Location = System::Drawing::Point(42, 75);
			this->labelProduct2->Name = L"labelProduct2";
			this->labelProduct2->Size = System::Drawing::Size(247, 24);
			this->labelProduct2->TabIndex = 14;
			this->labelProduct2->Text = XiaomiTab.getName();
			this->labelProduct2->Click += gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice2->Location = System::Drawing::Point(217, 75);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Size = System::Drawing::Size(107, 24);
			this->labelPrice2->TabIndex = 16;
			this->labelPrice2->Text = XiaomiTab.getPrice().ToString() + " uah";
			this->labelPrice2->Click += gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			//
			// labelLeft2
			//
			this->labelLeft2->AutoSize = true;
			this->labelLeft2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft2->Location = System::Drawing::Point(297, 75);
			this->labelLeft2->Name = L"labelLeft2";
			this->labelLeft2->Size = System::Drawing::Size(97, 24);
			this->labelLeft2->Text = XiaomiTab.getAmount().ToString() + " pieces";
			this->labelLeft2->Click += gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			//
			// labelCountry2
			//
			this->labelCountry2->AutoSize = true;
			this->labelCountry2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry2->Location = System::Drawing::Point(370, 75);
			this->labelCountry2->Name = L"labelCountry2";
			this->labelCountry2->Size = System::Drawing::Size(87, 24);
			this->labelCountry2->Text = XiaomiTab.getMadeIn();
			this->labelCountry2->Click += gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			//
			// labelID3
			//
			this->labelID3->AutoSize = true;
			this->labelID3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID3->Location = System::Drawing::Point(7, 95);
			this->labelID3->Name = L"labelID3";
			this->labelID3->Size = System::Drawing::Size(40, 24);
			this->labelID3->TabIndex = 23;
			this->labelID3->Text = AppleTab.getId().ToString();
			this->labelID3->Click += gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			//
			// labelProduct3
			//
			this->labelProduct3->AutoSize = true;
			this->labelProduct3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct3->Location = System::Drawing::Point(42, 95);
			this->labelProduct3->Name = L"labelProduct3";
			this->labelProduct3->Size = System::Drawing::Size(247, 24);
			this->labelProduct3->TabIndex = 19;
			this->labelProduct3->Text = AppleTab.getName();
			this->labelProduct3->Click += gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			//
			// labelPrice3
			//
			this->labelPrice3->AutoSize = true;
			this->labelPrice3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice3->Location = System::Drawing::Point(217, 95);
			this->labelPrice3->Name = L"labelPrice3";
			this->labelPrice3->Size = System::Drawing::Size(107, 24);
			this->labelPrice3->TabIndex = 21;
			this->labelPrice3->Text = AppleTab.getPrice().ToString() + " uah";
			this->labelPrice3->Click += gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			//
			// labelLeft3
			//
			this->labelLeft3->AutoSize = true;
			this->labelLeft3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft3->Location = System::Drawing::Point(297, 95);
			this->labelLeft3->Name = L"labelLeft3";
			this->labelLeft3->Size = System::Drawing::Size(97, 24);
			this->labelLeft3->Text = AppleTab.getAmount().ToString() + " pieces";
			this->labelLeft3->Click += gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			//
			// labelCountry3
			//
			this->labelCountry3->AutoSize = true;
			this->labelCountry3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry3->Location = System::Drawing::Point(370, 95);
			this->labelCountry3->Name = L"labelCountry3";
			this->labelCountry3->Size = System::Drawing::Size(87, 24);
			this->labelCountry3->Text = AppleTab.getMadeIn();
			this->labelCountry3->Click += gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			//
			// labelID4
			//
			this->labelID4->AutoSize = true;
			this->labelID4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID4->Location = System::Drawing::Point(7, 115);
			this->labelID4->Name = L"labelID4";
			this->labelID4->Size = System::Drawing::Size(40, 24);
			this->labelID4->TabIndex = 28;
			this->labelID4->Text = MicrosoftTab.getId().ToString();
			this->labelID4->Click += gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			//
			// labelProduct4
			//
			this->labelProduct4->AutoSize = true;
			this->labelProduct4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct4->Location = System::Drawing::Point(42, 115);
			this->labelProduct4->Name = L"labelProduct4";
			this->labelProduct4->Size = System::Drawing::Size(247, 24);
			this->labelProduct4->TabIndex = 24;
			this->labelProduct4->Text = MicrosoftTab.getName();
			this->labelProduct4->Click += gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			//
			// labelPrice4
			//
			this->labelPrice4->AutoSize = true;
			this->labelPrice4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice4->Location = System::Drawing::Point(217, 115);
			this->labelPrice4->Name = L"labelPrice4";
			this->labelPrice4->Size = System::Drawing::Size(107, 24);
			this->labelPrice4->TabIndex = 26;
			this->labelPrice4->Text = MicrosoftTab.getPrice().ToString() + " uah";
			this->labelPrice4->Click += gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			//
			// labelLeft4
			//
			this->labelLeft4->AutoSize = true;
			this->labelLeft4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft4->Location = System::Drawing::Point(297, 115);
			this->labelLeft4->Name = L"labelLeft4";
			this->labelLeft4->Size = System::Drawing::Size(97, 24);
			this->labelLeft4->Text = MicrosoftTab.getAmount().ToString() + " pieces";
			this->labelLeft4->Click += gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			//
			// labelCountry4
			//
			this->labelCountry4->AutoSize = true;
			this->labelCountry4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry4->Location = System::Drawing::Point(370, 115);
			this->labelCountry4->Name = L"labelCountry4";
			this->labelCountry4->Size = System::Drawing::Size(87, 24);
			this->labelCountry4->Text = MicrosoftTab.getMadeIn();
			this->labelCountry4->Click += gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			//
			// labelID5
			//
			this->labelID5->AutoSize = true;
			this->labelID5->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID5->Location = System::Drawing::Point(7, 135);
			this->labelID5->Name = L"labelID5";
			this->labelID5->Size = System::Drawing::Size(40, 24);
			this->labelID5->TabIndex = 33;
			this->labelID5->Text = AsusTab.getId().ToString();
			this->labelID5->Click += gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			//
			// labelProduct5
			//
			this->labelProduct5->AutoSize = true;
			this->labelProduct5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct5->Location = System::Drawing::Point(42, 135);
			this->labelProduct5->Name = L"labelProduct5";
			this->labelProduct5->Size = System::Drawing::Size(247, 24);
			this->labelProduct5->TabIndex = 29;
			this->labelProduct5->Text = AsusTab.getName();
			this->labelProduct5->Click += gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			//
			// labelPrice5
			//
			this->labelPrice5->AutoSize = true;
			this->labelPrice5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice5->Location = System::Drawing::Point(217, 135);
			this->labelPrice5->Name = L"labelPrice5";
			this->labelPrice5->Size = System::Drawing::Size(107, 24);
			this->labelPrice5->TabIndex = 31;
			this->labelPrice5->Text = AsusTab.getPrice().ToString() + " uah";
			this->labelPrice5->Click += gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			//
			// labelLeft5
			//
			this->labelLeft5->AutoSize = true;
			this->labelLeft5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft5->Location = System::Drawing::Point(297, 135);
			this->labelLeft5->Name = L"labelLeft5";
			this->labelLeft5->Size = System::Drawing::Size(97, 24);
			this->labelLeft5->Text = AsusTab.getAmount().ToString() + " pieces";
			this->labelLeft5->Click += gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			//
			// labelCountry5
			//
			this->labelCountry5->AutoSize = true;
			this->labelCountry5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry5->Location = System::Drawing::Point(370, 135);
			this->labelCountry5->Name = L"labelCountry5";
			this->labelCountry5->Size = System::Drawing::Size(87, 24);
			this->labelCountry5->Text = AsusTab.getMadeIn();
			this->labelCountry5->Click += gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			//
			// labelID6
			//
			this->labelID6->AutoSize = true;
			this->labelID6->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID6->Location = System::Drawing::Point(7, 155);
			this->labelID6->Name = L"labelID6";
			this->labelID6->Size = System::Drawing::Size(40, 24);
			this->labelID6->TabIndex = 38;
			this->labelID6->Text = LenovoTab.getId().ToString();
			this->labelID6->Click += gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			//
			// labelProduct6
			//
			this->labelProduct6->AutoSize = true;
			this->labelProduct6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct6->Location = System::Drawing::Point(42, 155);
			this->labelProduct6->Name = L"labelProduct6";
			this->labelProduct6->Size = System::Drawing::Size(247, 24);
			this->labelProduct6->TabIndex = 34;
			this->labelProduct6->Text = LenovoTab.getName();
			this->labelProduct6->Click += gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			//
			// labelPrice6
			//
			this->labelPrice6->AutoSize = true;
			this->labelPrice6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice6->Location = System::Drawing::Point(217, 155);
			this->labelPrice6->Name = L"labelPrice6";
			this->labelPrice6->Size = System::Drawing::Size(107, 24);
			this->labelPrice6->TabIndex = 36;
			this->labelPrice6->Text = LenovoTab.getPrice().ToString() + " uah";
			this->labelPrice6->Click += gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			//
			// labelLeft6
			//
			this->labelLeft6->AutoSize = true;
			this->labelLeft6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft6->Location = System::Drawing::Point(297, 155);
			this->labelLeft6->Name = L"labelLeft6";
			this->labelLeft6->Size = System::Drawing::Size(97, 24);
			this->labelLeft6->Text = LenovoTab.getAmount().ToString() + " pieces";
			this->labelLeft6->Click += gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			//
			// labelCountry6
			//
			this->labelCountry6->AutoSize = true;
			this->labelCountry6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry6->Location = System::Drawing::Point(370, 155);
			this->labelCountry6->Name = L"labelCountry6";
			this->labelCountry6->Size = System::Drawing::Size(87, 24);
			this->labelCountry6->Text = LenovoTab.getMadeIn();
			this->labelCountry6->Click += gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		}
		else if (boxDevices->Text == "Laptops") {
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);

		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);

		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);

		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);

		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);

		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);

		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);

		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);

		this->labelID9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelProduct9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelPrice9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelLeft9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelCountry9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->Controls->Remove(this->labelProduct9);
			this->Controls->Remove(this->labelCountry9);
			this->Controls->Remove(this->labelPrice9);
			this->Controls->Remove(this->labelLeft9);
			this->Controls->Remove(this->labelID9);

			this->Controls->Add(this->labelProduct1);
			this->Controls->Add(this->labelCountry1);
			this->Controls->Add(this->labelPrice1);
			this->Controls->Add(this->labelLeft1);
			this->Controls->Add(this->labelID1);
			this->Controls->Add(this->labelProduct2);
			this->Controls->Add(this->labelCountry2);
			this->Controls->Add(this->labelPrice2);
			this->Controls->Add(this->labelLeft2);
			this->Controls->Add(this->labelID2);
			this->Controls->Add(this->labelProduct3);
			this->Controls->Add(this->labelCountry3);
			this->Controls->Add(this->labelPrice3);
			this->Controls->Add(this->labelLeft3);
			this->Controls->Add(this->labelID3);
			this->Controls->Add(this->labelProduct4);
			this->Controls->Add(this->labelCountry4);
			this->Controls->Add(this->labelPrice4);
			this->Controls->Add(this->labelLeft4);
			this->Controls->Add(this->labelID4);
			this->Controls->Add(this->labelProduct5);
			this->Controls->Add(this->labelCountry5);
			this->Controls->Add(this->labelPrice5);
			this->Controls->Add(this->labelLeft5);
			this->Controls->Add(this->labelID5);
			this->Controls->Add(this->labelProduct6);
			this->Controls->Add(this->labelCountry6);
			this->Controls->Add(this->labelPrice6);
			this->Controls->Add(this->labelLeft6);
			this->Controls->Add(this->labelID6);
			this->Controls->Add(this->labelProduct7);
			this->Controls->Add(this->labelCountry7);
			this->Controls->Add(this->labelPrice7);
			this->Controls->Add(this->labelLeft7);
			this->Controls->Add(this->labelID7);
			this->Controls->Add(this->labelProduct8);
			this->Controls->Add(this->labelCountry8);
			this->Controls->Add(this->labelPrice8);
			this->Controls->Add(this->labelLeft8);
			this->Controls->Add(this->labelID8);
			this->Controls->Add(this->labelProduct9);
			this->Controls->Add(this->labelCountry9);
			this->Controls->Add(this->labelPrice9);
			this->Controls->Add(this->labelLeft9);
			this->Controls->Add(this->labelID9);
			//
			// labelID1
			//
			this->labelID1->AutoSize = true;
			this->labelID1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID1->Location = System::Drawing::Point(7, 55);
			this->labelID1->Name = L"labelID1";
			this->labelID1->Size = System::Drawing::Size(40, 24);
			this->labelID1->TabIndex = 13;
			this->labelID1->Text = XiaomiLap.getId().ToString();
			this->labelID1->Click += gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			//
			// labelProduct1
			//
			this->labelProduct1->AutoSize = true;
			this->labelProduct1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct1->Location = System::Drawing::Point(42, 55);
			this->labelProduct1->Name = L"labelProduct1";
			this->labelProduct1->Size = System::Drawing::Size(247, 24);
			this->labelProduct1->TabIndex = 11;
			this->labelProduct1->Text = XiaomiLap.getName();
			this->labelProduct1->Click += gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice1->Location = System::Drawing::Point(217, 55);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Size = System::Drawing::Size(107, 24);
			this->labelPrice1->TabIndex = 12;
			this->labelPrice1->Text = XiaomiLap.getPrice().ToString() + " uah";
			this->labelPrice1->Click += gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			//
			// labelLeft1
			//
			this->labelLeft1->AutoSize = true;
			this->labelLeft1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft1->Location = System::Drawing::Point(297, 55);
			this->labelLeft1->Name = L"labelLeft1";
			this->labelLeft1->Size = System::Drawing::Size(97, 24);
			this->labelLeft1->Text = XiaomiLap.getAmount().ToString() + " pieces";
			this->labelLeft1->Click += gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			//
			// labelCountry1
			//
			this->labelCountry1->AutoSize = true;
			this->labelCountry1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry1->Location = System::Drawing::Point(370, 55);
			this->labelCountry1->Name = L"labelCountry1";
			this->labelCountry1->Size = System::Drawing::Size(87, 24);
			this->labelCountry1->Text = XiaomiLap.getMadeIn();
			this->labelCountry1->Click += gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			//
			// labelID2
			//
			this->labelID2->AutoSize = true;
			this->labelID2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID2->Location = System::Drawing::Point(7, 75);
			this->labelID2->Name = L"labelID2";
			this->labelID2->Size = System::Drawing::Size(40, 24);
			this->labelID2->TabIndex = 18;
			this->labelID2->Text = AppleLap.getId().ToString();
			this->labelID2->Click += gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			//
			// labelProduct2
			//
			this->labelProduct2->AutoSize = true;
			this->labelProduct2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct2->Location = System::Drawing::Point(42, 75);
			this->labelProduct2->Name = L"labelProduct2";
			this->labelProduct2->Size = System::Drawing::Size(247, 24);
			this->labelProduct2->TabIndex = 14;
			this->labelProduct2->Text = AppleLap.getName();
			this->labelProduct2->Click += gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice2->Location = System::Drawing::Point(217, 75);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Size = System::Drawing::Size(107, 24);
			this->labelPrice2->TabIndex = 16;
			this->labelPrice2->Text = AppleLap.getPrice().ToString() + " uah";
			this->labelPrice2->Click += gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			//
			// labelLeft2
			//
			this->labelLeft2->AutoSize = true;
			this->labelLeft2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft2->Location = System::Drawing::Point(297, 75);
			this->labelLeft2->Name = L"labelLeft2";
			this->labelLeft2->Size = System::Drawing::Size(97, 24);
			this->labelLeft2->Text = AppleLap.getAmount().ToString() + " pieces";
			this->labelLeft2->Click += gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			//
			// labelCountry2
			//
			this->labelCountry2->AutoSize = true;
			this->labelCountry2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry2->Location = System::Drawing::Point(370, 75);
			this->labelCountry2->Name = L"labelCountry2";
			this->labelCountry2->Size = System::Drawing::Size(87, 24);
			this->labelCountry2->Text = AppleLap.getMadeIn();
			this->labelCountry2->Click += gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			//
			// labelID3
			//
			this->labelID3->AutoSize = true;
			this->labelID3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID3->Location = System::Drawing::Point(7, 95);
			this->labelID3->Name = L"labelID3";
			this->labelID3->Size = System::Drawing::Size(40, 24);
			this->labelID3->TabIndex = 23;
			this->labelID3->Text = HPLap.getId().ToString();
			this->labelID3->Click += gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			//
			// labelProduct3
			//
			this->labelProduct3->AutoSize = true;
			this->labelProduct3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct3->Location = System::Drawing::Point(42, 95);
			this->labelProduct3->Name = L"labelProduct3";
			this->labelProduct3->Size = System::Drawing::Size(247, 24);
			this->labelProduct3->TabIndex = 19;
			this->labelProduct3->Text = HPLap.getName();
			this->labelProduct3->Click += gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			//
			// labelPrice3
			//
			this->labelPrice3->AutoSize = true;
			this->labelPrice3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice3->Location = System::Drawing::Point(217, 95);
			this->labelPrice3->Name = L"labelPrice3";
			this->labelPrice3->Size = System::Drawing::Size(107, 24);
			this->labelPrice3->TabIndex = 21;
			this->labelPrice3->Text = HPLap.getPrice().ToString() + " uah";
			this->labelPrice3->Click += gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			//
			// labelLeft3
			//
			this->labelLeft3->AutoSize = true;
			this->labelLeft3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft3->Location = System::Drawing::Point(297, 95);
			this->labelLeft3->Name = L"labelLeft3";
			this->labelLeft3->Size = System::Drawing::Size(97, 24);
			this->labelLeft3->Text = HPLap.getAmount().ToString() + " pieces";
			this->labelLeft3->Click += gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			//
			// labelCountry3
			//
			this->labelCountry3->AutoSize = true;
			this->labelCountry3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry3->Location = System::Drawing::Point(370, 95);
			this->labelCountry3->Name = L"labelCountry3";
			this->labelCountry3->Size = System::Drawing::Size(87, 24);
			this->labelCountry3->Text = HPLap.getMadeIn();
			this->labelCountry3->Click += gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			//
			// labelID4
			//
			this->labelID4->AutoSize = true;
			this->labelID4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID4->Location = System::Drawing::Point(7, 115);
			this->labelID4->Name = L"labelID4";
			this->labelID4->Size = System::Drawing::Size(40, 24);
			this->labelID4->TabIndex = 28;
			this->labelID4->Text = LenovoLap.getId().ToString();
			this->labelID4->Click += gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			//
			// labelProduct4
			//
			this->labelProduct4->AutoSize = true;
			this->labelProduct4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct4->Location = System::Drawing::Point(42, 115);
			this->labelProduct4->Name = L"labelProduct4";
			this->labelProduct4->Size = System::Drawing::Size(247, 24);
			this->labelProduct4->TabIndex = 24;
			this->labelProduct4->Text = LenovoLap.getName();
			this->labelProduct4->Click += gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			//
			// labelPrice4
			//
			this->labelPrice4->AutoSize = true;
			this->labelPrice4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice4->Location = System::Drawing::Point(217, 115);
			this->labelPrice4->Name = L"labelPrice4";
			this->labelPrice4->Size = System::Drawing::Size(107, 24);
			this->labelPrice4->TabIndex = 26;
			this->labelPrice4->Text = LenovoLap.getPrice().ToString() + " uah";
			this->labelPrice4->Click += gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			//
			// labelLeft4
			//
			this->labelLeft4->AutoSize = true;
			this->labelLeft4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft4->Location = System::Drawing::Point(297, 115);
			this->labelLeft4->Name = L"labelLeft4";
			this->labelLeft4->Size = System::Drawing::Size(97, 24);
			this->labelLeft4->Text = LenovoLap.getAmount().ToString() + " pieces";
			this->labelLeft4->Click += gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			//
			// labelCountry4
			//
			this->labelCountry4->AutoSize = true;
			this->labelCountry4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry4->Location = System::Drawing::Point(370, 115);
			this->labelCountry4->Name = L"labelCountry4";
			this->labelCountry4->Size = System::Drawing::Size(87, 24);
			this->labelCountry4->Text = LenovoLap.getMadeIn();
			this->labelCountry4->Click += gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			//
			// labelID5
			//
			this->labelID5->AutoSize = true;
			this->labelID5->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID5->Location = System::Drawing::Point(7, 135);
			this->labelID5->Name = L"labelID5";
			this->labelID5->Size = System::Drawing::Size(40, 24);
			this->labelID5->TabIndex = 33;
			this->labelID5->Text = AsusLap.getId().ToString();
			this->labelID5->Click += gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			//
			// labelProduct5
			//
			this->labelProduct5->AutoSize = true;
			this->labelProduct5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct5->Location = System::Drawing::Point(42, 135);
			this->labelProduct5->Name = L"labelProduct5";
			this->labelProduct5->Size = System::Drawing::Size(247, 24);
			this->labelProduct5->TabIndex = 29;
			this->labelProduct5->Text = AsusLap.getName();
			this->labelProduct5->Click += gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			//
			// labelPrice5
			//
			this->labelPrice5->AutoSize = true;
			this->labelPrice5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice5->Location = System::Drawing::Point(217, 135);
			this->labelPrice5->Name = L"labelPrice5";
			this->labelPrice5->Size = System::Drawing::Size(107, 24);
			this->labelPrice5->TabIndex = 31;
			this->labelPrice5->Text = AsusLap.getPrice().ToString() + " uah";
			this->labelPrice5->Click += gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			//
			// labelLeft5
			//
			this->labelLeft5->AutoSize = true;
			this->labelLeft5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft5->Location = System::Drawing::Point(297, 135);
			this->labelLeft5->Name = L"labelLeft5";
			this->labelLeft5->Size = System::Drawing::Size(97, 24);
			this->labelLeft5->Text = AsusLap.getAmount().ToString() + " pieces";
			this->labelLeft5->Click += gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			//
			// labelCountry5
			//
			this->labelCountry5->AutoSize = true;
			this->labelCountry5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry5->Location = System::Drawing::Point(370, 135);
			this->labelCountry5->Name = L"labelCountry5";
			this->labelCountry5->Size = System::Drawing::Size(87, 24);
			this->labelCountry5->Text = AsusLap.getMadeIn();
			this->labelCountry5->Click += gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			//
			// labelID6
			//
			this->labelID6->AutoSize = true;
			this->labelID6->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID6->Location = System::Drawing::Point(7, 155);
			this->labelID6->Name = L"labelID6";
			this->labelID6->Size = System::Drawing::Size(40, 24);
			this->labelID6->TabIndex = 38;
			this->labelID6->Text = DellLap.getId().ToString();
			this->labelID6->Click += gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			//
			// labelProduct6
			//
			this->labelProduct6->AutoSize = true;
			this->labelProduct6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct6->Location = System::Drawing::Point(42, 155);
			this->labelProduct6->Name = L"labelProduct6";
			this->labelProduct6->Size = System::Drawing::Size(247, 24);
			this->labelProduct6->TabIndex = 34;
			this->labelProduct6->Text = DellLap.getName();
			this->labelProduct6->Click += gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			//
			// labelPrice6
			//
			this->labelPrice6->AutoSize = true;
			this->labelPrice6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice6->Location = System::Drawing::Point(217, 155);
			this->labelPrice6->Name = L"labelPrice6";
			this->labelPrice6->Size = System::Drawing::Size(107, 24);
			this->labelPrice6->TabIndex = 36;
			this->labelPrice6->Text = DellLap.getPrice().ToString() + " uah";
			this->labelPrice6->Click += gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			//
			// labelLeft6
			//
			this->labelLeft6->AutoSize = true;
			this->labelLeft6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft6->Location = System::Drawing::Point(297, 155);
			this->labelLeft6->Name = L"labelLeft6";
			this->labelLeft6->Size = System::Drawing::Size(97, 24);
			this->labelLeft6->Text = DellLap.getAmount().ToString() + " pieces";
			this->labelLeft6->Click += gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			//
			// labelCountry6
			//
			this->labelCountry6->AutoSize = true;
			this->labelCountry6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry6->Location = System::Drawing::Point(370, 155);
			this->labelCountry6->Name = L"labelCountry6";
			this->labelCountry6->Size = System::Drawing::Size(87, 24);
			this->labelCountry6->Text = DellLap.getMadeIn();
			this->labelCountry6->Click += gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			//
			// labelID7
			//
			this->labelID7->AutoSize = true;
			this->labelID7->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID7->Location = System::Drawing::Point(7, 175);
			this->labelID7->Name = L"labelID7";
			this->labelID7->Size = System::Drawing::Size(40, 24);
			this->labelID7->TabIndex = 43;
			this->labelID7->Text = MSILap.getId().ToString();
			this->labelID7->Click += gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			//
			// labelProduct7
			//
			this->labelProduct7->AutoSize = true;
			this->labelProduct7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct7->Location = System::Drawing::Point(42, 175);
			this->labelProduct7->Name = L"labelProduct7";
			this->labelProduct7->Size = System::Drawing::Size(247, 24);
			this->labelProduct7->TabIndex = 39;
			this->labelProduct7->Text = MSILap.getName();
			this->labelProduct7->Click += gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			//
			// labelPrice7
			//
			this->labelPrice7->AutoSize = true;
			this->labelPrice7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice7->Location = System::Drawing::Point(217, 175);
			this->labelPrice7->Name = L"labelPrice7";
			this->labelPrice7->Size = System::Drawing::Size(107, 24);
			this->labelPrice7->TabIndex = 41;
			this->labelPrice7->Text = MSILap.getPrice().ToString() + " uah";
			this->labelPrice7->Click += gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			//
			// labelLeft7
			//
			this->labelLeft7->AutoSize = true;
			this->labelLeft7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft7->Location = System::Drawing::Point(297, 175);
			this->labelLeft7->Name = L"labelLeft7";
			this->labelLeft7->Size = System::Drawing::Size(97, 24);
			this->labelLeft7->Text = MSILap.getAmount().ToString() + " pieces";
			this->labelLeft7->Click += gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			//
			// labelCountry7
			//
			this->labelCountry7->AutoSize = true;
			this->labelCountry7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry7->Location = System::Drawing::Point(370, 175);
			this->labelCountry7->Name = L"labelCountry7";
			this->labelCountry7->Size = System::Drawing::Size(87, 24);
			this->labelCountry7->Text = MSILap.getMadeIn();
			this->labelCountry7->Click += gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			//
			// labelID8
			//
			this->labelID8->AutoSize = true;
			this->labelID8->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID8->Location = System::Drawing::Point(7, 195);
			this->labelID8->Name = L"labelID8";
			this->labelID8->Size = System::Drawing::Size(40, 24);
			this->labelID8->TabIndex = 48;
			this->labelID8->Text = AcerLap.getId().ToString();
			this->labelID8->Click += gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			//
			// labelProduct8
			//
			this->labelProduct8->AutoSize = true;
			this->labelProduct8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct8->Location = System::Drawing::Point(42, 195);
			this->labelProduct8->Name = L"labelProduct8";
			this->labelProduct8->Size = System::Drawing::Size(247, 24);
			this->labelProduct8->TabIndex = 44;
			this->labelProduct8->Text = AcerLap.getName();
			this->labelProduct8->Click += gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			//
			// labelPrice8
			//
			this->labelPrice8->AutoSize = true;
			this->labelPrice8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice8->Location = System::Drawing::Point(217, 195);
			this->labelPrice8->Name = L"labelPrice8";
			this->labelPrice8->Size = System::Drawing::Size(107, 24);
			this->labelPrice8->TabIndex = 46;
			this->labelPrice8->Text = AcerLap.getPrice().ToString() + " uah";
			this->labelPrice8->Click += gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			//
			// labelLeft8
			//
			this->labelLeft8->AutoSize = true;
			this->labelLeft8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft8->Location = System::Drawing::Point(297, 195);
			this->labelLeft8->Name = L"labelLeft8";
			this->labelLeft8->Size = System::Drawing::Size(97, 24);
			this->labelLeft8->Text = AcerLap.getAmount().ToString() + " pieces";
			this->labelLeft8->Click += gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			//
			// labelCountry8
			//
			this->labelCountry8->AutoSize = true;
			this->labelCountry8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry8->Location = System::Drawing::Point(370, 195);
			this->labelCountry8->Name = L"labelCountry8";
			this->labelCountry8->Size = System::Drawing::Size(87, 24);
			this->labelCountry8->Text = AcerLap.getMadeIn();
			this->labelCountry8->Click += gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		}
	}

	private: System::Void label1SP_Click(System::Object^ sender, System::EventArgs^ e) {
		Smartphones XiaomiPhone;
		XiaomiPhone.setName("Xiaomi Mi 11");
		XiaomiPhone.setMadeIn("Chine");
		XiaomiPhone.setAmount(rand() % 100);
		XiaomiPhone.setId(101);
		XiaomiPhone.setPrice(32000);
		CPrice = XiaomiPhone.getPrice();
		CAmount = XiaomiPhone.getAmount();
		CName = XiaomiPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			XiaomiPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label2SP_Click(System::Object^ sender, System::EventArgs^ e) {
		Smartphones SamsungPhone;
		SamsungPhone.setName("Samsung Galaxy Fold3");
		SamsungPhone.setMadeIn("China");
		SamsungPhone.setAmount(rand() % 100);
		SamsungPhone.setId(102);
		SamsungPhone.setPrice(55000);
		CPrice = SamsungPhone.getPrice();
		CAmount = SamsungPhone.getAmount();
		CName = SamsungPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			SamsungPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label3SP_Click(System::Object^ sender, System::EventArgs^ e) {
		Smartphones ApplePhone;
		ApplePhone.setName("Apple iPhone 13 Pro");
		ApplePhone.setMadeIn("China");
		ApplePhone.setAmount(rand() % 100);
		ApplePhone.setId(103);
		ApplePhone.setPrice(45000);
		CPrice = ApplePhone.getPrice();
		CAmount = ApplePhone.getAmount();
		CName = ApplePhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			ApplePhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label4SP_Click(System::Object^ sender, System::EventArgs^ e) {
		Smartphones RealmePhone;
		RealmePhone.setName("Realme Q3 Pro");
		RealmePhone.setMadeIn("China");
		RealmePhone.setAmount(rand() % 100);
		RealmePhone.setId(104);
		RealmePhone.setPrice(12300);
		CPrice = RealmePhone.getPrice();
		CAmount = RealmePhone.getAmount();
		CName = RealmePhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			RealmePhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label5SP_Click(System::Object^ sender, System::EventArgs^ e) {
		Smartphones HuaweiPhone;
		HuaweiPhone.setName("Huawei Nova 8i");
		HuaweiPhone.setMadeIn("China");
		HuaweiPhone.setAmount(rand() % 100);
		HuaweiPhone.setId(105);
		HuaweiPhone.setPrice(10999);
		CPrice = HuaweiPhone.getPrice();
		CAmount = HuaweiPhone.getAmount();
		CName = HuaweiPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			HuaweiPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label6SP_Click(System::Object^ sender, System::EventArgs^ e) {
		Smartphones OppoPhone;
		OppoPhone.setName("Oppo Reno 4 Pro");
		OppoPhone.setMadeIn("China");
		OppoPhone.setAmount(rand() % 100);
		OppoPhone.setId(106);
		OppoPhone.setPrice(23079);
		CPrice = OppoPhone.getPrice();
		CAmount = OppoPhone.getAmount();
		CName = OppoPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			OppoPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label7SP_Click(System::Object^ sender, System::EventArgs^ e) {
		Smartphones OnePlusPhone;
		OnePlusPhone.setName("OnePlus 9 Pro");
		OnePlusPhone.setMadeIn("China");
		OnePlusPhone.setAmount(rand() % 100);
		OnePlusPhone.setId(107);
		OnePlusPhone.setPrice(26199);
		CPrice = OnePlusPhone.getPrice();
		CAmount = OnePlusPhone.getAmount();
		CName = OnePlusPhone.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			OnePlusPhone.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}

	private: System::Void label1TB_Click(System::Object^ sender, System::EventArgs^ e) {
		Tablets SamsungTab;
		SamsungTab.setName("Samsung Galaxy Tab S7");
		SamsungTab.setMadeIn("China");
		SamsungTab.setAmount(rand() % 100);
		SamsungTab.setId(111);
		SamsungTab.setPrice(18499);
		CPrice = SamsungTab.getPrice();
		CAmount = SamsungTab.getAmount();
		CName = SamsungTab.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			SamsungTab.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label2TB_Click(System::Object^ sender, System::EventArgs^ e) {
		Tablets XiaomiTab;
		XiaomiTab.setName("Xiaomi Pad 5");
		XiaomiTab.setMadeIn("China");
		XiaomiTab.setAmount(rand() % 100);
		XiaomiTab.setId(112);
		XiaomiTab.setPrice(15677);
		CPrice = XiaomiTab.getPrice();
		CAmount = XiaomiTab.getAmount();
		CName = XiaomiTab.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			XiaomiTab.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label3TB_Click(System::Object^ sender, System::EventArgs^ e) {
		Tablets AppleTab;
		AppleTab.setName("Apple iPad Pro M1");
		AppleTab.setMadeIn("China");
		AppleTab.setAmount(rand() % 100);
		AppleTab.setId(113);
		AppleTab.setPrice(83499);
		CPrice = AppleTab.getPrice();
		CAmount = AppleTab.getAmount();
		CName = AppleTab.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			AppleTab.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label4TB_Click(System::Object^ sender, System::EventArgs^ e) {
		Tablets MicrosoftTab;
		MicrosoftTab.setName("Microsoft Surface Pro 8");
		MicrosoftTab.setMadeIn("China");
		MicrosoftTab.setAmount(rand() % 100);
		MicrosoftTab.setId(114);
		MicrosoftTab.setPrice(69899);
		CPrice = MicrosoftTab.getPrice();
		CAmount = MicrosoftTab.getAmount();
		CName = MicrosoftTab.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			MicrosoftTab.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label5TB_Click(System::Object^ sender, System::EventArgs^ e) {
		Tablets AsusTab;
		AsusTab.setName("Asus Transformer");
		AsusTab.setMadeIn("China");
		AsusTab.setAmount(rand() % 100);
		AsusTab.setId(115);
		AsusTab.setPrice(16499);
		CPrice = AsusTab.getPrice();
		CAmount = AsusTab.getAmount();
		CName = AsusTab.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			AsusTab.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label6TB_Click(System::Object^ sender, System::EventArgs^ e) {
		Tablets LenovoTab;
		LenovoTab.setName("Lenovo Tab P12 Pro");
		LenovoTab.setMadeIn("China");
		LenovoTab.setAmount(rand() % 100);
		LenovoTab.setId(116);
		LenovoTab.setPrice(29999);
		CPrice = LenovoTab.getPrice();
		CAmount = LenovoTab.getAmount();
		CName = LenovoTab.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			LenovoTab.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}

	private: System::Void label1LT_Click(System::Object^ sender, System::EventArgs^ e) {
		Laptops XiaomiLap;
		XiaomiLap.setName("Xiaomi Redmi G 16");
		XiaomiLap.setMadeIn("China");
		XiaomiLap.setAmount(rand() % 100);
		XiaomiLap.setId(121);
		XiaomiLap.setPrice(59349);
		CPrice = XiaomiLap.getPrice();
		CAmount = XiaomiLap.getAmount();
		CName = XiaomiLap.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			XiaomiLap.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label2LT_Click(System::Object^ sender, System::EventArgs^ e) {
		Laptops AppleLap;
		AppleLap.setName("Apple MacBook Pro M1");
		AppleLap.setMadeIn("China");
		AppleLap.setAmount(rand() % 100);
		AppleLap.setId(122);
		AppleLap.setPrice(123000);
		CPrice = AppleLap.getPrice();
		CAmount = AppleLap.getAmount();
		CName = AppleLap.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			AppleLap.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label3LT_Click(System::Object^ sender, System::EventArgs^ e) {
		Laptops HPLap;
		HPLap.setName("HP OMEN 17");
		HPLap.setMadeIn("China");
		HPLap.setAmount(rand() % 100);
		HPLap.setId(123);
		HPLap.setPrice(81499);
		CPrice = HPLap.getPrice();
		CAmount = HPLap.getAmount();
		CName = HPLap.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			HPLap.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label4LT_Click(System::Object^ sender, System::EventArgs^ e) {
		Laptops LenovoLap;
		LenovoLap.setName("Lenovo IdeaPad Flex5");
		LenovoLap.setMadeIn("China");
		LenovoLap.setAmount(rand() % 100);
		LenovoLap.setId(124);
		LenovoLap.setPrice(38114);
		CPrice = LenovoLap.getPrice();
		CAmount = LenovoLap.getAmount();
		CName = LenovoLap.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			LenovoLap.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label5LT_Click(System::Object^ sender, System::EventArgs^ e) {
		Laptops AsusLap;
		AsusLap.setName("Asus ROG Strix G15");
		AsusLap.setMadeIn("China");
		AsusLap.setAmount(rand() % 100);
		AsusLap.setId(125);
		AsusLap.setPrice(47999);
		CPrice = AsusLap.getPrice();
		CAmount = AsusLap.getAmount();
		CName = AsusLap.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			AsusLap.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label6LT_Click(System::Object^ sender, System::EventArgs^ e) {
		Laptops DellLap;
		DellLap.setName("Dell XPS 17");
		DellLap.setMadeIn("China");
		DellLap.setAmount(rand() % 100);
		DellLap.setId(127);
		DellLap.setPrice(122667);
		CPrice = DellLap.getPrice();
		CAmount = DellLap.getAmount();
		CName = DellLap.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			DellLap.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label7LT_Click(System::Object^ sender, System::EventArgs^ e) {
		Laptops MSILap;
		MSILap.setName("MSI Creator Z16");
		MSILap.setMadeIn("China");
		MSILap.setAmount(rand() % 100);
		MSILap.setId(128);
		MSILap.setPrice(109599);
		CPrice = MSILap.getPrice();
		CAmount = MSILap.getAmount();
		CName = MSILap.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			MSILap.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label8LT_Click(System::Object^ sender, System::EventArgs^ e) {
		Laptops AcerLap;
		AcerLap.setName("Acer Predator Triton 300");
		AcerLap.setMadeIn("China");
		AcerLap.setAmount(rand() % 100);
		AcerLap.setId(129);
		AcerLap.setPrice(54284);
		CPrice = AcerLap.getPrice();
		CAmount = AcerLap.getAmount();
		CName = AcerLap.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			AcerLap.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}

	private: System::Void boxPCC_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->boxCategories->Location = System::Drawing::Point(450, 150);
		this->boxAccessories->Location = System::Drawing::Point(450, 190);
		this->boxDevices->Location = System::Drawing::Point(450, 190);
		this->boxPCC->Location = System::Drawing::Point(450, 190);
		this->boxHA->Location = System::Drawing::Point(450, 190);
		buffStore = 1;

		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(25, 3);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Text = boxPCC->Text;
		//
		// labelPress
		//
		this->Controls->Add(this->labelPress);
		this->labelPress->AutoSize = true;
		this->labelPress->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
		this->labelPress->Location = System::Drawing::Point(45, 260);
		this->labelPress->Name = L"labelPress";
		this->labelPress->Text = L"To purchase an item press on the line.";
		//
		// labelBudget
		//
		this->Controls->Add(this->labelBudget);
		this->labelBudget->AutoSize = true;
		this->labelBudget->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
		this->labelBudget->Location = System::Drawing::Point(340, 10);
		this->labelBudget->Name = L"labelBudget";
		this->labelBudget->Text = budget.ToString() + " uah";
		//
		// buttonCart
		//
		this->Controls->Add(this->buttonCart);
		this->buttonCart->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonCart->Font = (gcnew System::Drawing::Font(L"Calibri", 30));
		this->buttonCart->Location = System::Drawing::Point(495, 60);
		this->buttonCart->Name = L"buttonCart";
		this->buttonCart->Size = System::Drawing::Size(75, 70);
		this->buttonCart->Text = L"🛒";
		this->buttonCart->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonCart->UseVisualStyleBackColor = false;
		this->buttonCart->Click -= gcnew System::EventHandler(this, &FormWelcome::buttonCart_Click);
		this->buttonCart->Click += gcnew System::EventHandler(this, &FormWelcome::buttonCart_Click);

		this->Controls->Remove(this->labelProduct1);
		this->Controls->Remove(this->labelCountry1);
		this->Controls->Remove(this->labelPrice1);
		this->Controls->Remove(this->labelLeft1);
		this->Controls->Remove(this->labelID1);
		this->Controls->Remove(this->labelProduct2);
		this->Controls->Remove(this->labelCountry2);
		this->Controls->Remove(this->labelPrice2);
		this->Controls->Remove(this->labelLeft2);
		this->Controls->Remove(this->labelID2);
		this->Controls->Remove(this->labelProduct3);
		this->Controls->Remove(this->labelCountry3);
		this->Controls->Remove(this->labelPrice3);
		this->Controls->Remove(this->labelLeft3);
		this->Controls->Remove(this->labelID3);
		this->Controls->Remove(this->labelProduct4);
		this->Controls->Remove(this->labelCountry4);
		this->Controls->Remove(this->labelPrice4);
		this->Controls->Remove(this->labelLeft4);
		this->Controls->Remove(this->labelID4);
		this->Controls->Remove(this->labelProduct5);
		this->Controls->Remove(this->labelCountry5);
		this->Controls->Remove(this->labelPrice5);
		this->Controls->Remove(this->labelLeft5);
		this->Controls->Remove(this->labelID5);
		this->Controls->Remove(this->labelProduct6);
		this->Controls->Remove(this->labelCountry6);
		this->Controls->Remove(this->labelPrice6);
		this->Controls->Remove(this->labelLeft6);
		this->Controls->Remove(this->labelID6);
		this->Controls->Remove(this->labelProduct7);
		this->Controls->Remove(this->labelCountry7);
		this->Controls->Remove(this->labelPrice7);
		this->Controls->Remove(this->labelLeft7);
		this->Controls->Remove(this->labelID7);
		this->Controls->Remove(this->labelProduct8);
		this->Controls->Remove(this->labelCountry8);
		this->Controls->Remove(this->labelPrice8);
		this->Controls->Remove(this->labelLeft8);
		this->Controls->Remove(this->labelID8);
		this->Controls->Remove(this->labelProduct9);
		this->Controls->Remove(this->labelCountry9);
		this->Controls->Remove(this->labelPrice9);
		this->Controls->Remove(this->labelLeft9);
		this->Controls->Remove(this->labelID9);

		this->Controls->Add(this->labelProduct);
		this->Controls->Add(this->labelCountry);
		this->Controls->Add(this->labelPrice);
		this->Controls->Add(this->labelLeft);
		this->Controls->Add(this->labelID);

		this->Controls->Add(this->labelProduct1);
		this->Controls->Add(this->labelCountry1);
		this->Controls->Add(this->labelPrice1);
		this->Controls->Add(this->labelLeft1);
		this->Controls->Add(this->labelID1);
		this->Controls->Add(this->labelProduct2);
		this->Controls->Add(this->labelCountry2);
		this->Controls->Add(this->labelPrice2);
		this->Controls->Add(this->labelLeft2);
		this->Controls->Add(this->labelID2);
		this->Controls->Add(this->labelProduct3);
		this->Controls->Add(this->labelCountry3);
		this->Controls->Add(this->labelPrice3);
		this->Controls->Add(this->labelLeft3);
		this->Controls->Add(this->labelID3);
		this->Controls->Add(this->labelProduct4);
		this->Controls->Add(this->labelCountry4);
		this->Controls->Add(this->labelPrice4);
		this->Controls->Add(this->labelLeft4);
		this->Controls->Add(this->labelID4);
		this->Controls->Add(this->labelProduct5);
		this->Controls->Add(this->labelCountry5);
		this->Controls->Add(this->labelPrice5);
		this->Controls->Add(this->labelLeft5);
		this->Controls->Add(this->labelID5);
		this->Controls->Add(this->labelProduct6);
		this->Controls->Add(this->labelCountry6);
		this->Controls->Add(this->labelPrice6);
		this->Controls->Add(this->labelLeft6);
		this->Controls->Add(this->labelID6);
		this->Controls->Add(this->labelProduct7);
		this->Controls->Add(this->labelCountry7);
		this->Controls->Add(this->labelPrice7);
		this->Controls->Add(this->labelLeft7);
		this->Controls->Add(this->labelID7);
		this->Controls->Add(this->labelProduct8);
		this->Controls->Add(this->labelCountry8);
		this->Controls->Add(this->labelPrice8);
		this->Controls->Add(this->labelLeft8);
		this->Controls->Add(this->labelID8);
		this->Controls->Add(this->labelProduct9);
		this->Controls->Add(this->labelCountry9);
		this->Controls->Add(this->labelPrice9);
		this->Controls->Add(this->labelLeft9);
		this->Controls->Add(this->labelID9);

		///////////////////////////////////////////////////////////////////////////
		///Комп'ютерні комплектуючі
		//Відеокарти
		Graphic_cards RTX3090;
		RTX3090.setName("MSI RTX 3090");
		RTX3090.setMadeIn("China");
		RTX3090.setAmount(rand() % 50);
		RTX3090.setId(301);
		RTX3090.setPrice(120000);

		Graphic_cards GTX1660;
		GTX1660.setName("ASUS GTX 1660");
		GTX1660.setMadeIn("China");
		GTX1660.setAmount(rand() % 100);
		GTX1660.setId(302);
		GTX1660.setPrice(24000);

		Graphic_cards RTX3070;
		RTX3070.setName("Palit RTX 3070");
		RTX3070.setMadeIn("China");
		RTX3070.setAmount(rand() % 75);
		RTX3070.setId(303);
		RTX3070.setPrice(38000);

		Graphic_cards GT1030;
		GT1030.setName("Gigabyte GT 1030");
		GT1030.setMadeIn("China");
		GT1030.setAmount(rand() % 100);
		GT1030.setId(304);
		GT1030.setPrice(3799);

		Graphic_cards RX6900;
		RX6900.setName("Sapphire RX 6900");
		RX6900.setMadeIn("China");
		RX6900.setAmount(0);
		RX6900.setId(305);
		RX6900.setPrice(64100);

		//Процесори
		Processors I7_10700K;
		I7_10700K.setName("Intel i7-10700K");
		I7_10700K.setMadeIn("China");
		I7_10700K.setAmount(rand() % 50);
		I7_10700K.setId(311);
		I7_10700K.setPrice(13235);

		Processors Ryzen7_5600;
		Ryzen7_5600.setName("AMD Ryzen 7 5600");
		Ryzen7_5600.setMadeIn("China");
		Ryzen7_5600.setAmount(rand() % 50);
		Ryzen7_5600.setId(312);
		Ryzen7_5600.setPrice(10379);

		Processors Ryzen5_3700;
		Ryzen5_3700.setName("Ryzen 5 3700");
		Ryzen5_3700.setMadeIn("China");
		Ryzen5_3700.setAmount(rand() % 50);
		Ryzen5_3700.setId(313);
		Ryzen5_3700.setPrice(4900);

		Processors I9_12900K;
		I9_12900K.setName("Intel i9-12900K");
		I9_12900K.setMadeIn("China");
		I9_12900K.setAmount(0);
		I9_12900K.setId(314);
		I9_12900K.setPrice(24254);

		Processors I5_10400F;
		I5_10400F.setName("Intel i5-10400F");
		I5_10400F.setMadeIn("China");
		I5_10400F.setAmount(rand() % 50);
		I5_10400F.setId(315);
		I5_10400F.setPrice(5199);

		//RAM
		RAM gb4;
		gb4.setName("DDR4 Goodram 4 gb 2400");
		gb4.setMadeIn("China");
		gb4.setAmount(rand() % 50);
		gb4.setId(321);
		gb4.setPrice(785);

		RAM gb8;
		gb8.setName("DDR4 Crucial 8 gb 3200");
		gb8.setMadeIn("China");
		gb8.setAmount(rand() % 50);
		gb8.setId(322);
		gb8.setPrice(1225);

		RAM gb16;
		gb16.setName("DDR4 Kingston Fury 16 gb 3200");
		gb16.setMadeIn("China");
		gb16.setAmount(rand() % 50);
		gb16.setId(323);
		gb16.setPrice(5289);
		///////////////////////////////////////////////////////////////////////////

		//
		// labelID
		//
		this->labelID->AutoSize = true;
		this->labelID->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->labelID->Location = System::Drawing::Point(7, 35);
		this->labelID->Name = L"labelID";
		this->labelID->Size = System::Drawing::Size(37, 24);
		this->labelID->TabIndex = 4;
		this->labelID->Text = L"ID  ";
		//
		// labelProduct
		//
		this->labelProduct->AutoSize = true;
		this->labelProduct->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelProduct->Location = System::Drawing::Point(42, 35);
		this->labelProduct->Name = L"labelProduct";
		this->labelProduct->Size = System::Drawing::Size(75, 24);
		this->labelProduct->TabIndex = 10;
		this->labelProduct->Text = L"Product";
		//
		// labelPrice
		//
		this->labelPrice->AutoSize = true;
		this->labelPrice->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelPrice->Location = System::Drawing::Point(217, 35);
		this->labelPrice->Name = L"labelPrice";
		this->labelPrice->Size = System::Drawing::Size(50, 24);
		this->labelPrice->TabIndex = 9;
		this->labelPrice->Text = L"Price";
		//
		// labelLeft
		//
		this->labelLeft->AutoSize = true;
		this->labelLeft->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelLeft->Location = System::Drawing::Point(297, 35);
		this->labelLeft->Name = L"labelLeft";
		this->labelLeft->Size = System::Drawing::Size(80, 24);
		this->labelLeft->TabIndex = 7;
		this->labelLeft->Text = L"Left";
		//
		// labelCountry
		//
		this->labelCountry->AutoSize = true;
		this->labelCountry->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelCountry->Location = System::Drawing::Point(370, 35);
		this->labelCountry->Name = L"labelCountry";
		this->labelCountry->Size = System::Drawing::Size(87, 24);
		this->labelCountry->TabIndex = 8;
		this->labelCountry->Text = L"Country";

		if (boxPCC->Text == "Graphic cards") {
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);

			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);

			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);

			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);

			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);

			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);

			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);

			this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);

			this->labelID9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelProduct9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelPrice9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelLeft9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelCountry9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->Controls->Remove(this->labelProduct4);
			this->Controls->Remove(this->labelCountry4);
			this->Controls->Remove(this->labelPrice4);
			this->Controls->Remove(this->labelLeft4);
			this->Controls->Remove(this->labelID4);
			this->Controls->Remove(this->labelProduct5);
			this->Controls->Remove(this->labelCountry5);
			this->Controls->Remove(this->labelPrice5);
			this->Controls->Remove(this->labelLeft5);
			this->Controls->Remove(this->labelID5);
			this->Controls->Remove(this->labelProduct6);
			this->Controls->Remove(this->labelCountry6);
			this->Controls->Remove(this->labelPrice6);
			this->Controls->Remove(this->labelLeft6);
			this->Controls->Remove(this->labelID6);
			this->Controls->Remove(this->labelProduct7);
			this->Controls->Remove(this->labelCountry7);
			this->Controls->Remove(this->labelPrice7);
			this->Controls->Remove(this->labelLeft7);
			this->Controls->Remove(this->labelID7);
			this->Controls->Remove(this->labelProduct8);
			this->Controls->Remove(this->labelCountry8);
			this->Controls->Remove(this->labelPrice8);
			this->Controls->Remove(this->labelLeft8);
			this->Controls->Remove(this->labelID8);
			this->Controls->Remove(this->labelProduct9);
			this->Controls->Remove(this->labelCountry9);
			this->Controls->Remove(this->labelPrice9);
			this->Controls->Remove(this->labelLeft9);
			this->Controls->Remove(this->labelID9);

			this->Controls->Add(this->labelProduct1);
			this->Controls->Add(this->labelCountry1);
			this->Controls->Add(this->labelPrice1);
			this->Controls->Add(this->labelLeft1);
			this->Controls->Add(this->labelID1);
			this->Controls->Add(this->labelProduct2);
			this->Controls->Add(this->labelCountry2);
			this->Controls->Add(this->labelPrice2);
			this->Controls->Add(this->labelLeft2);
			this->Controls->Add(this->labelID2);
			this->Controls->Add(this->labelProduct3);
			this->Controls->Add(this->labelCountry3);
			this->Controls->Add(this->labelPrice3);
			this->Controls->Add(this->labelLeft3);
			this->Controls->Add(this->labelID3);
			this->Controls->Add(this->labelProduct4);
			this->Controls->Add(this->labelCountry4);
			this->Controls->Add(this->labelPrice4);
			this->Controls->Add(this->labelLeft4);
			this->Controls->Add(this->labelID4);
			this->Controls->Add(this->labelProduct5);
			this->Controls->Add(this->labelCountry5);
			this->Controls->Add(this->labelPrice5);
			this->Controls->Add(this->labelLeft5);
			this->Controls->Add(this->labelID5);

			//
			// labelID1
			//
			this->labelID1->AutoSize = true;
			this->labelID1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID1->Location = System::Drawing::Point(7, 55);
			this->labelID1->Name = L"labelID1";
			this->labelID1->Size = System::Drawing::Size(40, 24);
			this->labelID1->TabIndex = 13;
			this->labelID1->Text = RTX3090.getId().ToString();
			this->labelID1->Click += gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			//
			// labelProduct1
			//
			this->labelProduct1->AutoSize = true;
			this->labelProduct1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct1->Location = System::Drawing::Point(42, 55);
			this->labelProduct1->Name = L"labelProduct1";
			this->labelProduct1->Size = System::Drawing::Size(247, 24);
			this->labelProduct1->TabIndex = 11;
			this->labelProduct1->Text = RTX3090.getName();
			this->labelProduct1->Click += gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice1->Location = System::Drawing::Point(217, 55);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Size = System::Drawing::Size(107, 24);
			this->labelPrice1->TabIndex = 12;
			this->labelPrice1->Text = RTX3090.getPrice().ToString() + " uah";
			this->labelPrice1->Click += gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			//
			// labelLeft1
			//
			this->labelLeft1->AutoSize = true;
			this->labelLeft1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft1->Location = System::Drawing::Point(297, 55);
			this->labelLeft1->Name = L"labelLeft1";
			this->labelLeft1->Size = System::Drawing::Size(97, 24);
			this->labelLeft1->Text = RTX3090.getAmount().ToString() + " pieces";
			this->labelLeft1->Click += gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			//
			// labelCountry1
			//
			this->labelCountry1->AutoSize = true;
			this->labelCountry1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry1->Location = System::Drawing::Point(370, 55);
			this->labelCountry1->Name = L"labelCountry1";
			this->labelCountry1->Size = System::Drawing::Size(87, 24);
			this->labelCountry1->Text = RTX3090.getMadeIn();
			this->labelCountry1->Click += gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			//
			// labelID2
			//
			this->labelID2->AutoSize = true;
			this->labelID2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID2->Location = System::Drawing::Point(7, 75);
			this->labelID2->Name = L"labelID2";
			this->labelID2->Size = System::Drawing::Size(40, 24);
			this->labelID2->TabIndex = 18;
			this->labelID2->Text = GTX1660.getId().ToString();
			this->labelID2->Click += gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			//
			// labelProduct2
			//
			this->labelProduct2->AutoSize = true;
			this->labelProduct2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct2->Location = System::Drawing::Point(42, 75);
			this->labelProduct2->Name = L"labelProduct2";
			this->labelProduct2->Size = System::Drawing::Size(247, 24);
			this->labelProduct2->TabIndex = 14;
			this->labelProduct2->Text = GTX1660.getName();
			this->labelProduct2->Click += gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice2->Location = System::Drawing::Point(217, 75);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Size = System::Drawing::Size(107, 24);
			this->labelPrice2->TabIndex = 16;
			this->labelPrice2->Text = GTX1660.getPrice().ToString() + " uah";
			this->labelPrice2->Click += gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			//
			// labelLeft2
			//
			this->labelLeft2->AutoSize = true;
			this->labelLeft2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft2->Location = System::Drawing::Point(297, 75);
			this->labelLeft2->Name = L"labelLeft2";
			this->labelLeft2->Size = System::Drawing::Size(97, 24);
			this->labelLeft2->Text = GTX1660.getAmount().ToString() + " pieces";
			this->labelLeft2->Click += gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			//
			// labelCountry2
			//
			this->labelCountry2->AutoSize = true;
			this->labelCountry2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry2->Location = System::Drawing::Point(370, 75);
			this->labelCountry2->Name = L"labelCountry2";
			this->labelCountry2->Size = System::Drawing::Size(87, 24);
			this->labelCountry2->Text = GTX1660.getMadeIn();
			this->labelCountry2->Click += gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			//
			// labelID3
			//
			this->labelID3->AutoSize = true;
			this->labelID3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID3->Location = System::Drawing::Point(7, 95);
			this->labelID3->Name = L"labelID3";
			this->labelID3->Size = System::Drawing::Size(40, 24);
			this->labelID3->TabIndex = 23;
			this->labelID3->Text = RTX3070.getId().ToString();
			this->labelID3->Click += gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			//
			// labelProduct3
			//
			this->labelProduct3->AutoSize = true;
			this->labelProduct3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct3->Location = System::Drawing::Point(42, 95);
			this->labelProduct3->Name = L"labelProduct3";
			this->labelProduct3->Size = System::Drawing::Size(247, 24);
			this->labelProduct3->TabIndex = 19;
			this->labelProduct3->Text = RTX3070.getName();
			this->labelProduct3->Click += gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			//
			// labelPrice3
			//
			this->labelPrice3->AutoSize = true;
			this->labelPrice3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice3->Location = System::Drawing::Point(217, 95);
			this->labelPrice3->Name = L"labelPrice3";
			this->labelPrice3->Size = System::Drawing::Size(107, 24);
			this->labelPrice3->TabIndex = 21;
			this->labelPrice3->Text = RTX3070.getPrice().ToString() + " uah";
			this->labelPrice3->Click += gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			//
			// labelLeft3
			//
			this->labelLeft3->AutoSize = true;
			this->labelLeft3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft3->Location = System::Drawing::Point(297, 95);
			this->labelLeft3->Name = L"labelLeft3";
			this->labelLeft3->Size = System::Drawing::Size(97, 24);
			this->labelLeft3->Text = RTX3070.getAmount().ToString() + " pieces";
			this->labelLeft3->Click += gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			//
			// labelCountry3
			//
			this->labelCountry3->AutoSize = true;
			this->labelCountry3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry3->Location = System::Drawing::Point(370, 95);
			this->labelCountry3->Name = L"labelCountry3";
			this->labelCountry3->Size = System::Drawing::Size(87, 24);
			this->labelCountry3->Text = RTX3070.getMadeIn();
			this->labelCountry3->Click += gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			//
			// labelID4
			//
			this->labelID4->AutoSize = true;
			this->labelID4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID4->Location = System::Drawing::Point(7, 115);
			this->labelID4->Name = L"labelID4";
			this->labelID4->Size = System::Drawing::Size(40, 24);
			this->labelID4->TabIndex = 28;
			this->labelID4->Text = GT1030.getId().ToString();
			this->labelID4->Click += gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			//
			// labelProduct4
			//
			this->labelProduct4->AutoSize = true;
			this->labelProduct4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct4->Location = System::Drawing::Point(42, 115);
			this->labelProduct4->Name = L"labelProduct4";
			this->labelProduct4->Size = System::Drawing::Size(247, 24);
			this->labelProduct4->TabIndex = 24;
			this->labelProduct4->Text = GT1030.getName();
			this->labelProduct4->Click += gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			//
			// labelPrice4
			//
			this->labelPrice4->AutoSize = true;
			this->labelPrice4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice4->Location = System::Drawing::Point(217, 115);
			this->labelPrice4->Name = L"labelPrice4";
			this->labelPrice4->Size = System::Drawing::Size(107, 24);
			this->labelPrice4->TabIndex = 26;
			this->labelPrice4->Text = GT1030.getPrice().ToString() + " uah";
			this->labelPrice4->Click += gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			//
			// labelLeft4
			//
			this->labelLeft4->AutoSize = true;
			this->labelLeft4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft4->Location = System::Drawing::Point(297, 115);
			this->labelLeft4->Name = L"labelLeft4";
			this->labelLeft4->Size = System::Drawing::Size(97, 24);
			this->labelLeft4->Text = GT1030.getAmount().ToString() + " pieces";
			this->labelLeft4->Click += gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			//
			// labelCountry4
			//
			this->labelCountry4->AutoSize = true;
			this->labelCountry4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry4->Location = System::Drawing::Point(370, 115);
			this->labelCountry4->Name = L"labelCountry4";
			this->labelCountry4->Size = System::Drawing::Size(87, 24);
			this->labelCountry4->Text = GT1030.getMadeIn();
			this->labelCountry4->Click += gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			//
			// labelID5
			//
			this->labelID5->AutoSize = true;
			this->labelID5->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID5->Location = System::Drawing::Point(7, 135);
			this->labelID5->Name = L"labelID5";
			this->labelID5->Size = System::Drawing::Size(40, 24);
			this->labelID5->TabIndex = 33;
			this->labelID5->Text = RX6900.getId().ToString();
			this->labelID5->Click += gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			//
			// labelProduct5
			//
			this->labelProduct5->AutoSize = true;
			this->labelProduct5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct5->Location = System::Drawing::Point(42, 135);
			this->labelProduct5->Name = L"labelProduct5";
			this->labelProduct5->Size = System::Drawing::Size(247, 24);
			this->labelProduct5->TabIndex = 29;
			this->labelProduct5->Text = RX6900.getName();
			this->labelProduct5->Click += gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			//
			// labelPrice5
			//
			this->labelPrice5->AutoSize = true;
			this->labelPrice5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice5->Location = System::Drawing::Point(217, 135);
			this->labelPrice5->Name = L"labelPrice5";
			this->labelPrice5->Size = System::Drawing::Size(107, 24);
			this->labelPrice5->TabIndex = 31;
			this->labelPrice5->Text = RX6900.getPrice().ToString() + " uah";
			this->labelPrice5->Click += gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			//
			// labelLeft5
			//
			this->labelLeft5->AutoSize = true;
			this->labelLeft5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft5->Location = System::Drawing::Point(297, 135);
			this->labelLeft5->Name = L"labelLeft5";
			this->labelLeft5->Size = System::Drawing::Size(97, 24);
			this->labelLeft5->Text = RX6900.getAmount().ToString() + " pieces";
			this->labelLeft5->Click += gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			//
			// labelCountry5
			//
			this->labelCountry5->AutoSize = true;
			this->labelCountry5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry5->Location = System::Drawing::Point(370, 135);
			this->labelCountry5->Name = L"labelCountry5";
			this->labelCountry5->Size = System::Drawing::Size(87, 24);
			this->labelCountry5->Text = RX6900.getMadeIn();
			this->labelCountry5->Click += gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		}
		else if (boxPCC->Text == "Processors") {
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);

		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);

		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);

		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);

		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);

		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);

		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);

		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);

		this->labelID9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelProduct9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelPrice9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelLeft9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelCountry9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->Controls->Remove(this->labelProduct4);
			this->Controls->Remove(this->labelCountry4);
			this->Controls->Remove(this->labelPrice4);
			this->Controls->Remove(this->labelLeft4);
			this->Controls->Remove(this->labelID4);
			this->Controls->Remove(this->labelProduct5);
			this->Controls->Remove(this->labelCountry5);
			this->Controls->Remove(this->labelPrice5);
			this->Controls->Remove(this->labelLeft5);
			this->Controls->Remove(this->labelID5);
			this->Controls->Remove(this->labelProduct6);
			this->Controls->Remove(this->labelCountry6);
			this->Controls->Remove(this->labelPrice6);
			this->Controls->Remove(this->labelLeft6);
			this->Controls->Remove(this->labelID6);
			this->Controls->Remove(this->labelProduct7);
			this->Controls->Remove(this->labelCountry7);
			this->Controls->Remove(this->labelPrice7);
			this->Controls->Remove(this->labelLeft7);
			this->Controls->Remove(this->labelID7);
			this->Controls->Remove(this->labelProduct8);
			this->Controls->Remove(this->labelCountry8);
			this->Controls->Remove(this->labelPrice8);
			this->Controls->Remove(this->labelLeft8);
			this->Controls->Remove(this->labelID8);
			this->Controls->Remove(this->labelProduct9);
			this->Controls->Remove(this->labelCountry9);
			this->Controls->Remove(this->labelPrice9);
			this->Controls->Remove(this->labelLeft9);
			this->Controls->Remove(this->labelID9);

			this->Controls->Add(this->labelProduct1);
			this->Controls->Add(this->labelCountry1);
			this->Controls->Add(this->labelPrice1);
			this->Controls->Add(this->labelLeft1);
			this->Controls->Add(this->labelID1);
			this->Controls->Add(this->labelProduct2);
			this->Controls->Add(this->labelCountry2);
			this->Controls->Add(this->labelPrice2);
			this->Controls->Add(this->labelLeft2);
			this->Controls->Add(this->labelID2);
			this->Controls->Add(this->labelProduct3);
			this->Controls->Add(this->labelCountry3);
			this->Controls->Add(this->labelPrice3);
			this->Controls->Add(this->labelLeft3);
			this->Controls->Add(this->labelID3);
			this->Controls->Add(this->labelProduct4);
			this->Controls->Add(this->labelCountry4);
			this->Controls->Add(this->labelPrice4);
			this->Controls->Add(this->labelLeft4);
			this->Controls->Add(this->labelID4);
			this->Controls->Add(this->labelProduct5);
			this->Controls->Add(this->labelCountry5);
			this->Controls->Add(this->labelPrice5);
			this->Controls->Add(this->labelLeft5);
			this->Controls->Add(this->labelID5);

			//
			// labelID1
			//
			this->labelID1->AutoSize = true;
			this->labelID1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID1->Location = System::Drawing::Point(7, 55);
			this->labelID1->Name = L"labelID1";
			this->labelID1->Size = System::Drawing::Size(40, 24);
			this->labelID1->TabIndex = 13;
			this->labelID1->Text = I7_10700K.getId().ToString();
			this->labelID1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			//
			// labelProduct1
			//
			this->labelProduct1->AutoSize = true;
			this->labelProduct1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct1->Location = System::Drawing::Point(42, 55);
			this->labelProduct1->Name = L"labelProduct1";
			this->labelProduct1->Size = System::Drawing::Size(247, 24);
			this->labelProduct1->TabIndex = 11;
			this->labelProduct1->Text = I7_10700K.getName();
			this->labelProduct1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice1->Location = System::Drawing::Point(217, 55);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Size = System::Drawing::Size(107, 24);
			this->labelPrice1->TabIndex = 12;
			this->labelPrice1->Text = I7_10700K.getPrice().ToString() + " uah";
			this->labelPrice1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			//
			// labelLeft1
			//
			this->labelLeft1->AutoSize = true;
			this->labelLeft1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft1->Location = System::Drawing::Point(297, 55);
			this->labelLeft1->Name = L"labelLeft1";
			this->labelLeft1->Size = System::Drawing::Size(97, 24);
			this->labelLeft1->Text = I7_10700K.getAmount().ToString() + " pieces";
			this->labelLeft1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			//
			// labelCountry1
			//
			this->labelCountry1->AutoSize = true;
			this->labelCountry1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry1->Location = System::Drawing::Point(370, 55);
			this->labelCountry1->Name = L"labelCountry1";
			this->labelCountry1->Size = System::Drawing::Size(87, 24);
			this->labelCountry1->Text = I7_10700K.getMadeIn();
			this->labelCountry1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			//
			// labelID2
			//
			this->labelID2->AutoSize = true;
			this->labelID2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID2->Location = System::Drawing::Point(7, 75);
			this->labelID2->Name = L"labelID2";
			this->labelID2->Size = System::Drawing::Size(40, 24);
			this->labelID2->TabIndex = 18;
			this->labelID2->Text = Ryzen7_5600.getId().ToString();
			this->labelID2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			//
			// labelProduct2
			//
			this->labelProduct2->AutoSize = true;
			this->labelProduct2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct2->Location = System::Drawing::Point(42, 75);
			this->labelProduct2->Name = L"labelProduct2";
			this->labelProduct2->Size = System::Drawing::Size(247, 24);
			this->labelProduct2->TabIndex = 14;
			this->labelProduct2->Text = Ryzen7_5600.getName();
			this->labelProduct2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice2->Location = System::Drawing::Point(217, 75);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Size = System::Drawing::Size(107, 24);
			this->labelPrice2->TabIndex = 16;
			this->labelPrice2->Text = Ryzen7_5600.getPrice().ToString() + " uah";
			this->labelPrice2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			//
			// labelLeft2
			//
			this->labelLeft2->AutoSize = true;
			this->labelLeft2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft2->Location = System::Drawing::Point(297, 75);
			this->labelLeft2->Name = L"labelLeft2";
			this->labelLeft2->Size = System::Drawing::Size(97, 24);
			this->labelLeft2->Text = Ryzen7_5600.getAmount().ToString() + " pieces";
			this->labelLeft2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			//
			// labelCountry2
			//
			this->labelCountry2->AutoSize = true;
			this->labelCountry2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry2->Location = System::Drawing::Point(370, 75);
			this->labelCountry2->Name = L"labelCountry2";
			this->labelCountry2->Size = System::Drawing::Size(87, 24);
			this->labelCountry2->Text = Ryzen7_5600.getMadeIn();
			this->labelCountry2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			//
			// labelID3
			//
			this->labelID3->AutoSize = true;
			this->labelID3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID3->Location = System::Drawing::Point(7, 95);
			this->labelID3->Name = L"labelID3";
			this->labelID3->Size = System::Drawing::Size(40, 24);
			this->labelID3->TabIndex = 23;
			this->labelID3->Text = Ryzen5_3700.getId().ToString();
			this->labelID3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			//
			// labelProduct3
			//
			this->labelProduct3->AutoSize = true;
			this->labelProduct3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct3->Location = System::Drawing::Point(42, 95);
			this->labelProduct3->Name = L"labelProduct3";
			this->labelProduct3->Size = System::Drawing::Size(247, 24);
			this->labelProduct3->TabIndex = 19;
			this->labelProduct3->Text = Ryzen5_3700.getName();
			this->labelProduct3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			//
			// labelPrice3
			//
			this->labelPrice3->AutoSize = true;
			this->labelPrice3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice3->Location = System::Drawing::Point(217, 95);
			this->labelPrice3->Name = L"labelPrice3";
			this->labelPrice3->Size = System::Drawing::Size(107, 24);
			this->labelPrice3->TabIndex = 21;
			this->labelPrice3->Text = Ryzen5_3700.getPrice().ToString() + " uah";
			this->labelPrice3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			//
			// labelLeft3
			//
			this->labelLeft3->AutoSize = true;
			this->labelLeft3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft3->Location = System::Drawing::Point(297, 95);
			this->labelLeft3->Name = L"labelLeft3";
			this->labelLeft3->Size = System::Drawing::Size(97, 24);
			this->labelLeft3->Text = Ryzen5_3700.getAmount().ToString() + " pieces";
			this->labelLeft3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			//
			// labelCountry3
			//
			this->labelCountry3->AutoSize = true;
			this->labelCountry3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry3->Location = System::Drawing::Point(370, 95);
			this->labelCountry3->Name = L"labelCountry3";
			this->labelCountry3->Size = System::Drawing::Size(87, 24);
			this->labelCountry3->Text = Ryzen5_3700.getMadeIn();
			this->labelCountry3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			//
			// labelID4
			//
			this->labelID4->AutoSize = true;
			this->labelID4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID4->Location = System::Drawing::Point(7, 115);
			this->labelID4->Name = L"labelID4";
			this->labelID4->Size = System::Drawing::Size(40, 24);
			this->labelID4->TabIndex = 28;
			this->labelID4->Text = I9_12900K.getId().ToString();
			this->labelID4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			//
			// labelProduct4
			//
			this->labelProduct4->AutoSize = true;
			this->labelProduct4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct4->Location = System::Drawing::Point(42, 115);
			this->labelProduct4->Name = L"labelProduct4";
			this->labelProduct4->Size = System::Drawing::Size(247, 24);
			this->labelProduct4->TabIndex = 24;
			this->labelProduct4->Text = I9_12900K.getName();
			this->labelProduct4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			//
			// labelPrice4
			//
			this->labelPrice4->AutoSize = true;
			this->labelPrice4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice4->Location = System::Drawing::Point(217, 115);
			this->labelPrice4->Name = L"labelPrice4";
			this->labelPrice4->Size = System::Drawing::Size(107, 24);
			this->labelPrice4->TabIndex = 26;
			this->labelPrice4->Text = I9_12900K.getPrice().ToString() + " uah";
			this->labelPrice4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			//
			// labelLeft4
			//
			this->labelLeft4->AutoSize = true;
			this->labelLeft4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft4->Location = System::Drawing::Point(297, 115);
			this->labelLeft4->Name = L"labelLeft4";
			this->labelLeft4->Size = System::Drawing::Size(97, 24);
			this->labelLeft4->Text = I9_12900K.getAmount().ToString() + " pieces";
			this->labelLeft4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			//
			// labelCountry4
			//
			this->labelCountry4->AutoSize = true;
			this->labelCountry4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry4->Location = System::Drawing::Point(370, 115);
			this->labelCountry4->Name = L"labelCountry4";
			this->labelCountry4->Size = System::Drawing::Size(87, 24);
			this->labelCountry4->Text = I9_12900K.getMadeIn();
			this->labelCountry4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			//
			// labelID5
			//
			this->labelID5->AutoSize = true;
			this->labelID5->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID5->Location = System::Drawing::Point(7, 135);
			this->labelID5->Name = L"labelID5";
			this->labelID5->Size = System::Drawing::Size(40, 24);
			this->labelID5->TabIndex = 33;
			this->labelID5->Text = I5_10400F.getId().ToString();
			this->labelID5->Click += gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			//
			// labelProduct5
			//
			this->labelProduct5->AutoSize = true;
			this->labelProduct5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct5->Location = System::Drawing::Point(42, 135);
			this->labelProduct5->Name = L"labelProduct5";
			this->labelProduct5->Size = System::Drawing::Size(247, 24);
			this->labelProduct5->TabIndex = 29;
			this->labelProduct5->Text = I5_10400F.getName();
			this->labelProduct5->Click += gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			//
			// labelPrice5
			//
			this->labelPrice5->AutoSize = true;
			this->labelPrice5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice5->Location = System::Drawing::Point(217, 135);
			this->labelPrice5->Name = L"labelPrice5";
			this->labelPrice5->Size = System::Drawing::Size(107, 24);
			this->labelPrice5->TabIndex = 31;
			this->labelPrice5->Text = I5_10400F.getPrice().ToString() + " uah";
			this->labelPrice5->Click += gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			//
			// labelLeft5
			//
			this->labelLeft5->AutoSize = true;
			this->labelLeft5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft5->Location = System::Drawing::Point(297, 135);
			this->labelLeft5->Name = L"labelLeft5";
			this->labelLeft5->Size = System::Drawing::Size(97, 24);
			this->labelLeft5->Text = I5_10400F.getAmount().ToString() + " pieces";
			this->labelLeft5->Click += gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			//
			// labelCountry5
			//
			this->labelCountry5->AutoSize = true;
			this->labelCountry5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry5->Location = System::Drawing::Point(370, 135);
			this->labelCountry5->Name = L"labelCountry5";
			this->labelCountry5->Size = System::Drawing::Size(87, 24);
			this->labelCountry5->Text = I5_10400F.getMadeIn();
			this->labelCountry5->Click += gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		}
		else if (boxPCC->Text == "RAMs") {
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);

		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);

		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);

		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);

		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);

		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);

		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);

		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);

		this->labelID9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelProduct9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelPrice9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelLeft9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelCountry9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->Controls->Remove(this->labelProduct4);
			this->Controls->Remove(this->labelCountry4);
			this->Controls->Remove(this->labelPrice4);
			this->Controls->Remove(this->labelLeft4);
			this->Controls->Remove(this->labelID4);
			this->Controls->Remove(this->labelProduct5);
			this->Controls->Remove(this->labelCountry5);
			this->Controls->Remove(this->labelPrice5);
			this->Controls->Remove(this->labelLeft5);
			this->Controls->Remove(this->labelID5);
			this->Controls->Remove(this->labelProduct6);
			this->Controls->Remove(this->labelCountry6);
			this->Controls->Remove(this->labelPrice6);
			this->Controls->Remove(this->labelLeft6);
			this->Controls->Remove(this->labelID6);
			this->Controls->Remove(this->labelProduct7);
			this->Controls->Remove(this->labelCountry7);
			this->Controls->Remove(this->labelPrice7);
			this->Controls->Remove(this->labelLeft7);
			this->Controls->Remove(this->labelID7);
			this->Controls->Remove(this->labelProduct8);
			this->Controls->Remove(this->labelCountry8);
			this->Controls->Remove(this->labelPrice8);
			this->Controls->Remove(this->labelLeft8);
			this->Controls->Remove(this->labelID8);
			this->Controls->Remove(this->labelProduct9);
			this->Controls->Remove(this->labelCountry9);
			this->Controls->Remove(this->labelPrice9);
			this->Controls->Remove(this->labelLeft9);
			this->Controls->Remove(this->labelID9);

			this->Controls->Add(this->labelProduct1);
			this->Controls->Add(this->labelCountry1);
			this->Controls->Add(this->labelPrice1);
			this->Controls->Add(this->labelLeft1);
			this->Controls->Add(this->labelID1);
			this->Controls->Add(this->labelProduct2);
			this->Controls->Add(this->labelCountry2);
			this->Controls->Add(this->labelPrice2);
			this->Controls->Add(this->labelLeft2);
			this->Controls->Add(this->labelID2);
			this->Controls->Add(this->labelProduct3);
			this->Controls->Add(this->labelCountry3);
			this->Controls->Add(this->labelPrice3);
			this->Controls->Add(this->labelLeft3);
			this->Controls->Add(this->labelID3);

			//
			// labelID1
			//
			this->labelID1->AutoSize = true;
			this->labelID1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID1->Location = System::Drawing::Point(7, 55);
			this->labelID1->Name = L"labelID1";
			this->labelID1->Size = System::Drawing::Size(40, 24);
			this->labelID1->TabIndex = 13;
			this->labelID1->Text = gb4.getId().ToString();
			this->labelID1->Click += gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			//
			// labelProduct1
			//
			this->labelProduct1->AutoSize = true;
			this->labelProduct1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct1->Location = System::Drawing::Point(42, 55);
			this->labelProduct1->Name = L"labelProduct1";
			this->labelProduct1->Size = System::Drawing::Size(247, 24);
			this->labelProduct1->TabIndex = 11;
			this->labelProduct1->Text = gb4.getName();
			this->labelProduct1->Click += gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice1->Location = System::Drawing::Point(217, 55);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Size = System::Drawing::Size(107, 24);
			this->labelPrice1->TabIndex = 12;
			this->labelPrice1->Text = gb4.getPrice().ToString() + " uah";
			this->labelPrice1->Click += gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			//
			// labelLeft1
			//
			this->labelLeft1->AutoSize = true;
			this->labelLeft1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft1->Location = System::Drawing::Point(297, 55);
			this->labelLeft1->Name = L"labelLeft1";
			this->labelLeft1->Size = System::Drawing::Size(97, 24);
			this->labelLeft1->Text = gb4.getAmount().ToString() + " pieces";
			this->labelLeft1->Click += gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			//
			// labelCountry1
			//
			this->labelCountry1->AutoSize = true;
			this->labelCountry1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry1->Location = System::Drawing::Point(370, 55);
			this->labelCountry1->Name = L"labelCountry1";
			this->labelCountry1->Size = System::Drawing::Size(87, 24);
			this->labelCountry1->Text = gb4.getMadeIn();
			this->labelCountry1->Click += gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			//
			// labelID2
			//
			this->labelID2->AutoSize = true;
			this->labelID2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID2->Location = System::Drawing::Point(7, 75);
			this->labelID2->Name = L"labelID2";
			this->labelID2->Size = System::Drawing::Size(40, 24);
			this->labelID2->TabIndex = 18;
			this->labelID2->Text = gb8.getId().ToString();
			this->labelID2->Click += gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			//
			// labelProduct2
			//
			this->labelProduct2->AutoSize = true;
			this->labelProduct2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct2->Location = System::Drawing::Point(42, 75);
			this->labelProduct2->Name = L"labelProduct2";
			this->labelProduct2->Size = System::Drawing::Size(247, 24);
			this->labelProduct2->TabIndex = 14;
			this->labelProduct2->Text = gb8.getName();
			this->labelProduct2->Click += gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice2->Location = System::Drawing::Point(217, 75);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Size = System::Drawing::Size(107, 24);
			this->labelPrice2->TabIndex = 16;
			this->labelPrice2->Text = gb8.getPrice().ToString() + " uah";
			this->labelPrice2->Click += gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			//
			// labelLeft2
			//
			this->labelLeft2->AutoSize = true;
			this->labelLeft2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft2->Location = System::Drawing::Point(297, 75);
			this->labelLeft2->Name = L"labelLeft2";
			this->labelLeft2->Size = System::Drawing::Size(97, 24);
			this->labelLeft2->Text = gb8.getAmount().ToString() + " pieces";
			this->labelLeft2->Click += gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			//
			// labelCountry2
			//
			this->labelCountry2->AutoSize = true;
			this->labelCountry2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry2->Location = System::Drawing::Point(370, 75);
			this->labelCountry2->Name = L"labelCountry2";
			this->labelCountry2->Size = System::Drawing::Size(87, 24);
			this->labelCountry2->Text = gb8.getMadeIn();
			this->labelCountry2->Click += gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			//
			// labelID3
			//
			this->labelID3->AutoSize = true;
			this->labelID3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID3->Location = System::Drawing::Point(7, 95);
			this->labelID3->Name = L"labelID3";
			this->labelID3->Size = System::Drawing::Size(40, 24);
			this->labelID3->TabIndex = 23;
			this->labelID3->Text = gb16.getId().ToString();
			this->labelID3->Click += gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			//
			// labelProduct3
			//
			this->labelProduct3->AutoSize = true;
			this->labelProduct3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct3->Location = System::Drawing::Point(42, 95);
			this->labelProduct3->Name = L"labelProduct3";
			this->labelProduct3->Size = System::Drawing::Size(247, 24);
			this->labelProduct3->TabIndex = 19;
			this->labelProduct3->Text = gb16.getName();
			this->labelProduct3->Click += gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			//
			// labelPrice3
			//
			this->labelPrice3->AutoSize = true;
			this->labelPrice3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice3->Location = System::Drawing::Point(217, 95);
			this->labelPrice3->Name = L"labelPrice3";
			this->labelPrice3->Size = System::Drawing::Size(107, 24);
			this->labelPrice3->TabIndex = 21;
			this->labelPrice3->Text = gb16.getPrice().ToString() + " uah";
			this->labelPrice3->Click += gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			//
			// labelLeft3
			//
			this->labelLeft3->AutoSize = true;
			this->labelLeft3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft3->Location = System::Drawing::Point(297, 95);
			this->labelLeft3->Name = L"labelLeft3";
			this->labelLeft3->Size = System::Drawing::Size(97, 24);
			this->labelLeft3->Text = gb16.getAmount().ToString() + " pieces";
			this->labelLeft3->Click += gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			//
			// labelCountry3
			//
			this->labelCountry3->AutoSize = true;
			this->labelCountry3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry3->Location = System::Drawing::Point(370, 95);
			this->labelCountry3->Name = L"labelCountry3";
			this->labelCountry3->Size = System::Drawing::Size(87, 24);
			this->labelCountry3->Text = gb16.getMadeIn();
			this->labelCountry3->Click += gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		}
	}

	private: System::Void label1GC_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphic_cards RTX3090;
		RTX3090.setName("MSI RTX 3090");
		RTX3090.setMadeIn("China");
		RTX3090.setAmount(rand() % 50);
		RTX3090.setId(301);
		RTX3090.setPrice(120000);
		CPrice = RTX3090.getPrice();
		CAmount = RTX3090.getAmount();
		CName = RTX3090.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			RTX3090.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label2GC_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphic_cards GTX1660;
		GTX1660.setName("ASUS GTX 1660");
		GTX1660.setMadeIn("China");
		GTX1660.setAmount(rand() % 100);
		GTX1660.setId(302);
		GTX1660.setPrice(24000);
		CPrice = GTX1660.getPrice();
		CAmount = GTX1660.getAmount();
		CName = GTX1660.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			GTX1660.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label3GC_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphic_cards RTX3070;
		RTX3070.setName("Palit RTX 3070");
		RTX3070.setMadeIn("China");
		RTX3070.setAmount(rand() % 75);
		RTX3070.setId(303);
		RTX3070.setPrice(38000);
		CPrice = RTX3070.getPrice();
		CAmount = RTX3070.getAmount();
		CName = RTX3070.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			RTX3070.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label4GC_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphic_cards GT1030;
		GT1030.setName("Gigabyte GT 1030");
		GT1030.setMadeIn("China");
		GT1030.setAmount(rand() % 100);
		GT1030.setId(304);
		GT1030.setPrice(3799);
		CPrice = GT1030.getPrice();
		CAmount = GT1030.getAmount();
		CName = GT1030.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			GT1030.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label5GC_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphic_cards RX6900;
		RX6900.setName("Sapphire RX 6900");
		RX6900.setMadeIn("China");
		RX6900.setAmount(0);
		RX6900.setId(305);
		RX6900.setPrice(64100);
		CPrice = RX6900.getPrice();
		CAmount = RX6900.getAmount();
		CName = RX6900.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			RX6900.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}

	private: System::Void label1Proc_Click(System::Object^ sender, System::EventArgs^ e) {
		Processors I7_10700K;
		I7_10700K.setName("Intel i7-10700K");
		I7_10700K.setMadeIn("China");
		I7_10700K.setAmount(rand() % 50);
		I7_10700K.setId(311);
		I7_10700K.setPrice(13235);
		CPrice = I7_10700K.getPrice();
		CAmount = I7_10700K.getAmount();
		CName = I7_10700K.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			I7_10700K.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label2Proc_Click(System::Object^ sender, System::EventArgs^ e) {
		Processors Ryzen7_5600;
		Ryzen7_5600.setName("AMD Ryzen 7 5600");
		Ryzen7_5600.setMadeIn("China");
		Ryzen7_5600.setAmount(rand() % 50);
		Ryzen7_5600.setId(312);
		Ryzen7_5600.setPrice(10379);
		CPrice = Ryzen7_5600.getPrice();
		CAmount = Ryzen7_5600.getAmount();
		CName = Ryzen7_5600.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			Ryzen7_5600.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label3Proc_Click(System::Object^ sender, System::EventArgs^ e) {
		Processors Ryzen5_3700;
		Ryzen5_3700.setName("Ryzen 5 3700");
		Ryzen5_3700.setMadeIn("China");
		Ryzen5_3700.setAmount(rand() % 50);
		Ryzen5_3700.setId(313);
		Ryzen5_3700.setPrice(4900);
		CPrice = Ryzen5_3700.getPrice();
		CAmount = Ryzen5_3700.getAmount();
		CName = Ryzen5_3700.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			Ryzen5_3700.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label4Proc_Click(System::Object^ sender, System::EventArgs^ e) {
		Processors I9_12900K;
		I9_12900K.setName("Intel i9-12900K");
		I9_12900K.setMadeIn("China");
		I9_12900K.setAmount(0);
		I9_12900K.setId(314);
		I9_12900K.setPrice(24254);
		CPrice = I9_12900K.getPrice();
		CAmount = I9_12900K.getAmount();
		CName = I9_12900K.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			I9_12900K.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label5Proc_Click(System::Object^ sender, System::EventArgs^ e) {
		Processors I5_10400F;
		I5_10400F.setName("Intel i5-10400F");
		I5_10400F.setMadeIn("China");
		I5_10400F.setAmount(rand() % 50);
		I5_10400F.setId(315);
		I5_10400F.setPrice(5199);
		CPrice = I5_10400F.getPrice();
		CAmount = I5_10400F.getAmount();
		CName = I5_10400F.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			I5_10400F.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}

	private: System::Void label1RAM_Click(System::Object^ sender, System::EventArgs^ e) {
		RAM gb4;
		gb4.setName("DDR4 Goodram 4 gb 2400");
		gb4.setMadeIn("China");
		gb4.setAmount(rand() % 50);
		gb4.setId(321);
		gb4.setPrice(785);
		CPrice = gb4.getPrice();
		CAmount = gb4.getAmount();
		CName = gb4.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			gb4.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label2RAM_Click(System::Object^ sender, System::EventArgs^ e) {
		RAM gb8;
		gb8.setName("DDR4 Crucial 8 gb 3200");
		gb8.setMadeIn("China");
		gb8.setAmount(rand() % 50);
		gb8.setId(322);
		gb8.setPrice(1225);
		CPrice = gb8.getPrice();
		CAmount = gb8.getAmount();
		CName = gb8.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			gb8.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label3RAM_Click(System::Object^ sender, System::EventArgs^ e) {
		RAM gb16;
		gb16.setName("DDR4 Kingston Fury 16 gb 3200");
		gb16.setMadeIn("China");
		gb16.setAmount(rand() % 50);
		gb16.setId(323);
		gb16.setPrice(5289);
		CPrice = gb16.getPrice();
		CAmount = gb16.getAmount();
		CName = gb16.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			gb16.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}

	private: System::Void boxHA_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->boxCategories->Location = System::Drawing::Point(450, 150);
		this->boxAccessories->Location = System::Drawing::Point(450, 190);
		this->boxDevices->Location = System::Drawing::Point(450, 190);
		this->boxPCC->Location = System::Drawing::Point(450, 190);
		this->boxHA->Location = System::Drawing::Point(450, 190);
		buffStore = 1;
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(25, 3);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Text = boxHA->Text;
		//
		// labelPress
		//
		this->Controls->Add(this->labelPress);
		this->labelPress->AutoSize = true;
		this->labelPress->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
		this->labelPress->Location = System::Drawing::Point(45, 260);
		this->labelPress->Name = L"labelPress";
		this->labelPress->Text = L"To purchase an item press on the line.";
		//
		// labelBudget
		//
		this->Controls->Add(this->labelBudget);
		this->labelBudget->AutoSize = true;
		this->labelBudget->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
		this->labelBudget->Location = System::Drawing::Point(340, 10);
		this->labelBudget->Name = L"labelBudget";
		this->labelBudget->Text = budget.ToString() + " uah";
		//
		// buttonCart
		//
		this->Controls->Add(this->buttonCart);
		this->buttonCart->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonCart->Font = (gcnew System::Drawing::Font(L"Calibri", 30));
		this->buttonCart->Location = System::Drawing::Point(495, 60);
		this->buttonCart->Name = L"buttonCart";
		this->buttonCart->Size = System::Drawing::Size(75, 70);
		this->buttonCart->Text = L"🛒";
		this->buttonCart->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonCart->UseVisualStyleBackColor = false;
		this->buttonCart->Click -= gcnew System::EventHandler(this, &FormWelcome::buttonCart_Click);
		this->buttonCart->Click += gcnew System::EventHandler(this, &FormWelcome::buttonCart_Click);

		this->Controls->Remove(this->labelProduct1);
		this->Controls->Remove(this->labelCountry1);
		this->Controls->Remove(this->labelPrice1);
		this->Controls->Remove(this->labelLeft1);
		this->Controls->Remove(this->labelID1);
		this->Controls->Remove(this->labelProduct2);
		this->Controls->Remove(this->labelCountry2);
		this->Controls->Remove(this->labelPrice2);
		this->Controls->Remove(this->labelLeft2);
		this->Controls->Remove(this->labelID2);
		this->Controls->Remove(this->labelProduct3);
		this->Controls->Remove(this->labelCountry3);
		this->Controls->Remove(this->labelPrice3);
		this->Controls->Remove(this->labelLeft3);
		this->Controls->Remove(this->labelID3);
		this->Controls->Remove(this->labelProduct4);
		this->Controls->Remove(this->labelCountry4);
		this->Controls->Remove(this->labelPrice4);
		this->Controls->Remove(this->labelLeft4);
		this->Controls->Remove(this->labelID4);
		this->Controls->Remove(this->labelProduct5);
		this->Controls->Remove(this->labelCountry5);
		this->Controls->Remove(this->labelPrice5);
		this->Controls->Remove(this->labelLeft5);
		this->Controls->Remove(this->labelID5);
		this->Controls->Remove(this->labelProduct6);
		this->Controls->Remove(this->labelCountry6);
		this->Controls->Remove(this->labelPrice6);
		this->Controls->Remove(this->labelLeft6);
		this->Controls->Remove(this->labelID6);
		this->Controls->Remove(this->labelProduct7);
		this->Controls->Remove(this->labelCountry7);
		this->Controls->Remove(this->labelPrice7);
		this->Controls->Remove(this->labelLeft7);
		this->Controls->Remove(this->labelID7);
		this->Controls->Remove(this->labelProduct8);
		this->Controls->Remove(this->labelCountry8);
		this->Controls->Remove(this->labelPrice8);
		this->Controls->Remove(this->labelLeft8);
		this->Controls->Remove(this->labelID8);
		this->Controls->Remove(this->labelProduct9);
		this->Controls->Remove(this->labelCountry9);
		this->Controls->Remove(this->labelPrice9);
		this->Controls->Remove(this->labelLeft9);
		this->Controls->Remove(this->labelID9);

		this->Controls->Add(this->labelProduct);
		this->Controls->Add(this->labelCountry);
		this->Controls->Add(this->labelPrice);
		this->Controls->Add(this->labelLeft);
		this->Controls->Add(this->labelID);

		this->Controls->Add(this->labelProduct1);
		this->Controls->Add(this->labelCountry1);
		this->Controls->Add(this->labelPrice1);
		this->Controls->Add(this->labelLeft1);
		this->Controls->Add(this->labelID1);
		this->Controls->Add(this->labelProduct2);
		this->Controls->Add(this->labelCountry2);
		this->Controls->Add(this->labelPrice2);
		this->Controls->Add(this->labelLeft2);
		this->Controls->Add(this->labelID2);
		this->Controls->Add(this->labelProduct3);
		this->Controls->Add(this->labelCountry3);
		this->Controls->Add(this->labelPrice3);
		this->Controls->Add(this->labelLeft3);
		this->Controls->Add(this->labelID3);
		this->Controls->Add(this->labelProduct4);
		this->Controls->Add(this->labelCountry4);
		this->Controls->Add(this->labelPrice4);
		this->Controls->Add(this->labelLeft4);
		this->Controls->Add(this->labelID4);
		this->Controls->Add(this->labelProduct5);
		this->Controls->Add(this->labelCountry5);
		this->Controls->Add(this->labelPrice5);
		this->Controls->Add(this->labelLeft5);
		this->Controls->Add(this->labelID5);
		this->Controls->Add(this->labelProduct6);
		this->Controls->Add(this->labelCountry6);
		this->Controls->Add(this->labelPrice6);
		this->Controls->Add(this->labelLeft6);
		this->Controls->Add(this->labelID6);
		this->Controls->Add(this->labelProduct7);
		this->Controls->Add(this->labelCountry7);
		this->Controls->Add(this->labelPrice7);
		this->Controls->Add(this->labelLeft7);
		this->Controls->Add(this->labelID7);
		this->Controls->Add(this->labelProduct8);
		this->Controls->Add(this->labelCountry8);
		this->Controls->Add(this->labelPrice8);
		this->Controls->Add(this->labelLeft8);
		this->Controls->Add(this->labelID8);
		this->Controls->Add(this->labelProduct9);
		this->Controls->Add(this->labelCountry9);
		this->Controls->Add(this->labelPrice9);
		this->Controls->Add(this->labelLeft9);
		this->Controls->Add(this->labelID9);

		///////////////////////////////////////////////////////////////////////////
		///Побутова техніка
		//Холодильники
		Refrigerators SamsungRefr;
		SamsungRefr.setName("Samsung Refrigerator");
		SamsungRefr.setMadeIn("China");
		SamsungRefr.setAmount(rand() % 50);
		SamsungRefr.setId(401);
		SamsungRefr.setPrice(46199);

		Refrigerators WhirlpoolRefr;
		WhirlpoolRefr.setName("Whirlpool ART");
		WhirlpoolRefr.setMadeIn("China");
		WhirlpoolRefr.setAmount(0);
		WhirlpoolRefr.setId(402);
		WhirlpoolRefr.setPrice(18799);

		Refrigerators BekoRefr;
		BekoRefr.setName("Beko RSNE");
		BekoRefr.setMadeIn("China");
		BekoRefr.setAmount(rand() % 50);
		BekoRefr.setId(403);
		BekoRefr.setPrice(17699);

		Refrigerators IndesitRefr;
		IndesitRefr.setName("Indesit INC18");
		IndesitRefr.setMadeIn("China");
		IndesitRefr.setAmount(rand() % 50);
		IndesitRefr.setId(404);
		IndesitRefr.setPrice(26872);

		//Пральні машини
		Washing_machines BekoWM;
		BekoWM.setName("Beko WUE");
		BekoWM.setMadeIn("China");
		BekoWM.setAmount(rand() % 50);
		BekoWM.setId(411);
		BekoWM.setPrice(6500);

		Washing_machines IndesitWM;
		IndesitWM.setName("Indesit OMTWSA");
		IndesitWM.setMadeIn("China");
		IndesitWM.setAmount(0);
		IndesitWM.setId(412);
		IndesitWM.setPrice(8300);

		Washing_machines ElectroluxWM;
		ElectroluxWM.setName("Electrolux EW6S");
		ElectroluxWM.setMadeIn("China");
		ElectroluxWM.setAmount(rand() % 50);
		ElectroluxWM.setId(413);
		ElectroluxWM.setPrice(8499);

		Washing_machines SamsungWM;
		SamsungWM.setName("Samsung WW70T");
		SamsungWM.setMadeIn("China");
		SamsungWM.setAmount(rand() % 50);
		SamsungWM.setId(414);
		SamsungWM.setPrice(12800);

		//Блендери
		Blenders TefalBl;
		TefalBl.setName("Tefal HB");
		TefalBl.setMadeIn("China");
		TefalBl.setAmount(rand() % 50);
		TefalBl.setId(421);
		TefalBl.setPrice(2300);

		Blenders BoschBl;
		BoschBl.setName("Bosch MSM");
		BoschBl.setMadeIn("China");
		BoschBl.setAmount(rand() % 50);
		BoschBl.setId(422);
		BoschBl.setPrice(1700);

		Blenders BraunBl;
		BraunBl.setName("Braun MQ");
		BraunBl.setMadeIn("China");
		BraunBl.setAmount(rand() % 50);
		BraunBl.setId(423);
		BraunBl.setPrice(2200);

		Blenders PhilipsBl;
		PhilipsBl.setName("Philips HR2537");
		PhilipsBl.setMadeIn("China");
		PhilipsBl.setAmount(0);
		PhilipsBl.setId(424);
		PhilipsBl.setPrice(2600);
		///////////////////////////////////////////////////////////////////////////

		//
		// labelID
		//
		this->labelID->AutoSize = true;
		this->labelID->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->labelID->Location = System::Drawing::Point(7, 35);
		this->labelID->Name = L"labelID";
		this->labelID->Size = System::Drawing::Size(37, 24);
		this->labelID->TabIndex = 4;
		this->labelID->Text = L"ID  ";
		//
		// labelProduct
		//
		this->labelProduct->AutoSize = true;
		this->labelProduct->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelProduct->Location = System::Drawing::Point(42, 35);
		this->labelProduct->Name = L"labelProduct";
		this->labelProduct->Size = System::Drawing::Size(75, 24);
		this->labelProduct->TabIndex = 10;
		this->labelProduct->Text = L"Product";
		//
		// labelPrice
		//
		this->labelPrice->AutoSize = true;
		this->labelPrice->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelPrice->Location = System::Drawing::Point(217, 35);
		this->labelPrice->Name = L"labelPrice";
		this->labelPrice->Size = System::Drawing::Size(50, 24);
		this->labelPrice->TabIndex = 9;
		this->labelPrice->Text = L"Price";
		//
		// labelLeft
		//
		this->labelLeft->AutoSize = true;
		this->labelLeft->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelLeft->Location = System::Drawing::Point(297, 35);
		this->labelLeft->Name = L"labelLeft";
		this->labelLeft->Size = System::Drawing::Size(80, 24);
		this->labelLeft->TabIndex = 7;
		this->labelLeft->Text = L"Left";
		//
		// labelCountry
		//
		this->labelCountry->AutoSize = true;
		this->labelCountry->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->labelCountry->Location = System::Drawing::Point(370, 35);
		this->labelCountry->Name = L"labelCountry";
		this->labelCountry->Size = System::Drawing::Size(87, 24);
		this->labelCountry->TabIndex = 8;
		this->labelCountry->Text = L"Country";

		if (boxHA->Text == "Refrigerators") {
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
			this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);

			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
			this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);

			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
			this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);

			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
			this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);

			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
			this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);

			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
			this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);

			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
			this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);

			this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
			this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
			this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
			this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);

			this->labelID9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelProduct9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelPrice9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelLeft9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->labelCountry9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->Controls->Remove(this->labelProduct5);
			this->Controls->Remove(this->labelCountry5);
			this->Controls->Remove(this->labelPrice5);
			this->Controls->Remove(this->labelLeft5);
			this->Controls->Remove(this->labelID5);
			this->Controls->Remove(this->labelProduct6);
			this->Controls->Remove(this->labelCountry6);
			this->Controls->Remove(this->labelPrice6);
			this->Controls->Remove(this->labelLeft6);
			this->Controls->Remove(this->labelID6);
			this->Controls->Remove(this->labelProduct7);
			this->Controls->Remove(this->labelCountry7);
			this->Controls->Remove(this->labelPrice7);
			this->Controls->Remove(this->labelLeft7);
			this->Controls->Remove(this->labelID7);
			this->Controls->Remove(this->labelProduct8);
			this->Controls->Remove(this->labelCountry8);
			this->Controls->Remove(this->labelPrice8);
			this->Controls->Remove(this->labelLeft8);
			this->Controls->Remove(this->labelID8);
			this->Controls->Remove(this->labelProduct9);
			this->Controls->Remove(this->labelCountry9);
			this->Controls->Remove(this->labelPrice9);
			this->Controls->Remove(this->labelLeft9);
			this->Controls->Remove(this->labelID9);

			this->Controls->Add(this->labelProduct1);
			this->Controls->Add(this->labelCountry1);
			this->Controls->Add(this->labelPrice1);
			this->Controls->Add(this->labelLeft1);
			this->Controls->Add(this->labelID1);
			this->Controls->Add(this->labelProduct2);
			this->Controls->Add(this->labelCountry2);
			this->Controls->Add(this->labelPrice2);
			this->Controls->Add(this->labelLeft2);
			this->Controls->Add(this->labelID2);
			this->Controls->Add(this->labelProduct3);
			this->Controls->Add(this->labelCountry3);
			this->Controls->Add(this->labelPrice3);
			this->Controls->Add(this->labelLeft3);
			this->Controls->Add(this->labelID3);
			this->Controls->Add(this->labelProduct4);
			this->Controls->Add(this->labelCountry4);
			this->Controls->Add(this->labelPrice4);
			this->Controls->Add(this->labelLeft4);
			this->Controls->Add(this->labelID4);

			//
			// labelID1
			//
			this->labelID1->AutoSize = true;
			this->labelID1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID1->Location = System::Drawing::Point(7, 55);
			this->labelID1->Name = L"labelID1";
			this->labelID1->Size = System::Drawing::Size(40, 24);
			this->labelID1->TabIndex = 13;
			this->labelID1->Text = SamsungRefr.getId().ToString();
			this->labelID1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			//
			// labelProduct1
			//
			this->labelProduct1->AutoSize = true;
			this->labelProduct1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct1->Location = System::Drawing::Point(42, 55);
			this->labelProduct1->Name = L"labelProduct1";
			this->labelProduct1->Size = System::Drawing::Size(247, 24);
			this->labelProduct1->TabIndex = 11;
			this->labelProduct1->Text = SamsungRefr.getName();
			this->labelProduct1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice1->Location = System::Drawing::Point(217, 55);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Size = System::Drawing::Size(107, 24);
			this->labelPrice1->TabIndex = 12;
			this->labelPrice1->Text = SamsungRefr.getPrice().ToString() + " uah";
			this->labelPrice1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			//
			// labelLeft1
			//
			this->labelLeft1->AutoSize = true;
			this->labelLeft1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft1->Location = System::Drawing::Point(297, 55);
			this->labelLeft1->Name = L"labelLeft1";
			this->labelLeft1->Size = System::Drawing::Size(97, 24);
			this->labelLeft1->Text = SamsungRefr.getAmount().ToString() + " pieces";
			this->labelLeft1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			//
			// labelCountry1
			//
			this->labelCountry1->AutoSize = true;
			this->labelCountry1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry1->Location = System::Drawing::Point(370, 55);
			this->labelCountry1->Name = L"labelCountry1";
			this->labelCountry1->Size = System::Drawing::Size(87, 24);
			this->labelCountry1->Text = SamsungRefr.getMadeIn();
			this->labelCountry1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
			//
			// labelID2
			//
			this->labelID2->AutoSize = true;
			this->labelID2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID2->Location = System::Drawing::Point(7, 75);
			this->labelID2->Name = L"labelID2";
			this->labelID2->Size = System::Drawing::Size(40, 24);
			this->labelID2->TabIndex = 18;
			this->labelID2->Text = WhirlpoolRefr.getId().ToString();
			this->labelID2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			//
			// labelProduct2
			//
			this->labelProduct2->AutoSize = true;
			this->labelProduct2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct2->Location = System::Drawing::Point(42, 75);
			this->labelProduct2->Name = L"labelProduct2";
			this->labelProduct2->Size = System::Drawing::Size(247, 24);
			this->labelProduct2->TabIndex = 14;
			this->labelProduct2->Text = WhirlpoolRefr.getName();
			this->labelProduct2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice2->Location = System::Drawing::Point(217, 75);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Size = System::Drawing::Size(107, 24);
			this->labelPrice2->TabIndex = 16;
			this->labelPrice2->Text = WhirlpoolRefr.getPrice().ToString() + " uah";
			this->labelPrice2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			//
			// labelLeft2
			//
			this->labelLeft2->AutoSize = true;
			this->labelLeft2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft2->Location = System::Drawing::Point(297, 75);
			this->labelLeft2->Name = L"labelLeft2";
			this->labelLeft2->Size = System::Drawing::Size(97, 24);
			this->labelLeft2->Text = WhirlpoolRefr.getAmount().ToString() + " pieces";
			this->labelLeft2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			//
			// labelCountry2
			//
			this->labelCountry2->AutoSize = true;
			this->labelCountry2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry2->Location = System::Drawing::Point(370, 75);
			this->labelCountry2->Name = L"labelCountry2";
			this->labelCountry2->Size = System::Drawing::Size(87, 24);
			this->labelCountry2->Text = WhirlpoolRefr.getMadeIn();
			this->labelCountry2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
			//
			// labelID3
			//
			this->labelID3->AutoSize = true;
			this->labelID3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID3->Location = System::Drawing::Point(7, 95);
			this->labelID3->Name = L"labelID3";
			this->labelID3->Size = System::Drawing::Size(40, 24);
			this->labelID3->TabIndex = 23;
			this->labelID3->Text = BekoRefr.getId().ToString();
			this->labelID3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			//
			// labelProduct3
			//
			this->labelProduct3->AutoSize = true;
			this->labelProduct3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct3->Location = System::Drawing::Point(42, 95);
			this->labelProduct3->Name = L"labelProduct3";
			this->labelProduct3->Size = System::Drawing::Size(247, 24);
			this->labelProduct3->TabIndex = 19;
			this->labelProduct3->Text = BekoRefr.getName();
			this->labelProduct3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			//
			// labelPrice3
			//
			this->labelPrice3->AutoSize = true;
			this->labelPrice3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice3->Location = System::Drawing::Point(217, 95);
			this->labelPrice3->Name = L"labelPrice3";
			this->labelPrice3->Size = System::Drawing::Size(107, 24);
			this->labelPrice3->TabIndex = 21;
			this->labelPrice3->Text = BekoRefr.getPrice().ToString() + " uah";
			this->labelPrice3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			//
			// labelLeft3
			//
			this->labelLeft3->AutoSize = true;
			this->labelLeft3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft3->Location = System::Drawing::Point(297, 95);
			this->labelLeft3->Name = L"labelLeft3";
			this->labelLeft3->Size = System::Drawing::Size(97, 24);
			this->labelLeft3->Text = BekoRefr.getAmount().ToString() + " pieces";
			this->labelLeft3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			//
			// labelCountry3
			//
			this->labelCountry3->AutoSize = true;
			this->labelCountry3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry3->Location = System::Drawing::Point(370, 95);
			this->labelCountry3->Name = L"labelCountry3";
			this->labelCountry3->Size = System::Drawing::Size(87, 24);
			this->labelCountry3->Text = BekoRefr.getMadeIn();
			this->labelCountry3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
			//
			// labelID4
			//
			this->labelID4->AutoSize = true;
			this->labelID4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID4->Location = System::Drawing::Point(7, 115);
			this->labelID4->Name = L"labelID4";
			this->labelID4->Size = System::Drawing::Size(40, 24);
			this->labelID4->TabIndex = 28;
			this->labelID4->Text = IndesitRefr.getId().ToString();
			this->labelID4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			//
			// labelProduct4
			//
			this->labelProduct4->AutoSize = true;
			this->labelProduct4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct4->Location = System::Drawing::Point(42, 115);
			this->labelProduct4->Name = L"labelProduct4";
			this->labelProduct4->Size = System::Drawing::Size(247, 24);
			this->labelProduct4->TabIndex = 24;
			this->labelProduct4->Text = IndesitRefr.getName();
			this->labelProduct4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			//
			// labelPrice4
			//
			this->labelPrice4->AutoSize = true;
			this->labelPrice4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice4->Location = System::Drawing::Point(217, 115);
			this->labelPrice4->Name = L"labelPrice4";
			this->labelPrice4->Size = System::Drawing::Size(107, 24);
			this->labelPrice4->TabIndex = 26;
			this->labelPrice4->Text = IndesitRefr.getPrice().ToString() + " uah";
			this->labelPrice4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			//
			// labelLeft4
			//
			this->labelLeft4->AutoSize = true;
			this->labelLeft4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft4->Location = System::Drawing::Point(297, 115);
			this->labelLeft4->Name = L"labelLeft4";
			this->labelLeft4->Size = System::Drawing::Size(97, 24);
			this->labelLeft4->Text = IndesitRefr.getAmount().ToString() + " pieces";
			this->labelLeft4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
			//
			// labelCountry4
			//
			this->labelCountry4->AutoSize = true;
			this->labelCountry4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry4->Location = System::Drawing::Point(370, 115);
			this->labelCountry4->Name = L"labelCountry4";
			this->labelCountry4->Size = System::Drawing::Size(87, 24);
			this->labelCountry4->Text = IndesitRefr.getMadeIn();
			this->labelCountry4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		}
		else if (boxHA->Text == "Washing machines") {
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);

		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);

		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);

		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);

		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);

		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);

		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);

		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);

		this->labelID9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelProduct9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelPrice9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelLeft9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelCountry9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->Controls->Remove(this->labelProduct5);
			this->Controls->Remove(this->labelCountry5);
			this->Controls->Remove(this->labelPrice5);
			this->Controls->Remove(this->labelLeft5);
			this->Controls->Remove(this->labelID5);
			this->Controls->Remove(this->labelProduct6);
			this->Controls->Remove(this->labelCountry6);
			this->Controls->Remove(this->labelPrice6);
			this->Controls->Remove(this->labelLeft6);
			this->Controls->Remove(this->labelID6);
			this->Controls->Remove(this->labelProduct7);
			this->Controls->Remove(this->labelCountry7);
			this->Controls->Remove(this->labelPrice7);
			this->Controls->Remove(this->labelLeft7);
			this->Controls->Remove(this->labelID7);
			this->Controls->Remove(this->labelProduct8);
			this->Controls->Remove(this->labelCountry8);
			this->Controls->Remove(this->labelPrice8);
			this->Controls->Remove(this->labelLeft8);
			this->Controls->Remove(this->labelID8);
			this->Controls->Remove(this->labelProduct9);
			this->Controls->Remove(this->labelCountry9);
			this->Controls->Remove(this->labelPrice9);
			this->Controls->Remove(this->labelLeft9);
			this->Controls->Remove(this->labelID9);

			this->Controls->Add(this->labelProduct1);
			this->Controls->Add(this->labelCountry1);
			this->Controls->Add(this->labelPrice1);
			this->Controls->Add(this->labelLeft1);
			this->Controls->Add(this->labelID1);
			this->Controls->Add(this->labelProduct2);
			this->Controls->Add(this->labelCountry2);
			this->Controls->Add(this->labelPrice2);
			this->Controls->Add(this->labelLeft2);
			this->Controls->Add(this->labelID2);
			this->Controls->Add(this->labelProduct3);
			this->Controls->Add(this->labelCountry3);
			this->Controls->Add(this->labelPrice3);
			this->Controls->Add(this->labelLeft3);
			this->Controls->Add(this->labelID3);
			this->Controls->Add(this->labelProduct4);
			this->Controls->Add(this->labelCountry4);
			this->Controls->Add(this->labelPrice4);
			this->Controls->Add(this->labelLeft4);
			this->Controls->Add(this->labelID4);

			//
			// labelID1
			//
			this->labelID1->AutoSize = true;
			this->labelID1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID1->Location = System::Drawing::Point(7, 55);
			this->labelID1->Name = L"labelID1";
			this->labelID1->Size = System::Drawing::Size(40, 24);
			this->labelID1->TabIndex = 13;
			this->labelID1->Text = BekoWM.getId().ToString();
			this->labelID1->Click += gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			//
			// labelProduct1
			//
			this->labelProduct1->AutoSize = true;
			this->labelProduct1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct1->Location = System::Drawing::Point(42, 55);
			this->labelProduct1->Name = L"labelProduct1";
			this->labelProduct1->Size = System::Drawing::Size(247, 24);
			this->labelProduct1->TabIndex = 11;
			this->labelProduct1->Text = BekoWM.getName();
			this->labelProduct1->Click += gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice1->Location = System::Drawing::Point(217, 55);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Size = System::Drawing::Size(107, 24);
			this->labelPrice1->TabIndex = 12;
			this->labelPrice1->Text = BekoWM.getPrice().ToString() + " uah";
			this->labelPrice1->Click += gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			//
			// labelLeft1
			//
			this->labelLeft1->AutoSize = true;
			this->labelLeft1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft1->Location = System::Drawing::Point(297, 55);
			this->labelLeft1->Name = L"labelLeft1";
			this->labelLeft1->Size = System::Drawing::Size(97, 24);
			this->labelLeft1->Text = BekoWM.getAmount().ToString() + " pieces";
			this->labelLeft1->Click += gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			//
			// labelCountry1
			//
			this->labelCountry1->AutoSize = true;
			this->labelCountry1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry1->Location = System::Drawing::Point(370, 55);
			this->labelCountry1->Name = L"labelCountry1";
			this->labelCountry1->Size = System::Drawing::Size(87, 24);
			this->labelCountry1->Text = BekoWM.getMadeIn();
			this->labelCountry1->Click += gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
			//
			// labelID2
			//
			this->labelID2->AutoSize = true;
			this->labelID2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID2->Location = System::Drawing::Point(7, 75);
			this->labelID2->Name = L"labelID2";
			this->labelID2->Size = System::Drawing::Size(40, 24);
			this->labelID2->TabIndex = 18;
			this->labelID2->Text = IndesitWM.getId().ToString();
			this->labelID2->Click += gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			//
			// labelProduct2
			//
			this->labelProduct2->AutoSize = true;
			this->labelProduct2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct2->Location = System::Drawing::Point(42, 75);
			this->labelProduct2->Name = L"labelProduct2";
			this->labelProduct2->Size = System::Drawing::Size(247, 24);
			this->labelProduct2->TabIndex = 14;
			this->labelProduct2->Text = IndesitWM.getName();
			this->labelProduct2->Click += gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice2->Location = System::Drawing::Point(217, 75);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Size = System::Drawing::Size(107, 24);
			this->labelPrice2->TabIndex = 16;
			this->labelPrice2->Text = IndesitWM.getPrice().ToString() + " uah";
			this->labelPrice2->Click += gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			//
			// labelLeft2
			//
			this->labelLeft2->AutoSize = true;
			this->labelLeft2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft2->Location = System::Drawing::Point(297, 75);
			this->labelLeft2->Name = L"labelLeft2";
			this->labelLeft2->Size = System::Drawing::Size(97, 24);
			this->labelLeft2->Text = IndesitWM.getAmount().ToString() + " pieces";
			this->labelLeft2->Click += gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			//
			// labelCountry2
			//
			this->labelCountry2->AutoSize = true;
			this->labelCountry2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry2->Location = System::Drawing::Point(370, 75);
			this->labelCountry2->Name = L"labelCountry2";
			this->labelCountry2->Size = System::Drawing::Size(87, 24);
			this->labelCountry2->Text = IndesitWM.getMadeIn();
			this->labelCountry2->Click += gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
			//
			// labelID3
			//
			this->labelID3->AutoSize = true;
			this->labelID3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID3->Location = System::Drawing::Point(7, 95);
			this->labelID3->Name = L"labelID3";
			this->labelID3->Size = System::Drawing::Size(40, 24);
			this->labelID3->TabIndex = 23;
			this->labelID3->Text = ElectroluxWM.getId().ToString();
			this->labelID3->Click += gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			//
			// labelProduct3
			//
			this->labelProduct3->AutoSize = true;
			this->labelProduct3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct3->Location = System::Drawing::Point(42, 95);
			this->labelProduct3->Name = L"labelProduct3";
			this->labelProduct3->Size = System::Drawing::Size(247, 24);
			this->labelProduct3->TabIndex = 19;
			this->labelProduct3->Text = ElectroluxWM.getName();
			this->labelProduct3->Click += gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			//
			// labelPrice3
			//
			this->labelPrice3->AutoSize = true;
			this->labelPrice3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice3->Location = System::Drawing::Point(217, 95);
			this->labelPrice3->Name = L"labelPrice3";
			this->labelPrice3->Size = System::Drawing::Size(107, 24);
			this->labelPrice3->TabIndex = 21;
			this->labelPrice3->Text = ElectroluxWM.getPrice().ToString() + " uah";
			this->labelPrice3->Click += gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			//
			// labelLeft3
			//
			this->labelLeft3->AutoSize = true;
			this->labelLeft3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft3->Location = System::Drawing::Point(297, 95);
			this->labelLeft3->Name = L"labelLeft3";
			this->labelLeft3->Size = System::Drawing::Size(97, 24);
			this->labelLeft3->Text = ElectroluxWM.getAmount().ToString() + " pieces";
			this->labelLeft3->Click += gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			//
			// labelCountry3
			//
			this->labelCountry3->AutoSize = true;
			this->labelCountry3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry3->Location = System::Drawing::Point(370, 95);
			this->labelCountry3->Name = L"labelCountry3";
			this->labelCountry3->Size = System::Drawing::Size(87, 24);
			this->labelCountry3->Text = ElectroluxWM.getMadeIn();
			this->labelCountry3->Click += gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
			//
			// labelID4
			//
			this->labelID4->AutoSize = true;
			this->labelID4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID4->Location = System::Drawing::Point(7, 115);
			this->labelID4->Name = L"labelID4";
			this->labelID4->Size = System::Drawing::Size(40, 24);
			this->labelID4->TabIndex = 28;
			this->labelID4->Text = SamsungWM.getId().ToString();
			this->labelID4->Click += gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			//
			// labelProduct4
			//
			this->labelProduct4->AutoSize = true;
			this->labelProduct4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct4->Location = System::Drawing::Point(42, 115);
			this->labelProduct4->Name = L"labelProduct4";
			this->labelProduct4->Size = System::Drawing::Size(247, 24);
			this->labelProduct4->TabIndex = 24;
			this->labelProduct4->Text = SamsungWM.getName();
			this->labelProduct4->Click += gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			//
			// labelPrice4
			//
			this->labelPrice4->AutoSize = true;
			this->labelPrice4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice4->Location = System::Drawing::Point(217, 115);
			this->labelPrice4->Name = L"labelPrice4";
			this->labelPrice4->Size = System::Drawing::Size(107, 24);
			this->labelPrice4->TabIndex = 26;
			this->labelPrice4->Text = SamsungWM.getPrice().ToString() + " uah";
			this->labelPrice4->Click += gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			//
			// labelLeft4
			//
			this->labelLeft4->AutoSize = true;
			this->labelLeft4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft4->Location = System::Drawing::Point(297, 115);
			this->labelLeft4->Name = L"labelLeft4";
			this->labelLeft4->Size = System::Drawing::Size(97, 24);
			this->labelLeft4->Text = SamsungWM.getAmount().ToString() + " pieces";
			this->labelLeft4->Click += gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
			//
			// labelCountry4
			//
			this->labelCountry4->AutoSize = true;
			this->labelCountry4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry4->Location = System::Drawing::Point(370, 115);
			this->labelCountry4->Name = L"labelCountry4";
			this->labelCountry4->Size = System::Drawing::Size(87, 24);
			this->labelCountry4->Text = SamsungWM.getMadeIn();
			this->labelCountry4->Click += gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		}
		else if (boxHA->Text == "Blenders") {
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelID1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelProduct1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelPrice1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelLeft1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1GC_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1HP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1KB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1LT_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1PCM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Proc_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1RAM_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1Refr_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1SP_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1TB_Click);
		this->labelCountry1->Click -= gcnew System::EventHandler(this, &FormWelcome::label1WM_Click);

		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelID2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelProduct2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelPrice2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelLeft2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2GC_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2HP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2KB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2LT_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2PCM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Proc_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2RAM_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2Refr_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2SP_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2TB_Click);
		this->labelCountry2->Click -= gcnew System::EventHandler(this, &FormWelcome::label2WM_Click);

		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelID3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelProduct3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelPrice3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelLeft3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3GC_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3HP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3KB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3LT_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3PCM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Proc_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3RAM_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3Refr_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3SP_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3TB_Click);
		this->labelCountry3->Click -= gcnew System::EventHandler(this, &FormWelcome::label3WM_Click);

		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelID4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelProduct4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelPrice4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelLeft4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4GC_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4HP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4KB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4LT_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4PCM_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Proc_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4Refr_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4SP_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4TB_Click);
		this->labelCountry4->Click -= gcnew System::EventHandler(this, &FormWelcome::label4WM_Click);

		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelID5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelProduct5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelPrice5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelLeft5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5GC_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5HP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5KB_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5LT_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5PCM_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5Proc_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5SP_Click);
		this->labelCountry5->Click -= gcnew System::EventHandler(this, &FormWelcome::label5TB_Click);

		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelID6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelProduct6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelPrice6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelLeft6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6HP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6KB_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6LT_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6PCM_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6SP_Click);
		this->labelCountry6->Click -= gcnew System::EventHandler(this, &FormWelcome::label6TB_Click);

		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelID7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelProduct7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelPrice7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelLeft7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7HP_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7LT_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7PCM_Click);
		this->labelCountry7->Click -= gcnew System::EventHandler(this, &FormWelcome::label7SP_Click);

		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelID8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelProduct8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelPrice8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelLeft8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8HP_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8LT_Click);
		this->labelCountry8->Click -= gcnew System::EventHandler(this, &FormWelcome::label8PCM_Click);

		this->labelID9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelProduct9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelPrice9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelLeft9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
		this->labelCountry9->Click -= gcnew System::EventHandler(this, &FormWelcome::label9HP_Click);
			this->Controls->Remove(this->labelProduct5);
			this->Controls->Remove(this->labelCountry5);
			this->Controls->Remove(this->labelPrice5);
			this->Controls->Remove(this->labelLeft5);
			this->Controls->Remove(this->labelID5);
			this->Controls->Remove(this->labelProduct6);
			this->Controls->Remove(this->labelCountry6);
			this->Controls->Remove(this->labelPrice6);
			this->Controls->Remove(this->labelLeft6);
			this->Controls->Remove(this->labelID6);
			this->Controls->Remove(this->labelProduct7);
			this->Controls->Remove(this->labelCountry7);
			this->Controls->Remove(this->labelPrice7);
			this->Controls->Remove(this->labelLeft7);
			this->Controls->Remove(this->labelID7);
			this->Controls->Remove(this->labelProduct8);
			this->Controls->Remove(this->labelCountry8);
			this->Controls->Remove(this->labelPrice8);
			this->Controls->Remove(this->labelLeft8);
			this->Controls->Remove(this->labelID8);
			this->Controls->Remove(this->labelProduct9);
			this->Controls->Remove(this->labelCountry9);
			this->Controls->Remove(this->labelPrice9);
			this->Controls->Remove(this->labelLeft9);
			this->Controls->Remove(this->labelID9);

			this->Controls->Add(this->labelProduct1);
			this->Controls->Add(this->labelCountry1);
			this->Controls->Add(this->labelPrice1);
			this->Controls->Add(this->labelLeft1);
			this->Controls->Add(this->labelID1);
			this->Controls->Add(this->labelProduct2);
			this->Controls->Add(this->labelCountry2);
			this->Controls->Add(this->labelPrice2);
			this->Controls->Add(this->labelLeft2);
			this->Controls->Add(this->labelID2);
			this->Controls->Add(this->labelProduct3);
			this->Controls->Add(this->labelCountry3);
			this->Controls->Add(this->labelPrice3);
			this->Controls->Add(this->labelLeft3);
			this->Controls->Add(this->labelID3);
			this->Controls->Add(this->labelProduct4);
			this->Controls->Add(this->labelCountry4);
			this->Controls->Add(this->labelPrice4);
			this->Controls->Add(this->labelLeft4);
			this->Controls->Add(this->labelID4);

			//
			// labelID1
			//
			this->labelID1->AutoSize = true;
			this->labelID1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID1->Location = System::Drawing::Point(7, 55);
			this->labelID1->Name = L"labelID1";
			this->labelID1->Size = System::Drawing::Size(40, 24);
			this->labelID1->TabIndex = 13;
			this->labelID1->Text = TefalBl.getId().ToString();
			this->labelID1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			//
			// labelProduct1
			//
			this->labelProduct1->AutoSize = true;
			this->labelProduct1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct1->Location = System::Drawing::Point(42, 55);
			this->labelProduct1->Name = L"labelProduct1";
			this->labelProduct1->Size = System::Drawing::Size(247, 24);
			this->labelProduct1->TabIndex = 11;
			this->labelProduct1->Text = TefalBl.getName();
			this->labelProduct1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice1->Location = System::Drawing::Point(217, 55);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Size = System::Drawing::Size(107, 24);
			this->labelPrice1->TabIndex = 12;
			this->labelPrice1->Text = TefalBl.getPrice().ToString() + " uah";
			this->labelPrice1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			//
			// labelLeft1
			//
			this->labelLeft1->AutoSize = true;
			this->labelLeft1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft1->Location = System::Drawing::Point(297, 55);
			this->labelLeft1->Name = L"labelLeft1";
			this->labelLeft1->Size = System::Drawing::Size(97, 24);
			this->labelLeft1->Text = TefalBl.getAmount().ToString() + " pieces";
			this->labelLeft1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			//
			// labelCountry1
			//
			this->labelCountry1->AutoSize = true;
			this->labelCountry1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry1->Location = System::Drawing::Point(370, 55);
			this->labelCountry1->Name = L"labelCountry1";
			this->labelCountry1->Size = System::Drawing::Size(87, 24);
			this->labelCountry1->Text = TefalBl.getMadeIn();
			this->labelCountry1->Click += gcnew System::EventHandler(this, &FormWelcome::label1Blend_Click);
			//
			// labelID2
			//
			this->labelID2->AutoSize = true;
			this->labelID2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID2->Location = System::Drawing::Point(7, 75);
			this->labelID2->Name = L"labelID2";
			this->labelID2->Size = System::Drawing::Size(40, 24);
			this->labelID2->TabIndex = 18;
			this->labelID2->Text = BoschBl.getId().ToString();
			this->labelID2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			//
			// labelProduct2
			//
			this->labelProduct2->AutoSize = true;
			this->labelProduct2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct2->Location = System::Drawing::Point(42, 75);
			this->labelProduct2->Name = L"labelProduct2";
			this->labelProduct2->Size = System::Drawing::Size(247, 24);
			this->labelProduct2->TabIndex = 14;
			this->labelProduct2->Text = BoschBl.getName();
			this->labelProduct2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice2->Location = System::Drawing::Point(217, 75);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Size = System::Drawing::Size(107, 24);
			this->labelPrice2->TabIndex = 16;
			this->labelPrice2->Text = BoschBl.getPrice().ToString() + " uah";
			this->labelPrice2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			//
			// labelLeft2
			//
			this->labelLeft2->AutoSize = true;
			this->labelLeft2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft2->Location = System::Drawing::Point(297, 75);
			this->labelLeft2->Name = L"labelLeft2";
			this->labelLeft2->Size = System::Drawing::Size(97, 24);
			this->labelLeft2->Text = BoschBl.getAmount().ToString() + " pieces";
			this->labelLeft2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			//
			// labelCountry2
			//
			this->labelCountry2->AutoSize = true;
			this->labelCountry2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry2->Location = System::Drawing::Point(370, 75);
			this->labelCountry2->Name = L"labelCountry2";
			this->labelCountry2->Size = System::Drawing::Size(87, 24);
			this->labelCountry2->Text = BoschBl.getMadeIn();
			this->labelCountry2->Click += gcnew System::EventHandler(this, &FormWelcome::label2Blend_Click);
			//
			// labelID3
			//
			this->labelID3->AutoSize = true;
			this->labelID3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID3->Location = System::Drawing::Point(7, 95);
			this->labelID3->Name = L"labelID3";
			this->labelID3->Size = System::Drawing::Size(40, 24);
			this->labelID3->TabIndex = 23;
			this->labelID3->Text = BraunBl.getId().ToString();
			this->labelID3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			//
			// labelProduct3
			//
			this->labelProduct3->AutoSize = true;
			this->labelProduct3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct3->Location = System::Drawing::Point(42, 95);
			this->labelProduct3->Name = L"labelProduct3";
			this->labelProduct3->Size = System::Drawing::Size(247, 24);
			this->labelProduct3->TabIndex = 19;
			this->labelProduct3->Text = BraunBl.getName();
			this->labelProduct3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			//
			// labelPrice3
			//
			this->labelPrice3->AutoSize = true;
			this->labelPrice3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice3->Location = System::Drawing::Point(217, 95);
			this->labelPrice3->Name = L"labelPrice3";
			this->labelPrice3->Size = System::Drawing::Size(107, 24);
			this->labelPrice3->TabIndex = 21;
			this->labelPrice3->Text = BraunBl.getPrice().ToString() + " uah";
			this->labelPrice3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			//
			// labelLeft3
			//
			this->labelLeft3->AutoSize = true;
			this->labelLeft3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft3->Location = System::Drawing::Point(297, 95);
			this->labelLeft3->Name = L"labelLeft3";
			this->labelLeft3->Size = System::Drawing::Size(97, 24);
			this->labelLeft3->Text = BraunBl.getAmount().ToString() + " pieces";
			this->labelLeft3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			//
			// labelCountry3
			//
			this->labelCountry3->AutoSize = true;
			this->labelCountry3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry3->Location = System::Drawing::Point(370, 95);
			this->labelCountry3->Name = L"labelCountry3";
			this->labelCountry3->Size = System::Drawing::Size(87, 24);
			this->labelCountry3->Text = BraunBl.getMadeIn();
			this->labelCountry3->Click += gcnew System::EventHandler(this, &FormWelcome::label3Blend_Click);
			//
			// labelID4
			//
			this->labelID4->AutoSize = true;
			this->labelID4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelID4->Location = System::Drawing::Point(7, 115);
			this->labelID4->Name = L"labelID4";
			this->labelID4->Size = System::Drawing::Size(40, 24);
			this->labelID4->TabIndex = 28;
			this->labelID4->Text = PhilipsBl.getId().ToString();
			this->labelID4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			//
			// labelProduct4
			//
			this->labelProduct4->AutoSize = true;
			this->labelProduct4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProduct4->Location = System::Drawing::Point(42, 115);
			this->labelProduct4->Name = L"labelProduct4";
			this->labelProduct4->Size = System::Drawing::Size(247, 24);
			this->labelProduct4->TabIndex = 24;
			this->labelProduct4->Text = PhilipsBl.getName();
			this->labelProduct4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			//
			// labelPrice4
			//
			this->labelPrice4->AutoSize = true;
			this->labelPrice4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice4->Location = System::Drawing::Point(217, 115);
			this->labelPrice4->Name = L"labelPrice4";
			this->labelPrice4->Size = System::Drawing::Size(107, 24);
			this->labelPrice4->TabIndex = 26;
			this->labelPrice4->Text = PhilipsBl.getPrice().ToString() + " uah";
			this->labelPrice4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			//
			// labelLeft4
			//
			this->labelLeft4->AutoSize = true;
			this->labelLeft4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLeft4->Location = System::Drawing::Point(297, 115);
			this->labelLeft4->Name = L"labelLeft4";
			this->labelLeft4->Size = System::Drawing::Size(97, 24);
			this->labelLeft4->Text = PhilipsBl.getAmount().ToString() + " pieces";
			this->labelLeft4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
			//
			// labelCountry4
			//
			this->labelCountry4->AutoSize = true;
			this->labelCountry4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountry4->Location = System::Drawing::Point(370, 115);
			this->labelCountry4->Name = L"labelCountry4";
			this->labelCountry4->Size = System::Drawing::Size(87, 24);
			this->labelCountry4->Text = PhilipsBl.getMadeIn();
			this->labelCountry4->Click += gcnew System::EventHandler(this, &FormWelcome::label4Blend_Click);
		}
	}

	private: System::Void label1Refr_Click(System::Object^ sender, System::EventArgs^ e) {
		Refrigerators SamsungRefr;
		SamsungRefr.setName("Samsung Refrigerator");
		SamsungRefr.setMadeIn("China");
		SamsungRefr.setAmount(rand() % 50);
		SamsungRefr.setId(401);
		SamsungRefr.setPrice(46199);
		CPrice = SamsungRefr.getPrice();
		CAmount = SamsungRefr.getAmount();
		CName = SamsungRefr.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			SamsungRefr.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label2Refr_Click(System::Object^ sender, System::EventArgs^ e) {
		Refrigerators WhirlpoolRefr;
		WhirlpoolRefr.setName("Whirlpool ART");
		WhirlpoolRefr.setMadeIn("China");
		WhirlpoolRefr.setAmount(0);
		WhirlpoolRefr.setId(402);
		WhirlpoolRefr.setPrice(18799);
		CPrice = WhirlpoolRefr.getPrice();
		CAmount = WhirlpoolRefr.getAmount();
		CName = WhirlpoolRefr.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			WhirlpoolRefr.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label3Refr_Click(System::Object^ sender, System::EventArgs^ e) {
		Refrigerators BekoRefr;
		BekoRefr.setName("Beko RSNE");
		BekoRefr.setMadeIn("China");
		BekoRefr.setAmount(rand() % 50);
		BekoRefr.setId(403);
		BekoRefr.setPrice(17699);
		CPrice = BekoRefr.getPrice();
		CAmount = BekoRefr.getAmount();
		CName = BekoRefr.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			BekoRefr.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label4Refr_Click(System::Object^ sender, System::EventArgs^ e) {
		Refrigerators IndesitRefr;
		IndesitRefr.setName("Indesit INC18");
		IndesitRefr.setMadeIn("China");
		IndesitRefr.setAmount(rand() % 50);
		IndesitRefr.setId(404);
		IndesitRefr.setPrice(26872);
		CPrice = IndesitRefr.getPrice();
		CAmount = IndesitRefr.getAmount();
		CName = IndesitRefr.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			IndesitRefr.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}

	private: System::Void label1WM_Click(System::Object^ sender, System::EventArgs^ e) {
		Washing_machines BekoWM;
		BekoWM.setName("Beko WUE");
		BekoWM.setMadeIn("China");
		BekoWM.setAmount(rand() % 50);
		BekoWM.setId(411);
		BekoWM.setPrice(6500);
		CPrice = BekoWM.getPrice();
		CAmount = BekoWM.getAmount();
		CName = BekoWM.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			BekoWM.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label2WM_Click(System::Object^ sender, System::EventArgs^ e) {
		Washing_machines IndesitWM;
		IndesitWM.setName("Indesit OMTWSA");
		IndesitWM.setMadeIn("China");
		IndesitWM.setAmount(0);
		IndesitWM.setId(412);
		IndesitWM.setPrice(8300);
		CPrice = IndesitWM.getPrice();
		CAmount = IndesitWM.getAmount();
		CName = IndesitWM.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			IndesitWM.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label3WM_Click(System::Object^ sender, System::EventArgs^ e) {
		Washing_machines ElectroluxWM;
		ElectroluxWM.setName("Electrolux EW6S");
		ElectroluxWM.setMadeIn("China");
		ElectroluxWM.setAmount(rand() % 50);
		ElectroluxWM.setId(413);
		ElectroluxWM.setPrice(8499);
		CPrice = ElectroluxWM.getPrice();
		CAmount = ElectroluxWM.getAmount();
		CName = ElectroluxWM.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			ElectroluxWM.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label4WM_Click(System::Object^ sender, System::EventArgs^ e) {
		Washing_machines SamsungWM;
		SamsungWM.setName("Samsung WW70T");
		SamsungWM.setMadeIn("China");
		SamsungWM.setAmount(rand() % 50);
		SamsungWM.setId(414);
		SamsungWM.setPrice(12800);
		CPrice = SamsungWM.getPrice();
		CAmount = SamsungWM.getAmount();
		CName = SamsungWM.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			SamsungWM.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}

	private: System::Void label1Blend_Click(System::Object^ sender, System::EventArgs^ e) {
		Blenders TefalBl;
		TefalBl.setName("Tefal HB");
		TefalBl.setMadeIn("China");
		TefalBl.setAmount(rand() % 50);
		TefalBl.setId(421);
		TefalBl.setPrice(2300);
		CPrice = TefalBl.getPrice();
		CAmount = TefalBl.getAmount();
		CName = TefalBl.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			TefalBl.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label2Blend_Click(System::Object^ sender, System::EventArgs^ e) {
		Blenders BoschBl;
		BoschBl.setName("Bosch MSM");
		BoschBl.setMadeIn("China");
		BoschBl.setAmount(rand() % 50);
		BoschBl.setId(422);
		BoschBl.setPrice(1700);
		CPrice = BoschBl.getPrice();
		CAmount = BoschBl.getAmount();
		CName = BoschBl.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			BoschBl.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label3Blend_Click(System::Object^ sender, System::EventArgs^ e) {
		Blenders BraunBl;
		BraunBl.setName("Braun MQ");
		BraunBl.setMadeIn("China");
		BraunBl.setAmount(rand() % 50);
		BraunBl.setId(423);
		BraunBl.setPrice(2200);
		CPrice = BraunBl.getPrice();
		CAmount = BraunBl.getAmount();
		CName = BraunBl.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			BraunBl.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}
	private: System::Void label4Blend_Click(System::Object^ sender, System::EventArgs^ e) {
		Blenders PhilipsBl;
		PhilipsBl.setName("Philips HR2537");
		PhilipsBl.setMadeIn("China");
		PhilipsBl.setAmount(0);
		PhilipsBl.setId(424);
		PhilipsBl.setPrice(2600);
		CPrice = PhilipsBl.getPrice();
		CAmount = PhilipsBl.getAmount();
		CName = PhilipsBl.getName();
		if (budget >= CPrice && CAmount != 0) {
			budget -= CPrice;
			PhilipsBl.setAmount(CAmount--);
			CCart = CCart->Insert(0, CName + "\n");
			MessageBox::Show("You have bought " + CName + "!");
			this->labelBudget->Text = budget.ToString() + " uah";
		}
		else if (CAmount == 0)
			MessageBox::Show("Sorry, there is no " + CName + " left. It will be available in a week time.");
		else if (budget < CPrice)
			MessageBox::Show("You don`t have enough money to buy " + CName + ".");
	}

	private: System::Void buttonToEmployees_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(435, 250);
		this->Controls->Remove(this->tableLayoutPanelMenu);
		this->Controls->Add(this->tableLayoutPanelEmployees);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(403, 44);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Hypermarket - Employees";
		//
		// tableLayoutPanelMenu
		//
		this->tableLayoutPanelEmployees->ColumnCount = 1;
		this->tableLayoutPanelEmployees->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelEmployees->Controls->Add(this->buttonToLeaveEmployees, 0, 2);
		this->tableLayoutPanelEmployees->Controls->Add(this->buttonToOP, 0, 1);
		this->tableLayoutPanelEmployees->Controls->Add(this->buttonToMP, 0, 0);
		this->tableLayoutPanelEmployees->Location = System::Drawing::Point(20, 56);
		this->tableLayoutPanelEmployees->Name = L"tableLayoutPanelMenu";
		this->tableLayoutPanelEmployees->RowCount = 3;
		this->tableLayoutPanelEmployees->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanelEmployees->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanelEmployees->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanelEmployees->Size = System::Drawing::Size(395, 172);
		this->tableLayoutPanelEmployees->TabIndex = 2;
		//
		// buttonToMP
		//
		this->buttonToMP->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToMP->Font = (gcnew System::Drawing::Font(L"Calibri", 16));
		this->buttonToMP->Location = System::Drawing::Point(3, 3);
		this->buttonToMP->Name = L"buttonToMP";
		this->buttonToMP->Size = System::Drawing::Size(389, 51);
		this->buttonToMP->TabIndex = 0;
		this->buttonToMP->Text = L"Managering positions";
		this->buttonToMP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToMP->UseVisualStyleBackColor = false;
		this->buttonToMP->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToMP_Click);
		//
		// buttonToOP
		//
		this->buttonToOP->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToOP->Font = (gcnew System::Drawing::Font(L"Calibri", 16));
		this->buttonToOP->Location = System::Drawing::Point(3, 60);
		this->buttonToOP->Name = L"buttonToOP";
		this->buttonToOP->Size = System::Drawing::Size(389, 51);
		this->buttonToOP->TabIndex = 1;
		this->buttonToOP->Text = L"Other positions";
		this->buttonToOP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToOP->UseVisualStyleBackColor = false;
		this->buttonToOP->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToOP_Click);
		//
		// buttonToLeaveEmployees
		//
		this->buttonToLeaveEmployees->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeaveEmployees->Font = (gcnew System::Drawing::Font(L"Calibri", 16));
		this->buttonToLeaveEmployees->Location = System::Drawing::Point(3, 117);
		this->buttonToLeaveEmployees->Name = L"buttonToLeaveEmployees";
		this->buttonToLeaveEmployees->Size = System::Drawing::Size(389, 52);
		this->buttonToLeaveEmployees->TabIndex = 2;
		this->buttonToLeaveEmployees->Text = L"Leave the Employees page";
		this->buttonToLeaveEmployees->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeaveEmployees->UseVisualStyleBackColor = false;
		this->buttonToLeaveEmployees->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeaveEmployees_Click);
	}

	private: System::Void buttonToMP_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(435, 250);
		this->Controls->Remove(this->buttonToMenu);
		this->Controls->Remove(this->tableLayoutPanelEmployees);
		this->Controls->Add(this->boxProffesionsMP);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(102, 24);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Profession:";
		//
		// boxProffesionsMP
		//
		this->boxProffesionsMP->BackColor = System::Drawing::Color::Silver;
		this->boxProffesionsMP->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->boxProffesionsMP->FormattingEnabled = true;
		this->boxProffesionsMP->Items->Clear();
		this->boxProffesionsMP->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"CEOs", L"Directors", L"Deputies" });
		this->boxProffesionsMP->Location = System::Drawing::Point(100, 6);
		this->boxProffesionsMP->Name = L"boxProffesionsMP";
		this->boxProffesionsMP->Size = System::Drawing::Size(100, 32);
		this->boxProffesionsMP->TabIndex = 4;
		this->boxProffesionsMP->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxProffesionsMP_SelectedIndexChanged);
		//
		// buttonToLeaveMP
		//
		this->Controls->Add(this->buttonToLeaveMP);
		this->buttonToLeaveMP->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeaveMP->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
		this->buttonToLeaveMP->Location = System::Drawing::Point(285, 210);
		this->buttonToLeaveMP->Name = L"buttonToLeaveMP";
		this->buttonToLeaveMP->Size = System::Drawing::Size(140, 30);
		this->buttonToLeaveMP->TabIndex = 2;
		this->buttonToLeaveMP->Text = L"Back to Employees";
		this->buttonToLeaveMP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeaveMP->UseVisualStyleBackColor = false;
		this->buttonToLeaveMP->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeaveMP_Click);
	}

	private: System::Void buttonToLeaveMP_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(435, 250);
		this->Controls->Remove(this->buttonToLeaveMP);
		this->Controls->Remove(this->boxProffesionsMP);
		this->Controls->Remove(this->labelName1);
		this->Controls->Remove(this->labelName2);
		this->Controls->Remove(this->labelName3);
		this->Controls->Remove(this->labelName4);
		this->Controls->Remove(this->labelName5);
		this->Controls->Remove(this->labelName6);
		this->Controls->Remove(this->labelName7);
		this->Controls->Remove(this->labelContact1);
		this->Controls->Remove(this->labelContact2);
		this->Controls->Remove(this->labelContact3);
		this->Controls->Remove(this->labelContact4);
		this->Controls->Remove(this->labelContact5);
		this->Controls->Remove(this->labelContact6);
		this->Controls->Remove(this->labelContact7);
		this->Controls->Add(this->tableLayoutPanelEmployees);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(370, 44);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Hypermarket - Employees";
		this->tableLayoutPanelEmployees->Size = System::Drawing::Size(395, 172);
	}

	private: System::Void boxProffesionsMP_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Remove(this->labelName1);
		this->Controls->Remove(this->labelName2);
		this->Controls->Remove(this->labelName3);
		this->Controls->Remove(this->labelName4);
		this->Controls->Remove(this->labelName5);
		this->Controls->Remove(this->labelName6);
		this->Controls->Remove(this->labelName7);
		this->Controls->Remove(this->labelContact1);
		this->Controls->Remove(this->labelContact2);
		this->Controls->Remove(this->labelContact3);
		this->Controls->Remove(this->labelContact4);
		this->Controls->Remove(this->labelContact5);
		this->Controls->Remove(this->labelContact6);
		this->Controls->Remove(this->labelContact7);

		this->Controls->Add(this->labelName1);
		this->Controls->Add(this->labelName2);
		this->Controls->Add(this->labelName3);
		this->Controls->Add(this->labelName4);
		this->Controls->Add(this->labelName5);
		this->Controls->Add(this->labelName6);
		this->Controls->Add(this->labelName7);
		this->Controls->Add(this->labelContact1);
		this->Controls->Add(this->labelContact2);
		this->Controls->Add(this->labelContact3);
		this->Controls->Add(this->labelContact4);
		this->Controls->Add(this->labelContact5);
		this->Controls->Add(this->labelContact6);
		this->Controls->Add(this->labelContact7);

		///////////////////////////////////////////////////////////////////////////
		///Керівничі посади
		//CEO
		CEOs Alex;
		Alex.setNameEmpl("Alex Town");
		Alex.setContactEmpl("alex.town.2007forewer@gmail.com");

		CEOs Dmitrii;
		Dmitrii.setNameEmpl("Dmitrii Pogorivsh");
		Dmitrii.setContactEmpl("dmitrii.pogorivsh.swag@gmail.com");

		//Directors
		Directors Olga;
		Olga.setNameEmpl("Olga Gave");
		Olga.setContactEmpl("olga.gave.bruh@gmail.com");

		Directors Oleg;
		Oleg.setNameEmpl("Oleg Yackiv");
		Oleg.setContactEmpl("oleg.yackiv.macro@gmail.com");

		Directors Tom;
		Tom.setNameEmpl("Tom Riddle");
		Tom.setContactEmpl("potter.you.wont.live@yahoo.com");

		Directors Andrii;
		Andrii.setNameEmpl("Andrii Zhdan");
		Andrii.setContactEmpl("andrii.zhdan@gmail.com");

		Directors Artur;
		Artur.setNameEmpl("Artur Maloy");
		Artur.setContactEmpl("artur.maloy.rly@gmail.com");

		Directors Ivan;
		Ivan.setNameEmpl("Ivan Kachmar");
		Ivan.setContactEmpl("ivanko.kachmar@gmail.com");

		Directors Orest;
		Orest.setNameEmpl("Orest Chack");
		Orest.setContactEmpl("orest.chack007@gmail.com");

		//Заступники
		Deputies Igor;
		Igor.setNameEmpl("Igor Emal");
		Igor.setContactEmpl("igor.emalio@gmail.com");

		Deputies Rostyk;
		Rostyk.setNameEmpl("Rostyk Zhyk");
		Rostyk.setContactEmpl("rostyk.zhyk.ki@gmail.com");
		///////////////////////////////////////////////////////////////////////////

		if (boxProffesionsMP->Text == "CEOs") {
			this->Controls->Remove(this->labelName1);
			this->Controls->Remove(this->labelName2);
			this->Controls->Remove(this->labelName3);
			this->Controls->Remove(this->labelName4);
			this->Controls->Remove(this->labelName5);
			this->Controls->Remove(this->labelName6);
			this->Controls->Remove(this->labelName7);
			this->Controls->Remove(this->labelContact1);
			this->Controls->Remove(this->labelContact2);
			this->Controls->Remove(this->labelContact3);
			this->Controls->Remove(this->labelContact4);
			this->Controls->Remove(this->labelContact5);
			this->Controls->Remove(this->labelContact6);
			this->Controls->Remove(this->labelContact7);

			this->Controls->Add(this->labelName1);
			this->Controls->Add(this->labelContact1);
			this->Controls->Add(this->labelName2);
			this->Controls->Add(this->labelContact2);
			//
			// labelName1
			//
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName1->Location = System::Drawing::Point(7, 35);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Text = Alex.getNameEmpl();
			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(120, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = Alex.getContactEmpl();
			//
			// labelName2
			//
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName2->Location = System::Drawing::Point(7, 55);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Text = Dmitrii.getNameEmpl();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(120, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = Dmitrii.getContactEmpl();
		}
		else if (boxProffesionsMP->Text == "Directors") {
			this->Controls->Remove(this->labelName1);
			this->Controls->Remove(this->labelName2);
			this->Controls->Remove(this->labelName3);
			this->Controls->Remove(this->labelName4);
			this->Controls->Remove(this->labelName5);
			this->Controls->Remove(this->labelName6);
			this->Controls->Remove(this->labelName7);
			this->Controls->Remove(this->labelContact1);
			this->Controls->Remove(this->labelContact2);
			this->Controls->Remove(this->labelContact3);
			this->Controls->Remove(this->labelContact4);
			this->Controls->Remove(this->labelContact5);
			this->Controls->Remove(this->labelContact6);
			this->Controls->Remove(this->labelContact7);

			this->Controls->Add(this->labelName1);
			this->Controls->Add(this->labelContact1);
			this->Controls->Add(this->labelName2);
			this->Controls->Add(this->labelContact2);
			this->Controls->Add(this->labelName3);
			this->Controls->Add(this->labelContact3);
			this->Controls->Add(this->labelName4);
			this->Controls->Add(this->labelContact4);
			this->Controls->Add(this->labelName5);
			this->Controls->Add(this->labelContact5);
			this->Controls->Add(this->labelName6);
			this->Controls->Add(this->labelContact6);
			this->Controls->Add(this->labelName7);
			this->Controls->Add(this->labelContact7);

			//
			// labelName1
			//
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName1->Location = System::Drawing::Point(7, 35);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Text = Olga.getNameEmpl();
			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(120, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = Olga.getContactEmpl();
			//
			// labelName2
			//
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName2->Location = System::Drawing::Point(7, 55);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Text = Oleg.getNameEmpl();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(120, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = Oleg.getContactEmpl();
			//
			// labelName3
			//
			this->labelName3->AutoSize = true;
			this->labelName3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName3->Location = System::Drawing::Point(7, 75);
			this->labelName3->Name = L"labelName3";
			this->labelName3->Text = Tom.getNameEmpl();
			//
			// labelContact3
			//
			this->labelContact3->AutoSize = true;
			this->labelContact3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact3->Location = System::Drawing::Point(120, 75);
			this->labelContact3->Name = L"labelContact3";
			this->labelContact3->Text = Tom.getContactEmpl();
			//
			// labelName4
			//
			this->labelName4->AutoSize = true;
			this->labelName4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName4->Location = System::Drawing::Point(7, 95);
			this->labelName4->Name = L"labelName4";
			this->labelName4->Text = Andrii.getNameEmpl();
			//
			// labelContact4
			//
			this->labelContact4->AutoSize = true;
			this->labelContact4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact4->Location = System::Drawing::Point(120, 95);
			this->labelContact4->Name = L"labelContact4";
			this->labelContact4->Text = Andrii.getContactEmpl();
			//
			// labelName5
			//
			this->labelName5->AutoSize = true;
			this->labelName5->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName5->Location = System::Drawing::Point(7, 115);
			this->labelName5->Name = L"labelName5";
			this->labelName5->Text = Artur.getNameEmpl();
			//
			// labelContact5
			//
			this->labelContact5->AutoSize = true;
			this->labelContact5->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact5->Location = System::Drawing::Point(120, 115);
			this->labelContact5->Name = L"labelContact5";
			this->labelContact5->Text = Artur.getContactEmpl();
			//
			// labelName6
			//
			this->labelName6->AutoSize = true;
			this->labelName6->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName6->Location = System::Drawing::Point(7, 135);
			this->labelName6->Name = L"labelName6";
			this->labelName6->Text = Ivan.getNameEmpl();
			//
			// labelContact6
			//
			this->labelContact6->AutoSize = true;
			this->labelContact6->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact6->Location = System::Drawing::Point(120, 135);
			this->labelContact6->Name = L"labelContact6";
			this->labelContact6->Text = Ivan.getContactEmpl();
			//
			// labelName7
			//
			this->labelName7->AutoSize = true;
			this->labelName7->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName7->Location = System::Drawing::Point(7, 155);
			this->labelName7->Name = L"labelName7";
			this->labelName7->Text = Orest.getNameEmpl();
			//
			// labelContact7
			//
			this->labelContact7->AutoSize = true;
			this->labelContact7->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact7->Location = System::Drawing::Point(120, 155);
			this->labelContact7->Name = L"labelContact7";
			this->labelContact7->Text = Orest.getContactEmpl();
		}
		else if (boxProffesionsMP->Text == "Deputies") {
			this->Controls->Remove(this->labelName1);
			this->Controls->Remove(this->labelName2);
			this->Controls->Remove(this->labelName3);
			this->Controls->Remove(this->labelName4);
			this->Controls->Remove(this->labelName5);
			this->Controls->Remove(this->labelName6);
			this->Controls->Remove(this->labelName7);
			this->Controls->Remove(this->labelContact1);
			this->Controls->Remove(this->labelContact2);
			this->Controls->Remove(this->labelContact3);
			this->Controls->Remove(this->labelContact4);
			this->Controls->Remove(this->labelContact5);
			this->Controls->Remove(this->labelContact6);
			this->Controls->Remove(this->labelContact7);

			this->Controls->Add(this->labelName1);
			this->Controls->Add(this->labelContact1);
			this->Controls->Add(this->labelName2);
			this->Controls->Add(this->labelContact2);
			//
			// labelName1
			//
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName1->Location = System::Drawing::Point(7, 35);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Text = Igor.getNameEmpl();
			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(120, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = Igor.getContactEmpl();
			//
			// labelName2
			//
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName2->Location = System::Drawing::Point(7, 55);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Text = Rostyk.getNameEmpl();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(120, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = Rostyk.getContactEmpl();
		}
	}

	private: System::Void buttonToOP_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(435, 250);
		this->Controls->Remove(this->buttonToMenu);
		this->Controls->Remove(this->tableLayoutPanelEmployees);
		this->Controls->Add(this->boxProffesionsOP);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(102, 24);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Profession:";
		//
		// boxProffesionsOP
		//
		this->boxProffesionsOP->BackColor = System::Drawing::Color::Silver;
		this->boxProffesionsOP->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->boxProffesionsOP->FormattingEnabled = true;
		this->boxProffesionsOP->Items->Clear();
		this->boxProffesionsOP->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Accountants", L"Marketers", L"Managers" });
		this->boxProffesionsOP->Location = System::Drawing::Point(100, 6);
		this->boxProffesionsOP->Name = L"boxProffesionsOP";
		this->boxProffesionsOP->Size = System::Drawing::Size(120, 32);
		this->boxProffesionsOP->TabIndex = 4;
		this->boxProffesionsOP->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxProffesionsOP_SelectedIndexChanged);
		//
		// buttonToLeaveOP
		//
		this->Controls->Add(this->buttonToLeaveOP);
		this->buttonToLeaveOP->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeaveOP->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
		this->buttonToLeaveOP->Location = System::Drawing::Point(285, 210);
		this->buttonToLeaveOP->Name = L"buttonToLeaveOP";
		this->buttonToLeaveOP->Size = System::Drawing::Size(140, 30);
		this->buttonToLeaveOP->TabIndex = 2;
		this->buttonToLeaveOP->Text = L"Back to Employees";
		this->buttonToLeaveOP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeaveOP->UseVisualStyleBackColor = false;
		this->buttonToLeaveOP->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeaveOP_Click);
	}

	private: System::Void buttonToLeaveOP_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(435, 250);
		this->Controls->Remove(this->buttonToLeaveOP);
		this->Controls->Remove(this->boxProffesionsOP);
		this->Controls->Remove(this->labelName1);
		this->Controls->Remove(this->labelName2);
		this->Controls->Remove(this->labelName3);
		this->Controls->Remove(this->labelContact1);
		this->Controls->Remove(this->labelContact2);
		this->Controls->Remove(this->labelContact3);
		this->Controls->Add(this->tableLayoutPanelEmployees);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(370, 44);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Hypermarket - Employees";
		this->tableLayoutPanelEmployees->Size = System::Drawing::Size(365, 172);
	}

	private: System::Void boxProffesionsOP_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Remove(this->labelName1);
		this->Controls->Remove(this->labelName2);
		this->Controls->Remove(this->labelName3);
		this->Controls->Remove(this->labelContact1);
		this->Controls->Remove(this->labelContact2);
		this->Controls->Remove(this->labelContact3);
		this->Controls->Add(this->labelName1);
		this->Controls->Add(this->labelName2);
		this->Controls->Add(this->labelName3);
		this->Controls->Add(this->labelContact1);
		this->Controls->Add(this->labelContact2);
		this->Controls->Add(this->labelContact3);

		///////////////////////////////////////////////////////////////////////////
		///Інші робітники
		//Бугалтери
		Accountants Kira;
		Kira.setNameEmpl("Kira Hordeeva");
		Kira.setContactEmpl("kira.hordeeva@gmail.com");

		Accountants Masha;
		Masha.setNameEmpl("Masha Polubik");
		Masha.setContactEmpl("masha.polubik@gmail.com");

		//Маркетологи
		Marketers Dina;
		Dina.setNameEmpl("Dina Forest");
		Dina.setContactEmpl("dina.forestry@gmail.com");

		Marketers Jack;
		Jack.setNameEmpl("Jacky Wacky");
		Jack.setContactEmpl("wackyjacky101@gmail.com");

		Marketers Kamil;
		Kamil.setNameEmpl("Kamil Tazhibayev");
		Kamil.setContactEmpl("kamil.tazhibayev@gmail.com");

		//Менеджери
		Managers Arina;
		Arina.setNameEmpl("Arina Pygolovka");
		Arina.setContactEmpl("arina.pygolovka@gmail.com");

		Managers Sofia;
		Sofia.setNameEmpl("Sofia Zhugylov");
		Sofia.setContactEmpl("sofia.zhugylov@gmail.com");

		Managers Maya;
		Maya.setNameEmpl("Maya Ogyr");
		Maya.setContactEmpl("maya.ogyr2015@gmail.com");
		///////////////////////////////////////////////////////////////////////////

		if (boxProffesionsOP->Text == "Accountants") {
			this->Controls->Remove(this->labelName1);
			this->Controls->Remove(this->labelName2);
			this->Controls->Remove(this->labelName3);
			this->Controls->Remove(this->labelContact1);
			this->Controls->Remove(this->labelContact2);
			this->Controls->Remove(this->labelContact3);
			this->Controls->Add(this->labelName1);
			this->Controls->Add(this->labelName2);
			this->Controls->Add(this->labelContact1);
			this->Controls->Add(this->labelContact2);
			//
			// labelName1
			//
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName1->Location = System::Drawing::Point(7, 35);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Text = Kira.getNameEmpl();
			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(120, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = Kira.getContactEmpl();
			//
			// labelName2
			//
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName2->Location = System::Drawing::Point(7, 55);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Text = Masha.getNameEmpl();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(120, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = Masha.getContactEmpl();
		}
		else if (boxProffesionsOP->Text == "Marketers") {
			this->Controls->Remove(this->labelName1);
			this->Controls->Remove(this->labelName2);
			this->Controls->Remove(this->labelName3);
			this->Controls->Remove(this->labelContact1);
			this->Controls->Remove(this->labelContact2);
			this->Controls->Remove(this->labelContact3);
			this->Controls->Add(this->labelName1);
			this->Controls->Add(this->labelName2);
			this->Controls->Add(this->labelName3);
			this->Controls->Add(this->labelContact1);
			this->Controls->Add(this->labelContact2);
			this->Controls->Add(this->labelContact3);
			//
			// labelName1
			//
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName1->Location = System::Drawing::Point(7, 35);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Text = Dina.getNameEmpl();
			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(120, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = Dina.getContactEmpl();
			//
			// labelName2
			//
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName2->Location = System::Drawing::Point(7, 55);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Text = Jack.getNameEmpl();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(120, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = Jack.getContactEmpl();
			//
			// labelName3
			//
			this->labelName3->AutoSize = true;
			this->labelName3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName3->Location = System::Drawing::Point(7, 75);
			this->labelName3->Name = L"labelName3";
			this->labelName3->Text = Kamil.getNameEmpl();
			//
			// labelContact3
			//
			this->labelContact3->AutoSize = true;
			this->labelContact3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact3->Location = System::Drawing::Point(120, 75);
			this->labelContact3->Name = L"labelContact3";
			this->labelContact3->Text = Kamil.getContactEmpl();
		}
		else if (boxProffesionsOP->Text == "Managers") {
			this->Controls->Remove(this->labelName1);
			this->Controls->Remove(this->labelName2);
			this->Controls->Remove(this->labelName3);
			this->Controls->Remove(this->labelContact1);
			this->Controls->Remove(this->labelContact2);
			this->Controls->Remove(this->labelContact3);
			this->Controls->Add(this->labelName1);
			this->Controls->Add(this->labelName2);
			this->Controls->Add(this->labelName3);
			this->Controls->Add(this->labelContact1);
			this->Controls->Add(this->labelContact2);
			this->Controls->Add(this->labelContact3);
			//
			// labelName1
			//
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName1->Location = System::Drawing::Point(7, 35);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Text = Arina.getNameEmpl();
			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(120, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = Arina.getContactEmpl();
			//
			// labelName2
			//
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName2->Location = System::Drawing::Point(7, 55);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Text = Sofia.getNameEmpl();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(120, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = Sofia.getContactEmpl();
			//
			// labelName3
			//
			this->labelName3->AutoSize = true;
			this->labelName3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName3->Location = System::Drawing::Point(7, 75);
			this->labelName3->Name = L"labelName3";
			this->labelName3->Text = Maya.getNameEmpl();
			//
			// labelContact3
			//
			this->labelContact3->AutoSize = true;
			this->labelContact3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact3->Location = System::Drawing::Point(120, 75);
			this->labelContact3->Name = L"labelContact3";
			this->labelContact3->Text = Maya.getContactEmpl();
		}
	}

	private: System::Void buttonToLeaveEmployees_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(625, 315);
		this->Controls->Remove(this->buttonToMenu);
		this->Controls->Remove(this->tableLayoutPanelEmployees);
		this->Controls->Add(this->tableLayoutPanelMenu);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(230, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(288, 59);
		this->labelDefault->TabIndex = 0;
		this->labelDefault->Text = L"Hypermarket";
		//
		// tableLayoutPanelMenu
		//
		this->tableLayoutPanelMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->tableLayoutPanelMenu->ColumnCount = 1;
		this->tableLayoutPanelMenu->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToLeave, 0, 5);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToAdresses, 0, 4);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToDelivery, 0, 3);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToContacts, 0, 2);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToEmployees, 0, 1);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToStore, 0, 0);
		this->tableLayoutPanelMenu->Location = System::Drawing::Point(12, 71);
		this->tableLayoutPanelMenu->Name = L"tableLayoutPanelMenu";
		this->tableLayoutPanelMenu->RowCount = 6;
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->Size = System::Drawing::Size(600, 235);
		this->tableLayoutPanelMenu->TabIndex = 1;
		//
		// buttonToLeave
		//
		this->buttonToLeave->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeave->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToLeave->Location = System::Drawing::Point(3, 333);
		this->buttonToLeave->Name = L"buttonToLeave";
		this->buttonToLeave->Size = System::Drawing::Size(908, 60);
		this->buttonToLeave->TabIndex = 5;
		this->buttonToLeave->Text = L"Leave the Hypermarket";
		this->buttonToLeave->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeave->UseVisualStyleBackColor = false;
		//
		// buttonToAdresses
		//
		this->buttonToAdresses->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToAdresses->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToAdresses->Location = System::Drawing::Point(3, 267);
		this->buttonToAdresses->Name = L"buttonToAdresses";
		this->buttonToAdresses->Size = System::Drawing::Size(908, 60);
		this->buttonToAdresses->TabIndex = 4;
		this->buttonToAdresses->Text = L"Adresses";
		this->buttonToAdresses->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToAdresses->UseVisualStyleBackColor = false;
		//
		// buttonToDelivery
		//
		this->buttonToDelivery->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToDelivery->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToDelivery->Location = System::Drawing::Point(3, 201);
		this->buttonToDelivery->Name = L"buttonToDelivery";
		this->buttonToDelivery->Size = System::Drawing::Size(908, 60);
		this->buttonToDelivery->TabIndex = 3;
		this->buttonToDelivery->Text = L"Delivery";
		this->buttonToDelivery->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToDelivery->UseVisualStyleBackColor = false;
		//
		// buttonToContacts
		//
		this->buttonToContacts->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToContacts->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToContacts->Location = System::Drawing::Point(3, 135);
		this->buttonToContacts->Name = L"buttonToContacts";
		this->buttonToContacts->Size = System::Drawing::Size(908, 60);
		this->buttonToContacts->TabIndex = 2;
		this->buttonToContacts->Text = L"Contacts";
		this->buttonToContacts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToContacts->UseVisualStyleBackColor = false;
		//
		// buttonToEmployees
		//
		this->buttonToEmployees->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToEmployees->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToEmployees->Location = System::Drawing::Point(3, 69);
		this->buttonToEmployees->Name = L"buttonToEmployees";
		this->buttonToEmployees->Size = System::Drawing::Size(908, 60);
		this->buttonToEmployees->TabIndex = 1;
		this->buttonToEmployees->Text = L"Employees";
		this->buttonToEmployees->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToEmployees->UseVisualStyleBackColor = false;
		this->buttonToEmployees->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToEmployees_Click);
		//
		// buttonToStore
		//
		this->buttonToStore->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToStore->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToStore->Location = System::Drawing::Point(3, 3);
		this->buttonToStore->Name = L"buttonToStore";
		this->buttonToStore->Size = System::Drawing::Size(908, 60);
		this->buttonToStore->TabIndex = 0;
		this->buttonToStore->Text = L"Electronics store";
		this->buttonToStore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToStore->UseVisualStyleBackColor = false;
		this->buttonToStore->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToStore_Click);
	}

	private: System::Void buttonToContacts_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->tableLayoutPanelMenu);
		this->Controls->Add(this->tableLayoutPanelContacts);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(370, 44);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Hypermarket - Contacts";
		//
		// buttonToEmail
		//
		this->buttonToEmail->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToEmail->Font = (gcnew System::Drawing::Font(L"Calibri", 16));
		this->buttonToEmail->Location = System::Drawing::Point(3, 3);
		this->buttonToEmail->Name = L"buttonToEmail";
		this->buttonToEmail->Size = System::Drawing::Size(356, 51);
		this->buttonToEmail->TabIndex = 0;
		this->buttonToEmail->Text = L"Email";
		this->buttonToEmail->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToEmail->UseVisualStyleBackColor = false;
		this->buttonToEmail->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToEmail_Click);
		//
		// buttonToPhone
		//
		this->buttonToPhone->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToPhone->Font = (gcnew System::Drawing::Font(L"Calibri", 16));
		this->buttonToPhone->Location = System::Drawing::Point(3, 60);
		this->buttonToPhone->Name = L"buttonToPhone";
		this->buttonToPhone->Size = System::Drawing::Size(356, 51);
		this->buttonToPhone->TabIndex = 1;
		this->buttonToPhone->Text = L"Phone";
		this->buttonToPhone->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToPhone->UseVisualStyleBackColor = false;
		this->buttonToPhone->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToPhone_Click);
		//
		// buttonToLeaveContacts
		//
		this->buttonToLeaveContacts->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeaveContacts->Font = (gcnew System::Drawing::Font(L"Calibri", 16));
		this->buttonToLeaveContacts->Location = System::Drawing::Point(3, 117);
		this->buttonToLeaveContacts->Name = L"buttonToLeaveContacts";
		this->buttonToLeaveContacts->Size = System::Drawing::Size(356, 52);
		this->buttonToLeaveContacts->TabIndex = 2;
		this->buttonToLeaveContacts->Text = L"Leave the Contacts page";
		this->buttonToLeaveContacts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeaveContacts->UseVisualStyleBackColor = false;
		this->buttonToLeaveContacts->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeaveContacts_Click);
		//
		// tableLayoutPanelContacts
		//
		this->tableLayoutPanelContacts->ColumnCount = 1;
		this->tableLayoutPanelContacts->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelContacts->Controls->Add(this->buttonToLeaveContacts, 0, 2);
		this->tableLayoutPanelContacts->Controls->Add(this->buttonToPhone, 0, 1);
		this->tableLayoutPanelContacts->Controls->Add(this->buttonToEmail, 0, 0);
		this->tableLayoutPanelContacts->Location = System::Drawing::Point(20, 56);
		this->tableLayoutPanelContacts->Name = L"tableLayoutPanelContacts";
		this->tableLayoutPanelContacts->RowCount = 3;
		this->tableLayoutPanelContacts->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanelContacts->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanelContacts->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanelContacts->Size = System::Drawing::Size(362, 172);
		this->tableLayoutPanelContacts->TabIndex = 2;
	}

	private: System::Void buttonToEmail_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->tableLayoutPanelContacts);
		this->Controls->Add(this->boxEmails);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(102, 24);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Emails:";
		//
		// boxEmails
		//
		this->boxEmails->BackColor = System::Drawing::Color::Silver;
		this->boxEmails->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->boxEmails->FormattingEnabled = true;
		this->boxEmails->Items->Clear();
		this->boxEmails->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Email support", L"Business Email", L"Advertising Email" });
		this->boxEmails->Location = System::Drawing::Point(65, 6);
		this->boxEmails->Name = L"boxEmails";
		this->boxEmails->Size = System::Drawing::Size(120, 32);
		this->boxEmails->TabIndex = 4;
		this->boxEmails->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxEmails_SelectedIndexChanged);
		//
		// buttonToLeaveEmails
		//
		this->Controls->Add(this->buttonToLeaveEmails);
		this->buttonToLeaveEmails->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeaveEmails->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
		this->buttonToLeaveEmails->Location = System::Drawing::Point(252, 210);
		this->buttonToLeaveEmails->Name = L"buttonToLeaveEmails";
		this->buttonToLeaveEmails->Size = System::Drawing::Size(130, 30);
		this->buttonToLeaveEmails->TabIndex = 2;
		this->buttonToLeaveEmails->Text = L"Back to Contacts";
		this->buttonToLeaveEmails->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeaveEmails->UseVisualStyleBackColor = false;
		this->buttonToLeaveEmails->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeaveEmails_Click);
	}

	private: System::Void buttonToLeaveEmails_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->buttonToLeaveEmails);
		this->Controls->Remove(this->boxEmails);
		this->Controls->Remove(this->labelContact1);
		this->Controls->Remove(this->labelContact2);
		this->Controls->Add(this->tableLayoutPanelContacts);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(370, 44);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Hypermarket - Contacts";
	}

	private: System::Void boxEmails_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Remove(this->labelContact1);
		this->Controls->Remove(this->labelContact2);
		this->Controls->Add(this->labelContact1);
		this->Controls->Add(this->labelContact2);

		///////////////////////////////////////////////////////////////////////////
		///Email
		//Підтримка по email
		Support_email SupportEmail1;
		SupportEmail1.setContact("hypermarket.ad.1@support.com");

		Support_email SupportEmail2;
		SupportEmail2.setContact("hypermarket.ad.2@support.com");

		//Email для бізнесу
		Business_email BusinessEmail1;
		BusinessEmail1.setContact("hypermarket.ad.1@business.com");

		Business_email BusinessEmail2;
		BusinessEmail2.setContact("hypermarket.ad.2@business.com");

		//Email для рекламних питань
		Advertising_email AdvEmail1;
		AdvEmail1.setContact("hypermarket.ad.1@adv.com");

		Advertising_email AdvEmail2;
		AdvEmail2.setContact("hypermarket.ad.2@adv.com");
		///////////////////////////////////////////////////////////////////////////

		if (boxEmails->Text == "Email support") {
			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(7, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = SupportEmail1.getContact();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(7, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = SupportEmail2.getContact();
		}
		else if (boxEmails->Text == "Business Email") {
			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(7, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = BusinessEmail1.getContact();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(7, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = BusinessEmail2.getContact();
		}
		else if (boxEmails->Text == "Advertising Email") {
			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(7, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = AdvEmail1.getContact();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(7, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = AdvEmail2.getContact();
		}
	}

	private: System::Void buttonToPhone_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->tableLayoutPanelContacts);
		this->Controls->Add(this->boxPhones);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(102, 24);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Phones:";
		//
		// boxEmails
		//
		this->boxPhones->BackColor = System::Drawing::Color::Silver;
		this->boxPhones->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->boxPhones->FormattingEnabled = true;
		this->boxPhones->Items->Clear();
		this->boxPhones->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Phone support", L"Business Phone" });
		this->boxPhones->Location = System::Drawing::Point(65, 6);
		this->boxPhones->Name = L"boxPhones";
		this->boxPhones->Size = System::Drawing::Size(120, 32);
		this->boxPhones->TabIndex = 4;
		this->boxPhones->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxPhones_SelectedIndexChanged);
		//
		// buttonToLeavePhones
		//
		this->Controls->Add(this->buttonToLeavePhones);
		this->buttonToLeavePhones->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeavePhones->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
		this->buttonToLeavePhones->Location = System::Drawing::Point(252, 210);
		this->buttonToLeavePhones->Name = L"buttonToLeavePhones";
		this->buttonToLeavePhones->Size = System::Drawing::Size(130, 30);
		this->buttonToLeavePhones->TabIndex = 2;
		this->buttonToLeavePhones->Text = L"Back to Contacts";
		this->buttonToLeavePhones->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeavePhones->UseVisualStyleBackColor = false;
		this->buttonToLeavePhones->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeavePhones_Click);
	}

	private: System::Void buttonToLeavePhones_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->buttonToLeavePhones);
		this->Controls->Remove(this->boxPhones);
		this->Controls->Remove(this->labelContact1);
		this->Controls->Remove(this->labelContact2);
		this->Controls->Add(this->tableLayoutPanelContacts);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(370, 44);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Hypermarket - Contacts";
	}

	private: System::Void boxPhones_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Remove(this->labelContact1);
		this->Controls->Remove(this->labelContact2);
		this->Controls->Add(this->labelContact1);
		this->Controls->Add(this->labelContact2);

		///////////////////////////////////////////////////////////////////////////
		//Номери підтримки
		Support_phone SupportPhone1;
		SupportPhone1.setContact("+380678726351");

		Support_phone SupportPhone2;
		SupportPhone2.setContact("+380985378615");

		//Номери для бізнесу
		Business_phone BusinessPhone1;
		BusinessPhone1.setContact("+380678176412");

		Business_phone BusinessPhone2;
		BusinessPhone2.setContact("+380987653542");
		///////////////////////////////////////////////////////////////////////////

		if (boxPhones->Text == "Phone support") {
			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(7, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = SupportPhone1.getContact();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(7, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = SupportPhone2.getContact();
		}
		else if (boxPhones->Text == "Business Phone") {
			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(7, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = BusinessPhone1.getContact();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(7, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = BusinessPhone2.getContact();
		}
	}

	private: System::Void buttonToLeaveContacts_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(625, 315);
		this->Controls->Remove(this->buttonToMenu);
		this->Controls->Remove(this->tableLayoutPanelContacts);
		this->Controls->Add(this->tableLayoutPanelMenu);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(230, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(288, 59);
		this->labelDefault->TabIndex = 0;
		this->labelDefault->Text = L"Hypermarket";
		//
		// tableLayoutPanelMenu
		//
		this->tableLayoutPanelMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->tableLayoutPanelMenu->ColumnCount = 1;
		this->tableLayoutPanelMenu->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToLeave, 0, 5);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToAdresses, 0, 4);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToDelivery, 0, 3);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToContacts, 0, 2);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToEmployees, 0, 1);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToStore, 0, 0);
		this->tableLayoutPanelMenu->Location = System::Drawing::Point(12, 71);
		this->tableLayoutPanelMenu->Name = L"tableLayoutPanelMenu";
		this->tableLayoutPanelMenu->RowCount = 6;
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->Size = System::Drawing::Size(600, 235);
		this->tableLayoutPanelMenu->TabIndex = 1;
		//
		// buttonToLeave
		//
		this->buttonToLeave->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeave->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToLeave->Location = System::Drawing::Point(3, 333);
		this->buttonToLeave->Name = L"buttonToLeave";
		this->buttonToLeave->Size = System::Drawing::Size(908, 60);
		this->buttonToLeave->TabIndex = 5;
		this->buttonToLeave->Text = L"Leave the Hypermarket";
		this->buttonToLeave->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeave->UseVisualStyleBackColor = false;
		//
		// buttonToAdresses
		//
		this->buttonToAdresses->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToAdresses->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToAdresses->Location = System::Drawing::Point(3, 267);
		this->buttonToAdresses->Name = L"buttonToAdresses";
		this->buttonToAdresses->Size = System::Drawing::Size(908, 60);
		this->buttonToAdresses->TabIndex = 4;
		this->buttonToAdresses->Text = L"Adresses";
		this->buttonToAdresses->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToAdresses->UseVisualStyleBackColor = false;
		//
		// buttonToDelivery
		//
		this->buttonToDelivery->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToDelivery->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToDelivery->Location = System::Drawing::Point(3, 201);
		this->buttonToDelivery->Name = L"buttonToDelivery";
		this->buttonToDelivery->Size = System::Drawing::Size(908, 60);
		this->buttonToDelivery->TabIndex = 3;
		this->buttonToDelivery->Text = L"Delivery";
		this->buttonToDelivery->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToDelivery->UseVisualStyleBackColor = false;
		//
		// buttonToContacts
		//
		this->buttonToContacts->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToContacts->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToContacts->Location = System::Drawing::Point(3, 135);
		this->buttonToContacts->Name = L"buttonToContacts";
		this->buttonToContacts->Size = System::Drawing::Size(908, 60);
		this->buttonToContacts->TabIndex = 2;
		this->buttonToContacts->Text = L"Contacts";
		this->buttonToContacts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToContacts->UseVisualStyleBackColor = false;
		//
		// buttonToEmployees
		//
		this->buttonToEmployees->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToEmployees->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToEmployees->Location = System::Drawing::Point(3, 69);
		this->buttonToEmployees->Name = L"buttonToEmployees";
		this->buttonToEmployees->Size = System::Drawing::Size(908, 60);
		this->buttonToEmployees->TabIndex = 1;
		this->buttonToEmployees->Text = L"Employees";
		this->buttonToEmployees->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToEmployees->UseVisualStyleBackColor = false;
		this->buttonToEmployees->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToEmployees_Click);
		//
		// buttonToStore
		//
		this->buttonToStore->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToStore->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToStore->Location = System::Drawing::Point(3, 3);
		this->buttonToStore->Name = L"buttonToStore";
		this->buttonToStore->Size = System::Drawing::Size(908, 60);
		this->buttonToStore->TabIndex = 0;
		this->buttonToStore->Text = L"Electronics store";
		this->buttonToStore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToStore->UseVisualStyleBackColor = false;
		this->buttonToStore->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToStore_Click);
	}

	private: System::Void buttonToDelivery_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->tableLayoutPanelMenu);
		this->Controls->Add(this->tableLayoutPanelDelivery);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(366, 44);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Hypermarket - Delivery";
		//
		// buttonToHD
		//
		this->buttonToHD->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToHD->Font = (gcnew System::Drawing::Font(L"Calibri", 16));
		this->buttonToHD->Location = System::Drawing::Point(3, 3);
		this->buttonToHD->Name = L"buttonToHD";
		this->buttonToHD->Size = System::Drawing::Size(356, 51);
		this->buttonToHD->TabIndex = 0;
		this->buttonToHD->Text = L"Home Delivery";
		this->buttonToHD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToHD->UseVisualStyleBackColor = false;
		this->buttonToHD->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToHD_Click);
		//
		// buttonToCD
		//
		this->buttonToCD->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToCD->Font = (gcnew System::Drawing::Font(L"Calibri", 16));
		this->buttonToCD->Location = System::Drawing::Point(3, 60);
		this->buttonToCD->Name = L"buttonToCD";
		this->buttonToCD->Size = System::Drawing::Size(356, 51);
		this->buttonToCD->TabIndex = 1;
		this->buttonToCD->Text = L"Come and Get Delivery";
		this->buttonToCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToCD->UseVisualStyleBackColor = false;
		this->buttonToCD->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToCD_Click);
		//
		// buttonToLeaveDelivery
		//
		this->buttonToLeaveDelivery->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeaveDelivery->Font = (gcnew System::Drawing::Font(L"Calibri", 16));
		this->buttonToLeaveDelivery->Location = System::Drawing::Point(3, 117);
		this->buttonToLeaveDelivery->Name = L"buttonToLeaveDelivery";
		this->buttonToLeaveDelivery->Size = System::Drawing::Size(356, 52);
		this->buttonToLeaveDelivery->TabIndex = 2;
		this->buttonToLeaveDelivery->Text = L"Leave the Contacts page";
		this->buttonToLeaveDelivery->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeaveDelivery->UseVisualStyleBackColor = false;
		this->buttonToLeaveDelivery->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeaveDelivery_Click);
		//
		// tableLayoutPanelDelivery
		//
		this->tableLayoutPanelDelivery->ColumnCount = 1;
		this->tableLayoutPanelDelivery->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelDelivery->Controls->Add(this->buttonToLeaveDelivery, 0, 2);
		this->tableLayoutPanelDelivery->Controls->Add(this->buttonToCD, 0, 1);
		this->tableLayoutPanelDelivery->Controls->Add(this->buttonToHD, 0, 0);
		this->tableLayoutPanelDelivery->Location = System::Drawing::Point(20, 56);
		this->tableLayoutPanelDelivery->Name = L"tableLayoutPanelDelivery";
		this->tableLayoutPanelDelivery->RowCount = 3;
		this->tableLayoutPanelDelivery->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanelDelivery->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanelDelivery->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanelDelivery->Size = System::Drawing::Size(362, 172);
		this->tableLayoutPanelDelivery->TabIndex = 2;
	}

	private: System::Void buttonToHD_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->tableLayoutPanelDelivery);
		this->Controls->Add(this->boxHD);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(102, 24);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Home Delivery:";
		//
		// boxHD
		//
		this->boxHD->BackColor = System::Drawing::Color::Silver;
		this->boxHD->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->boxHD->FormattingEnabled = true;
		this->boxHD->Items->Clear();
		this->boxHD->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Courier", L"Robot" });
		this->boxHD->Location = System::Drawing::Point(110, 6);
		this->boxHD->Name = L"boxHD";
		this->boxHD->Size = System::Drawing::Size(80, 32);
		this->boxHD->TabIndex = 4;
		this->boxHD->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxHD_SelectedIndexChanged);
		//
		// buttonToLeaveHD
		//
		this->Controls->Add(this->buttonToLeaveHD);
		this->buttonToLeaveHD->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeaveHD->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
		this->buttonToLeaveHD->Location = System::Drawing::Point(252, 210);
		this->buttonToLeaveHD->Name = L"buttonToLeaveHD";
		this->buttonToLeaveHD->Size = System::Drawing::Size(130, 30);
		this->buttonToLeaveHD->TabIndex = 2;
		this->buttonToLeaveHD->Text = L"Back to Delivery";
		this->buttonToLeaveHD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeaveHD->UseVisualStyleBackColor = false;
		this->buttonToLeaveHD->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeaveHD_Click);
	}

	private: System::Void buttonToLeaveHD_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->buttonToLeaveHD);
		this->Controls->Remove(this->boxHD);
		this->Controls->Remove(this->labelName1);
		this->Controls->Remove(this->labelPrice1);
		this->Controls->Remove(this->labelTime1);
		this->Controls->Remove(this->labelName2);
		this->Controls->Remove(this->labelPrice2);
		this->Controls->Remove(this->labelTime2);
		this->Controls->Add(this->tableLayoutPanelDelivery);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(370, 44);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Hypermarket - Delivery";
	}

	private: System::Void boxHD_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Remove(this->labelName1);
		this->Controls->Remove(this->labelPrice1);
		this->Controls->Remove(this->labelTime1);
		this->Controls->Remove(this->labelName2);
		this->Controls->Remove(this->labelPrice2);
		this->Controls->Remove(this->labelTime2);
		this->Controls->Add(this->labelName1);
		this->Controls->Add(this->labelPrice1);
		this->Controls->Add(this->labelTime1);
		this->Controls->Add(this->labelName2);
		this->Controls->Add(this->labelPrice2);
		this->Controls->Add(this->labelTime2);

		///////////////////////////////////////////////////////////////////////////
		///Доставка до дому
		//Доставка кур'єром
		Courier NovaPochtaCourier;
		NovaPochtaCourier.setNameDel("Nova Pochta - Courier");
		NovaPochtaCourier.setPriceDel(150);
		NovaPochtaCourier.setTime(18);

		Courier UkrPochtaCourier;
		UkrPochtaCourier.setNameDel("UkrPochta - Courier");
		UkrPochtaCourier.setPriceDel(130);
		UkrPochtaCourier.setTime(20);

		//Доставка роботои
		Robot UkrPochtaRobot;
		UkrPochtaRobot.setNameDel("UkrPochta - Robot");
		UkrPochtaRobot.setPriceDel(100);
		UkrPochtaRobot.setTime(21);

		Robot NovaPochtaRobot;
		NovaPochtaRobot.setNameDel("Nova Pochta - Robot");
		NovaPochtaRobot.setPriceDel(110);
		NovaPochtaRobot.setTime(20);
		///////////////////////////////////////////////////////////////////////////

		if (boxHD->Text == "Courier") {
			//
			// labelName1
			//
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName1->Location = System::Drawing::Point(7, 35);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Text = NovaPochtaCourier.getNameDel();
			//
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelPrice1->Location = System::Drawing::Point(150, 35);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Text = NovaPochtaCourier.getPriceDel().ToString() + " uah";
			//
			// labelTime1
			//
			this->labelTime1->AutoSize = true;
			this->labelTime1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelTime1->Location = System::Drawing::Point(220, 35);
			this->labelTime1->Name = L"labelTime1";
			this->labelTime1->Text = NovaPochtaCourier.getTime().ToString() + " hours";
			//
			// labelName2
			//
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName2->Location = System::Drawing::Point(7, 55);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Text = UkrPochtaCourier.getNameDel();
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelPrice2->Location = System::Drawing::Point(150, 55);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Text = UkrPochtaCourier.getPriceDel().ToString() + " uah";
			//
			// labelTime2
			//
			this->labelTime2->AutoSize = true;
			this->labelTime2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelTime2->Location = System::Drawing::Point(220, 55);
			this->labelTime2->Name = L"labelTime2";
			this->labelTime2->Text = UkrPochtaCourier.getTime().ToString() + " hours";
		}
		else if (boxHD->Text == "Robot") {
			//
			// labelName1
			//
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName1->Location = System::Drawing::Point(7, 35);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Text = UkrPochtaRobot.getNameDel();
			//
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelPrice1->Location = System::Drawing::Point(150, 35);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Text = UkrPochtaRobot.getPriceDel().ToString() + " uah";
			//
			// labelTime1
			//
			this->labelTime1->AutoSize = true;
			this->labelTime1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelTime1->Location = System::Drawing::Point(220, 35);
			this->labelTime1->Name = L"labelTime1";
			this->labelTime1->Text = UkrPochtaRobot.getTime().ToString() + " hours";
			//
			// labelName2
			//
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName2->Location = System::Drawing::Point(7, 55);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Text = NovaPochtaRobot.getNameDel();
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelPrice2->Location = System::Drawing::Point(150, 55);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Text = NovaPochtaRobot.getPriceDel().ToString() + " uah";
			//
			// labelTime2
			//
			this->labelTime2->AutoSize = true;
			this->labelTime2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelTime2->Location = System::Drawing::Point(220, 55);
			this->labelTime2->Name = L"labelTime2";
			this->labelTime2->Text = NovaPochtaRobot.getTime().ToString() + " hours";
		}
	}

	private: System::Void buttonToCD_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->tableLayoutPanelDelivery);
		this->Controls->Add(this->boxCD);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(102, 24);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Come and Get Delivery:";
		//
		// boxCD
		//
		this->boxCD->BackColor = System::Drawing::Color::Silver;
		this->boxCD->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->boxCD->FormattingEnabled = true;
		this->boxCD->Items->Clear();
		this->boxCD->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"In Store", L"In Department" });
		this->boxCD->Location = System::Drawing::Point(160, 6);
		this->boxCD->Name = L"boxCD";
		this->boxCD->Size = System::Drawing::Size(120, 32);
		this->boxCD->TabIndex = 4;
		this->boxCD->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxCD_SelectedIndexChanged);
		//
		// buttonToLeaveCD
		//
		this->Controls->Add(this->buttonToLeaveCD);
		this->buttonToLeaveCD->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeaveCD->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
		this->buttonToLeaveCD->Location = System::Drawing::Point(252, 210);
		this->buttonToLeaveCD->Name = L"buttonToLeaveCD";
		this->buttonToLeaveCD->Size = System::Drawing::Size(130, 30);
		this->buttonToLeaveCD->TabIndex = 2;
		this->buttonToLeaveCD->Text = L"Back to Delivery";
		this->buttonToLeaveCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeaveCD->UseVisualStyleBackColor = false;
		this->buttonToLeaveCD->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeaveCD_Click);
	}

	private: System::Void buttonToLeaveCD_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->buttonToLeaveCD);
		this->Controls->Remove(this->boxCD);
		this->Controls->Remove(this->labelName1);
		this->Controls->Remove(this->labelPrice1);
		this->Controls->Remove(this->labelTime1);
		this->Controls->Remove(this->labelName2);
		this->Controls->Remove(this->labelPrice2);
		this->Controls->Remove(this->labelTime2);
		this->Controls->Add(this->tableLayoutPanelDelivery);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(370, 44);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Hypermarket - Delivery";
	}

	private: System::Void boxCD_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Remove(this->labelName1);
		this->Controls->Remove(this->labelPrice1);
		this->Controls->Remove(this->labelTime1);
		this->Controls->Remove(this->labelName2);
		this->Controls->Remove(this->labelPrice2);
		this->Controls->Remove(this->labelTime2);
		this->Controls->Add(this->labelName1);
		this->Controls->Add(this->labelPrice1);
		this->Controls->Add(this->labelTime1);
		this->Controls->Add(this->labelName2);
		this->Controls->Add(this->labelPrice2);
		this->Controls->Add(this->labelTime2);

		///////////////////////////////////////////////////////////////////////////
		///Доставка до пункта видачі
		//Доствака до магазину
		In_store UkrPochtaStore;
		UkrPochtaStore.setNameDel("UkrPochta - get in store");
		UkrPochtaStore.setPriceDel(30);
		UkrPochtaStore.setTime(18);

		In_store NovaPochtaStore;
		NovaPochtaStore.setNameDel("Nova Pochta - get in store");
		NovaPochtaStore.setPriceDel(40);
		NovaPochtaStore.setTime(17);

		//Доставка до відділення
		In_Department UkrPochtaDep;
		UkrPochtaDep.setNameDel("UkrPochta - get in department");
		UkrPochtaDep.setPriceDel(40);
		UkrPochtaDep.setTime(17);

		In_Department NovaPochtaDep;
		NovaPochtaDep.setNameDel("Nova Pochta - get in department");
		NovaPochtaDep.setPriceDel(50);
		NovaPochtaDep.setTime(16);
		///////////////////////////////////////////////////////////////////////////

		if (boxCD->Text == "In Store") {
			//
			// labelName1
			//
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName1->Location = System::Drawing::Point(7, 35);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Text = UkrPochtaStore.getNameDel();
			//
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelPrice1->Location = System::Drawing::Point(200, 35);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Text = UkrPochtaStore.getPriceDel().ToString() + " uah";
			//
			// labelTime1
			//
			this->labelTime1->AutoSize = true;
			this->labelTime1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelTime1->Location = System::Drawing::Point(270, 35);
			this->labelTime1->Name = L"labelTime1";
			this->labelTime1->Text = UkrPochtaStore.getTime().ToString() + " hours";
			//
			// labelName2
			//
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName2->Location = System::Drawing::Point(7, 55);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Text = NovaPochtaStore.getNameDel();
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelPrice2->Location = System::Drawing::Point(200, 55);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Text = NovaPochtaStore.getPriceDel().ToString() + " uah";
			//
			// labelTime2
			//
			this->labelTime2->AutoSize = true;
			this->labelTime2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelTime2->Location = System::Drawing::Point(270, 55);
			this->labelTime2->Name = L"labelTime2";
			this->labelTime2->Text = NovaPochtaStore.getTime().ToString() + " hours";
		}
		else if (boxCD->Text == "In Department") {
			//
			// labelName1
			//
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName1->Location = System::Drawing::Point(7, 35);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Text = NovaPochtaDep.getNameDel();
			//
			// labelPrice1
			//
			this->labelPrice1->AutoSize = true;
			this->labelPrice1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelPrice1->Location = System::Drawing::Point(205, 35);
			this->labelPrice1->Name = L"labelPrice1";
			this->labelPrice1->Text = NovaPochtaDep.getPriceDel().ToString() + " uah";
			//
			// labelTime1
			//
			this->labelTime1->AutoSize = true;
			this->labelTime1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelTime1->Location = System::Drawing::Point(275, 35);
			this->labelTime1->Name = L"labelTime1";
			this->labelTime1->Text = NovaPochtaDep.getTime().ToString() + " hours";
			//
			// labelName2
			//
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelName2->Location = System::Drawing::Point(7, 55);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Text = UkrPochtaDep.getNameDel();
			//
			// labelPrice2
			//
			this->labelPrice2->AutoSize = true;
			this->labelPrice2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelPrice2->Location = System::Drawing::Point(205, 55);
			this->labelPrice2->Name = L"labelPrice2";
			this->labelPrice2->Text = UkrPochtaDep.getPriceDel().ToString() + " uah";
			//
			// labelTime2
			//
			this->labelTime2->AutoSize = true;
			this->labelTime2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelTime2->Location = System::Drawing::Point(275, 55);
			this->labelTime2->Name = L"labelTime2";
			this->labelTime2->Text = UkrPochtaDep.getTime().ToString() + " hours";
		}
	}

	private: System::Void buttonToLeaveDelivery_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(625, 315);
		this->Controls->Remove(this->buttonToMenu);
		this->Controls->Remove(this->tableLayoutPanelDelivery);
		this->Controls->Add(this->tableLayoutPanelMenu);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(230, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(288, 59);
		this->labelDefault->TabIndex = 0;
		this->labelDefault->Text = L"Hypermarket";
		//
		// tableLayoutPanelMenu
		//
		this->tableLayoutPanelMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->tableLayoutPanelMenu->ColumnCount = 1;
		this->tableLayoutPanelMenu->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToLeave, 0, 5);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToAdresses, 0, 4);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToDelivery, 0, 3);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToContacts, 0, 2);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToEmployees, 0, 1);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToStore, 0, 0);
		this->tableLayoutPanelMenu->Location = System::Drawing::Point(12, 71);
		this->tableLayoutPanelMenu->Name = L"tableLayoutPanelMenu";
		this->tableLayoutPanelMenu->RowCount = 6;
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->Size = System::Drawing::Size(600, 235);
		this->tableLayoutPanelMenu->TabIndex = 1;
		//
		// buttonToLeave
		//
		this->buttonToLeave->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeave->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToLeave->Location = System::Drawing::Point(3, 333);
		this->buttonToLeave->Name = L"buttonToLeave";
		this->buttonToLeave->Size = System::Drawing::Size(908, 60);
		this->buttonToLeave->TabIndex = 5;
		this->buttonToLeave->Text = L"Leave the Hypermarket";
		this->buttonToLeave->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeave->UseVisualStyleBackColor = false;
		//
		// buttonToAdresses
		//
		this->buttonToAdresses->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToAdresses->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToAdresses->Location = System::Drawing::Point(3, 267);
		this->buttonToAdresses->Name = L"buttonToAdresses";
		this->buttonToAdresses->Size = System::Drawing::Size(908, 60);
		this->buttonToAdresses->TabIndex = 4;
		this->buttonToAdresses->Text = L"Adresses";
		this->buttonToAdresses->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToAdresses->UseVisualStyleBackColor = false;
		//
		// buttonToDelivery
		//
		this->buttonToDelivery->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToDelivery->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToDelivery->Location = System::Drawing::Point(3, 201);
		this->buttonToDelivery->Name = L"buttonToDelivery";
		this->buttonToDelivery->Size = System::Drawing::Size(908, 60);
		this->buttonToDelivery->TabIndex = 3;
		this->buttonToDelivery->Text = L"Delivery";
		this->buttonToDelivery->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToDelivery->UseVisualStyleBackColor = false;
		//
		// buttonToContacts
		//
		this->buttonToContacts->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToContacts->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToContacts->Location = System::Drawing::Point(3, 135);
		this->buttonToContacts->Name = L"buttonToContacts";
		this->buttonToContacts->Size = System::Drawing::Size(908, 60);
		this->buttonToContacts->TabIndex = 2;
		this->buttonToContacts->Text = L"Contacts";
		this->buttonToContacts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToContacts->UseVisualStyleBackColor = false;
		//
		// buttonToEmployees
		//
		this->buttonToEmployees->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToEmployees->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToEmployees->Location = System::Drawing::Point(3, 69);
		this->buttonToEmployees->Name = L"buttonToEmployees";
		this->buttonToEmployees->Size = System::Drawing::Size(908, 60);
		this->buttonToEmployees->TabIndex = 1;
		this->buttonToEmployees->Text = L"Employees";
		this->buttonToEmployees->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToEmployees->UseVisualStyleBackColor = false;
		this->buttonToEmployees->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToEmployees_Click);
		//
		// buttonToStore
		//
		this->buttonToStore->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToStore->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToStore->Location = System::Drawing::Point(3, 3);
		this->buttonToStore->Name = L"buttonToStore";
		this->buttonToStore->Size = System::Drawing::Size(908, 60);
		this->buttonToStore->TabIndex = 0;
		this->buttonToStore->Text = L"Electronics store";
		this->buttonToStore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToStore->UseVisualStyleBackColor = false;
		this->buttonToStore->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToStore_Click);
	}

	private: System::Void buttonToAdresses_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->tableLayoutPanelMenu);
		this->Controls->Add(this->tableLayoutPanelAdresses);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(366, 44);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Hypermarket - Adresses";
		//
		// buttonToAS
		//
		this->buttonToAS->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToAS->Font = (gcnew System::Drawing::Font(L"Calibri", 16));
		this->buttonToAS->Location = System::Drawing::Point(3, 3);
		this->buttonToAS->Name = L"buttonToAS";
		this->buttonToAS->Size = System::Drawing::Size(356, 51);
		this->buttonToAS->TabIndex = 0;
		this->buttonToAS->Text = L"Shops";
		this->buttonToAS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToAS->UseVisualStyleBackColor = false;
		this->buttonToAS->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToAS_Click);
		//
		// buttonToCD
		//
		this->buttonToOA->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToOA->Font = (gcnew System::Drawing::Font(L"Calibri", 16));
		this->buttonToOA->Location = System::Drawing::Point(3, 60);
		this->buttonToOA->Name = L"buttonToOA";
		this->buttonToOA->Size = System::Drawing::Size(356, 51);
		this->buttonToOA->TabIndex = 1;
		this->buttonToOA->Text = L"Other Adresses";
		this->buttonToOA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToOA->UseVisualStyleBackColor = false;
		this->buttonToOA->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToOA_Click);
		//
		// buttonToLeaveAdresses
		//
		this->buttonToLeaveAdresses->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeaveAdresses->Font = (gcnew System::Drawing::Font(L"Calibri", 16));
		this->buttonToLeaveAdresses->Location = System::Drawing::Point(3, 117);
		this->buttonToLeaveAdresses->Name = L"buttonToLeaveAdresses";
		this->buttonToLeaveAdresses->Size = System::Drawing::Size(356, 52);
		this->buttonToLeaveAdresses->TabIndex = 2;
		this->buttonToLeaveAdresses->Text = L"Leave the Adresses page";
		this->buttonToLeaveAdresses->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeaveAdresses->UseVisualStyleBackColor = false;
		this->buttonToLeaveAdresses->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeaveAdresses_Click);
		//
		// tableLayoutPanelAdresses
		//
		this->tableLayoutPanelAdresses->ColumnCount = 1;
		this->tableLayoutPanelAdresses->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelAdresses->Controls->Add(this->buttonToLeaveAdresses, 0, 2);
		this->tableLayoutPanelAdresses->Controls->Add(this->buttonToOA, 0, 1);
		this->tableLayoutPanelAdresses->Controls->Add(this->buttonToAS, 0, 0);
		this->tableLayoutPanelAdresses->Location = System::Drawing::Point(20, 56);
		this->tableLayoutPanelAdresses->Name = L"tableLayoutPanelAdresses";
		this->tableLayoutPanelAdresses->RowCount = 3;
		this->tableLayoutPanelAdresses->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanelAdresses->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanelAdresses->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanelAdresses->Size = System::Drawing::Size(362, 172);
		this->tableLayoutPanelAdresses->TabIndex = 2;
	}

	private: System::Void buttonToAS_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->tableLayoutPanelAdresses);
		this->Controls->Add(this->boxAS);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(102, 24);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Shops:";
		//
		// boxAS
		//
		this->boxAS->BackColor = System::Drawing::Color::Silver;
		this->boxAS->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->boxAS->FormattingEnabled = true;
		this->boxAS->Items->Clear();
		this->boxAS->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"All in one", L"Categories" });
		this->boxAS->Location = System::Drawing::Point(60, 6);
		this->boxAS->Name = L"boxAS";
		this->boxAS->Size = System::Drawing::Size(95, 32);
		this->boxAS->TabIndex = 4;
		this->boxAS->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxAS_SelectedIndexChanged);
		//
		// buttonToLeaveAS
		//
		this->Controls->Add(this->buttonToLeaveAS);
		this->buttonToLeaveAS->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeaveAS->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
		this->buttonToLeaveAS->Location = System::Drawing::Point(252, 210);
		this->buttonToLeaveAS->Name = L"buttonToLeaveAS";
		this->buttonToLeaveAS->Size = System::Drawing::Size(130, 30);
		this->buttonToLeaveAS->TabIndex = 2;
		this->buttonToLeaveAS->Text = L"Back to Adresses";
		this->buttonToLeaveAS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeaveAS->UseVisualStyleBackColor = false;
		this->buttonToLeaveAS->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeaveAS_Click);
	}

	private: System::Void buttonToLeaveAS_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->buttonToLeaveAS);
		this->Controls->Remove(this->boxAS);
		this->Controls->Remove(this->labelContact1);
		this->Controls->Remove(this->labelContact2);
		this->Controls->Remove(this->labelContact3);
		this->Controls->Remove(this->labelContact4);
		this->Controls->Remove(this->labelContact5);
		this->Controls->Remove(this->labelContact6);
		this->Controls->Add(this->tableLayoutPanelAdresses);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(370, 44);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Hypermarket - Adresses";
	}

	private: System::Void boxAS_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Remove(this->labelContact1);
		this->Controls->Remove(this->labelContact2);
		this->Controls->Remove(this->labelContact3);
		this->Controls->Remove(this->labelContact4);
		this->Controls->Add(this->labelContact1);
		this->Controls->Add(this->labelContact2);
		this->Controls->Add(this->labelContact3);
		this->Controls->Add(this->labelContact4);

		///////////////////////////////////////////////////////////////////////////
		///Адреси магазинів
		//Адреси магазинів зі всіма категоріями
		All_in_one_shops Store1;
		Store1.setCity("Lviv");
		Store1.setStreet("Patona");
		Store1.setNumber("3");

		All_in_one_shops Store2;
		Store2.setCity("Lviv");
		Store2.setStreet("Stepana Banderu");
		Store2.setNumber("13");

		All_in_one_shops Store3;
		Store3.setCity("Lviv");
		Store3.setStreet("Naykova");
		Store3.setNumber("24");

		//Адреси магазинів по категоріям
		Categories_shops StoreAccessories;
		StoreAccessories.setCity("Lviv");
		StoreAccessories.setStreet("Antonovucha");
		StoreAccessories.setNumber("42");

		Categories_shops StoreDevices;
		StoreDevices.setCity("Lviv");
		StoreDevices.setStreet("Okruzhna");
		StoreDevices.setNumber("7");

		Categories_shops StorePCComponents;
		StorePCComponents.setCity("Lviv");
		StorePCComponents.setStreet("Mechykova");
		StorePCComponents.setNumber("105");

		Categories_shops StoreHouse;
		StoreHouse.setCity("Lviv");
		StoreHouse.setStreet("Knyahyni Ol`hy");
		StoreHouse.setNumber("11");
		///////////////////////////////////////////////////////////////////////////

		if (boxAS->Text == "All in one") {
			this->Controls->Remove(this->labelContact1);
			this->Controls->Remove(this->labelContact2);
			this->Controls->Remove(this->labelContact3);
			this->Controls->Remove(this->labelContact4);
			this->Controls->Remove(this->labelContact5);
			this->Controls->Remove(this->labelContact6);
			this->Controls->Add(this->labelContact1);
			this->Controls->Add(this->labelContact2);
			this->Controls->Add(this->labelContact3);

			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(7, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = Store1.getCity() + " "
				+ Store1.getStreet() + " " + Store1.getNumber();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(7, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = Store2.getCity() + " "
				+ Store2.getStreet() + " " + Store2.getNumber();
			//
			// labelContact3
			//
			this->labelContact3->AutoSize = true;
			this->labelContact3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact3->Location = System::Drawing::Point(7, 75);
			this->labelContact3->Name = L"labelContact3";
			this->labelContact3->Text = Store3.getCity() + " "
				+ Store3.getStreet() + " " + Store3.getNumber();
		}
		else if (boxAS->Text == "Categories") {
			this->Controls->Remove(this->labelContact1);
			this->Controls->Remove(this->labelContact2);
			this->Controls->Remove(this->labelContact3);
			this->Controls->Remove(this->labelContact4);
			this->Controls->Remove(this->labelContact5);
			this->Controls->Remove(this->labelContact6);
			this->Controls->Add(this->labelContact1);
			this->Controls->Add(this->labelContact2);
			this->Controls->Add(this->labelContact3);

			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(7, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = StoreAccessories.getCity() + " "
				+ StoreAccessories.getStreet() + " " + StoreAccessories.getNumber();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(7, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = StoreDevices.getCity() + " "
				+ StoreDevices.getStreet() + " " + StoreDevices.getNumber();
			//
			// labelContact3
			//
			this->labelContact3->AutoSize = true;
			this->labelContact3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact3->Location = System::Drawing::Point(7, 75);
			this->labelContact3->Name = L"labelContact3";
			this->labelContact3->Text = StorePCComponents.getCity() + " "
				+ StorePCComponents.getStreet() + " " + StorePCComponents.getNumber();
			//
			// labelContact4
			//
			this->labelContact4->AutoSize = true;
			this->labelContact4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact4->Location = System::Drawing::Point(7, 95);
			this->labelContact4->Name = L"labelContact4";
			this->labelContact4->Text = StoreHouse.getCity() + " "
				+ StoreHouse.getStreet() + " " + StoreHouse.getNumber();
		}
	}

	private: System::Void buttonToOA_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->tableLayoutPanelAdresses);
		this->Controls->Add(this->boxOA);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(102, 24);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Other Adresses:";
		//
		// boxOA
		//
		this->boxOA->BackColor = System::Drawing::Color::Silver;
		this->boxOA->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
		this->boxOA->FormattingEnabled = true;
		this->boxOA->Items->Clear();
		this->boxOA->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Storages", L"Delivery Departments" });
		this->boxOA->Location = System::Drawing::Point(110, 6);
		this->boxOA->Name = L"boxOA";
		this->boxOA->Size = System::Drawing::Size(145, 32);
		this->boxOA->TabIndex = 4;
		this->boxOA->SelectedIndexChanged += gcnew System::EventHandler(this, &FormWelcome::boxOA_SelectedIndexChanged);
		//
		// buttonToLeaveOA
		//
		this->Controls->Add(this->buttonToLeaveOA);
		this->buttonToLeaveOA->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeaveOA->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
		this->buttonToLeaveOA->Location = System::Drawing::Point(252, 210);
		this->buttonToLeaveOA->Name = L"buttonToLeaveOA";
		this->buttonToLeaveOA->Size = System::Drawing::Size(130, 30);
		this->buttonToLeaveOA->TabIndex = 2;
		this->buttonToLeaveOA->Text = L"Back to Adresses";
		this->buttonToLeaveOA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeaveOA->UseVisualStyleBackColor = false;
		this->buttonToLeaveOA->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToLeaveOA_Click);
	}

	private: System::Void buttonToLeaveOA_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(402, 250);
		this->Controls->Remove(this->buttonToLeaveOA);
		this->Controls->Remove(this->boxOA);
		this->Controls->Remove(this->labelContact1);
		this->Controls->Remove(this->labelContact2);
		this->Controls->Remove(this->labelContact3);
		this->Controls->Remove(this->labelContact4);
		this->Controls->Remove(this->labelContact5);
		this->Controls->Remove(this->labelContact6);
		this->Controls->Add(this->tableLayoutPanelAdresses);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(12, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(370, 44);
		this->labelDefault->TabIndex = 1;
		this->labelDefault->Text = L"Hypermarket - Adresses";
	}

	private: System::Void boxOA_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Remove(this->labelContact1);
		this->Controls->Remove(this->labelContact2);
		this->Controls->Remove(this->labelContact3);
		this->Controls->Remove(this->labelContact4);
		this->Controls->Remove(this->labelContact5);
		this->Controls->Remove(this->labelContact6);
		this->Controls->Add(this->labelContact1);
		this->Controls->Add(this->labelContact2);
		this->Controls->Add(this->labelContact3);
		this->Controls->Add(this->labelContact4);
		this->Controls->Add(this->labelContact5);
		this->Controls->Add(this->labelContact6);

		///////////////////////////////////////////////////////////////////////////
		///Інші адреси
		//Адреси складів
		Storages Storage1;
		Storage1.setCity("Lviv");
		Storage1.setStreet("Zamarstynivska");
		Storage1.setNumber("168");

		Storages Storage2;
		Storage2.setCity("Lviv");
		Storage2.setStreet("Striiska");
		Storage2.setNumber("73");

		//Адреси відділень доставки
		Delivery_departments NovaPochta1;
		NovaPochta1.setCity("Lviv");
		NovaPochta1.setStreet("Horodoc`ka");
		NovaPochta1.setNumber("359");

		Delivery_departments NovaPochta2;
		NovaPochta2.setCity("Lviv");
		NovaPochta2.setStreet("Plastova");
		NovaPochta2.setNumber("7");

		Delivery_departments NovaPochta3;
		NovaPochta3.setCity("Lviv");
		NovaPochta3.setStreet("Levuc`kogo");
		NovaPochta3.setNumber("7");

		Delivery_departments UkrPochta1;
		UkrPochta1.setCity("Lviv");
		UkrPochta1.setStreet("Suhivska");
		UkrPochta1.setNumber("8");

		Delivery_departments UkrPochta2;
		UkrPochta2.setCity("Lviv");
		UkrPochta2.setStreet("Boikivs`ka");
		UkrPochta2.setNumber("1");

		Delivery_departments UkrPochta3;
		UkrPochta3.setCity("Lviv");
		UkrPochta3.setStreet("Dragana");
		UkrPochta3.setNumber("34");
		///////////////////////////////////////////////////////////////////////////

		if (boxOA->Text == "Storages") {
			this->Controls->Remove(this->labelContact1);
			this->Controls->Remove(this->labelContact2);
			this->Controls->Remove(this->labelContact3);
			this->Controls->Remove(this->labelContact4);
			this->Controls->Remove(this->labelContact5);
			this->Controls->Remove(this->labelContact6);
			this->Controls->Add(this->labelContact1);
			this->Controls->Add(this->labelContact2);

			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(7, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = Storage1.getCity() + " "
				+ Storage1.getStreet() + " " + Storage1.getNumber();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(7, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = Storage2.getCity() + " "
				+ Storage2.getStreet() + " " + Storage2.getNumber();
		}
		else if (boxOA->Text == "Delivery Departments") {
			this->Controls->Remove(this->labelContact1);
			this->Controls->Remove(this->labelContact2);
			this->Controls->Remove(this->labelContact3);
			this->Controls->Remove(this->labelContact4);
			this->Controls->Remove(this->labelContact5);
			this->Controls->Remove(this->labelContact6);
			this->Controls->Add(this->labelContact1);
			this->Controls->Add(this->labelContact2);
			this->Controls->Add(this->labelContact3);
			this->Controls->Add(this->labelContact4);
			this->Controls->Add(this->labelContact5);
			this->Controls->Add(this->labelContact6);

			//
			// labelContact1
			//
			this->labelContact1->AutoSize = true;
			this->labelContact1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact1->Location = System::Drawing::Point(7, 35);
			this->labelContact1->Name = L"labelContact1";
			this->labelContact1->Text = NovaPochta1.getCity() + " "
				+ NovaPochta1.getStreet() + " " + NovaPochta1.getNumber();
			//
			// labelContact2
			//
			this->labelContact2->AutoSize = true;
			this->labelContact2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact2->Location = System::Drawing::Point(7, 55);
			this->labelContact2->Name = L"labelContact2";
			this->labelContact2->Text = NovaPochta2.getCity() + " "
				+ NovaPochta2.getStreet() + " " + NovaPochta2.getNumber();
			//
			// labelContact3
			//
			this->labelContact3->AutoSize = true;
			this->labelContact3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact3->Location = System::Drawing::Point(7, 75);
			this->labelContact3->Name = L"labelContact3";
			this->labelContact3->Text = NovaPochta3.getCity() + " "
				+ NovaPochta3.getStreet() + " " + NovaPochta3.getNumber();
			//
			// labelContact4
			//
			this->labelContact4->AutoSize = true;
			this->labelContact4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact4->Location = System::Drawing::Point(7, 95);
			this->labelContact4->Name = L"labelContact4";
			this->labelContact4->Text = UkrPochta1.getCity() + " "
				+ UkrPochta1.getStreet() + " " + UkrPochta1.getNumber();
			//
			// labelContact5
			//
			this->labelContact5->AutoSize = true;
			this->labelContact5->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact5->Location = System::Drawing::Point(7, 115);
			this->labelContact5->Name = L"labelContact5";
			this->labelContact5->Text = UkrPochta2.getCity() + " "
				+ UkrPochta2.getStreet() + " " + UkrPochta2.getNumber();
			//
			// labelContact6
			//
			this->labelContact6->AutoSize = true;
			this->labelContact6->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelContact6->Location = System::Drawing::Point(7, 135);
			this->labelContact6->Name = L"labelContact6";
			this->labelContact6->Text = UkrPochta3.getCity() + " "
				+ UkrPochta3.getStreet() + " " + UkrPochta3.getNumber();
		}
	}

	private: System::Void buttonToLeaveAdresses_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(625, 315);
		this->Controls->Remove(this->buttonToMenu);
		this->Controls->Remove(this->tableLayoutPanelAdresses);
		this->Controls->Add(this->tableLayoutPanelMenu);
		//
		// labelDefault
		//
		this->labelDefault->AutoSize = true;
		this->labelDefault->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold));
		this->labelDefault->Location = System::Drawing::Point(230, 9);
		this->labelDefault->Name = L"labelDefault";
		this->labelDefault->Size = System::Drawing::Size(288, 59);
		this->labelDefault->TabIndex = 0;
		this->labelDefault->Text = L"Hypermarket";
		//
		// tableLayoutPanelMenu
		//
		this->tableLayoutPanelMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->tableLayoutPanelMenu->ColumnCount = 1;
		this->tableLayoutPanelMenu->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToLeave, 0, 5);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToAdresses, 0, 4);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToDelivery, 0, 3);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToContacts, 0, 2);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToEmployees, 0, 1);
		this->tableLayoutPanelMenu->Controls->Add(this->buttonToStore, 0, 0);
		this->tableLayoutPanelMenu->Location = System::Drawing::Point(12, 71);
		this->tableLayoutPanelMenu->Name = L"tableLayoutPanelMenu";
		this->tableLayoutPanelMenu->RowCount = 6;
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6666)));
		this->tableLayoutPanelMenu->Size = System::Drawing::Size(600, 235);
		this->tableLayoutPanelMenu->TabIndex = 1;
		//
		// buttonToLeave
		//
		this->buttonToLeave->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->buttonToLeave->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToLeave->Location = System::Drawing::Point(3, 333);
		this->buttonToLeave->Name = L"buttonToLeave";
		this->buttonToLeave->Size = System::Drawing::Size(908, 60);
		this->buttonToLeave->TabIndex = 5;
		this->buttonToLeave->Text = L"Leave the Hypermarket";
		this->buttonToLeave->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToLeave->UseVisualStyleBackColor = false;
		//
		// buttonToAdresses
		//
		this->buttonToAdresses->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToAdresses->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToAdresses->Location = System::Drawing::Point(3, 267);
		this->buttonToAdresses->Name = L"buttonToAdresses";
		this->buttonToAdresses->Size = System::Drawing::Size(908, 60);
		this->buttonToAdresses->TabIndex = 4;
		this->buttonToAdresses->Text = L"Adresses";
		this->buttonToAdresses->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToAdresses->UseVisualStyleBackColor = false;
		//
		// buttonToDelivery
		//
		this->buttonToDelivery->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToDelivery->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToDelivery->Location = System::Drawing::Point(3, 201);
		this->buttonToDelivery->Name = L"buttonToDelivery";
		this->buttonToDelivery->Size = System::Drawing::Size(908, 60);
		this->buttonToDelivery->TabIndex = 3;
		this->buttonToDelivery->Text = L"Delivery";
		this->buttonToDelivery->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToDelivery->UseVisualStyleBackColor = false;
		//
		// buttonToContacts
		//
		this->buttonToContacts->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToContacts->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToContacts->Location = System::Drawing::Point(3, 135);
		this->buttonToContacts->Name = L"buttonToContacts";
		this->buttonToContacts->Size = System::Drawing::Size(908, 60);
		this->buttonToContacts->TabIndex = 2;
		this->buttonToContacts->Text = L"Contacts";
		this->buttonToContacts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToContacts->UseVisualStyleBackColor = false;
		//
		// buttonToEmployees
		//
		this->buttonToEmployees->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToEmployees->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToEmployees->Location = System::Drawing::Point(3, 69);
		this->buttonToEmployees->Name = L"buttonToEmployees";
		this->buttonToEmployees->Size = System::Drawing::Size(908, 60);
		this->buttonToEmployees->TabIndex = 1;
		this->buttonToEmployees->Text = L"Employees";
		this->buttonToEmployees->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToEmployees->UseVisualStyleBackColor = false;
		this->buttonToEmployees->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToEmployees_Click);
		//
		// buttonToStore
		//
		this->buttonToStore->BackColor = System::Drawing::SystemColors::ControlDark;
		this->buttonToStore->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->buttonToStore->Location = System::Drawing::Point(3, 3);
		this->buttonToStore->Name = L"buttonToStore";
		this->buttonToStore->Size = System::Drawing::Size(908, 60);
		this->buttonToStore->TabIndex = 0;
		this->buttonToStore->Text = L"Electronics store";
		this->buttonToStore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->buttonToStore->UseVisualStyleBackColor = false;
		this->buttonToStore->Click += gcnew System::EventHandler(this, &FormWelcome::buttonToStore_Click);
	}
	};
}