using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Net.Mime;
using System.Text;
using System.Threading.Tasks;

namespace TownsGame
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

        static public void SaveTowns(List<Town> townList)
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
    }
}
