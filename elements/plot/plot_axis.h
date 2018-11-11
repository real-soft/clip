/**
 * This file is part of the "libstx" project
 *   Copyright (c) 2011-2014 Paul Asmuth, Google Inc.
 *
 * libstx is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License v3.0. You should have received a
 * copy of the GNU General Public License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <utility>
#include <string>
#include <vector>
#include <graphics/layer.h>
#include <graphics/viewport.h>
#include <utils/return_code.h>

namespace signaltk {

enum class AxisPosition {
  TOP,
  RIGHT,
  BOTTOM,
  LEFT,
  CENTER_HORIZ,
  CENTER_VERT
};

enum class AxisMode {
  OFF,
  AUTO,
  MANUAL
};

enum class AxisLabelPlacement {
  LEFT,
  RIGHT,
  TOP,
  BOTTOM,
  OFF
};

struct AxisDefinition {
  AxisDefinition();
  AxisMode mode;
  std::string title;
  std::vector<double> ticks;
  std::vector<std::pair<double, std::string>> labels;
  AxisLabelPlacement label_placement;
  double padding_rem;
  double label_padding_rem;
  double label_font_size_rem;
  double tick_length_rem;
};

ReturnCode parseAxisMode(
    const std::string& str,
    AxisMode* value);

Status renderAxis(
    const AxisDefinition& axis,
    AxisPosition axis_position,
    Layer* frame);


} // namespace signaltk
