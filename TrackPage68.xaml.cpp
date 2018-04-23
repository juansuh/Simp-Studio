//
// TrackPage68.xaml.cpp
// Implementation of the TrackPage68 class
//

#include "pch.h"
#include "TrackPage68.xaml.h"
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

TrackPage68::TrackPage68()
{
	InitializeComponent();
}

bool playing68 = false;
int sleepTime68 = 1000;
//Instrumentation grid
bool beatList68[16][6] = { { false, false, false, false, false },
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

void TrackPage68::OnNavigatedTo(NavigationEventArgs^ e) {
	//Retrieve value passed in from MainPage, convert to int, and convert to milliseconds
	String^ tempoS = dynamic_cast<Platform::String^>(e->Parameter);
	const wchar_t* beginPtr = tempoS->Data();
	sleepTime68 = 1000 / (std::wcstol(beginPtr, nullptr, 10) / 60);
	::Windows::UI::Xaml::Controls::Page::OnNavigatedTo(e);
}

//Delete new track and navigate back to main page
void SimpG::TrackPage68::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	clearTrack();
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
}

//The next methods handle tapping on a beat event
bool kick1toggle68 = true;
void SimpG::TrackPage68::Kick1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 0);
	if (kick1toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick1->Fill = ReturnColor;
	}
	kick1toggle68 = !kick1toggle68;
}

bool kick2toggle68 = true;
void SimpG::TrackPage68::Kick2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 1);
	if (kick2toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick2->Fill = ReturnColor;
	}
	kick2toggle68 = !kick2toggle68;
}

bool kick3toggle68 = true;
void SimpG::TrackPage68::Kick3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 2);
	if (kick3toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick3->Fill = ReturnColor;
	}
	kick3toggle68 = !kick3toggle68;
}

bool kick4toggle68 = true;
void SimpG::TrackPage68::Kick4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 3);
	if (kick4toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick4->Fill = ReturnColor;
	}
	kick4toggle68 = !kick4toggle68;
}

bool kick6toggle68 = true;
void SimpG::TrackPage68::Kick6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 4);
	if (kick6toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick6->Fill = ReturnColor;
	}
	kick6toggle68 = !kick6toggle68;
}

bool kick7toggle68 = true;
void SimpG::TrackPage68::Kick7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 5);
	if (kick7toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick7->Fill = ReturnColor;
	}
	kick7toggle68 = !kick7toggle68;
}

bool kick8toggle68 = true;
void SimpG::TrackPage68::Kick8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 6);
	if (kick8toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick8->Fill = ReturnColor;
	}
	kick8toggle68 = !kick8toggle68;
}

bool kick9toggle68 = true;
void SimpG::TrackPage68::Kick9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 7);
	if (kick9toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick9->Fill = ReturnColor;
	}
	kick9toggle68 = !kick9toggle68;
}

bool kick11toggle68 = true;
void SimpG::TrackPage68::Kick11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 8);
	if (kick11toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick11->Fill = ReturnColor;
	}
	kick11toggle68 = !kick11toggle68;
}

bool kick12toggle68 = true;
void SimpG::TrackPage68::Kick12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 9);
	if (kick12toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick12->Fill = ReturnColor;
	}
	kick12toggle68 = !kick12toggle68;
}

bool kick13toggle68 = true;
void SimpG::TrackPage68::Kick13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 10);
	if (kick13toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick13->Fill = ReturnColor;
	}
	kick13toggle68 = !kick13toggle68;
}

bool kick14toggle68 = true;
void SimpG::TrackPage68::Kick14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(0, 11);
	if (kick14toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick14->Fill = ReturnColor;
	}
	kick14toggle68 = !kick14toggle68;
}


bool snare1toggle68 = true;
void SimpG::TrackPage68::Snare1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 0);
	if (snare1toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare1->Fill = ReturnColor;
	}
	snare1toggle68 = !snare1toggle68;
}

bool snare2toggle68 = true;
void SimpG::TrackPage68::Snare2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 1);
	if (snare2toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare2->Fill = ReturnColor;
	}
	snare2toggle68 = !snare2toggle68;
}

bool snare3toggle68 = true;
void SimpG::TrackPage68::Snare3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 2);
	if (snare3toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare3->Fill = ReturnColor;
	}
	snare3toggle68 = !snare3toggle68;
}

bool snare4toggle68 = true;
void SimpG::TrackPage68::Snare4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 3);
	if (snare4toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare4->Fill = ReturnColor;
	}
	snare4toggle68 = !snare4toggle68;
}

bool snare6toggle68 = true;
void SimpG::TrackPage68::Snare6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 4);
	if (snare6toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare6->Fill = ReturnColor;
	}
	snare6toggle68 = !snare6toggle68;
}

bool snare7toggle68 = true;
void SimpG::TrackPage68::Snare7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 5);
	if (snare7toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare7->Fill = ReturnColor;
	}
	snare7toggle68 = !snare7toggle68;
}

bool snare8toggle68 = true;
void SimpG::TrackPage68::Snare8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 6);
	if (snare8toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare8->Fill = ReturnColor;
	}
	snare8toggle68 = !snare8toggle68;
}

bool snare9toggle68 = true;
void SimpG::TrackPage68::Snare9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 7);
	if (snare9toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare9->Fill = ReturnColor;
	}
	snare9toggle68 = !snare9toggle68;
}

bool snare11toggle68 = true;
void SimpG::TrackPage68::Snare11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 8);
	if (snare11toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare11->Fill = ReturnColor;
	}
	snare11toggle68 = !snare11toggle68;
}

bool snare12toggle68 = true;
void SimpG::TrackPage68::Snare12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 9);
	if (snare12toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare12->Fill = ReturnColor;
	}
	snare12toggle68 = !snare12toggle68;
}

bool snare13toggle68 = true;
void SimpG::TrackPage68::Snare13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 10);
	if (snare13toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare13->Fill = ReturnColor;
	}
	snare13toggle68 = !snare13toggle68;
}

bool snare14toggle68 = true;
void SimpG::TrackPage68::Snare14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(1, 11);
	if (snare14toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare14->Fill = ReturnColor;
	}
	snare14toggle68 = !snare14toggle68;
}


bool clap1toggle68 = true;
void SimpG::TrackPage68::Clap1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 0);
	if (clap1toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap1->Fill = ReturnColor;
	}
	clap1toggle68 = !clap1toggle68;
}

bool clap2toggle68 = true;
void SimpG::TrackPage68::Clap2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 1);
	if (clap2toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap2->Fill = ReturnColor;
	}
	clap2toggle68 = !clap2toggle68;
}

bool clap3toggle68 = true;
void SimpG::TrackPage68::Clap3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 2);
	if (clap3toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap3->Fill = ReturnColor;
	}
	clap3toggle68 = !clap3toggle68;
}

bool clap4toggle68 = true;
void SimpG::TrackPage68::Clap4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 3);
	if (clap4toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap4->Fill = ReturnColor;
	}
	clap4toggle68 = !clap4toggle68;
}

bool clap6toggle68 = true;
void SimpG::TrackPage68::Clap6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 4);
	if (clap6toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap6->Fill = ReturnColor;
	}
	clap6toggle68 = !clap6toggle68;
}

bool clap7toggle68 = true;
void SimpG::TrackPage68::Clap7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 5);
	if (clap7toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap7->Fill = ReturnColor;
	}
	clap7toggle68 = !clap7toggle68;
}

bool clap8toggle68 = true;
void SimpG::TrackPage68::Clap8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 6);
	if (clap8toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap8->Fill = ReturnColor;
	}
	clap8toggle68 = !clap8toggle68;
}

bool clap9toggle68 = true;
void SimpG::TrackPage68::Clap9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 7);
	if (clap9toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap9->Fill = ReturnColor;
	}
	clap9toggle68 = !clap9toggle68;
}

bool clap11toggle68 = true;
void SimpG::TrackPage68::Clap11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 8);
	if (clap11toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap11->Fill = ReturnColor;
	}
	clap11toggle68 = !clap11toggle68;
}

bool clap12toggle68 = true;
void SimpG::TrackPage68::Clap12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 9);
	if (clap12toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap12->Fill = ReturnColor;
	}
	clap12toggle68 = !clap12toggle68;
}

bool clap13toggle68 = true;
void SimpG::TrackPage68::Clap13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 10);
	if (clap13toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap13->Fill = ReturnColor;
	}
	clap13toggle68 = !clap13toggle68;
}

bool clap14toggle68 = true;
void SimpG::TrackPage68::Clap14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(2, 11);
	if (clap14toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap14->Fill = ReturnColor;
	}
	clap14toggle68 = !clap14toggle68;
}


bool oHat1toggle68 = true;
void SimpG::TrackPage68::OHat1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 0);
	if (oHat1toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat1->Fill = ReturnColor;
	}
	oHat1toggle68 = !oHat1toggle68;
}

bool oHat2toggle68 = true;
void SimpG::TrackPage68::OHat2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 1);
	if (oHat2toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat2->Fill = ReturnColor;
	}
	oHat2toggle68 = !oHat2toggle68;
}

bool oHat3toggle68 = true;
void SimpG::TrackPage68::OHat3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 2);
	if (oHat3toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat3->Fill = ReturnColor;
	}
	oHat3toggle68 = !oHat3toggle68;
}

bool oHat4toggle68 = true;
void SimpG::TrackPage68::OHat4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 3);
	if (oHat4toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat4->Fill = ReturnColor;
	}
	oHat4toggle68 = !oHat4toggle68;
}

bool oHat6toggle68 = true;
void SimpG::TrackPage68::OHat6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 4);
	if (oHat6toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat6->Fill = ReturnColor;
	}
	oHat6toggle68 = !oHat6toggle68;
}

bool oHat7toggle68 = true;
void SimpG::TrackPage68::OHat7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 5);
	if (oHat7toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat7->Fill = ReturnColor;
	}
	oHat7toggle68 = !oHat7toggle68;
}

bool oHat8toggle68 = true;
void SimpG::TrackPage68::OHat8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 6);
	if (oHat8toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat8->Fill = ReturnColor;
	}
	oHat8toggle68 = !oHat8toggle68;
}

bool oHat9toggle68 = true;
void SimpG::TrackPage68::OHat9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 7);
	if (oHat9toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat9->Fill = ReturnColor;
	}
	oHat9toggle68 = !oHat9toggle68;
}

bool oHat11toggle68 = true;
void SimpG::TrackPage68::OHat11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 8);
	if (oHat11toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat11->Fill = ReturnColor;
	}
	oHat11toggle68 = !oHat11toggle68;
}

bool oHat12toggle68 = true;
void SimpG::TrackPage68::OHat12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 9);
	if (oHat12toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat12->Fill = ReturnColor;
	}
	oHat12toggle68 = !oHat12toggle68;
}

bool oHat13toggle68 = true;
void SimpG::TrackPage68::OHat13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 10);
	if (oHat13toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat13->Fill = ReturnColor;
	}
	oHat13toggle68 = !oHat13toggle68;
}

bool oHat14toggle68 = true;
void SimpG::TrackPage68::OHat14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(3, 11);
	if (oHat14toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat14->Fill = ReturnColor;
	}
	oHat14toggle68 = !oHat14toggle68;
}


bool cHat1toggle68 = true;
void SimpG::TrackPage68::CHat1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 0);
	if (cHat1toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat1->Fill = ReturnColor;
	}
	cHat1toggle68 = !cHat1toggle68;
}

bool cHat2toggle68 = true;
void SimpG::TrackPage68::CHat2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 1);
	if (cHat2toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat2->Fill = ReturnColor;
	}
	cHat2toggle68 = !cHat2toggle68;
}

bool cHat3toggle68 = true;
void SimpG::TrackPage68::CHat3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 2);
	if (cHat3toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat3->Fill = ReturnColor;
	}
	cHat3toggle68 = !cHat3toggle68;
}

bool cHat4toggle68 = true;
void SimpG::TrackPage68::CHat4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 3);
	if (cHat4toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat4->Fill = ReturnColor;
	}
	cHat4toggle68 = !cHat4toggle68;
}

bool cHat6toggle68 = true;
void SimpG::TrackPage68::CHat6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 4);
	if (cHat6toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat6->Fill = ReturnColor;
	}
	cHat6toggle68 = !cHat6toggle68;
}

bool cHat7toggle68 = true;
void SimpG::TrackPage68::CHat7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 5);
	if (cHat7toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat7->Fill = ReturnColor;
	}
	cHat7toggle68 = !cHat7toggle68;
}

bool cHat8toggle68 = true;
void SimpG::TrackPage68::CHat8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 6);
	if (cHat8toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat8->Fill = ReturnColor;
	}
	cHat8toggle68 = !cHat8toggle68;
}

bool cHat9toggle68 = true;
void SimpG::TrackPage68::CHat9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 7);
	if (cHat9toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat9->Fill = ReturnColor;
	}
	cHat9toggle68 = !cHat9toggle68;
}

bool cHat11toggle68 = true;
void SimpG::TrackPage68::CHat11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 8);
	if (cHat11toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat11->Fill = ReturnColor;
	}
	cHat11toggle68 = !cHat11toggle68;
}

bool cHat12toggle68 = true;
void SimpG::TrackPage68::CHat12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 9);
	if (cHat12toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat12->Fill = ReturnColor;
	}
	cHat12toggle68 = !cHat12toggle68;
}

bool cHat13toggle68 = true;
void SimpG::TrackPage68::CHat13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 10);
	if (cHat13toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat13->Fill = ReturnColor;
	}
	cHat13toggle68 = !cHat13toggle68;
}

bool cHat14toggle68 = true;
void SimpG::TrackPage68::CHat14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(4, 11);
	if (cHat14toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat14->Fill = ReturnColor;
	}
	cHat14toggle68 = !cHat14toggle68;
}


bool tom1toggle68 = true;
void SimpG::TrackPage68::Tom1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 0);
	if (tom1toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom1->Fill = ReturnColor;
	}
	tom1toggle68 = !tom1toggle68;
}

bool tom2toggle68 = true;
void SimpG::TrackPage68::Tom2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 1);
	if (tom2toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom2->Fill = ReturnColor;
	}
	tom2toggle68 = !tom2toggle68;
}

bool tom3toggle68 = true;
void SimpG::TrackPage68::Tom3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 2);
	if (tom3toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom3->Fill = ReturnColor;
	}
	tom3toggle68 = !tom3toggle68;
}

bool tom4toggle68 = true;
void SimpG::TrackPage68::Tom4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 3);
	if (tom4toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom4->Fill = ReturnColor;
	}
	tom4toggle68 = !tom4toggle68;
}

bool tom6toggle68 = true;
void SimpG::TrackPage68::Tom6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 4);
	if (tom6toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom6->Fill = ReturnColor;
	}
	tom6toggle68 = !tom6toggle68;
}

bool tom7toggle68 = true;
void SimpG::TrackPage68::Tom7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 5);
	if (tom7toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom7->Fill = ReturnColor;
	}
	tom7toggle68 = !tom7toggle68;
}

bool tom8toggle68 = true;
void SimpG::TrackPage68::Tom8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 6);
	if (tom8toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom8->Fill = ReturnColor;
	}
	tom8toggle68 = !tom8toggle68;
}

bool tom9toggle68 = true;
void SimpG::TrackPage68::Tom9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 7);
	if (tom9toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom9->Fill = ReturnColor;
	}
	tom9toggle68 = !tom9toggle68;
}

bool tom11toggle68 = true;
void SimpG::TrackPage68::Tom11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 8);
	if (tom11toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom11->Fill = ReturnColor;
	}
	tom11toggle68 = !tom11toggle68;
}

bool tom12toggle68 = true;
void SimpG::TrackPage68::Tom12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 9);
	if (tom12toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom12->Fill = ReturnColor;
	}
	tom12toggle68 = !tom12toggle68;
}

bool tom13toggle68 = true;
void SimpG::TrackPage68::Tom13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 10);
	if (tom13toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom13->Fill = ReturnColor;
	}
	tom13toggle68 = !tom13toggle68;
}

bool tom14toggle68 = true;
void SimpG::TrackPage68::Tom14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	beatTap(5, 11);
	if (tom14toggle68) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom14->Fill = ReturnColor;
	}
	tom14toggle68 = !tom14toggle68;
}


cancellation_token_source cancelToken68;
IAsyncActionWithProgress<int>^ SimpG::TrackPage68::play(int startColumn) {
	//Create cancellation token
	auto token = cancelToken68.get_token();
	return create_async([this, startColumn, token](progress_reporter<int> reporter)
	{
		int startIndex = startColumn;
		//Converts column index to playhead index
		int counter = startColumn - (startColumn / 4 + 1);
		for (int i = 0; i < 1000; i++) {

			reporter.report(startIndex);
			startIndex++;
			//Loop back to beginning
			if (startIndex == 18) {
				startIndex = 0;
			}
			//Skip empty columns
			if (startIndex % 3 == 0) {
				startIndex++;
			}
			//Sleep time dependent on tempo
			Sleep(sleepTime68);


			if (counter < 12) { counter++; }
			else { counter = 0; }
		}
	});
}

void SimpG::TrackPage68::loopThreadHandler() {

	cancellation_token_source pauseLoop;
	auto token = pauseLoop.get_token();
	//Finds the current location of the playhead, and pass it into async lambda
	int currentColumn = trackGrid->GetColumn(playhead);
	//Create function to loop through GUI
	auto loop = create_async([this, currentColumn, token](progress_reporter<int> reporter)
	{
		int startIndex = currentColumn;
		int counter = currentColumn - (currentColumn / 3 + 1);
		for (int i = 0; i < 1000; i++) {
			if (playing68) {
				reporter.report(startIndex);
			}
			startIndex++;
			//Loop back to beginning
			if (startIndex == 18) {
				startIndex = 0;
			}
			//Skip empty columns
			if (startIndex % 3 == 0) {
				startIndex++;
			}
			//Sleep time dependent on tempo

			Sleep(sleepTime68);


			if (counter < 12) { counter++; }
			else { counter = 0; }
			if (!playing68) {
				cancel_current_task();
			}
		}
	});
	//Track the progress and pass ito to updateProgress()
	cancelToken68 = pauseLoop;
	loop->Progress = ref new AsyncActionProgressHandler<int>(this, &TrackPage68::updateProgress);
	//Pass looping function into asynchronous operation
	auto loopThread = create_task(loop, token);
	loopThread.then([](task<void> result) {

	});
}

void SimpG::TrackPage68::updateProgress(IAsyncActionWithProgress<int>^ action, int progress) {
	//Run the progress counter through playsound
	int counter = progress - (progress / 3 + 1);
	//Creates sound string
	String^ playQueue = L"1";
	String^ inc1 = L"1";
	String^ inc0 = L"0";
	//Create appropriate sound file Platform::String
	for (int i = 5; i >= 0; i--) {
		if (beatList68[counter][i]) { playQueue = String::Concat(playQueue, inc1); }
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
void SimpG::TrackPage68::Button_Click_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//Play
	loopThreadHandler();
	playing68 = true;
	//Await end
}

void SimpG::TrackPage68::clearTrack() {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 6; j++) {
			beatList68[i][j] = false;
		}
	}
}

void SimpG::TrackPage68::beatTap(int instrument, int location) {
	beatList68[location][instrument] = !beatList68[location][instrument];
}
void SimpG::TrackPage68::clear_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//clears track
	clearTrack();
	//pause
	playing68 = false;
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


void SimpG::TrackPage68::Pause_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//Create cancellation token
	playing68 = false;

}
//Methods for sampling sound
void SimpG::TrackPage68::sampleKick(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	_1000001->Play();
}
void SimpG::TrackPage68::sampleSnare(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	_1000010->Play();
}
void SimpG::TrackPage68::sampleOhat(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	_1000100->Play();
}
void SimpG::TrackPage68::sampleTom(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	_1001000->Play();
}
void SimpG::TrackPage68::sampleChat(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	_1010000->Play();
}
void SimpG::TrackPage68::sampleClap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	_1100000->Play();
}
void SimpG::TrackPage68::loc1tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 1);
	if (playing68) {
		playing68 = false;
		//Must sleep for tempo time
		Sleep(sleepTime68);
		loopThreadHandler();
		playing68 = true;
	}
}
void SimpG::TrackPage68::loc2tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 2);
	if (playing68) {
		playing68 = false;
		//Must sleep for tempo time
		Sleep(sleepTime68);
		loopThreadHandler();
		playing68 = true;
	}
}
void SimpG::TrackPage68::loc3tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 4);
	if (playing68) {
		playing68 = false;
		//Must sleep for tempo time
		Sleep(sleepTime68);
		loopThreadHandler();
		playing68 = true;
	}
}
void SimpG::TrackPage68::loc4tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 5);
	if (playing68) {
		playing68 = false;
		//Must sleep for tempo time
		Sleep(sleepTime68);
		loopThreadHandler();
		playing68 = true;
	}
}
void SimpG::TrackPage68::loc6tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 7);
	if (playing68) {
		playing68 = false;
		//Must sleep for tempo time
		Sleep(sleepTime68);
		loopThreadHandler();
		playing68 = true;
	}
}
void SimpG::TrackPage68::loc7tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 8);
	if (playing68) {
		playing68 = false;
		//Must sleep for tempo time
		Sleep(sleepTime68);
		loopThreadHandler();
		playing68 = true;
	}
}
void SimpG::TrackPage68::loc8tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 10);
	if (playing68) {
		playing68 = false;
		//Must sleep for tempo time
		Sleep(sleepTime68);
		loopThreadHandler();
		playing68 = true;
	}
}
void SimpG::TrackPage68::loc9tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 11);
	if (playing68) {
		playing68 = false;
		//Must sleep for tempo time
		Sleep(sleepTime68);
		loopThreadHandler();
		playing68 = true;
	}
}
void SimpG::TrackPage68::loc11tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 13);
	if (playing68) {
		playing68 = false;
		//Must sleep for tempo time
		Sleep(sleepTime68);
		loopThreadHandler();
		playing68 = true;
	}
}
void SimpG::TrackPage68::loc12tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 14);
	if (playing68) {
		playing68 = false;
		//Must sleep for tempo time
		Sleep(sleepTime68);
		loopThreadHandler();
		playing68 = true;
	}
}
void SimpG::TrackPage68::loc13tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 16);
	if (playing68) {
		playing68 = false;
		//Must sleep for tempo time
		Sleep(sleepTime68);
		loopThreadHandler();
		playing68 = true;
	}
}
void SimpG::TrackPage68::loc14tap(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e) {
	trackGrid->SetColumn(playhead, 17);
	if (playing68) {
		playing68 = false;
		//Must sleep for tempo time
		Sleep(sleepTime68);
		loopThreadHandler();
		playing68 = true;
	}
}