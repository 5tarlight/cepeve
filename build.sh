TIMEFORMAT='It took %R seconds.'

time {
  mkdir build
  cd build
  cmake ..
  make
}

cd ..