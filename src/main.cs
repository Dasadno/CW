using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CountryGame
{
    public class main
    {
        static public void Main(string[] args)
        {

            DataCollector collector = new DataCollector();
            List<string> list = new List<string>();
            list = collector.GetCountryList();
            foreach (string item in list)
            {
                Console.WriteLine(item);
            }
            DataCollector collector2 = new DataCollector();
        }
    }
}
