using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using System.Globalization;
using System.Security.Policy;


namespace CountryGame
{
    public class DataCollector
    {
        

        private static DataCollector _instance;

        public DataCollector() { }

        public static DataCollector getInstance()
        {
            if (_instance == null)
                _instance = new DataCollector();
            return _instance;
        }

        static public void SaveTowns(List<Country> townList)
        {
            string path = "..\\res\\content.txt";
            FileInfo fi = new FileInfo(path);
            if (fi.Exists) 
                {

                }
            else
            {
                
            }
        }
        public static List<string> CountryNameList()
        {
            List<string> CultureList = new List<string>();

            CultureInfo[] getCultureInfo = CultureInfo.GetCultures(CultureTypes.SpecificCultures);

            foreach (CultureInfo getCulture in getCultureInfo)
            {
                RegionInfo GetRegionInfo = new RegionInfo(getCulture.LCID);
                if(!(CUlturList.Containts(GetRegionInfo.EnglishName)))
                {
                    CultureList.Add(GetRegionInfo.EnglishName);
                }
            }
            return CultureList;
        }
    }
}


