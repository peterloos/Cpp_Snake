class Game
{
private:
    static const int Pause = 200;

private:
    // member data
    GameConsole m_console;
    Snake m_snake;
    Food m_food;

public:
    Game();        // c'tor
    void Play();   // public interface
};
