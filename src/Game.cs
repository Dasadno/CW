using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CountryGame
{
    public class Game
    {
        private char _currentLetter;

        private string _lastWord;

        private int _moveOrder = 1;
         
        private Player _winner = null;       

        private List<Player> _players = new List<Player>();

        private List<Country> _CountryList = new List<Country>(247);

        public Game() 
        {
            Start();
        }
        public string LastWord { get; private set; }
        public char CurrentLetter { get; private set; }
        public List<Country> CountryList { get { return _CountryList; } }
        public List<Player> PlayersList { get { return _players; } }

        private void SetCollectorTitlesAsCountry()
        {
            DataCollector collector = new DataCollector();
            for (int i = 0; i < collector.GetCountryList().Count(); i++)
            {
                _CountryList[i].Name = collector.GetCountryList()[i];
            }
        }

        private void PlayersSheet()
        {
            Console.Clear();
            foreach (Player player in _players)
            {
                Console.WriteLine($"Player moves {player.MoveOrder} in the game,\n" +
                    $"Name: {player.Name},\n" +
                    $"Right answers: {player.RightAnswerCouner},\n" +
                    $"Last answer: {player.Answer}\n\n");
               
            }
            Console.WriteLine("Enter something to play");
            if(Console.ReadKey() != null)
            {
               // GameSheet();
            }
        }



        private void Start()
        {
                Console.Write("Enter amount of players ");
                int amounthOfPlayers = Convert.ToInt32(Console.ReadLine());
            
            
            for (int i = 1; i < amounthOfPlayers+1; i++)
            {
                Console.WriteLine($"Enter name of the player {i} : ");
                string name = Console.ReadLine();
                _players.Add(new Player { MoveOrder = i, Name = name });
            }
            
            PlayersSheet();
        }

        private bool IsAnswerRight(string answer)
        {
            foreach (Country country in CountryList)
            {
                if (country.Name == answer)
                {
                    return true;
                }
            }
            return false;

        }
        private void CheckLive()
        {
            
            if (_players[_moveOrder].Lives <= 0)
            {
                PlayersList[_moveOrder].Lives = 2;
                _moveOrder++;
            }
        }
            
    }
}