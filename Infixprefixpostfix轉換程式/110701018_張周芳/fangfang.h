//---------------------------------------------------------------------------

#ifndef fangfangH
#define fangfangH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TButton *Button1;
	TButton *Button2;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TLabel *Label1;
	TLabel *Label2;
	TSplitter *Splitter1;
	TPanel *Panel1;
	TSplitter *Splitter2;
	TPanel *Panel2;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TMemo *Memo1;
	TTabSheet *TabSheet2;
	TButton *Button3;
	TButton *Button4;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TLabel *Label3;
	TLabel *Label4;
	TTabSheet *TabSheet3;
	TButton *Button5;
	TButton *Button6;
	TEdit *Edit8;
	TEdit *Edit9;
	TLabel *Label5;
	TLabel *Label6;
	TEdit *Edit7;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TButton *Button7;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
