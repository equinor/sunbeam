# sunbeam [![Build Status](https://travis-ci.org/equinor/sunbeam.svg?branch=master)](https://travis-ci.org/equinor/sunbeam)

**WARNING:** Sunbeam is no longer maintained. The development of the Python
bindings are continued in [opm-common](https://github.com/OPM/opm-common).

# Prerequisites:

Clone and build `ecl` from [Equinor/libecl](https://github.com/equinor/libecl)
and `opm-common` from [OPM/opm-common](https://github.com/OPM/opm-common).

```
git clone https://github.com/equinor/libecl
git clone https://github.com/OPM/opm-parser
mkdir libecl/build
mkdir opm-common/build
pushd libecl/build
cmake ..
make install
popd
pushd opm-common/build
cmake ..
make install
```

# Quick start (WIP)
Assumes you have built (and maybe installed) opm-common

```bash
git clone --recursive https://github.com/equinor/sunbeam
mkdir sunbeam/build
pushd sunbeam/build
cmake ..
make
ctest # for running unit tests
```

# Obtaining test data

```bash
cd ~
git clone https://github.com/OPM/opm-data
cd opm-data/norne
```

With `opm-data` available, one can test sunbeam on Norne:

```python
import sunbeam
es = sunbeam.parse('NORNE_ATW2013.DATA', ('PARSE_RANDOM_SLASH', sunbeam.action.ignore))
len(es.faults())
```

Remember to have `~/sunbeam/build/python` in your `$PYTHONPATH`.
