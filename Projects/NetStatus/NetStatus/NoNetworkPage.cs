using System;

using Xamarin.Forms;

namespace NetStatus
{
    public class ContentPage : ContentPage
    {
        public ContentPage()
        {
            Content = new StackLayout
            {
                Children = {
                    new Label { Text = "Hello ContentPage" }
                }
            };
        }
    }
}

