//
// TrackPage34.xaml.cpp
// Implementation of the TrackPage34 class
//

#include "pch.h"
#include "TrackPage34.xaml.h"
#include <vector>
#include <iostream>
#include <ppltasks.h>
#include <concrt.h>
#include <Xaudio2.h>
#include <WinBase.h>
#include <Windows.h>
using namespace SimpG;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Xaml::Shapes;
using namespace concurrency;
using namespace Windows::Devices::Enumeration;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=234238

TrackPage34::TrackPage34()
{
	InitializeComponent();
}

bool playing34 = false;
int sleepTime34 = 1000;
//Instrumentation grid
bool beatList34[16][6] = {	{ false, false, false, false, false },
							{ false, false, false, false, false },
							{ false, false, false, false, false },
							{ false, false, false, false, false },
							{ false, false, false, false, false },
							{ false, false, false, false, false },
							{ false, false, false, false, false },
							{ false, false, false, false, false },
							{ false, false, false, false, false },
							{ false, false, false, false, false },
							{ false, false, false, false, false },
							{ false, false, false, false, false } };

void TrackPage34::OnNavigatedTo(NavigationEventArgs^ e) {
	//Retrieve value passed in from MainPage, convert to int, and convert to milliseconds
	String^ tempoS = dynamic_cast<Platform::String^>(e->Parameter);
	const wchar_t* beginPtr = tempoS->Data();
	sleepTime34 = 1000 / (std::wcstol(beginPtr, nullptr, 10) / 60);
	::Windows::UI::Xaml::Controls::Page::OnNavigatedTo(e);
}

//Delete new track and navigate back to main page
void SimpG::TrackPage34::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	clearTrack();
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
}

//The next methods handle tapping on a beat event
bool kick1toggle34 = true;
void SimpG::TrackPage34::Kick1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 0);
	if (kick1toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick1->Fill = ReturnColor;
	}
	kick1toggle34 = !kick1toggle34;
}

bool kick2toggle34 = true;
void SimpG::TrackPage34::Kick2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 1);
	if (kick2toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick2->Fill = ReturnColor;
	}
	kick2toggle34 = !kick2toggle34;
}

bool kick3toggle34 = true;
void SimpG::TrackPage34::Kick3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 2);
	if (kick3toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick3->Fill = ReturnColor;
	}
	kick3toggle34 = !kick3toggle34;
}

bool kick4toggle34 = true;
void SimpG::TrackPage34::Kick4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 3);
	if (kick4toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick4->Fill = ReturnColor;
	}
	kick4toggle34 = !kick4toggle34;
}

bool kick6toggle34 = true;
void SimpG::TrackPage34::Kick6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 4);
	if (kick6toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick6->Fill = ReturnColor;
	}
	kick6toggle34 = !kick6toggle34;
}

bool kick7toggle34 = true;
void SimpG::TrackPage34::Kick7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 5);
	if (kick7toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick7->Fill = ReturnColor;
	}
	kick7toggle34 = !kick7toggle34;
}

bool kick8toggle34 = true;
void SimpG::TrackPage34::Kick8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 6);
	if (kick8toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick8->Fill = ReturnColor;
	}
	kick8toggle34 = !kick8toggle34;
}

bool kick9toggle34 = true;
void SimpG::TrackPage34::Kick9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 7);
	if (kick9toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick9->Fill = ReturnColor;
	}
	kick9toggle34 = !kick9toggle34;
}

bool kick11toggle34 = true;
void SimpG::TrackPage34::Kick11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 8);
	if (kick11toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick11->Fill = ReturnColor;
	}
	kick11toggle34 = !kick11toggle34;
}

bool kick12toggle34 = true;
void SimpG::TrackPage34::Kick12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 9);
	if (kick12toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick12->Fill = ReturnColor;
	}
	kick12toggle34 = !kick12toggle34;
}

bool kick13toggle34 = true;
void SimpG::TrackPage34::Kick13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 10);
	if (kick13toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick13->Fill = ReturnColor;
	}
	kick13toggle34 = !kick13toggle34;
}

bool kick14toggle34 = true;
void SimpG::TrackPage34::Kick14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 11);
	if (kick14toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick14->Fill = ReturnColor;
	}
	kick14toggle34 = !kick14toggle34;
}


bool snare1toggle34 = true;
void SimpG::TrackPage34::Snare1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 0);
	if (snare1toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare1->Fill = ReturnColor;
	}
	snare1toggle34 = !snare1toggle34;
}

bool snare2toggle34 = true;
void SimpG::TrackPage34::Snare2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 1);
	if (snare2toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare2->Fill = ReturnColor;
	}
	snare2toggle34 = !snare2toggle34;
}

bool snare3toggle34 = true;
void SimpG::TrackPage34::Snare3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 2);
	if (snare3toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare3->Fill = ReturnColor;
	}
	snare3toggle34 = !snare3toggle34;
}

bool snare4toggle34 = true;
void SimpG::TrackPage34::Snare4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 3);
	if (snare4toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare4->Fill = ReturnColor;
	}
	snare4toggle34 = !snare4toggle34;
}

bool snare6toggle34 = true;
void SimpG::TrackPage34::Snare6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 4);
	if (snare6toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare6->Fill = ReturnColor;
	}
	snare6toggle34 = !snare6toggle34;
}

bool snare7toggle34 = true;
void SimpG::TrackPage34::Snare7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 5);
	if (snare7toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare7->Fill = ReturnColor;
	}
	snare7toggle34 = !snare7toggle34;
}

bool snare8toggle34 = true;
void SimpG::TrackPage34::Snare8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 6);
	if (snare8toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare8->Fill = ReturnColor;
	}
	snare8toggle34 = !snare8toggle34;
}

bool snare9toggle34 = true;
void SimpG::TrackPage34::Snare9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 7);
	if (snare9toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare9->Fill = ReturnColor;
	}
	snare9toggle34 = !snare9toggle34;
}

bool snare11toggle34 = true;
void SimpG::TrackPage34::Snare11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 8);
	if (snare11toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare11->Fill = ReturnColor;
	}
	snare11toggle34 = !snare11toggle34;
}

bool snare12toggle34 = true;
void SimpG::TrackPage34::Snare12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 9);
	if (snare12toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare12->Fill = ReturnColor;
	}
	snare12toggle34 = !snare12toggle34;
}

bool snare13toggle34 = true;
void SimpG::TrackPage34::Snare13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 10);
	if (snare13toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare13->Fill = ReturnColor;
	}
	snare13toggle34 = !snare13toggle34;
}

bool snare14toggle34 = true;
void SimpG::TrackPage34::Snare14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 11);
	if (snare14toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare14->Fill = ReturnColor;
	}
	snare14toggle34 = !snare14toggle34;
}


bool clap1toggle34 = true;
void SimpG::TrackPage34::Clap1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 0);
	if (clap1toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap1->Fill = ReturnColor;
	}
	clap1toggle34 = !clap1toggle34;
}

bool clap2toggle34 = true;
void SimpG::TrackPage34::Clap2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 1);
	if (clap2toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap2->Fill = ReturnColor;
	}
	clap2toggle34 = !clap2toggle34;
}

bool clap3toggle34 = true;
void SimpG::TrackPage34::Clap3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 2);
	if (clap3toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap3->Fill = ReturnColor;
	}
	clap3toggle34 = !clap3toggle34;
}

bool clap4toggle34 = true;
void SimpG::TrackPage34::Clap4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 3);
	if (clap4toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap4->Fill = ReturnColor;
	}
	clap4toggle34 = !clap4toggle34;
}

bool clap6toggle34 = true;
void SimpG::TrackPage34::Clap6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 4);
	if (clap6toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap6->Fill = ReturnColor;
	}
	clap6toggle34 = !clap6toggle34;
}

bool clap7toggle34 = true;
void SimpG::TrackPage34::Clap7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 5);
	if (clap7toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap7->Fill = ReturnColor;
	}
	clap7toggle34 = !clap7toggle34;
}

bool clap8toggle34 = true;
void SimpG::TrackPage34::Clap8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 6);
	if (clap8toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap8->Fill = ReturnColor;
	}
	clap8toggle34 = !clap8toggle34;
}

bool clap9toggle34 = true;
void SimpG::TrackPage34::Clap9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 7);
	if (clap9toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap9->Fill = ReturnColor;
	}
	clap9toggle34 = !clap9toggle34;
}

bool clap11toggle34 = true;
void SimpG::TrackPage34::Clap11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 8);
	if (clap11toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap11->Fill = ReturnColor;
	}
	clap11toggle34 = !clap11toggle34;
}

bool clap12toggle34 = true;
void SimpG::TrackPage34::Clap12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 9);
	if (clap12toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap12->Fill = ReturnColor;
	}
	clap12toggle34 = !clap12toggle34;
}

bool clap13toggle34 = true;
void SimpG::TrackPage34::Clap13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 10);
	if (clap13toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap13->Fill = ReturnColor;
	}
	clap13toggle34 = !clap13toggle34;
}

bool clap14toggle34 = true;
void SimpG::TrackPage34::Clap14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 11);
	if (clap14toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap14->Fill = ReturnColor;
	}
	clap14toggle34 = !clap14toggle34;
}


bool oHat1toggle34 = true;
void SimpG::TrackPage34::OHat1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 0);
	if (oHat1toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat1->Fill = ReturnColor;
	}
	oHat1toggle34 = !oHat1toggle34;
}

bool oHat2toggle34 = true;
void SimpG::TrackPage34::OHat2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 1);
	if (oHat2toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat2->Fill = ReturnColor;
	}
	oHat2toggle34 = !oHat2toggle34;
}

bool oHat3toggle34 = true;
void SimpG::TrackPage34::OHat3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 2);
	if (oHat3toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat3->Fill = ReturnColor;
	}
	oHat3toggle34 = !oHat3toggle34;
}

bool oHat4toggle34 = true;
void SimpG::TrackPage34::OHat4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 3);
	if (oHat4toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat4->Fill = ReturnColor;
	}
	oHat4toggle34 = !oHat4toggle34;
}

bool oHat6toggle34 = true;
void SimpG::TrackPage34::OHat6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 4);
	if (oHat6toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat6->Fill = ReturnColor;
	}
	oHat6toggle34 = !oHat6toggle34;
}

bool oHat7toggle34 = true;
void SimpG::TrackPage34::OHat7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 5);
	if (oHat7toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat7->Fill = ReturnColor;
	}
	oHat7toggle34 = !oHat7toggle34;
}

bool oHat8toggle34 = true;
void SimpG::TrackPage34::OHat8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 6);
	if (oHat8toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat8->Fill = ReturnColor;
	}
	oHat8toggle34 = !oHat8toggle34;
}

bool oHat9toggle34 = true;
void SimpG::TrackPage34::OHat9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 7);
	if (oHat9toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat9->Fill = ReturnColor;
	}
	oHat9toggle34 = !oHat9toggle34;
}

bool oHat11toggle34 = true;
void SimpG::TrackPage34::OHat11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 8);
	if (oHat11toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat11->Fill = ReturnColor;
	}
	oHat11toggle34 = !oHat11toggle34;
}

bool oHat12toggle34 = true;
void SimpG::TrackPage34::OHat12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 9);
	if (oHat12toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat12->Fill = ReturnColor;
	}
	oHat12toggle34 = !oHat12toggle34;
}

bool oHat13toggle34 = true;
void SimpG::TrackPage34::OHat13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 10);
	if (oHat13toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat13->Fill = ReturnColor;
	}
	oHat13toggle34 = !oHat13toggle34;
}

bool oHat14toggle34 = true;
void SimpG::TrackPage34::OHat14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 11);
	if (oHat14toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat14->Fill = ReturnColor;
	}
	oHat14toggle34 = !oHat14toggle34;
}


bool cHat1toggle34 = true;
void SimpG::TrackPage34::CHat1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 0);
	if (cHat1toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat1->Fill = ReturnColor;
	}
	cHat1toggle34 = !cHat1toggle34;
}

bool cHat2toggle34 = true;
void SimpG::TrackPage34::CHat2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 1);
	if (cHat2toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat2->Fill = ReturnColor;
	}
	cHat2toggle34 = !cHat2toggle34;
}

bool cHat3toggle34 = true;
void SimpG::TrackPage34::CHat3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 2);
	if (cHat3toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat3->Fill = ReturnColor;
	}
	cHat3toggle34 = !cHat3toggle34;
}

bool cHat4toggle34 = true;
void SimpG::TrackPage34::CHat4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 3);
	if (cHat4toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat4->Fill = ReturnColor;
	}
	cHat4toggle34 = !cHat4toggle34;
}

bool cHat6toggle34 = true;
void SimpG::TrackPage34::CHat6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 4);
	if (cHat6toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat6->Fill = ReturnColor;
	}
	cHat6toggle34 = !cHat6toggle34;
}

bool cHat7toggle34 = true;
void SimpG::TrackPage34::CHat7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 5);
	if (cHat7toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat7->Fill = ReturnColor;
	}
	cHat7toggle34 = !cHat7toggle34;
}

bool cHat8toggle34 = true;
void SimpG::TrackPage34::CHat8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 6);
	if (cHat8toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat8->Fill = ReturnColor;
	}
	cHat8toggle34 = !cHat8toggle34;
}

bool cHat9toggle34 = true;
void SimpG::TrackPage34::CHat9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 7);
	if (cHat9toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat9->Fill = ReturnColor;
	}
	cHat9toggle34 = !cHat9toggle34;
}

bool cHat11toggle34 = true;
void SimpG::TrackPage34::CHat11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 8);
	if (cHat11toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat11->Fill = ReturnColor;
	}
	cHat11toggle34 = !cHat11toggle34;
}

bool cHat12toggle34 = true;
void SimpG::TrackPage34::CHat12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 9);
	if (cHat12toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat12->Fill = ReturnColor;
	}
	cHat12toggle34 = !cHat12toggle34;
}

bool cHat13toggle34 = true;
void SimpG::TrackPage34::CHat13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 10);
	if (cHat13toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat13->Fill = ReturnColor;
	}
	cHat13toggle34 = !cHat13toggle34;
}

bool cHat14toggle34 = true;
void SimpG::TrackPage34::CHat14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 11);
	if (cHat14toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat14->Fill = ReturnColor;
	}
	cHat14toggle34 = !cHat14toggle34;
}


bool tom1toggle34 = true;
void SimpG::TrackPage34::Tom1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 0);
	if (tom1toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom1->Fill = ReturnColor;
	}
	tom1toggle34 = !tom1toggle34;
}

bool tom2toggle34 = true;
void SimpG::TrackPage34::Tom2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 1);
	if (tom2toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom2->Fill = ReturnColor;
	}
	tom2toggle34 = !tom2toggle34;
}

bool tom3toggle34 = true;
void SimpG::TrackPage34::Tom3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 2);
	if (tom3toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom3->Fill = ReturnColor;
	}
	tom3toggle34 = !tom3toggle34;
}

bool tom4toggle34 = true;
void SimpG::TrackPage34::Tom4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 3);
	if (tom4toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom4->Fill = ReturnColor;
	}
	tom4toggle34 = !tom4toggle34;
}

bool tom6toggle34 = true;
void SimpG::TrackPage34::Tom6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 4);
	if (tom6toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom6->Fill = ReturnColor;
	}
	tom6toggle34 = !tom6toggle34;
}

bool tom7toggle34 = true;
void SimpG::TrackPage34::Tom7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 5);
	if (tom7toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom7->Fill = ReturnColor;
	}
	tom7toggle34 = !tom7toggle34;
}

bool tom8toggle34 = true;
void SimpG::TrackPage34::Tom8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 6);
	if (tom8toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom8->Fill = ReturnColor;
	}
	tom8toggle34 = !tom8toggle34;
}

bool tom9toggle34 = true;
void SimpG::TrackPage34::Tom9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 7);
	if (tom9toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom9->Fill = ReturnColor;
	}
	tom9toggle34 = !tom9toggle34;
}

bool tom11toggle34 = true;
void SimpG::TrackPage34::Tom11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 8);
	if (tom11toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom11->Fill = ReturnColor;
	}
	tom11toggle34 = !tom11toggle34;
}

bool tom12toggle34 = true;
void SimpG::TrackPage34::Tom12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 9);
	if (tom12toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom12->Fill = ReturnColor;
	}
	tom12toggle34 = !tom12toggle34;
}

bool tom13toggle34 = true;
void SimpG::TrackPage34::Tom13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 10);
	if (tom13toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom13->Fill = ReturnColor;
	}
	tom13toggle34 = !tom13toggle34;
}

bool tom14toggle34 = true;
void SimpG::TrackPage34::Tom14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 11);
	if (tom14toggle34) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom14->Fill = ReturnColor;
	}
	tom14toggle34 = !tom14toggle34;
}


cancellation_token_source cancelToken34;
IAsyncActionWithProgress<int>^ SimpG::TrackPage34::play(int startColumn) {
	//Create cancellation token
	auto token = cancelToken34.get_token();
	return create_async([this, startColumn, token](progress_reporter<int> reporter)
	{
		int startIndex = startColumn; 
		//Converts column index to playhead index
		int counter = startColumn - (startColumn / 4 + 1);
		for (int i = 0; i < 1000; i++) {

			reporter.report(startIndex);
			startIndex++;
			//Loop back to beginning
			if (startIndex == 20) {
				startIndex = 0;
			}
			//Skip empty columns
			if (startIndex % 5 == 0) {
				startIndex++;
			}
			//Sleep time dependent on tempo
			Sleep(sleepTime34);


			if (counter < 12) { counter++; }
			else { counter = 0; }
		}
	});
}

void SimpG::TrackPage34::loopThreadHandler() {

	cancellation_token_source pauseLoop;
	auto token = pauseLoop.get_token();
	//Finds the current location of the playhead, and pass it into async lambda
	int currentColumn = trackGrid->GetColumn(playhead);
	//Create function to loop through GUI
	auto loop = create_async([this, currentColumn, token](progress_reporter<int> reporter)
	{
		int startIndex = currentColumn;
		int counter = currentColumn - (currentColumn / 5 + 1);
		for (int i = 0; i < 1000; i++) {
			if (playing34) {
				reporter.report(startIndex);
			}
			startIndex++;
			//Loop back to beginning
			if (startIndex == 15) {
				startIndex = 0;
			}
			//Skip empty columns
			if (startIndex % 5 == 0) {
				startIndex++;
			}
			//Sleep time dependent on tempo

			Sleep(sleepTime34);


			if (counter < 12) { counter++; }
			else { counter = 0; }
			if (!playing34) {
				cancel_current_task();
			}
		}
	});
	//Track the progress and pass ito to updateProgress()
	cancelToken34 = pauseLoop;
	loop->Progress = ref new AsyncActionProgressHandler<int>(this, &TrackPage34::updateProgress);
	//Pass looping function into asynchronous operation
	auto loopThread = create_task(loop, token);
	loopThread.then([](task<void> result) {

	});
}

void SimpG::TrackPage34::updateProgress(IAsyncActionWithProgress<int>^ action, int progress) {
	//Run the progress counter through playsound
	int counter = progress - (progress / 5 + 1);
	//Creates sound string
	String^ playQueue = L"1";
	String^ inc1 = L"1";
	String^ inc0 = L"0";
	//Create appropriate sound file Platform::String
	for (int i = 5; i >= 0; i--) {
		if (beatList34[counter][i]) { playQueue = String::Concat(playQueue, inc1); }
		else { playQueue = String::Concat(playQueue, inc0); }
	}
	//Do not use else ifs, it creates uneven runtime
	//Plays sounds depending on the beat array
	if (playQueue->Equals(L"1000000")) {
		_1000000->Play();
	}
	if (playQueue->Equals(L"1000001")) {
		_1000001->Play();
	}
	if (playQueue->Equals(L"1000010")) {
		_1000010->Play();
	}
	if (playQueue->Equals(L"1000011")) {
		_1000011->Play();
	}
	if (playQueue->Equals(L"1000100")) {
		_1000100->Play();
	}
	if (playQueue->Equals(L"1000101")) {
		_1000101->Play();
	}
	if (playQueue->Equals(L"1000110")) {
		_1000110->Play();
	}
	if (playQueue->Equals(L"1000111")) {
		_1000111->Play();
	}
	if (playQueue->Equals(L"1001000")) {
		_1001000->Play();
	}
	if (playQueue->Equals(L"1001001")) {
		_1001001->Play();
	}
	if (playQueue->Equals(L"1001010")) {
		_1001010->Play();
	}
	if (playQueue->Equals(L"1001011")) {
		_1001011->Play();
	}
	if (playQueue->Equals(L"1001100")) {
		_1001100->Play();
	}
	if (playQueue->Equals(L"1001101")) {
		_1001101->Play();
	}
	if (playQueue->Equals(L"1001110")) {
		_1001110->Play();
	}
	if (playQueue->Equals(L"1001111")) {
		_1001111->Play();
	}
	if (playQueue->Equals(L"1010000")) {
		_1010000->Play();
	}
	if (playQueue->Equals(L"1010001")) {
		_1010001->Play();
	}
	if (playQueue->Equals(L"1010010")) {
		_1010010->Play();
	}
	if (playQueue->Equals(L"1010011")) {
		_1010011->Play();
	}
	if (playQueue->Equals(L"1010100")) {
		_1010100->Play();
	}
	if (playQueue->Equals(L"1010101")) {
		_1010101->Play();
	}
	if (playQueue->Equals(L"1010110")) {
		_1010110->Play();
	}
	if (playQueue->Equals(L"1010111")) {
		_1010111->Play();
	}
	if (playQueue->Equals(L"1011000")) {
		_1011000->Play();
	}
	if (playQueue->Equals(L"1011001")) {
		_1011001->Play();
	}
	if (playQueue->Equals(L"1011010")) {
		_1011010->Play();
	}
	if (playQueue->Equals(L"1011011")) {
		_1011011->Play();
	}
	if (playQueue->Equals(L"1011100")) {
		_1011100->Play();
	}
	if (playQueue->Equals(L"1011101")) {
		_1011101->Play();
	}
	if (playQueue->Equals(L"1011110")) {
		_1011110->Play();
	}
	if (playQueue->Equals(L"1011111")) {
		_1011111->Play();
	}
	if (playQueue->Equals(L"1100000")) {
		_1100000->Play();
	}
	if (playQueue->Equals(L"1100001")) {
		_1100001->Play();
	}
	if (playQueue->Equals(L"1100010")) {
		_1100010->Play();
	}
	if (playQueue->Equals(L"1100011")) {
		_1100011->Play();
	}
	if (playQueue->Equals(L"1100100")) {
		_1100100->Play();
	}
	if (playQueue->Equals(L"1100101")) {
		_1100101->Play();
	}
	if (playQueue->Equals(L"1100110")) {
		_1100110->Play();
	}
	if (playQueue->Equals(L"1100111")) {
		_1100111->Play();
	}
	if (playQueue->Equals(L"1101000")) {
		_1101000->Play();
	}
	if (playQueue->Equals(L"1101001")) {
		_1101001->Play();
	}
	if (playQueue->Equals(L"1101010")) {
		_1101010->Play();
	}
	if (playQueue->Equals(L"1101011")) {
		_1101011->Play();
	}
	if (playQueue->Equals(L"1101100")) {
		_1101100->Play();
	}
	if (playQueue->Equals(L"1101101")) {
		_1101101->Play();
	}
	if (playQueue->Equals(L"1101110")) {
		_1101110->Play();
	}
	if (playQueue->Equals(L"1101111")) {
		_1101111->Play();
	}
	if (playQueue->Equals(L"1110000")) {
		_1110000->Play();
	}
	if (playQueue->Equals(L"1110001")) {
		_1110001->Play();
	}
	if (playQueue->Equals(L"1110010")) {
		_1110010->Play();
	}
	if (playQueue->Equals(L"1110011")) {
		_1110011->Play();
	}
	if (playQueue->Equals(L"1110100")) {
		_1110100->Play();
	}
	if (playQueue->Equals(L"1110101")) {
		_1110101->Play();
	}
	if (playQueue->Equals(L"1110110")) {
		_1110110->Play();
	}
	if (playQueue->Equals(L"1110111")) {
		_1110111->Play();
	}
	if (playQueue->Equals(L"1111000")) {
		_1111000->Play();
	}
	if (playQueue->Equals(L"1111001")) {
		_1111001->Play();
	}
	if (playQueue->Equals(L"1111010")) {
		_1111010->Play();
	}
	if (playQueue->Equals(L"1111011")) {
		_1111011->Play();
	}
	if (playQueue->Equals(L"1111100")) {
		_1111100->Play();
	}
	if (playQueue->Equals(L"1111101")) {
		_1111101->Play();
	}
	if (playQueue->Equals(L"1111110")) {
		_1111110->Play();
	}
	if (playQueue->Equals(L"1111111")) {
		_1111111->Play();
	}
	//Update the GUI thread with progress values from async thread
	trackGrid->SetColumn(playhead, progress);

}
void SimpG::TrackPage34::Button_Click_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//Play
	loopThreadHandler();
	playing34 = true;
	//Await end
}

void SimpG::TrackPage34::clearTrack() {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 6; j++) {
			beatList34[i][j] = false;
		}
	}
}

void SimpG::TrackPage34::beatTap(int instrument, int location) {
	beatList34[location][instrument] = !beatList34[location][instrument];
}
void SimpG::TrackPage34::clear_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//clears track
	clearTrack();
	//pause
	playing34 = false;
	//resets all the colors
	auto returnColor1 = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
	auto returnColor2 = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
	Kick1->Fill = returnColor1;
	Kick2->Fill = returnColor1;
	Kick3->Fill = returnColor1;
	Kick4->Fill = returnColor1;
	Kick6->Fill = returnColor1;
	Kick7->Fill = returnColor1;
	Kick8->Fill = returnColor1;
	Kick9->Fill = returnColor1;
	Kick11->Fill = returnColor1;
	Kick12->Fill = returnColor1;
	Kick13->Fill = returnColor1;
	Kick14->Fill = returnColor1;

	Snare1->Fill = returnColor2;
	Snare2->Fill = returnColor2;
	Snare3->Fill = returnColor2;
	Snare4->Fill = returnColor2;
	Snare6->Fill = returnColor2;
	Snare7->Fill = returnColor2;
	Snare8->Fill = returnColor2;
	Snare9->Fill = returnColor2;
	Snare11->Fill = returnColor2;
	Snare12->Fill = returnColor2;
	Snare13->Fill = returnColor2;
	Snare14->Fill = returnColor2;

	Clap1->Fill = returnColor1;
	Clap2->Fill = returnColor1;
	Clap3->Fill = returnColor1;
	Clap4->Fill = returnColor1;
	Clap6->Fill = returnColor1;
	Clap7->Fill = returnColor1;
	Clap8->Fill = returnColor1;
	Clap9->Fill = returnColor1;
	Clap11->Fill = returnColor1;
	Clap12->Fill = returnColor1;
	Clap13->Fill = returnColor1;
	Clap14->Fill = returnColor1;

	OHat1->Fill = returnColor2;
	OHat2->Fill = returnColor2;
	OHat3->Fill = returnColor2;
	OHat4->Fill = returnColor2;
	OHat6->Fill = returnColor2;
	OHat7->Fill = returnColor2;
	OHat8->Fill = returnColor2;
	OHat9->Fill = returnColor2;
	OHat11->Fill = returnColor2;
	OHat12->Fill = returnColor2;
	OHat13->Fill = returnColor2;
	OHat14->Fill = returnColor2;

	CHat1->Fill = returnColor1;
	CHat2->Fill = returnColor1;
	CHat3->Fill = returnColor1;
	CHat4->Fill = returnColor1;
	CHat6->Fill = returnColor1;
	CHat7->Fill = returnColor1;
	CHat8->Fill = returnColor1;
	CHat9->Fill = returnColor1;
	CHat11->Fill = returnColor1;
	CHat12->Fill = returnColor1;
	CHat13->Fill = returnColor1;
	CHat14->Fill = returnColor1;

	Tom1->Fill = returnColor2;
	Tom2->Fill = returnColor2;
	Tom3->Fill = returnColor2;
	Tom4->Fill = returnColor2;
	Tom6->Fill = returnColor2;
	Tom7->Fill = returnColor2;
	Tom8->Fill = returnColor2;
	Tom9->Fill = returnColor2;
	Tom11->Fill = returnColor2;
	Tom12->Fill = returnColor2;
	Tom13->Fill = returnColor2;
	Tom14->Fill = returnColor2;
}


void SimpG::TrackPage34::Pause_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//Create cancellation token
	playing34 = false;

}
//Methods for sampling sound
void SimpG::TrackPage34::sampleKick(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	_1000001->Play();
}
void SimpG::TrackPage34::sampleSnare(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	_1000010->Play();
}
void SimpG::TrackPage34::sampleOhat(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	_1000100->Play();
}
void SimpG::TrackPage34::sampleTom(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	_1001000->Play();
}
void SimpG::TrackPage34::sampleChat(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	_1010000->Play();
}
void SimpG::TrackPage34::sampleClap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	_1100000->Play();
}
void SimpG::TrackPage34::loc1tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 1);
	if (playing34) {
		playing34 = false;
		//Must sleep for tempo time
		Sleep(sleepTime34);
		loopThreadHandler();
		playing34 = true;
	}
}
void SimpG::TrackPage34::loc2tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 2);
	if (playing34) {
		playing34 = false;
		//Must sleep for tempo time
		Sleep(sleepTime34);
		loopThreadHandler();
		playing34 = true;
	}
}
void SimpG::TrackPage34::loc3tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 3);
	if (playing34) {
		playing34 = false;
		//Must sleep for tempo time
		Sleep(sleepTime34);
		loopThreadHandler();
		playing34 = true;
	}
}
void SimpG::TrackPage34::loc4tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 4);
	if (playing34) {
		playing34 = false;
		//Must sleep for tempo time
		Sleep(sleepTime34);
		loopThreadHandler();
		playing34 = true;
	}
}
void SimpG::TrackPage34::loc6tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 6);
	if (playing34) {
		playing34 = false;
		//Must sleep for tempo time
		Sleep(sleepTime34);
		loopThreadHandler();
		playing34 = true;
	}
}
void SimpG::TrackPage34::loc7tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 7);
	if (playing34) {
		playing34 = false;
		//Must sleep for tempo time
		Sleep(sleepTime34);
		loopThreadHandler();
		playing34 = true;
	}
}
void SimpG::TrackPage34::loc8tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 8);
	if (playing34) {
		playing34 = false;
		//Must sleep for tempo time
		Sleep(sleepTime34);
		loopThreadHandler();
		playing34 = true;
	}
}
void SimpG::TrackPage34::loc9tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 9);
	if (playing34) {
		playing34 = false;
		//Must sleep for tempo time
		Sleep(sleepTime34);
		loopThreadHandler();
		playing34 = true;
	}
}
void SimpG::TrackPage34::loc11tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 11);
	if (playing34) {
		playing34 = false;
		//Must sleep for tempo time
		Sleep(sleepTime34);
		loopThreadHandler();
		playing34 = true;
	}
}
void SimpG::TrackPage34::loc12tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 12);
	if (playing34) {
		playing34 = false;
		//Must sleep for tempo time
		Sleep(sleepTime34);
		loopThreadHandler();
		playing34 = true;
	}
}
void SimpG::TrackPage34::loc13tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 13);
	if (playing34) {
		playing34 = false;
		//Must sleep for tempo time
		Sleep(sleepTime34);
		loopThreadHandler();
		playing34 = true;
	}
}
void SimpG::TrackPage34::loc14tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 14);
	if (playing34) {
		playing34 = false;
		//Must sleep for tempo time
		Sleep(sleepTime34);
		loopThreadHandler();
		playing34 = true;
	}
}