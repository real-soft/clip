(set width 2048px)
(set height 800px)
(set dpi 240)

(set color-palette zhang)

(plot
  limit-x (0 100)
  limit-y (0 90)
  axes (bottom)
  axis-y-label-placement (linear-interval 10 10 80)
  axis-left (
    border none
    label-offset 0
    label-attach left
    label-color #666)
  areas (
    data-x (5 10 20 30 40 50 60 70 80 90 100)
    data-y (7 13 17 27 38 39 52 59 48 60 65)
    color 5
    stroke-width .6pt
    stroke-color (rgba 0 0 0 .5))
  areas (
    data-x (5 10 20 30 40 50 60 70 80 90 100)
    data-y (4 12 15 22 35 38 47 47 42 53 60)
    color 4
    stroke-width .6pt
    stroke-color (rgba 0 0 0 .4))
  areas (
    data-x (5 10 20 30 40 50 60 70 80 90 100)
    data-y (3 10 10 18 32 34 42 40 36 46 54)
    color 3
    stroke-width .6pt
    stroke-color (rgba 0 0 0 .5))
  areas (
    data-x (5 10 20 30 40 50 60 70 80 90 100)
    data-y (2 6 6 8 18 20 30 30 30 36 35)
    color 2
    stroke-width .6pt
    stroke-color (rgba 0 0 0 .5))
  areas (
    data-x (5 10 20 30 40 50 60 70 80 90 100)
    data-y (1 2 4 7 13 15 20 16 18 23 18)
    color 1
    stroke-width .6pt
    stroke-color (rgba 0 0 0 .5))
  grid (
    color #eee
    tick-placement-x (none))
  legend-top (
    position (top left)
    margin 0
    padding 0
    item-flow on
    item (label "Series A" color 1)
    item (label "Series B" color 2)
    item (label "Series C" color 3)
    item (label "Series D" color 4)
    item (label "Series E" color 5))
  margin-left 0)

