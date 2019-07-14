/**
 * This file is part of the "fviz" project
 *   Copyright (c) 2018 Paul Asmuth
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once
#include <assert.h>
#include <stdlib.h>
#include <stdint.h>
#include <vector>

namespace fviz {

enum class PathCommand {
  MOVE_TO,
  LINE_TO,
  QUADRATIC_CURVE_TO,
  CUBIC_CURVE_TO,
  ARC_TO,
  CLOSE
};

const size_t kPathMaxCoefficients = 6;

struct PathData {
  PathCommand command;
  double coefficients[kPathMaxCoefficients];
  double operator[](size_t idx) const;
};

struct Path {
public:

  Path();
  Path(const PathData* data, size_t size);

  void moveTo(double x, double y);
  void lineTo(double x, double y);
  void quadraticCurveTo(double cx, double cy, double x, double y);
  void cubicCurveTo(double c1x, double c1y, double c2x, double c2y, double x, double y);
  void arcTo(double cx, double cy, double r, double a1, double a2);
  void closePath();

  const PathData& operator[](size_t idx) const;
  PathData& operator[](size_t idx);

  const PathData* data() const;
  PathData* data();
  const PathData* begin() const;
  PathData* begin();
  const PathData* end() const;
  PathData* end();
  size_t size() const;
  bool empty() const;

protected:
  std::vector<PathData> data_;
};

} // namespace fviz
