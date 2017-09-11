#ifndef SOLITARYMESSAGETRANSMISSION_H
#define SOLITARYMESSAGETRANSMISSION_H

#include <QState>
#include <QTimer>
#include "anlogger.h"
#include "uhvworkervarset.h"

class SolitaryMessageTransmission : public QState
{
public:
    SolitaryMessageTransmission(UHVWorkerVarSet *VarSet, quint16 WriteTimeOutInMilisecond = 100);
protected:
    void onEntry(QEvent *) override;
    void onExit(QEvent *) override;
private:
    UHVWorkerVarSet * VarSetPtr = Q_NULLPTR;    
    quint16 TimeOut4WriteInMilisecond = 0;
    QTimer idleTimer;
    quint8 lastIdleState = 0;
};

#endif // SOLITARYMESSAGETRANSMISSION_H
