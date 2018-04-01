//
// TrackPage.xaml.cpp
// Implementation of the TrackPage class
//

#include "pch.h"
#include "TrackPage.xaml.h"

using namespace GUI;

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

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=234238

TrackPage::TrackPage()
{
	InitializeComponent();
}


void GUI::TrackPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
}

bool kick1toggle = true;
void GUI::TrackPage::Kick1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick1toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick1->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick1->Fill = GreenBrush;
	}
	kick1toggle = !kick1toggle;
}

bool kick2toggle = true;
void GUI::TrackPage::Kick2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick2toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick2->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick2->Fill = GreenBrush;
	}
	kick2toggle = !kick2toggle;
}

bool kick3toggle = true;
void GUI::TrackPage::Kick3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick3toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick3->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick3->Fill = GreenBrush;
	}
	kick3toggle = !kick3toggle;
}

bool kick4toggle = true;
void GUI::TrackPage::Kick4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick4toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick4->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick4->Fill = GreenBrush;
	}
	kick4toggle = !kick4toggle;
}

bool kick6toggle = true;
void GUI::TrackPage::Kick6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick6toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick6->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick6->Fill = GreenBrush;
	}
	kick6toggle = !kick6toggle;
}

bool kick7toggle = true;
void GUI::TrackPage::Kick7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick7toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick7->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick7->Fill = GreenBrush;
	}
	kick7toggle = !kick7toggle;
}

bool kick8toggle = true;
void GUI::TrackPage::Kick8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick8toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick8->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick8->Fill = GreenBrush;
	}
	kick8toggle = !kick8toggle;
}

bool kick9toggle = true;
void GUI::TrackPage::Kick9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick9toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick9->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick9->Fill = GreenBrush;
	}
	kick9toggle = !kick9toggle;
}

bool kick11toggle = true;
void GUI::TrackPage::Kick11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick11toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick11->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick11->Fill = GreenBrush;
	}
	kick11toggle = !kick11toggle;
}

bool kick12toggle = true;
void GUI::TrackPage::Kick12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick12toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick12->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick12->Fill = GreenBrush;
	}
	kick12toggle = !kick12toggle;
}

bool kick13toggle = true;
void GUI::TrackPage::Kick13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick13toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick13->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick13->Fill = GreenBrush;
	}
	kick13toggle = !kick13toggle;
}

bool kick14toggle = true;
void GUI::TrackPage::Kick14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick14toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick14->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick14->Fill = GreenBrush;
	}
	kick14toggle = !kick14toggle;
}

bool kick16toggle = true;
void GUI::TrackPage::Kick16_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick16toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick16->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick16->Fill = GreenBrush;
	}
	kick16toggle = !kick16toggle;
}

bool kick17toggle = true;
void GUI::TrackPage::Kick17_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick17toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick17->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick17->Fill = GreenBrush;
	}
	kick17toggle = !kick17toggle;
}

bool kick18toggle = true;
void GUI::TrackPage::Kick18_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick18toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick18->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick18->Fill = GreenBrush;
	}
	kick18toggle = !kick18toggle;
}

bool kick19toggle = true;
void GUI::TrackPage::Kick19_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (kick19toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Kick19->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Kick19->Fill = GreenBrush;
	}
	kick19toggle = !kick19toggle;
}

bool snare1toggle = true;
void GUI::TrackPage::Snare1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare1toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare1->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare1->Fill = GreenBrush;
	}
	snare1toggle = !snare1toggle;
}

bool snare2toggle = true;
void GUI::TrackPage::Snare2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare2toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare2->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare2->Fill = GreenBrush;
	}
	snare2toggle = !snare2toggle;
}

bool snare3toggle = true;
void GUI::TrackPage::Snare3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare3toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare3->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare3->Fill = GreenBrush;
	}
	snare3toggle = !snare3toggle;
}

bool snare4toggle = true;
void GUI::TrackPage::Snare4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare4toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare4->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare4->Fill = GreenBrush;
	}
	snare4toggle = !snare4toggle;
}

bool snare6toggle = true;
void GUI::TrackPage::Snare6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare6toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare6->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare6->Fill = GreenBrush;
	}
	snare6toggle = !snare6toggle;
}

bool snare7toggle = true;
void GUI::TrackPage::Snare7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare7toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare7->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare7->Fill = GreenBrush;
	}
	snare7toggle = !snare7toggle;
}

bool snare8toggle = true;
void GUI::TrackPage::Snare8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare8toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare8->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare8->Fill = GreenBrush;
	}
	snare8toggle = !snare8toggle;
}

bool snare9toggle = true;
void GUI::TrackPage::Snare9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare9toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare9->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare9->Fill = GreenBrush;
	}
	snare9toggle = !snare9toggle;
}

bool snare11toggle = true;
void GUI::TrackPage::Snare11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare11toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare11->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare11->Fill = GreenBrush;
	}
	snare11toggle = !snare11toggle;
}

bool snare12toggle = true;
void GUI::TrackPage::Snare12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare12toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare12->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare12->Fill = GreenBrush;
	}
	snare12toggle = !snare12toggle;
}

bool snare13toggle = true;
void GUI::TrackPage::Snare13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare13toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare13->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare13->Fill = GreenBrush;
	}
	snare13toggle = !snare13toggle;
}

bool snare14toggle = true;
void GUI::TrackPage::Snare14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare14toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare14->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare14->Fill = GreenBrush;
	}
	snare14toggle = !snare14toggle;
}

bool snare16toggle = true;
void GUI::TrackPage::Snare16_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare16toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare16->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare16->Fill = GreenBrush;
	}
	snare16toggle = !snare16toggle;
}

bool snare17toggle = true;
void GUI::TrackPage::Snare17_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare17toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare17->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare17->Fill = GreenBrush;
	}
	snare17toggle = !snare17toggle;
}

bool snare18toggle = true;
void GUI::TrackPage::Snare18_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare18toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare18->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare18->Fill = GreenBrush;
	}
	snare18toggle = !snare18toggle;
}

bool snare19toggle = true;
void GUI::TrackPage::Snare19_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (snare19toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Snare19->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Snare19->Fill = GreenBrush;
	}
	snare19toggle = !snare19toggle;
}

bool clap1toggle = true;
void GUI::TrackPage::Clap1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap1toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap1->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap1->Fill = GreenBrush;
	}
	clap1toggle = !clap1toggle;
}

bool clap2toggle = true;
void GUI::TrackPage::Clap2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap2toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap2->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap2->Fill = GreenBrush;
	}
	clap2toggle = !clap2toggle;
}

bool clap3toggle = true;
void GUI::TrackPage::Clap3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap3toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap3->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap3->Fill = GreenBrush;
	}
	clap3toggle = !clap3toggle;
}

bool clap4toggle = true;
void GUI::TrackPage::Clap4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap4toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap4->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap4->Fill = GreenBrush;
	}
	clap4toggle = !clap4toggle;
}

bool clap6toggle = true;
void GUI::TrackPage::Clap6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap6toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap6->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap6->Fill = GreenBrush;
	}
	clap6toggle = !clap6toggle;
}

bool clap7toggle = true;
void GUI::TrackPage::Clap7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap7toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap7->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap7->Fill = GreenBrush;
	}
	clap7toggle = !clap7toggle;
}

bool clap8toggle = true;
void GUI::TrackPage::Clap8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap8toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap8->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap8->Fill = GreenBrush;
	}
	clap8toggle = !clap8toggle;
}

bool clap9toggle = true;
void GUI::TrackPage::Clap9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap9toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap9->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap9->Fill = GreenBrush;
	}
	clap9toggle = !clap9toggle;
}

bool clap11toggle = true;
void GUI::TrackPage::Clap11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap11toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap11->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap11->Fill = GreenBrush;
	}
	clap11toggle = !clap11toggle;
}

bool clap12toggle = true;
void GUI::TrackPage::Clap12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap12toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap12->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap12->Fill = GreenBrush;
	}
	clap12toggle = !clap12toggle;
}

bool clap13toggle = true;
void GUI::TrackPage::Clap13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap13toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap13->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap13->Fill = GreenBrush;
	}
	clap13toggle = !clap13toggle;
}

bool clap14toggle = true;
void GUI::TrackPage::Clap14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap14toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap14->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap14->Fill = GreenBrush;
	}
	clap14toggle = !clap14toggle;
}

bool clap16toggle = true;
void GUI::TrackPage::Clap16_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap16toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap16->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap16->Fill = GreenBrush;
	}
	clap16toggle = !clap16toggle;
}

bool clap17toggle = true;
void GUI::TrackPage::Clap17_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap17toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap17->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap17->Fill = GreenBrush;
	}
	clap17toggle = !clap17toggle;
}

bool clap18toggle = true;
void GUI::TrackPage::Clap18_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap18toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap18->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap18->Fill = GreenBrush;
	}
	clap18toggle = !clap18toggle;
}

bool clap19toggle = true;
void GUI::TrackPage::Clap19_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (clap19toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Clap19->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Clap19->Fill = GreenBrush;
	}
	clap19toggle = !clap19toggle;
}

bool oHat1toggle = true;
void GUI::TrackPage::OHat1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat1toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat1->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat1->Fill = GreenBrush;
	}
	oHat1toggle = !oHat1toggle;
}

bool oHat2toggle = true;
void GUI::TrackPage::OHat2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat2toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat2->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat2->Fill = GreenBrush;
	}
	oHat2toggle = !oHat2toggle;
}

bool oHat3toggle = true;
void GUI::TrackPage::OHat3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat3toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat3->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat3->Fill = GreenBrush;
	}
	oHat3toggle = !oHat3toggle;
}

bool oHat4toggle = true;
void GUI::TrackPage::OHat4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat4toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat4->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat4->Fill = GreenBrush;
	}
	oHat4toggle = !oHat4toggle;
}

bool oHat6toggle = true;
void GUI::TrackPage::OHat6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat6toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat6->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat6->Fill = GreenBrush;
	}
	oHat6toggle = !oHat6toggle;
}

bool oHat7toggle = true;
void GUI::TrackPage::OHat7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat7toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat7->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat7->Fill = GreenBrush;
	}
	oHat7toggle = !oHat7toggle;
}

bool oHat8toggle = true;
void GUI::TrackPage::OHat8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat8toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat8->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat8->Fill = GreenBrush;
	}
	oHat8toggle = !oHat8toggle;
}

bool oHat9toggle = true;
void GUI::TrackPage::OHat9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat9toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat9->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat9->Fill = GreenBrush;
	}
	oHat9toggle = !oHat9toggle;
}

bool oHat11toggle = true;
void GUI::TrackPage::OHat11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat11toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat11->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat11->Fill = GreenBrush;
	}
	oHat11toggle = !oHat11toggle;
}

bool oHat12toggle = true;
void GUI::TrackPage::OHat12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat12toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat12->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat12->Fill = GreenBrush;
	}
	oHat12toggle = !oHat12toggle;
}

bool oHat13toggle = true;
void GUI::TrackPage::OHat13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat13toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat13->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat13->Fill = GreenBrush;
	}
	oHat13toggle = !oHat13toggle;
}

bool oHat14toggle = true;
void GUI::TrackPage::OHat14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat14toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat14->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat14->Fill = GreenBrush;
	}
	oHat14toggle = !oHat14toggle;
}

bool oHat16toggle = true;
void GUI::TrackPage::OHat16_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat16toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat16->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat16->Fill = GreenBrush;
	}
	oHat16toggle = !oHat16toggle;
}

bool oHat17toggle = true;
void GUI::TrackPage::OHat17_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat17toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat17->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat17->Fill = GreenBrush;
	}
	oHat17toggle = !oHat17toggle;
}

bool oHat18toggle = true;
void GUI::TrackPage::OHat18_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat18toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat18->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat18->Fill = GreenBrush;
	}
	oHat18toggle = !oHat18toggle;
}

bool oHat19toggle = true;
void GUI::TrackPage::OHat19_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (oHat19toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		OHat19->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		OHat19->Fill = GreenBrush;
	}
	oHat19toggle = !oHat19toggle;
}

bool cHat1toggle = true;
void GUI::TrackPage::CHat1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat1toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat1->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat1->Fill = GreenBrush;
	}
	cHat1toggle = !cHat1toggle;
}

bool cHat2toggle = true;
void GUI::TrackPage::CHat2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat2toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat2->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat2->Fill = GreenBrush;
	}
	cHat2toggle = !cHat2toggle;
}

bool cHat3toggle = true;
void GUI::TrackPage::CHat3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat3toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat3->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat3->Fill = GreenBrush;
	}
	cHat3toggle = !cHat3toggle;
}

bool cHat4toggle = true;
void GUI::TrackPage::CHat4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat4toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat4->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat4->Fill = GreenBrush;
	}
	cHat4toggle = !cHat4toggle;
}

bool cHat6toggle = true;
void GUI::TrackPage::CHat6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat6toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat6->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat6->Fill = GreenBrush;
	}
	cHat6toggle = !cHat6toggle;
}

bool cHat7toggle = true;
void GUI::TrackPage::CHat7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat7toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat7->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat7->Fill = GreenBrush;
	}
	cHat7toggle = !cHat7toggle;
}

bool cHat8toggle = true;
void GUI::TrackPage::CHat8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat8toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat8->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat8->Fill = GreenBrush;
	}
	cHat8toggle = !cHat8toggle;
}

bool cHat9toggle = true;
void GUI::TrackPage::CHat9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat9toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat9->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat9->Fill = GreenBrush;
	}
	cHat9toggle = !cHat9toggle;
}

bool cHat11toggle = true;
void GUI::TrackPage::CHat11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat11toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat11->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat11->Fill = GreenBrush;
	}
	cHat11toggle = !cHat11toggle;
}

bool cHat12toggle = true;
void GUI::TrackPage::CHat12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat12toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat12->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat12->Fill = GreenBrush;
	}
	cHat12toggle = !cHat12toggle;
}

bool cHat13toggle = true;
void GUI::TrackPage::CHat13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat13toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat13->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat13->Fill = GreenBrush;
	}
	cHat13toggle = !cHat13toggle;
}

bool cHat14toggle = true;
void GUI::TrackPage::CHat14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat14toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat14->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat14->Fill = GreenBrush;
	}
	cHat14toggle = !cHat14toggle;
}

bool cHat16toggle = true;
void GUI::TrackPage::CHat16_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat16toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat16->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat16->Fill = GreenBrush;
	}
	cHat16toggle = !cHat16toggle;
}

bool cHat17toggle = true;
void GUI::TrackPage::CHat17_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat17toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat17->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat17->Fill = GreenBrush;
	}
	cHat17toggle = !cHat17toggle;
}

bool cHat18toggle = true;
void GUI::TrackPage::CHat18_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat18toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat18->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat18->Fill = GreenBrush;
	}
	cHat18toggle = !cHat18toggle;
}

bool cHat19toggle = true;
void GUI::TrackPage::CHat19_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (cHat19toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		CHat19->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		CHat19->Fill = GreenBrush;
	}
	cHat19toggle = !cHat19toggle;
}

bool tom1toggle = true;
void GUI::TrackPage::Tom1_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom1toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom1->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom1->Fill = GreenBrush;
	}
	tom1toggle = !tom1toggle;
}

bool tom2toggle = true;
void GUI::TrackPage::Tom2_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom2toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom2->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom2->Fill = GreenBrush;
	}
	tom2toggle = !tom2toggle;
}

bool tom3toggle = true;
void GUI::TrackPage::Tom3_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom3toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom3->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom3->Fill = GreenBrush;
	}
	tom3toggle = !tom3toggle;
}

bool tom4toggle = true;
void GUI::TrackPage::Tom4_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom4toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom4->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom4->Fill = GreenBrush;
	}
	tom4toggle = !tom4toggle;
}

bool tom6toggle = true;
void GUI::TrackPage::Tom6_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom6toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom6->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom6->Fill = GreenBrush;
	}
	tom6toggle = !tom6toggle;
}

bool tom7toggle = true;
void GUI::TrackPage::Tom7_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom7toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom7->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom7->Fill = GreenBrush;
	}
	tom7toggle = !tom7toggle;
}

bool tom8toggle = true;
void GUI::TrackPage::Tom8_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom8toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom8->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom8->Fill = GreenBrush;
	}
	tom8toggle = !tom8toggle;
}

bool tom9toggle = true;
void GUI::TrackPage::Tom9_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom9toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom9->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom9->Fill = GreenBrush;
	}
	tom9toggle = !tom9toggle;
}

bool tom11toggle = true;
void GUI::TrackPage::Tom11_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom11toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom11->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom11->Fill = GreenBrush;
	}
	tom11toggle = !tom11toggle;
}

bool tom12toggle = true;
void GUI::TrackPage::Tom12_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom12toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom12->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom12->Fill = GreenBrush;
	}
	tom12toggle = !tom12toggle;
}

bool tom13toggle = true;
void GUI::TrackPage::Tom13_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom13toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom13->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom13->Fill = GreenBrush;
	}
	tom13toggle = !tom13toggle;
}

bool tom14toggle = true;
void GUI::TrackPage::Tom14_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom14toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom14->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom14->Fill = GreenBrush;
	}
	tom14toggle = !tom14toggle;
}

bool tom16toggle = true;
void GUI::TrackPage::Tom16_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom16toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom16->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom16->Fill = GreenBrush;
	}
	tom16toggle = !tom16toggle;
}

bool tom17toggle = true;
void GUI::TrackPage::Tom17_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom17toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom17->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom17->Fill = GreenBrush;
	}
	tom17toggle = !tom17toggle;
}

bool tom18toggle = true;
void GUI::TrackPage::Tom18_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom18toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom18->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom18->Fill = GreenBrush;
	}
	tom18toggle = !tom18toggle;
}

bool tom19toggle = true;
void GUI::TrackPage::Tom19_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	if (tom19toggle) {
		auto darkGreenBrush = ref new SolidColorBrush(Windows::UI::Colors::DarkGreen);
		Tom19->Fill = darkGreenBrush;
	}
	else {
		auto GreenBrush = ref new SolidColorBrush(Windows::UI::Colors::Green);
		Tom19->Fill = GreenBrush;
	}
	tom19toggle = !tom19toggle;
}


void GUI::TrackPage::Kick1_PointerEntered(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{

}
