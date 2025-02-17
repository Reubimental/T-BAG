#pragma once

#include "Player.hpp"
#include "Attribute.hpp"
#include "Map.hpp"
#include <QString>
#include <QObject>

class Game : public QObject
{
    Q_OBJECT
    private:
        QString currentRoomDescription();
        void    movePlayer(const QString& direction);
        Player player;
        std::string _name;

    public:
        Game();
        void    start();
        QString    processInput(const QString& input);

    signals:
        void    gameUpdated(const QString& output);
};