class Food
{
private:
    COORD m_coord;

public:
    Food();  // c'tor

    // getter
    COORD Position ();

    // public interface
    void CreateCollisionFree(const Snake& snake);
    void Draw(GameConsole& console);
};
