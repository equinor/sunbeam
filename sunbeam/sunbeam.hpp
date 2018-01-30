#ifndef SUNBEAM_HPP
#define SUNBEAM_HPP

#include <pybind11/pybind11.h>

//#include "converters.hpp"

namespace Opm { }
namespace py = pybind11;

using namespace Opm;
const py::return_value_policy ref_internal = py::return_value_policy::reference_internal;
//using copy = py::return_value_policy< py::copy_const_reference >;


namespace sunbeam {

  void export_Completion(py::module& module);
  void export_Deck(py::module& module);
  void export_DeckKeyword(py::module& module);
  void export_Eclipse3DProperties(py::module& module);
  void export_EclipseConfig(py::module& module);
  void export_EclipseGrid(py::module& module);
  void export_EclipseState(py::module& module);
  void export_Group(py::module& module);
  void export_Parser(py::module& module);
  void export_Schedule(py::module& module);
  void export_TableManager(py::module& module);
  void export_Well(py::module& module);
  void export_GroupTree(py::module& module);

}

#endif //SUNBEAM_HPP
