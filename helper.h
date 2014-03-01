#ifndef HELPER_H
#define HELPER_H
#include <QObject>
#include <QFileDialog>



class Helper : public QObject
{
    Q_OBJECT
public:

    Q_INVOKABLE QString getFile(){
        return QFileDialog::getOpenFileName(0, "Choose your sound file", "", "Sound files (*.mp3 *.wav *.m4a)");
    }
};

#endif // HELPER_H
