#ifndef LANGUAGEMANAGER_H
#define LANGUAGEMANAGER_H
#include <QQmlApplicationEngine>
#include <QTranslator>
#include <QDebug>

class Enums: public QObject{
  Q_OBJECT
  Q_ENUMS(LANGUAGE)
public:

  enum LANGUAGE{
    KOR,
    ENG
  };
};
/*
class LanguageManager: public QObject{
  Q_OBJECT
  Q_PROPERTY(int language READ language WRITE setLanguage NOTIFY languageChanged)
    LanguageManager(QObject *parent = nullptr):
        QObject(parent), mLanguage(0){
      }

      virtual ~LanguageManager(){

      }

      int language() const{
        return mLanguage;
      }

      void setLanguage(int lang){

        if(lang == mLanguage)
          return;

        bool ret = false;

        switch (lang)
        {
        case Enums::LANGUAGE::ENG:
          ret = mTranslator.load("lang_en");
          break;
        case Enums::LANGUAGE::KOR:
        default:
          qApp->removeTranslator(&mTranslator);
          break;
        }

        if(ret){
          qApp->installTranslator(&mTranslator);
        }else{
          qDebug() << "set will be default language.";
        }

        mLanguage = lang;
        emit languageChanged();

        qobject_cast<QQmlApplicationEngine*>(parent())->retranslate();
      }

    signals:
      void languageChanged();

    private:
      QTranslator mTranslator;
      int mLanguage;
};
*/
#endif // LANGUAGEMANAGER_H
