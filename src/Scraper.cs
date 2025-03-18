using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;

namespace TownsGame
{
    public class Scraper
    {
        static async Task Main()
        {
            string url = "https://ru.wikipedia.org/wiki/%D0%A1%D0%BF%D0%B8%D1%81%D0%BE%D0%BA_%D0%B3%D0%BE%D1%80%D0%BE%D0%B4%D0%BE%D0%B2_%D0%BC%D0%B8%D1%80%D0%B0#%D0%93%D0%BE%D1%80%D0%BE%D0%B4";

            using (HttpClient client = new HttpClient())
            {
                HttpResponseMessage r = await client.GetAsync(url);

                string htmlContent = await r.Content.ReadAsStringAsync();
                Console.WriteLine(htmlContent);
            }
        }
    }
}
