#ifndef MUSICUSERMANAGER_H
#define MUSICUSERMANAGER_H

#include <QDialog>
#include <QTime>
#include "musiclibexportglobal.h"

class MusicUserModel;

namespace Ui {
class MusicUserManager;
}

class MUSIC_USER_EXPORT MusicUserManager : public QDialog
{
    Q_OBJECT
public:
    explicit MusicUserManager(QWidget *parent = 0);
    ~MusicUserManager();

    void setUserName(const QString &name);
    bool checkUser(const QString &id) const;

signals:
    void userStateChanged(const QString &index);

public slots:
    void musicUserLogoff();
    void modifiedUserName();
    void musicUserCancel();

protected:
    void createUserTime() const;
    void createUserLevel() const;

    Ui::MusicUserManager *ui;
    MusicUserModel* m_userModel;
    QString m_currentUser;
    QTime m_time;

};

#endif // MUSICUSERMANAGER_H
