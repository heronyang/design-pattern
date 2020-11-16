#include "engineer.h"
#include "manager.h"

/**
 * Ask the big boss to build house. The big boss assigns the tasks to his/her
 * reports recursively.
 *
 * Report tree:
 *            [Big Boss]
 *             /      \
 *     [Small Boss]  [John]
 *        /      \
 *    [Emma]  [Tommy]
 */
int main() {
  Engineer john("John");
  Engineer emma("Emma");
  Engineer tommy("Tommy");

  Manager big_boss("Big Boss");
  Manager small_boss("Small Boss");
  big_boss.AddDirectReport(&small_boss);

  big_boss.AddDirectReport(&john);
  small_boss.AddDirectReport(&emma);
  small_boss.AddDirectReport(&tommy);

  big_boss.PerformTask("Build House");

  return 0;
}
