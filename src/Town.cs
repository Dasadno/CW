

namespace TownsGame
{
    public class Town
    {
        private string _name;

        private string _country;

        private bool _isUsed;

        public string Name { get { return _name; } set { _name = value; } }
        public string Country { get { return _country; } set { _country = value; } }
        public bool IsUsed { get { return _isUsed; } set { _isUsed = value; } }

        public Town() { }

    }
}
