#pragma once

#include <QObject>
#include <QtUiPlugin/QDesignerCustomWidgetInterface>

class ToleranceBarPlugin : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

private:
    bool initialized;

public:
    explicit ToleranceBarPlugin(QObject* parent = nullptr);
    virtual ~ToleranceBarPlugin() = default;

    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString group() const override;
    QString includeFile() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

};
