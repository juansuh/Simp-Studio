//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace SimpG;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation; 

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}

void SimpG::MainPage::Button_Click_1(Platform::Object ^ sender, Windows::UI::Xaml::RoutedEventArgs ^ e)
{
	//Convert Platform::String^ to int
	const wchar_t* beginPtr = Tempo->Text->Data();
	int tempo = std::wcstol(beginPtr, nullptr, 10);

	if (tempo > 40 && tempo < 200) {
		if (TimeSig->SelectedIndex == 0) { // 4/4
			this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(TrackPage44::typeid), Tempo->Text);
		}
		else if (TimeSig->SelectedIndex == 1) { // 3/4
			this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(TrackPage34::typeid), Tempo->Text);
		}
		else if (TimeSig->SelectedIndex == 2) {
			this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(TrackPage68::typeid), Tempo->Text);
		}
	}
}