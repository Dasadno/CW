using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using System.Globalization;
using System.Security.Policy;
using System.Collections;


namespace CountryGame
{
    public class DataCollector
    {
        private static DataCollector _instance;

        public DataCollector() 
        {
            SaveCountries();
        }

        public static DataCollector getInstance()
        {
            if (_instance == null)
                _instance = new DataCollector();
            return _instance;
        }

        public List<string> GetCountryList()
        {
            string path = "C:\\Users\\1\\source\\repos\\CountryGame\\CountryGame\\res\\content.txt"; // Relative path will be better
            var list = File.ReadAllLines(path).ToList();

            return list;
        } 
        private void SaveCountries()
        {
            string path = "C:\\Users\\1\\source\\repos\\CountryGame\\CountryGame\\res\\content.txt"; // Relative path will be better
            FileInfo fileInf = new FileInfo(path);
           

            if (!fileInf.Exists)
            {
                fileInf.Create(); 
           
            }
            TextWriter tw = new StreamWriter(path);
            foreach (string s in CountriesTitleList())
            {
                tw.WriteLine(s);
            }
            tw.Close();
        }
        private static List<string> CountriesTitleList()
        {
            List<string> CultureList = new List<string>();

            CultureInfo[] getCultureInfo = CultureInfo.GetCultures(CultureTypes.SpecificCultures);

            foreach (CultureInfo getCulture in getCultureInfo)
            {
                RegionInfo GetRegionInfo = new RegionInfo(getCulture.Name);
                if(!(CultureList.Contains(GetRegionInfo.EnglishName)))
                {
                    CultureList.Add(GetRegionInfo.EnglishName);
                }
            }
            return CultureList;
        }

    }
}


