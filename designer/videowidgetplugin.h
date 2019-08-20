/*
    Copyright (C) 2011 Harald Sitter <sitter@kde.org>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) version 3, or any
    later version accepted by the membership of KDE e.V. (or its
    successor approved by the membership of KDE e.V.), Nokia Corporation
    (or its successors, if any) and the KDE Free Qt Foundation, which shall
    act as a proxy defined in Section 6 of version 3 of the license.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef VIDEOWIDGET_PLUGIN_H
#define VIDEOWIDGET_PLUGIN_H

#include <QDesignerCustomWidgetInterface>

class VideoWidgetPlugin: public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)
public:
    explicit VideoWidgetPlugin(const QString &group, QObject *parent = 0);

    virtual QString name() const override;
    virtual QString group() const override;
    virtual QString toolTip() const override;
    virtual QString whatsThis() const override;
    virtual QString includeFile() const override;
    virtual QIcon icon() const override;
    virtual bool isContainer() const override;
    virtual QWidget *createWidget(QWidget *parent) override;
    virtual bool isInitialized() const override;
    virtual void initialize(QDesignerFormEditorInterface *core) override;
    virtual QString domXml() const override;

private:
    const QString m_group;
    bool m_initialized;
};

#endif // VIDEOWIDGET_PLUGIN_H
