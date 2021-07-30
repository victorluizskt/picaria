#include "Picaria.h"
#include "ui_Picaria.h"

#include <QDebug>
#include <QMessageBox>
#include <QActionGroup>
#include <QSignalMapper>

Picaria::Player state2player(Hole::State state) {
    switch (state) {
        case Hole::RedState:
            return Picaria::RedPlayer;
        case Hole::BlueState:
            return Picaria::BluePlayer;
        default:
            Q_UNREACHABLE();
    }
}

Hole::State player2state(Picaria::Player player) {
    return player == Picaria::RedPlayer ? Hole::RedState : Hole::BlueState;
}

void Picaria::checkNeighborhood(Hole* hole) {
    if(hole->objectName() == "hole01"){
        emptyLocale("hole01");
    } else if(hole->objectName() == "hole02"){
         emptyLocale("hole02");
    } else if(hole->objectName() == "hole03"){
       emptyLocale("hole03");
    } else if(hole->objectName() == "hole04"){
        emptyLocale("hole04");
    } else if(hole->objectName() == "hole05"){
        emptyLocale("hole05");
    } else if(hole->objectName() == "hole06"){
        emptyLocale("hole06");
    } else if(hole->objectName() == "hole07"){
        emptyLocale("hole07");
    } else if(hole->objectName() == "hole08"){
        emptyLocale("hole08");
    } else if(hole->objectName() == "hole09"){
        emptyLocale("hole09");
    } else if(hole->objectName() == "hole10"){
        emptyLocale("hole10");
    } else if(hole->objectName() == "hole11"){
        emptyLocale("hole11");
    } else if(hole->objectName() == "hole12"){
        emptyLocale("hole12");
    } else if(hole->objectName() == "hole13"){
       emptyLocale("hole13");
    }
}

void Picaria::emptyLocale(std::string holeName){
    for(int i = 0; i < 9; i++) {
      if(cont >= 5 && !m_holes[i]->state()){
            qDebug() << "Este lugar está vazio: " << m_holes[i];
      }
    }
}


Picaria::Picaria(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::Picaria),
      m_mode(Picaria::NineHoles),
      m_player(Picaria::RedPlayer),
      m_phase(Picaria::DropPhase) {

    ui->setupUi(this);

    QActionGroup* modeGroup = new QActionGroup(this);
    modeGroup->setExclusive(true);
    modeGroup->addAction(ui->action9holes);
    modeGroup->addAction(ui->action13holes);

    QObject::connect(ui->actionNew, SIGNAL(triggered(bool)), this, SLOT(reset()));
    QObject::connect(ui->actionQuit, SIGNAL(triggered(bool)), qApp, SLOT(quit()));
    QObject::connect(modeGroup, SIGNAL(triggered(QAction*)), this, SLOT(updateMode(QAction*)));
    QObject::connect(this, SIGNAL(modeChanged(Picaria::Mode)), this, SLOT(reset()));
    QObject::connect(ui->actionAbout, SIGNAL(triggered(bool)), this, SLOT(showAbout()));

    QSignalMapper* map = new QSignalMapper(this);
    for (int id = 0; id < 13; ++id) {
        QString holeName = QString("hole%1").arg(id+1, 2, 10, QChar('0'));
        Hole* hole = this->findChild<Hole*>(holeName);
        //Q_ASSERT(hole != nullptr);

        m_holes[id] = hole;
        map->setMapping(hole, id);
        QObject::connect(hole, SIGNAL(clicked(bool)), map, SLOT(map()));
    }
#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
    QObject::connect(map, SIGNAL(mapped(int)), this, SLOT(play(int)));
#else
    QObject::connect(map, SIGNAL(mappedInt(int)), this, SLOT(play(int)));
#endif

    this->reset();

    this->adjustSize();
    this->setFixedSize(this->size());
}

Picaria::~Picaria() {
    delete ui;
}

void Picaria::setMode(Picaria::Mode mode) {
    if (m_mode != mode) {
        m_mode = mode;
        emit modeChanged(mode);
    }
}

void Picaria::switchPlayer() {
    if( cont < 6){
      m_player = m_player == Picaria::RedPlayer ?
                   Picaria::BluePlayer : Picaria::RedPlayer;
      this->updateStatusBar();
      cont++;
    }
}

void Picaria::play(int id) {
    Hole* hole = m_holes[id];

    qDebug() << "clicked on: " << hole->objectName();
    if(cont < 6){
        hole->setState(player2state(m_player));
    }

    checkNeighborhood(hole);

    this->switchPlayer();
}

void Picaria::reset() {
    // Reset each hole.
    cont = 0;
    for (int id = 0; id < 13; ++id) {
        Hole* hole = m_holes[id];
        hole->reset();

        // Set the hole visibility according to the board mode.
        switch (id) {
            case 3:
            case 4:
            case 8:
            case 9:
                hole->setVisible(m_mode == Picaria::ThirteenHoles);
                break;
            default:
                break;
        }
    }

    // Reset the player and phase.
    m_player = Picaria::RedPlayer;
    m_phase = Picaria::DropPhase;

    // Finally, update the status bar.
    this->updateStatusBar();
}

void Picaria::showAbout() {
    QMessageBox::information(this, tr("About"), tr("Picaria\n\nAndrei Rimsa Alvares - andrei@cefetmg.br"));
}

void Picaria::updateMode(QAction* action) {
    cont = 0;
    if (action == ui->action9holes)
        this->setMode(Picaria::NineHoles);
    else if (action == ui->action13holes)
        this->setMode(Picaria::ThirteenHoles);
    else
        Q_UNREACHABLE();
}

void Picaria::updateStatusBar() {
    QString player(m_player == Picaria::RedPlayer ? "vermelho" : "azul");
    QString phase(m_phase == Picaria::DropPhase ? "colocar" : "mover");

    ui->statusbar->showMessage(tr("Fase de %1: vez do jogador %2").arg(phase).arg(player));
}
