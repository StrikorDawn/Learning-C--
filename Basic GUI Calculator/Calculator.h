#pragma once

namespace BasicGUICalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnClearEverything;
	protected:
	private: System::Windows::Forms::TextBox^ displayBox;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnDivide;

	private: System::Windows::Forms::Button^ btnBackspace;


	private: System::Windows::Forms::Button^ btnNum7;
	private: System::Windows::Forms::Button^ btnNum8;
	private: System::Windows::Forms::Button^ btnNum9;
	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btnNum4;
	private: System::Windows::Forms::Button^ btnNum5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ btnSubtract;
	private: System::Windows::Forms::Button^ btnNum1;
	private: System::Windows::Forms::Button^ btnNum2;
	private: System::Windows::Forms::Button^ btnNum3;
	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btnNum0;
	private: System::Windows::Forms::Button^ btnDecimal;
	private: System::Windows::Forms::Button^ btnEquals;

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
			this->btnClearEverything = (gcnew System::Windows::Forms::Button());
			this->displayBox = (gcnew System::Windows::Forms::TextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->btnNum7 = (gcnew System::Windows::Forms::Button());
			this->btnNum8 = (gcnew System::Windows::Forms::Button());
			this->btnNum9 = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnNum4 = (gcnew System::Windows::Forms::Button());
			this->btnNum5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->btnNum1 = (gcnew System::Windows::Forms::Button());
			this->btnNum2 = (gcnew System::Windows::Forms::Button());
			this->btnNum3 = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnNum0 = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnClearEverything
			// 
			this->btnClearEverything->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnClearEverything->Location = System::Drawing::Point(12, 113);
			this->btnClearEverything->Name = L"btnClearEverything";
			this->btnClearEverything->Size = System::Drawing::Size(70, 50);
			this->btnClearEverything->TabIndex = 0;
			this->btnClearEverything->Text = L"CE";
			this->btnClearEverything->UseVisualStyleBackColor = true;
			this->btnClearEverything->Click += gcnew System::EventHandler(this, &Calculator::btnClearEverything_Click);
			// 
			// displayBox
			// 
			this->displayBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->displayBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->displayBox->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 55));
			this->displayBox->Location = System::Drawing::Point(12, 11);
			this->displayBox->Multiline = true;
			this->displayBox->Name = L"displayBox";
			this->displayBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->displayBox->Size = System::Drawing::Size(298, 85);
			this->displayBox->TabIndex = 1;
			this->displayBox->Text = L"0";
			this->displayBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->displayBox->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox1_TextChanged);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(88, 113);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(70, 50);
			this->btnClear->TabIndex = 0;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &Calculator::btnClear_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(240, 113);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(70, 50);
			this->btnDivide->TabIndex = 0;
			this->btnDivide->Text = L"÷";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &Calculator::EnterOpperator);
			// 
			// btnBackspace
			// 
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 12));
			this->btnBackspace->Location = System::Drawing::Point(164, 113);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(70, 50);
			this->btnBackspace->TabIndex = 0;
			this->btnBackspace->Text = L"";
			this->btnBackspace->UseVisualStyleBackColor = true;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &Calculator::btnBackspace_Click);
			// 
			// btnNum7
			// 
			this->btnNum7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnNum7->Location = System::Drawing::Point(12, 169);
			this->btnNum7->Name = L"btnNum7";
			this->btnNum7->Size = System::Drawing::Size(70, 50);
			this->btnNum7->TabIndex = 0;
			this->btnNum7->Text = L"7";
			this->btnNum7->UseVisualStyleBackColor = true;
			this->btnNum7->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btnNum8
			// 
			this->btnNum8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnNum8->Location = System::Drawing::Point(88, 169);
			this->btnNum8->Name = L"btnNum8";
			this->btnNum8->Size = System::Drawing::Size(70, 50);
			this->btnNum8->TabIndex = 0;
			this->btnNum8->Text = L"8";
			this->btnNum8->UseVisualStyleBackColor = true;
			this->btnNum8->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btnNum9
			// 
			this->btnNum9->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnNum9->Location = System::Drawing::Point(164, 169);
			this->btnNum9->Name = L"btnNum9";
			this->btnNum9->Size = System::Drawing::Size(70, 50);
			this->btnNum9->TabIndex = 0;
			this->btnNum9->Text = L"9";
			this->btnNum9->UseVisualStyleBackColor = true;
			this->btnNum9->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnMultiply->Location = System::Drawing::Point(240, 169);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(70, 50);
			this->btnMultiply->TabIndex = 0;
			this->btnMultiply->Text = L"X";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &Calculator::EnterOpperator);
			// 
			// btnNum4
			// 
			this->btnNum4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnNum4->Location = System::Drawing::Point(12, 225);
			this->btnNum4->Name = L"btnNum4";
			this->btnNum4->Size = System::Drawing::Size(70, 50);
			this->btnNum4->TabIndex = 0;
			this->btnNum4->Text = L"4";
			this->btnNum4->UseVisualStyleBackColor = true;
			this->btnNum4->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btnNum5
			// 
			this->btnNum5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnNum5->Location = System::Drawing::Point(88, 225);
			this->btnNum5->Name = L"btnNum5";
			this->btnNum5->Size = System::Drawing::Size(70, 50);
			this->btnNum5->TabIndex = 0;
			this->btnNum5->Text = L"5";
			this->btnNum5->UseVisualStyleBackColor = true;
			this->btnNum5->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(164, 225);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 50);
			this->button6->TabIndex = 0;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btnSubtract
			// 
			this->btnSubtract->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnSubtract->Location = System::Drawing::Point(240, 225);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(70, 50);
			this->btnSubtract->TabIndex = 0;
			this->btnSubtract->Text = L"-";
			this->btnSubtract->UseVisualStyleBackColor = true;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &Calculator::EnterOpperator);
			// 
			// btnNum1
			// 
			this->btnNum1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnNum1->Location = System::Drawing::Point(12, 281);
			this->btnNum1->Name = L"btnNum1";
			this->btnNum1->Size = System::Drawing::Size(70, 50);
			this->btnNum1->TabIndex = 0;
			this->btnNum1->Text = L"1";
			this->btnNum1->UseVisualStyleBackColor = true;
			this->btnNum1->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btnNum2
			// 
			this->btnNum2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnNum2->Location = System::Drawing::Point(88, 281);
			this->btnNum2->Name = L"btnNum2";
			this->btnNum2->Size = System::Drawing::Size(70, 50);
			this->btnNum2->TabIndex = 0;
			this->btnNum2->Text = L"2";
			this->btnNum2->UseVisualStyleBackColor = true;
			this->btnNum2->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btnNum3
			// 
			this->btnNum3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnNum3->Location = System::Drawing::Point(164, 281);
			this->btnNum3->Name = L"btnNum3";
			this->btnNum3->Size = System::Drawing::Size(70, 50);
			this->btnNum3->TabIndex = 0;
			this->btnNum3->Text = L"3";
			this->btnNum3->UseVisualStyleBackColor = true;
			this->btnNum3->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(240, 281);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(70, 50);
			this->btnPlus->TabIndex = 0;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &Calculator::EnterOpperator);
			// 
			// btnNum0
			// 
			this->btnNum0->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnNum0->Location = System::Drawing::Point(12, 337);
			this->btnNum0->Name = L"btnNum0";
			this->btnNum0->Size = System::Drawing::Size(146, 50);
			this->btnNum0->TabIndex = 0;
			this->btnNum0->Text = L"0";
			this->btnNum0->UseVisualStyleBackColor = true;
			this->btnNum0->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btnDecimal
			// 
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnDecimal->Location = System::Drawing::Point(164, 337);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(70, 50);
			this->btnDecimal->TabIndex = 0;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = true;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &Calculator::btnDecimal_Click);
			// 
			// btnEquals
			// 
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnEquals->Location = System::Drawing::Point(240, 337);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnEquals->Size = System::Drawing::Size(70, 50);
			this->btnEquals->TabIndex = 0;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &Calculator::btnEquals_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Navy;
			this->ClientSize = System::Drawing::Size(320, 399);
			this->Controls->Add(this->displayBox);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnSubtract);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnBackspace);
			this->Controls->Add(this->btnNum3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->btnNum9);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnNum2);
			this->Controls->Add(this->btnNum5);
			this->Controls->Add(this->btnNum8);
			this->Controls->Add(this->btnNum0);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnNum1);
			this->Controls->Add(this->btnNum4);
			this->Controls->Add(this->btnNum7);
			this->Controls->Add(this->btnClearEverything);
			this->Name = L"Calculator";
			this->Text = L"```";
			this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (displayBox->Text == "0")
	{
		displayBox->Text = Numbers->Text;
	}
	else
	{
		displayBox->Text += Numbers->Text;
	}
}
private: System::Void EnterOpperator(System::Object^ sender, System::EventArgs^ e) {
	try {
		Button^ MathOps = safe_cast<Button^>(sender);
		firstDigit = Double::Parse(displayBox->Text);
		displayBox->Text = "";
		operators = MathOps->Text;
	}
	catch (System::FormatException^)
	{
		displayBox->Text = "Error!";
	}
	catch (...) {
		displayBox->Text = "Error!";
	}
	

}

private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!displayBox->Text->Contains("."))
	{
		displayBox->Text = displayBox->Text + ".";
	}
}
private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(displayBox->Text);
	try {
		if (operators == "+")
		{
			result = firstDigit + secondDigit;
		}
		else if (operators == "-")
		{
			result = firstDigit - secondDigit;
		}
		else if (operators == "X")
		{
			result = firstDigit * secondDigit;
		}
		else if (operators == "÷")
		{
			result = firstDigit / secondDigit;
		}
		displayBox->Text = System::Convert::ToString(result);
	}
	   catch (System::FormatException^) {
		   displayBox->Text = System::Convert::ToString("Error! Invalid input");
	   }
	   catch (System::DivideByZeroException^) {
		   displayBox->Text = System::Convert::ToString("Error! Division by zero");
	   }
	   catch (...) {
		   displayBox->Text = System::Convert::ToString("Error! Unknown exception");
	   }
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	firstDigit = Double::Parse(displayBox->Text);
	displayBox->Text = "0";

}
private: System::Void btnClearEverything_Click(System::Object^ sender, System::EventArgs^ e) {
	displayBox->Text = "0";
}
private: System::Void btnBackspace_Click(System::Object^ sender, System::EventArgs^ e) {

	if (displayBox->Text->Length > 0)
	{
		displayBox->Text = displayBox->Text->Remove(displayBox->Text->Length - 1, 1);
	}
	if (displayBox->Text == "")
	{
		displayBox->Text = "0";
	}
}
};
}
