#pragma once

#include <QAbstractTableModel>
#include "OrderDAO.h"

namespace ViewModels {

class OrdersViewModel : public QAbstractTableModel
{
public:
    explicit OrdersViewModel(QObject* parent = 0);
    virtual ~OrdersViewModel();

    virtual auto columnCount(const QModelIndex& parent) const -> int override;
    virtual auto rowCount(const QModelIndex& parent) const -> int override;
    virtual auto data(const QModelIndex& index, int role) const -> QVariant override;
    virtual auto flags(const QModelIndex& index) const -> Qt::ItemFlags override;
    virtual auto headerData(int section, Qt::Orientation orientation, int role) const -> QVariant override;

private:
    OrderDAO* orderDAO;
    QList<Entities::Order> orders;

};

} // namespace ViewModels
