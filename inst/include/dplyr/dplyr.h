#ifndef dplyr_dplyr_dplyr_H
#define dplyr_dplyr_dplyr_H

#include <dplyr/registration.h>
#include <dplyr/white_list.h>
#include <dplyr/checks.h>
#include <dplyr/visitor_set/visitor_set.h>
#include <tools/BoolResult.h>
#include <dplyr/data/GroupedDataFrame.h>
#include <dplyr/data/RowwiseDataFrame.h>

#include <tools/set_rownames.h>
#include <dplyr/comparisons.h>
#include <dplyr/visitors/join/join_match.h>
#include <dplyr/visitors/vector/MultipleVectorVisitors.h>
#include <dplyr/visitors/subset/subset_visitor.h>
#include <dplyr/visitors/vector/visitor.h>
#include <dplyr/visitors/vector/visitor_impl.h>
#include <dplyr/visitors/order/OrderVisitorImpl.h>
#include <dplyr/visitors/join/JoinVisitor.h>
#include <dplyr/visitors/join/JoinVisitorImpl.h>
#include <dplyr/visitors/join/DataFrameJoinVisitors.h>
#include <dplyr/visitors/order/Order.h>
#include <tools/default_value.h>
#include <dplyr/Collecter.h>
#include <dplyr/NamedListAccumulator.h>
#include <tools/train.h>
#include <dplyr/Groups.h>

#endif // #ifndef dplyr_dplyr_dplyr_H
