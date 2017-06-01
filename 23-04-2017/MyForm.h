#pragma once

namespace _23_04_2017 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^  label4;
	public:
	private: System::Windows::Forms::Label^  label3;
	public: System::Drawing::Bitmap^ bmp;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  odczytToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zapisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  edycjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  negatywToolStripMenuItem;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::HScrollBar^  hScrollBar1;
	private: System::Windows::Forms::VScrollBar^  vScrollBar1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  popArtToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  popArt2ToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->odczytToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->negatywToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->popArtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->popArt2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->plikToolStripMenuItem,
					this->edycjaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->odczytToolStripMenuItem,
					this->zapisToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// odczytToolStripMenuItem
			// 
			this->odczytToolStripMenuItem->Name = L"odczytToolStripMenuItem";
			this->odczytToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->odczytToolStripMenuItem->Text = L"Odczyt";
			this->odczytToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::odczytToolStripMenuItem_Click);
			// 
			// zapisToolStripMenuItem
			// 
			this->zapisToolStripMenuItem->Name = L"zapisToolStripMenuItem";
			this->zapisToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->zapisToolStripMenuItem->Text = L"Zapis";
			this->zapisToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zapisToolStripMenuItem_Click);
			// 
			// edycjaToolStripMenuItem
			// 
			this->edycjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->negatywToolStripMenuItem,
					this->popArtToolStripMenuItem, this->popArt2ToolStripMenuItem
			});
			this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
			this->edycjaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->edycjaToolStripMenuItem->Text = L"Edycja";
			// 
			// negatywToolStripMenuItem
			// 
			this->negatywToolStripMenuItem->Name = L"negatywToolStripMenuItem";
			this->negatywToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->negatywToolStripMenuItem->Text = L"Negatyw";
			this->negatywToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::negatywToolStripMenuItem_Click);
			// 
			// popArtToolStripMenuItem
			// 
			this->popArtToolStripMenuItem->Name = L"popArtToolStripMenuItem";
			this->popArtToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->popArtToolStripMenuItem->Text = L"Pop Art";
			this->popArtToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::popArtToolStripMenuItem_Click);
			// 
			// popArt2ToolStripMenuItem
			// 
			this->popArt2ToolStripMenuItem->Name = L"popArt2ToolStripMenuItem";
			this->popArt2ToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->popArt2ToolStripMenuItem->Text = L"Pop Art 2";
			this->popArt2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::popArt2ToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->numericUpDown4);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->progressBar1);
			this->groupBox1->Controls->Add(this->hScrollBar1);
			this->groupBox1->Controls->Add(this->vScrollBar1);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox1->Location = System::Drawing::Point(649, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(135, 537);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Rozmiar/Po³o¿enie";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(10, 372);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 360, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 20);
			this->numericUpDown4->TabIndex = 8;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown4_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(10, 300);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 20);
			this->numericUpDown3->TabIndex = 7;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(7, 508);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(123, 23);
			this->progressBar1->TabIndex = 6;
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Location = System::Drawing::Point(27, 148);
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(80, 17);
			this->hScrollBar1->TabIndex = 5;
			this->hScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::hScrollBar1_Scroll);
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(10, 165);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(17, 80);
			this->vScrollBar1->TabIndex = 4;
			this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::vScrollBar1_Scroll);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(10, 77);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 3;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(10, 37);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Wysokoœæ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Szerokoœæ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(349, 447);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 284);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Wyk³adnik (PopArt)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 356);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"K¹t obrotu";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void odczytToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		openFileDialog1->Filter = "Pliki graficzne (*.jpg)|*.jpg|Wszystkie pliki (*.*)|*.*";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox1->Image = System::Drawing::Image::FromFile(openFileDialog1->FileName);
		}
		hScrollBar1->Minimum = pictureBox1->Location.X;
		hScrollBar1->Maximum = this->Width - (pictureBox1->Width + pictureBox1->Location.X + groupBox1->Width);
		vScrollBar1->Minimum = pictureBox1->Location.Y;
		vScrollBar1->Maximum = this->Height - (pictureBox1->Height + pictureBox1->Location.Y);
		numericUpDown1->Maximum = this->Width - (pictureBox1->Location.X + groupBox1->Width + 15);
		numericUpDown2->Maximum = this->Height - (pictureBox1->Location.Y + 45);
		numericUpDown1->Value = pictureBox1->Width;
		numericUpDown2->Value = pictureBox1->Height;
		bmp = (Bitmap^)pictureBox1->Image;
	}
	private: System::Void zapisToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		saveFileDialog1->Filter = "Pliki graficzne (*.jpg)|*.jpg|Wszystkie pliki (*.*)|*.*";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox1->Image->Save(saveFileDialog1->FileName);
		}
	};
	private: System::Void negatywToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//Deklaracja zmiennej bitmap i podstawienie do pliku
		Bitmap^bitmap = (Bitmap^)pictureBox1->Image;
		for (int w = 1; w < bitmap->Width; ++w)
		{
			for (int h = 1; h < bitmap->Height; ++h)
			{
				//Deklaracja zmiennej currentColor i przypisanie koloru z obrazka
				Color currentColor = bitmap->GetPixel(w, h);
				//Przypisanie zmiennej newColor odwróconego koloru
				Color newColor = Color::FromArgb(255, 255 - currentColor.R, 255 - currentColor.G, 255 - currentColor.B);
				bitmap->SetPixel(w, h, newColor);
			}
			this->progressBar1->Value = int(w * 100 / bitmap->Width);
		}
		pictureBox1->Image = bitmap;
		bmp = (Bitmap^)pictureBox1->Image;
	}
	private: System::Void bWToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void sepiaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void redPictureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void greenPictureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void bluePictureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void popArtToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		int R, B, G;
		Int16 mnoznik = Convert::ToInt16(numericUpDown3->Value);
		Bitmap^ bitmap = (Bitmap^)pictureBox1->Image;
		Random^ rand = gcnew Random();
		int x = bitmap->Width;
		int y = bitmap->Height;
		Bitmap^ bitmap2 = gcnew Bitmap(x*mnoznik, y*mnoznik);
		array<Int32, 2>^ ST;
		ST = gcnew array<Int32, 2>(x, y);
		for (int w = 1; w < bitmap->Width; ++w)
		{
			for (int h = 1; h < bitmap->Height; ++h) {
				Color currentColor = bitmap->GetPixel(w, h);
				R = currentColor.R;
				B = currentColor.B;
				G = currentColor.G;
				ST[w, h] = (R + B + G) / 3;
			}
		}
		for (int i = 0; i < mnoznik; ++i)
		{
			for (int j = 0; j < mnoznik; ++j)
			{
				Color r1 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
				Color r2 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
				Color r3 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
				Color r4 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
				Color newColor = Color::FromArgb(255, 0, 0, 0);
				for (int w = 1; w < x; w++)
				{
					for (int h = 1; h < y; h++)
					{
						if (ST[w, h] < 51)
							newColor = Color::FromArgb(255, 0, 0, 0);
						else if (ST[w, h] < 102 && ST[w, h] >= 51)
							newColor = r1;
						else if (ST[w, h] < 153 && ST[w, h] >= 102)
							newColor = r2;
						else if (ST[w, h] < 204 && ST[w, h] >= 153)
							newColor = r3;
						else if (ST[w, h] < 255 && ST[w, h] >= 204)
							newColor = r4;
						else
							newColor = Color::FromArgb(255, 255, 255, 255);
						bitmap2->SetPixel(w + (x*i), h + (y*j), newColor);
						this->progressBar1->Value = int(((100 * h / (bitmap->Height*mnoznik^2)) + (j+i * (100/mnoznik^2))));
					}
				}
			}
		}
		pictureBox1->Image = bitmap2;
		bmp = (Bitmap^)pictureBox1->Image;
	}
	private: System::Void popArt2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		int R, B, G;
		Int16 mnoznik = Convert::ToInt16(numericUpDown3->Value);
		Bitmap^ bitmap = (Bitmap^)pictureBox1->Image;
		Random^ rand = gcnew Random();
		int x = bitmap->Width;
		int y = bitmap->Height;
		Bitmap^ bitmap2 = gcnew Bitmap(x*mnoznik, y*mnoznik);
		array<Int32, 2>^ ST;
		ST = gcnew array<Int32, 2>(x, y);
		array<Int32, 2>^ RT;
		RT = gcnew array<Int32, 2>(x, y);
		array<Int32, 2>^ GT;
		GT = gcnew array<Int32, 2>(x, y);
		array<Int32, 2>^ BT;
		BT = gcnew array<Int32, 2>(x, y);
		for (int w = 1; w < bitmap->Width; ++w)
		{
			for (int h = 1; h < bitmap->Height; ++h) {
				Color currentColor = bitmap->GetPixel(w, h);
				R = currentColor.R;
				B = currentColor.B;
				G = currentColor.G;
				RT[w, h] = R;
				BT[w, h] = B;
				GT[w, h] = G;
				ST[w, h] = (R + B + G) / 3;
			}
		}
		for (int i = 0; i < mnoznik; ++i)
		{
			for (int j = 0; j < mnoznik; ++j)
			{
				Color r1 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
				Color r2 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
				Color r3 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
				Color r4 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
				Color newColor = Color::FromArgb(255, 0, 0, 0);
				for (int w = 1; w < x; w++)
				{
					for (int h = 1; h < y; h++)
					{
						if (ST[w, h] < 51)
							newColor = r4;
						else if (RT[w, h] > GT[w, h] || RT[w, h] > BT[w, h])
							newColor = r1;
						else if (GT[w, h] > BT[w, h] || GT[w, h] > RT[w, h])
							newColor = r2;
						else if (BT[w, h] > GT[w, h] || BT[w, h] > RT[w, h])
							newColor = r3;
						else
							newColor = Color::FromArgb(255, 255, 255, 255);
						bitmap2->SetPixel(w + (x*i), h + (y*j), newColor);
						this->progressBar1->Value = int(((100 * h / (bitmap->Height*mnoznik ^ 2)) + (j + i * (100 / mnoznik ^ 2))));
					}
				}
			}
		}
		pictureBox1->Image = bitmap2;
		bmp = (Bitmap^)pictureBox1->Image;
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Width = Convert::ToInt32(numericUpDown1->Value);
	}
	private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Height = Convert::ToInt32(numericUpDown2->Value);
	}
	private: System::Void hScrollBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
		pictureBox1->Left = hScrollBar1->Value;
	}
	private: System::Void vScrollBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
		pictureBox1->Top = vScrollBar1->Value;
	}
	private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		System::Drawing::Drawing2D::Matrix^ Macierz = gcnew System::Drawing::Drawing2D::Matrix;
		Bitmap^ bitmap;
		Rectangle cloneRect = Rectangle(0, 0, bmp->Width, bmp->Height);
		bitmap = bmp->Clone(cloneRect, bmp->PixelFormat);
		PointF pkt = PointF((Convert::ToSingle(bitmap->Width) / 2), (Convert::ToSingle(bitmap->Height) / 2));
		System::Drawing::Graphics^ g1 = System::Drawing::Graphics::FromImage(bitmap);
		Macierz->RotateAt((Convert::ToSingle(numericUpDown4->Value)), pkt);
		g1->Transform = Macierz;
		g1->DrawImage(bitmap, 0, 0);
		pictureBox1->Image = bitmap;
	}
};
}