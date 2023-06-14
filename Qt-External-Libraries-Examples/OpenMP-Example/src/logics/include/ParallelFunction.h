#pragma once

#include <QVector>

namespace OpenMP {

auto checkOpenMP() -> QString;

auto sum(QVector<int>& vector) -> int;

auto multiply(const QVector<int>& vectorOne, const QVector<int>& vectorTwo) -> QVector<int>;

} // namespace OpenMP
