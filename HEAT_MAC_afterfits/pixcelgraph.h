//
// (c) 2022 The University of Aizu
// This software is released under the GNU General Public License.
//

#ifndef PIXCELGRAPH_H
#define PIXCELGRAPH_H

#include <QDialog>

#define Max_Width 768
#define Max_Height 1024

namespace Ui {
class PixcelGraph;
}

class PixcelGraph : public QDialog {
  Q_OBJECT

public:
  explicit PixcelGraph(QWidget *parent = 0);
  ~PixcelGraph();

  int flag = 0;
  void drawGraph(QVector<double>, QVector<double>);

private:
  Ui::PixcelGraph *ui;
};

#endif
