#ifndef BASE_SHARE_UTILS_H
#define BASE_SHARE_UTILS_H

#include <QDebug>
#include <QQuickItem>
#include <QString>
#include <QUrl>


class BaseShareUtils : public QQuickItem
{
	public:
		BaseShareUtils(QQuickItem *parent = 0) : QQuickItem(parent){}
		virtual ~BaseShareUtils() {}
		virtual bool share(const QString &text, const QUrl &url) { return true; }
};

#endif //BASE_SHARE_UTILS_H
