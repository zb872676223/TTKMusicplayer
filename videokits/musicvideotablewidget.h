#ifndef MUSICVIDEOTABLEWIDGET_H
#define MUSICVIDEOTABLEWIDGET_H

#include "musicdownloadquerythread.h"
#include "musicquerytablewidget.h"

class MUSIC_VIDEO_EXPORT MusicVideoTableWidget : public MusicQueryTableWidget
{
    Q_OBJECT
public:
    explicit MusicVideoTableWidget(QWidget *parent = 0);
    virtual ~MusicVideoTableWidget();

    void startSearchQuery(const QString &text);
    void musicDownloadLocal(int row);

signals:
    void mvURLChanged(const QString &data);

public slots:
    void listCellClicked(int row, int col);
    void clearAllItems();
    void creatSearchedItems(const QString &songname,
                            const QString &artistname,
                            const QString &time);
    void itemDoubleClicked(int row, int column);

protected:
    virtual void contextMenuEvent(QContextMenuEvent *event);
    QString randToGetStrength() const;
    QString m_currentSongName;

};

#endif // MUSICVIDEOTABLEWIDGET_H
