; ModuleID = 'Module A'
source_filename = "Module A"

define double @__if_stat() {
entry:

true:                                             ; No predecessors!

false:                                            ; No predecessors!
}

define double @__expr_stat() {
entry:
  ret float 9.000000e+00
}

define double @__expr_stat.1() {
entry:
  ret float 0.000000e+00
}

define double @__expr_stat.2() {
entry:
  ret i1 false
}
