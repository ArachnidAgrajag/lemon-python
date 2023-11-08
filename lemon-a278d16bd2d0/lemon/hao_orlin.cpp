#include <pybind11/pybind11.h>
#include "lemon/hao_orlin.h"


namespace py = pybind11;

//const Digraph& graph, const CapacityMap& capacity, const Tolerance& tolerance = Tolerance()
PYBIND11_MODULE(lemon_hao_orlin, m) {
    m.doc() = R"pbdoc(
        Hao orlin algorithm for unrestricted minimum cut

        .. currentmodule:: lemon_hao_orlin

        .. autosummary::
           :toctree: _generate
          
          class HaoOrlin 

           
    )pbdoc";

    py::class_<HaoOrlin>(m, "HaoOrlin")
        .def()
        .def()
        .def(py::init<const lemon::Digraph &, const lemon::CapacityMap &, const lemon::Tolerance &>(),py::arg("tolerance")=lemon::Tolerance())
        .def("init", &HaoOrlin::init)
        .def("calculateOut", &HaoOrlin::calculateOut);
        .def("minCutValue", &HaoOrlin::minCutValue);
        .def("minCutMap", &HaoOrlin::minCutMap);
}