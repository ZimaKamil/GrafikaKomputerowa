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
	private: System::Windows::Forms::ToolStripMenuItem^  sepiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bWToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  redPictureToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  greenPictureToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bluePictureToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  formatToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  normalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stretchImageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  autoSizeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zoomToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  centerImageToolStripMenuItem;
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
			this->sepiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bWToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redPictureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->greenPictureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bluePictureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->popArtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->normalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stretchImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autoSizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zoomToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->centerImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
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
			this->popArt2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->edycjaToolStripMenuItem, this->formatToolStripMenuItem
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
			this->edycjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->negatywToolStripMenuItem,
					this->sepiaToolStripMenuItem, this->bWToolStripMenuItem, this->redPictureToolStripMenuItem, this->greenPictureToolStripMenuItem,
					this->bluePictureToolStripMenuItem, this->popArtToolStripMenuItem, this->popArt2ToolStripMenuItem
			});
			this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
			this->edycjaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->edycjaToolStripMenuItem->Text = L"Edycja";
			// 
			// negatywToolStripMenuItem
			// 
			this->negatywToolStripMenuItem->Name = L"negatywToolStripMenuItem";
			this->negatywToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->negatywToolStripMenuItem->Text = L"Negatyw";
			this->negatywToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::negatywToolStripMenuItem_Click);
			// 
			// sepiaToolStripMenuItem
			// 
			this->sepiaToolStripMenuItem->Name = L"sepiaToolStripMenuItem";
			this->sepiaToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->sepiaToolStripMenuItem->Text = L"Sepia";
			this->sepiaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sepiaToolStripMenuItem_Click);
			// 
			// bWToolStripMenuItem
			// 
			this->bWToolStripMenuItem->Name = L"bWToolStripMenuItem";
			this->bWToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->bWToolStripMenuItem->Text = L"B/W";
			this->bWToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::bWToolStripMenuItem_Click);
			// 
			// redPictureToolStripMenuItem
			// 
			this->redPictureToolStripMenuItem->Name = L"redPictureToolStripMenuItem";
			this->redPictureToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->redPictureToolStripMenuItem->Text = L"Red picture";
			this->redPictureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::redPictureToolStripMenuItem_Click);
			// 
			// greenPictureToolStripMenuItem
			// 
			this->greenPictureToolStripMenuItem->Name = L"greenPictureToolStripMenuItem";
			this->greenPictureToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->greenPictureToolStripMenuItem->Text = L"Green picture";
			this->greenPictureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::greenPictureToolStripMenuItem_Click);
			// 
			// bluePictureToolStripMenuItem
			// 
			this->bluePictureToolStripMenuItem->Name = L"bluePictureToolStripMenuItem";
			this->bluePictureToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->bluePictureToolStripMenuItem->Text = L"Blue picture";
			this->bluePictureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::bluePictureToolStripMenuItem_Click);
			// 
			// popArtToolStripMenuItem
			// 
			this->popArtToolStripMenuItem->Name = L"popArtToolStripMenuItem";
			this->popArtToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->popArtToolStripMenuItem->Text = L"Pop Art";
			this->popArtToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::popArtToolStripMenuItem_Click);
			// 
			// formatToolStripMenuItem
			// 
			this->formatToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->normalToolStripMenuItem,
					this->stretchImageToolStripMenuItem, this->autoSizeToolStripMenuItem, this->zoomToolStripMenuItem, this->centerImageToolStripMenuItem
			});
			this->formatToolStripMenuItem->Name = L"formatToolStripMenuItem";
			this->formatToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->formatToolStripMenuItem->Text = L"Format";
			// 
			// normalToolStripMenuItem
			// 
			this->normalToolStripMenuItem->Name = L"normalToolStripMenuItem";
			this->normalToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->normalToolStripMenuItem->Text = L"Normal";
			// 
			// stretchImageToolStripMenuItem
			// 
			this->stretchImageToolStripMenuItem->Name = L"stretchImageToolStripMenuItem";
			this->stretchImageToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->stretchImageToolStripMenuItem->Text = L"StretchImage";
			// 
			// autoSizeToolStripMenuItem
			// 
			this->autoSizeToolStripMenuItem->Name = L"autoSizeToolStripMenuItem";
			this->autoSizeToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->autoSizeToolStripMenuItem->Text = L"AutoSize";
			// 
			// zoomToolStripMenuItem
			// 
			this->zoomToolStripMenuItem->Name = L"zoomToolStripMenuItem";
			this->zoomToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->zoomToolStripMenuItem->Text = L"Zoom";
			// 
			// centerImageToolStripMenuItem
			// 
			this->centerImageToolStripMenuItem->Name = L"centerImageToolStripMenuItem";
			this->centerImageToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->centerImageToolStripMenuItem->Text = L"CenterImage";
			// 
			// groupBox1
			// 
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
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(10, 165);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(17, 80);
			this->vScrollBar1->TabIndex = 4;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(10, 77);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 3;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(10, 37);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 2;
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
			// popArt2ToolStripMenuItem
			// 
			this->popArt2ToolStripMenuItem->Name = L"popArt2ToolStripMenuItem";
			this->popArt2ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->popArt2ToolStripMenuItem->Text = L"Pop Art 2";
			this->popArt2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::popArt2ToolStripMenuItem_Click);
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
	}
private: System::Void bWToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int x;
	int R, RR, B, BB, G, GG;
	Bitmap^bitmap = (Bitmap^)pictureBox1->Image;
	for (x = 1; x < bitmap->Width; ++x)
	{
		for (int y = 1; y < bitmap->Height; ++y) {
			Color currentColor = bitmap->GetPixel(x, y);
			R = currentColor.R;
			B = currentColor.B;
			G = currentColor.G;
			RR = GG = BB = (R + B + G) / 3;
			Color newColor = Color::FromArgb(255, RR,GG,BB);
			bitmap->SetPixel(x, y, newColor);
		}
	}
	pictureBox1->Image = bitmap;
}
private: System::Void sepiaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int x,w=30;
	int R, RR, B, BB, G, GG;
	Bitmap^bitmap = (Bitmap^)pictureBox1->Image;
	for (x = 1; x < bitmap->Width; ++x)
	{
		for (int y = 1; y < bitmap->Height; ++y) {
			Color currentColor = bitmap->GetPixel(x, y);
			R = currentColor.R;
			B = currentColor.B;
			G = currentColor.G;
			RR = R + w * 2;
			GG = G + w;
			if (RR > 255)
				RR = 255;
			if (GG > 255)
				GG = 255;
			Color newColor = Color::FromArgb(255, RR, GG, BB);
			bitmap->SetPixel(x, y, newColor);
		}
	}
	pictureBox1->Image = bitmap;




}
private: System::Void redPictureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int x;
	int R, B, G;
	Bitmap^bitmap = (Bitmap^)pictureBox1->Image;
	for (x = 1; x < bitmap->Width; ++x)
	{
		for (int y = 1; y < bitmap->Height; ++y) {
			Color currentColor = bitmap->GetPixel(x, y);
			R = currentColor.R;
			B = currentColor.B;
			G = currentColor.G;
			Color newColor = Color::FromArgb(255, 255, G, B);
			bitmap->SetPixel(x, y, newColor);
		}
	}
	pictureBox1->Image = bitmap;
}
private: System::Void greenPictureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int x;
	int R, B, G;
	Bitmap^bitmap = (Bitmap^)pictureBox1->Image;
	for (x = 1; x < bitmap->Width; ++x)
	{
		for (int y = 1; y < bitmap->Height; ++y) {
			Color currentColor = bitmap->GetPixel(x, y);
			R = currentColor.R;
			B = currentColor.B;
			G = currentColor.G;
			Color newColor = Color::FromArgb(255, R, 255, B);
			bitmap->SetPixel(x, y, newColor);
		}
	}
	pictureBox1->Image = bitmap;
}
private: System::Void bluePictureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int x;
	int R, B, G;
	Bitmap^ bitmap = (Bitmap^)pictureBox1->Image;
	for (x = 1; x < bitmap->Width; ++x)
	{
		for (int y = 1; y < bitmap->Height; ++y) {
			Color currentColor = bitmap->GetPixel(x, y);
			R = currentColor.R;
			B = currentColor.B;
			G = currentColor.G;
			Color newColor = Color::FromArgb(255, R, G, 255);
			bitmap->SetPixel(x, y, newColor);
		}
	}
	pictureBox1->Image = bitmap;
}
private: System::Void popArtToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int x;
	int R, RR, B, G;
	Bitmap^bitmap = (Bitmap^)pictureBox1->Image;
	Random^ rand = gcnew Random();
	Color r1 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
	Color r2 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
	Color r3 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
	Color r4 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
	for (x = 1; x < bitmap->Width; ++x)
	{
		for (int y = 1; y < bitmap->Height; ++y) {
			Color currentColor = bitmap->GetPixel(x, y);
			R = currentColor.R;
			B = currentColor.B;
			G = currentColor.G;
			RR = (R + B + G) / 3;
			Color newColor = Color::FromArgb(255, G, B, R);
			if (RR < 51)
			{
				newColor = Color::FromArgb(255, 0, 0, 0);
			}
			else if (RR < 102 && RR >= 51)
			{
				newColor = r1;
			}
			else if (RR < 153 && RR >= 102)
			{
				newColor = r2;
			}
			else if (RR < 204 && RR >= 153)
			{
				newColor = r3;
			}
			else if (RR < 255 && RR >= 204)
			{
				newColor = r4;
			}
			else
			{
				newColor = Color::FromArgb(255, 255, 255, 255);
			}
				bitmap->SetPixel(x, y, newColor);
		}
	}
	pictureBox1->Image = bitmap;
}
private: System::Void popArt2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int x;
	int R, RR, B, G;
	Bitmap^bitmap = (Bitmap^)pictureBox1->Image;
	Random^ rand = gcnew Random();
	Color r1 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
	Color r2 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
	Color r3 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
	Color r4 = Color::FromArgb(255, rand->Next(255), rand->Next(255), rand->Next(255));
	for (x = 1; x < bitmap->Width; ++x)
	{
		for (int y = 1; y < bitmap->Height; ++y) {
			Color currentColor = bitmap->GetPixel(x, y);
			R = currentColor.R;
			B = currentColor.B;
			G = currentColor.G;
			RR = (R + B + G) / 3;
			Color newColor = Color::FromArgb(255, G, B, R);
			if (RR < 51)
			{
				newColor = r4;
			}
			else if (R>G||R>B)
			{
				newColor = r1;
			}
			else if (G>B||G>R)
			{
				newColor = r2;
			}
			else if (B>G||B>R)
			{
				newColor = r3;
			}
			else
			{
				newColor = Color::FromArgb(255, 255, 255, 255);
			}
			bitmap->SetPixel(x, y, newColor);
		}
	}
	pictureBox1->Image = bitmap;
}
};
}