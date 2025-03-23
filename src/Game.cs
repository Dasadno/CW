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

        public Game() { }
        public string LastWord { get; private set; }
        public char CurrentLetter { get; private set; }
        public List<Country> CountryList { get; }
        public List<Player> PlayersList { get; }

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
            foreach (Player player in PlayersList)
            {
                Console.WriteLine($"Player moves {player.MoveOrder} in the game,\n" +
                    $"Name: {player.Name},\n" +
                    $"Right answers: {player.RightAnswerCouner},\n" +
                    $"Last answer: {player.Answer}\n\n");
               
            }
            Console.WriteLine("Press any button to play");
            Console.ReadKey();
            GameSheet();

        }



        private void Start()
        {
            
                Console.WriteLine("Enter amount of players: ");
                int amounthOfPlayers = Convert.ToInt32(Console.Read());
            
            
            for (int i = 1; i <= amounthOfPlayers; i++)
            {
                Console.Clear();
                Console.WriteLine($"Enter name of the player {i}");
                PlayersList.Add(new Player() { Name = Convert.ToString(Console.Read()), MoveOrder = i });
            }
            PlayersSheet();
        }

        private void GameSheet()
        {
            CheckLive();
            Console.Clear();
            Console.WriteLine
                ($"Current word: {LastWord}\n" +
                $"Current letter: {CurrentLetter}\n" +
                $"Move of the game: {_moveOrder}\n" +
                $"Player move: {PlayersList[_moveOrder].Name}\n\n\n" +
                $"1. All players sheet\n\n" +
                $"Enter: ");

            PlayersList[_moveOrder].Answer = Convert.ToString(Console.Read());
            string answer = PlayersList[_moveOrder].Answer;


            if (PlayersList[_moveOrder].Answer == "1")
            {
                PlayersSheet();
            }
            else if (!IsAnswerRight(PlayersList[_moveOrder].Answer))
            {
                PlayersList[_moveOrder].Lives--;
                Console.WriteLine("\nNice try!");
                Thread.Sleep(3000);
                Console.Clear();
                GameSheet();
            }
            else if (IsAnswerRight(PlayersList[_moveOrder].Answer))
            {
                Console.WriteLine("It's right!");
                Thread.Sleep(3000);
                Console.Clear();
                if (_moveOrder == PlayersList.Count)
                {
                    _moveOrder = 1;
                }
                _moveOrder++;
            }


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
            if (PlayersList[_moveOrder].Lives <= 0)
            {
                PlayersList[_moveOrder].Lives = 2;
                _moveOrder++;
            }
        }
            
    }
}