namespace CountryGame
{
    public class Player
    {
        private string _answer;
        private string _name;
        private int _rightAnswerCounter = 0;
        private int _moveOrder;

        public Player() { }
        

        public string Name { get { return _name; } set { _name = value; } }
        public string Answer { get { return _answer; } set { _answer = value; } }
        public int RightAnswerCouner { get { return _rightAnswerCounter; } set { _rightAnswerCounter = value; } }
        public int MoveOrder { get { return _moveOrder; } set { _moveOrder = value; } }

      
      
        
        
    }
}
