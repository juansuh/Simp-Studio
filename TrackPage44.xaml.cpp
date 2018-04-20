//
// TrackPage44.xaml.cpp
// Implementation of the TrackPage44 class
//

#include "pch.h"
#include "TrackPage44.xaml.h"
#include "Sound.h"
#include "Track1.h"
#include <vector>
#include <iostream>
#include <ppltasks.h>
#include <concrt.h>
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

TrackPage44::TrackPage44()
{
	InitializeComponent();
}
Track1 track(60, 1);
bool playing = false;
int tempo = 60;
int sleepTime = 10000000 * 60 / tempo;

void SimpG::TrackPage44::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	track.clear();
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
}

bool kick1toggle = true;
void SimpG::TrackPage44::Kick1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 0);
	if (kick1toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick1->Fill = ReturnColor;
	}
	kick1toggle = !kick1toggle;
}

bool kick2toggle = true;
void SimpG::TrackPage44::Kick2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 1);
	if (kick2toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick2->Fill = ReturnColor;
	}
	kick2toggle = !kick2toggle;
}

bool kick3toggle = true;
void SimpG::TrackPage44::Kick3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 2);
	if (kick3toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick3->Fill = ReturnColor;
	}
	kick3toggle = !kick3toggle;
}

bool kick4toggle = true;
void SimpG::TrackPage44::Kick4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 3);
	if (kick4toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick4->Fill = ReturnColor;
	}
	kick4toggle = !kick4toggle;
}

bool kick6toggle = true;
void SimpG::TrackPage44::Kick6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 4);
	if (kick6toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick6->Fill = ReturnColor;
	}
	kick6toggle = !kick6toggle;
}

bool kick7toggle = true;
void SimpG::TrackPage44::Kick7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 5);
	if (kick7toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick7->Fill = ReturnColor;
	}
	kick7toggle = !kick7toggle;
}

bool kick8toggle = true;
void SimpG::TrackPage44::Kick8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 6);
	if (kick8toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick8->Fill = ReturnColor;
	}
	kick8toggle = !kick8toggle;
}

bool kick9toggle = true;
void SimpG::TrackPage44::Kick9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 7);
	if (kick9toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick9->Fill = ReturnColor;
	}
	kick9toggle = !kick9toggle;
}

bool kick11toggle = true;
void SimpG::TrackPage44::Kick11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 8);
	if (kick11toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick11->Fill = ReturnColor;
	}
	kick11toggle = !kick11toggle;
}

bool kick12toggle = true;
void SimpG::TrackPage44::Kick12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 9);
	if (kick12toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick12->Fill = ReturnColor;
	}
	kick12toggle = !kick12toggle;
}

bool kick13toggle = true;
void SimpG::TrackPage44::Kick13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 10);
	if (kick13toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick13->Fill = ReturnColor;
	}
	kick13toggle = !kick13toggle;
}

bool kick14toggle = true;
void SimpG::TrackPage44::Kick14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 11);
	if (kick14toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick14->Fill = ReturnColor;
	}
	kick14toggle = !kick14toggle;
}

bool kick16toggle = true;
void SimpG::TrackPage44::Kick16_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 12);
	if (kick16toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick16->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick16->Fill = ReturnColor;
	}
	kick16toggle = !kick16toggle;
}

bool kick17toggle = true;
void SimpG::TrackPage44::Kick17_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 13);
	if (kick17toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick17->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick17->Fill = ReturnColor;
	}
	kick17toggle = !kick17toggle;
}

bool kick18toggle = true;
void SimpG::TrackPage44::Kick18_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 14);
	if (kick18toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick18->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick18->Fill = ReturnColor;
	}
	kick18toggle = !kick18toggle;
}

bool kick19toggle = true;
void SimpG::TrackPage44::Kick19_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(0, 15);
	if (kick19toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Kick19->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Kick19->Fill = ReturnColor;
	}
	kick19toggle = !kick19toggle;
}

bool snare1toggle = true;
void SimpG::TrackPage44::Snare1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 0);
	if (snare1toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare1->Fill = ReturnColor;
	}
	snare1toggle = !snare1toggle;
}

bool snare2toggle = true;
void SimpG::TrackPage44::Snare2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 1);
	if (snare2toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare2->Fill = ReturnColor;
	}
	snare2toggle = !snare2toggle;
}

bool snare3toggle = true;
void SimpG::TrackPage44::Snare3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 2);
	if (snare3toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare3->Fill = ReturnColor;
	}
	snare3toggle = !snare3toggle;
}

bool snare4toggle = true;
void SimpG::TrackPage44::Snare4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 3);
	if (snare4toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare4->Fill = ReturnColor;
	}
	snare4toggle = !snare4toggle;
}

bool snare6toggle = true;
void SimpG::TrackPage44::Snare6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 4);
	if (snare6toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare6->Fill = ReturnColor;
	}
	snare6toggle = !snare6toggle;
}

bool snare7toggle = true;
void SimpG::TrackPage44::Snare7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 5);
	if (snare7toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare7->Fill = ReturnColor;
	}
	snare7toggle = !snare7toggle;
}

bool snare8toggle = true;
void SimpG::TrackPage44::Snare8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 6);
	if (snare8toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare8->Fill = ReturnColor;
	}
	snare8toggle = !snare8toggle;
}

bool snare9toggle = true;
void SimpG::TrackPage44::Snare9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 7);
	if (snare9toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare9->Fill = ReturnColor;
	}
	snare9toggle = !snare9toggle;
}

bool snare11toggle = true;
void SimpG::TrackPage44::Snare11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 8);
	if (snare11toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare11->Fill = ReturnColor;
	}
	snare11toggle = !snare11toggle;
}

bool snare12toggle = true;
void SimpG::TrackPage44::Snare12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 9);
	if (snare12toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare12->Fill = ReturnColor;
	}
	snare12toggle = !snare12toggle;
}

bool snare13toggle = true;
void SimpG::TrackPage44::Snare13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 10);
	if (snare13toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare13->Fill = ReturnColor;
	}
	snare13toggle = !snare13toggle;
}

bool snare14toggle = true;
void SimpG::TrackPage44::Snare14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 11);
	if (snare14toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare14->Fill = ReturnColor;
	}
	snare14toggle = !snare14toggle;
}

bool snare16toggle = true;
void SimpG::TrackPage44::Snare16_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 12);
	if (snare16toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare16->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare16->Fill = ReturnColor;
	}
	snare16toggle = !snare16toggle;
}

bool snare17toggle = true;
void SimpG::TrackPage44::Snare17_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 13);
	if (snare17toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare17->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare17->Fill = ReturnColor;
	}
	snare17toggle = !snare17toggle;
}

bool snare18toggle = true;
void SimpG::TrackPage44::Snare18_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 14);
	if (snare18toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare18->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare18->Fill = ReturnColor;
	}
	snare18toggle = !snare18toggle;
}

bool snare19toggle = true;
void SimpG::TrackPage44::Snare19_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(1, 15);
	if (snare19toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Snare19->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Snare19->Fill = ReturnColor;
	}
	snare19toggle = !snare19toggle;
}

bool clap1toggle = true;
void SimpG::TrackPage44::Clap1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 0);
	if (clap1toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap1->Fill = ReturnColor;
	}
	clap1toggle = !clap1toggle;
}

bool clap2toggle = true;
void SimpG::TrackPage44::Clap2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 1);
	if (clap2toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap2->Fill = ReturnColor;
	}
	clap2toggle = !clap2toggle;
}

bool clap3toggle = true;
void SimpG::TrackPage44::Clap3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 2);
	if (clap3toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap3->Fill = ReturnColor;
	}
	clap3toggle = !clap3toggle;
}

bool clap4toggle = true;
void SimpG::TrackPage44::Clap4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 3);
	if (clap4toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap4->Fill = ReturnColor;
	}
	clap4toggle = !clap4toggle;
}

bool clap6toggle = true;
void SimpG::TrackPage44::Clap6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 4);
	if (clap6toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap6->Fill = ReturnColor;
	}
	clap6toggle = !clap6toggle;
}

bool clap7toggle = true;
void SimpG::TrackPage44::Clap7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 5);
	if (clap7toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap7->Fill = ReturnColor;
	}
	clap7toggle = !clap7toggle;
}

bool clap8toggle = true;
void SimpG::TrackPage44::Clap8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 6);
	if (clap8toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap8->Fill = ReturnColor;
	}
	clap8toggle = !clap8toggle;
}

bool clap9toggle = true;
void SimpG::TrackPage44::Clap9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 7);
	if (clap9toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap9->Fill = ReturnColor;
	}
	clap9toggle = !clap9toggle;
}

bool clap11toggle = true;
void SimpG::TrackPage44::Clap11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 8);
	if (clap11toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap11->Fill = ReturnColor;
	}
	clap11toggle = !clap11toggle;
}

bool clap12toggle = true;
void SimpG::TrackPage44::Clap12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 9);
	if (clap12toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap12->Fill = ReturnColor;
	}
	clap12toggle = !clap12toggle;
}

bool clap13toggle = true;
void SimpG::TrackPage44::Clap13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 10);
	if (clap13toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap13->Fill = ReturnColor;
	}
	clap13toggle = !clap13toggle;
}

bool clap14toggle = true;
void SimpG::TrackPage44::Clap14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 11);
	if (clap14toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap14->Fill = ReturnColor;
	}
	clap14toggle = !clap14toggle;
}

bool clap16toggle = true;
void SimpG::TrackPage44::Clap16_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 12);
	if (clap16toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap16->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap16->Fill = ReturnColor;
	}
	clap16toggle = !clap16toggle;
}

bool clap17toggle = true;
void SimpG::TrackPage44::Clap17_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 13);
	if (clap17toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap17->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap17->Fill = ReturnColor;
	}
	clap17toggle = !clap17toggle;
}

bool clap18toggle = true;
void SimpG::TrackPage44::Clap18_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 14);
	if (clap18toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap18->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap18->Fill = ReturnColor;
	}
	clap18toggle = !clap18toggle;
}

bool clap19toggle = true;
void SimpG::TrackPage44::Clap19_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(2, 15);
	if (clap19toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Clap19->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		Clap19->Fill = ReturnColor;
	}
	clap19toggle = !clap19toggle;
}

bool oHat1toggle = true;
void SimpG::TrackPage44::OHat1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 0);
	if (oHat1toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat1->Fill = ReturnColor;
	}
	oHat1toggle = !oHat1toggle;
}

bool oHat2toggle = true;
void SimpG::TrackPage44::OHat2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 1);
	if (oHat2toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat2->Fill = ReturnColor;
	}
	oHat2toggle = !oHat2toggle;
}

bool oHat3toggle = true;
void SimpG::TrackPage44::OHat3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 2);
	if (oHat3toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat3->Fill = ReturnColor;
	}
	oHat3toggle = !oHat3toggle;
}

bool oHat4toggle = true;
void SimpG::TrackPage44::OHat4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 3);
	if (oHat4toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat4->Fill = ReturnColor;
	}
	oHat4toggle = !oHat4toggle;
}

bool oHat6toggle = true;
void SimpG::TrackPage44::OHat6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 4);
	if (oHat6toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat6->Fill = ReturnColor;
	}
	oHat6toggle = !oHat6toggle;
}

bool oHat7toggle = true;
void SimpG::TrackPage44::OHat7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 5);
	if (oHat7toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat7->Fill = ReturnColor;
	}
	oHat7toggle = !oHat7toggle;
}

bool oHat8toggle = true;
void SimpG::TrackPage44::OHat8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 6);
	if (oHat8toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat8->Fill = ReturnColor;
	}
	oHat8toggle = !oHat8toggle;
}

bool oHat9toggle = true;
void SimpG::TrackPage44::OHat9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 7);
	if (oHat9toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat9->Fill = ReturnColor;
	}
	oHat9toggle = !oHat9toggle;
}

bool oHat11toggle = true;
void SimpG::TrackPage44::OHat11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 8);
	if (oHat11toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat11->Fill = ReturnColor;
	}
	oHat11toggle = !oHat11toggle;
}

bool oHat12toggle = true;
void SimpG::TrackPage44::OHat12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 9);
	if (oHat12toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat12->Fill = ReturnColor;
	}
	oHat12toggle = !oHat12toggle;
}

bool oHat13toggle = true;
void SimpG::TrackPage44::OHat13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 10);
	if (oHat13toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat13->Fill = ReturnColor;
	}
	oHat13toggle = !oHat13toggle;
}

bool oHat14toggle = true;
void SimpG::TrackPage44::OHat14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 11);
	if (oHat14toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat14->Fill = ReturnColor;
	}
	oHat14toggle = !oHat14toggle;
}

bool oHat16toggle = true;
void SimpG::TrackPage44::OHat16_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 12);
	if (oHat16toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat16->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat16->Fill = ReturnColor;
	}
	oHat16toggle = !oHat16toggle;
}

bool oHat17toggle = true;
void SimpG::TrackPage44::OHat17_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 13);
	if (oHat17toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat17->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat17->Fill = ReturnColor;
	}
	oHat17toggle = !oHat17toggle;
}

bool oHat18toggle = true;
void SimpG::TrackPage44::OHat18_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 14);
	if (oHat18toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat18->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat18->Fill = ReturnColor;
	}
	oHat18toggle = !oHat18toggle;
}

bool oHat19toggle = true;
void SimpG::TrackPage44::OHat19_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(3, 15);
	if (oHat19toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		OHat19->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		OHat19->Fill = ReturnColor;
	}
	oHat19toggle = !oHat19toggle;
}

bool cHat1toggle = true;
void SimpG::TrackPage44::CHat1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 0);
	if (cHat1toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat1->Fill = ReturnColor;
	}
	cHat1toggle = !cHat1toggle;
}

bool cHat2toggle = true;
void SimpG::TrackPage44::CHat2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 1);
	if (cHat2toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat2->Fill = ReturnColor;
	}
	cHat2toggle = !cHat2toggle;
}

bool cHat3toggle = true;
void SimpG::TrackPage44::CHat3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 2);
	if (cHat3toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat3->Fill = ReturnColor;
	}
	cHat3toggle = !cHat3toggle;
}

bool cHat4toggle = true;
void SimpG::TrackPage44::CHat4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 3);
	if (cHat4toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat4->Fill = ReturnColor;
	}
	cHat4toggle = !cHat4toggle;
}

bool cHat6toggle = true;
void SimpG::TrackPage44::CHat6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 4);
	if (cHat6toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat6->Fill = ReturnColor;
	}
	cHat6toggle = !cHat6toggle;
}

bool cHat7toggle = true;
void SimpG::TrackPage44::CHat7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 5);
	if (cHat7toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat7->Fill = ReturnColor;
	}
	cHat7toggle = !cHat7toggle;
}

bool cHat8toggle = true;
void SimpG::TrackPage44::CHat8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 6);
	if (cHat8toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat8->Fill = ReturnColor;
	}
	cHat8toggle = !cHat8toggle;
}

bool cHat9toggle = true;
void SimpG::TrackPage44::CHat9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 7);
	if (cHat9toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat9->Fill = ReturnColor;
	}
	cHat9toggle = !cHat9toggle;
}

bool cHat11toggle = true;
void SimpG::TrackPage44::CHat11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 8);
	if (cHat11toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat11->Fill = ReturnColor;
	}
	cHat11toggle = !cHat11toggle;
}

bool cHat12toggle = true;
void SimpG::TrackPage44::CHat12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 9);
	if (cHat12toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat12->Fill = ReturnColor;
	}
	cHat12toggle = !cHat12toggle;
}

bool cHat13toggle = true;
void SimpG::TrackPage44::CHat13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 10);
	if (cHat13toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat13->Fill = ReturnColor;
	}
	cHat13toggle = !cHat13toggle;
}

bool cHat14toggle = true;
void SimpG::TrackPage44::CHat14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 11);
	if (cHat14toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat14->Fill = ReturnColor;
	}
	cHat14toggle = !cHat14toggle;
}

bool cHat16toggle = true;
void SimpG::TrackPage44::CHat16_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 12);
	if (cHat16toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat16->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat16->Fill = ReturnColor;
	}
	cHat16toggle = !cHat16toggle;
}

bool cHat17toggle = true;
void SimpG::TrackPage44::CHat17_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 13);
	if (cHat17toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat17->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat17->Fill = ReturnColor;
	}
	cHat17toggle = !cHat17toggle;
}

bool cHat18toggle = true;
void SimpG::TrackPage44::CHat18_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 14);
	if (cHat18toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat18->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat18->Fill = ReturnColor;
	}
	cHat18toggle = !cHat18toggle;
}

bool cHat19toggle = true;
void SimpG::TrackPage44::CHat19_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(4, 15);
	if (cHat19toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		CHat19->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::DarkSlateGray);
		CHat19->Fill = ReturnColor;
	}
	cHat19toggle = !cHat19toggle;
}

bool tom1toggle = true;
void SimpG::TrackPage44::Tom1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 0);
	if (tom1toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom1->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom1->Fill = ReturnColor;
	}
	tom1toggle = !tom1toggle;
}

bool tom2toggle = true;
void SimpG::TrackPage44::Tom2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 1);
	if (tom2toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom2->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom2->Fill = ReturnColor;
	}
	tom2toggle = !tom2toggle;
}

bool tom3toggle = true;
void SimpG::TrackPage44::Tom3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 2);
	if (tom3toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom3->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom3->Fill = ReturnColor;
	}
	tom3toggle = !tom3toggle;
}

bool tom4toggle = true;
void SimpG::TrackPage44::Tom4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 3);
	if (tom4toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom4->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom4->Fill = ReturnColor;
	}
	tom4toggle = !tom4toggle;
}

bool tom6toggle = true;
void SimpG::TrackPage44::Tom6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 4);
	if (tom6toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom6->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom6->Fill = ReturnColor;
	}
	tom6toggle = !tom6toggle;
}

bool tom7toggle = true;
void SimpG::TrackPage44::Tom7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 5);
	if (tom7toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom7->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom7->Fill = ReturnColor;
	}
	tom7toggle = !tom7toggle;
}

bool tom8toggle = true;
void SimpG::TrackPage44::Tom8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 6);
	if (tom8toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom8->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom8->Fill = ReturnColor;
	}
	tom8toggle = !tom8toggle;
}

bool tom9toggle = true;
void SimpG::TrackPage44::Tom9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 7);
	if (tom9toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom9->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom9->Fill = ReturnColor;
	}
	tom9toggle = !tom9toggle;
}

bool tom11toggle = true;
void SimpG::TrackPage44::Tom11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 8);
	if (tom11toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom11->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom11->Fill = ReturnColor;
	}
	tom11toggle = !tom11toggle;
}

bool tom12toggle = true;
void SimpG::TrackPage44::Tom12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 9);
	if (tom12toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom12->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom12->Fill = ReturnColor;
	}
	tom12toggle = !tom12toggle;
}

bool tom13toggle = true;
void SimpG::TrackPage44::Tom13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 10);
	if (tom13toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom13->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom13->Fill = ReturnColor;
	}
	tom13toggle = !tom13toggle;
}

bool tom14toggle = true;
void SimpG::TrackPage44::Tom14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 11);
	if (tom14toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom14->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom14->Fill = ReturnColor;
	}
	tom14toggle = !tom14toggle;
}

bool tom16toggle = true;
void SimpG::TrackPage44::Tom16_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 12);
	if (tom16toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom16->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom16->Fill = ReturnColor;
	}
	tom16toggle = !tom16toggle;
}

bool tom17toggle = true;
void SimpG::TrackPage44::Tom17_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 13);
	if (tom17toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom17->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom17->Fill = ReturnColor;
	}
	tom17toggle = !tom17toggle;
}

bool tom18toggle = true;
void SimpG::TrackPage44::Tom18_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 14);
	if (tom18toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom18->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom18->Fill = ReturnColor;
	}
	tom18toggle = !tom18toggle;
}

bool tom19toggle = true;
void SimpG::TrackPage44::Tom19_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	track.beatTap(5, 15);
	if (tom19toggle) {
		auto whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
		Tom19->Fill = whiteBrush;
	}
	else {
		auto ReturnColor = ref new SolidColorBrush(Windows::UI::Colors::SlateGray);
		Tom19->Fill = ReturnColor;
	}
	tom19toggle = !tom19toggle;
}

cancellation_token_source cancelToken;
IAsyncActionWithProgress<int>^ SimpG::TrackPage44::play(int startColumn) {
	auto token = cancelToken.get_token();
	Sound player = new Sound(1); //PLAYER SHOULD BE INITIALIZED WHENEVER THE GENRE IS SELECTED
	return create_async([this, startColumn, token](progress_reporter<int> reporter)
	{	
		int startIndex = startColumn; // trackGrid->GetColumn(playhead);
		int counter = startColumn - (startColumn/4 + 1)
		for (int i = 0; i < 160; i++) {
			try {
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
				Sleep(1000);
				player.play(track.beatList[counter]);
					//fix parameters for sound
			} catch (task_canceled e) {
				reporter.report(21);
				cancel_current_task();
			}
			//Check on each iteration if cancellation token has been activated
			if (counter < 16) { counter++; }
			else { counter = 0; }
		}
	});
}
void SimpG::TrackPage44::loopThreadHandler() {

	cancellation_token_source pauseLoop;
	cancelToken = pauseLoop;
	auto token = pauseLoop.get_token();
	//Finds the current location of the playhead, and pass it into async lambda
	int currentColumn = trackGrid->GetColumn(playhead);
	//Create function to loop through GUI
	auto loop = play(currentColumn);
	//Track the progress and pass ito to updateProgress()
	loop->Progress = ref new AsyncActionProgressHandler<int>(this, &TrackPage44::updateProgress);
	//Pass looping function into asynchronous operation
	auto loopThread = create_task(loop, token);
	loopThread.then([this]() {
		Sleep(10);
	});
}
void SimpG::TrackPage44::updateProgress(IAsyncActionWithProgress<int>^ action, int progress) {
	//Update the GUI thread with progress values from async thread
	trackGrid->SetColumn(playhead, progress);
}
void SimpG::TrackPage44::Button_Click_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//Play
	loopThreadHandler();
	//Await end
}


void SimpG::TrackPage44::clear_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//clears track
	track.clear();
	//pause
	playing = false;
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
	Kick16->Fill = returnColor1;
	Kick17->Fill = returnColor1;
	Kick18->Fill = returnColor1;
	Kick19->Fill = returnColor1;

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
	Snare16->Fill = returnColor2;
	Snare17->Fill = returnColor2;
	Snare18->Fill = returnColor2;
	Snare19->Fill = returnColor2;

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
	Clap16->Fill = returnColor1;
	Clap17->Fill = returnColor1;
	Clap18->Fill = returnColor1;
	Clap19->Fill = returnColor1;

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
	OHat16->Fill = returnColor2;
	OHat17->Fill = returnColor2;
	OHat18->Fill = returnColor2;
	OHat19->Fill = returnColor2;

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
	CHat16->Fill = returnColor1;
	CHat17->Fill = returnColor1;
	CHat18->Fill = returnColor1;
	CHat19->Fill = returnColor1;

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
	Tom16->Fill = returnColor2;
	Tom17->Fill = returnColor2;
	Tom18->Fill = returnColor2;
	Tom19->Fill = returnColor2;
}


void SimpG::TrackPage44::Pause_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//Create cancellation token
	cancelToken.cancel();
}
