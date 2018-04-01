//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once
#include "TrackPage.xaml.h"
#include "MainPage.g.h"

namespace GUI
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void Button_Click_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
