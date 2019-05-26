// https://github.com/iovisor/bpftrace/issues/229
// this file exists solely to gather all the codegen tests into one compilation unit, for build performance

#include "codegen/args_multiple_tracepoints.cpp"
#include "codegen/args_multiple_tracepoints_wild.cpp"
#include "codegen/bitshift_left.cpp"
#include "codegen/bitshift_right.cpp"
#include "codegen/bitwise_not.cpp"
#include "codegen/builtin_arg.cpp"
#include "codegen/builtin_comm.cpp"
#include "codegen/builtin_cpu.cpp"
#include "codegen/builtin_ctx.cpp"
#include "codegen/builtin_curtask.cpp"
#include "codegen/builtin_elapsed.cpp"
#include "codegen/builtin_func.cpp"
#include "codegen/builtin_func_wild.cpp"
#include "codegen/builtin_kstack.cpp"
#include "codegen/builtin_nsecs.cpp"
#include "codegen/builtin_pid_tid.cpp"
#include "codegen/builtin_probe.cpp"
#include "codegen/builtin_probe_wild.cpp"
#include "codegen/builtin_rand.cpp"
#include "codegen/builtin_retval.cpp"
#include "codegen/builtin_stack.cpp"
#include "codegen/builtin_uid_gid.cpp"
#include "codegen/builtin_username.cpp"
#include "codegen/builtin_ustack.cpp"
#include "codegen/call_avg.cpp"
#include "codegen/call_cat.cpp"
#include "codegen/call_cgroup.cpp"
#include "codegen/call_clear.cpp"
#include "codegen/call_count.cpp"
#include "codegen/call_delete.cpp"
#include "codegen/call_exit.cpp"
#include "codegen/call_hist.cpp"
#include "codegen/call_kstack.cpp"
#include "codegen/call_lhist.cpp"
#include "codegen/call_max.cpp"
#include "codegen/call_min.cpp"
#include "codegen/call_ntop_char16.cpp"
#include "codegen/call_ntop_char4.cpp"
#include "codegen/call_ntop_key.cpp"
#include "codegen/call_print.cpp"
#include "codegen/call_printf.cpp"
#include "codegen/optional_positional_parameter.cpp"
#include "codegen/call_reg.cpp"
#include "codegen/call_stats.cpp"
#include "codegen/call_str.cpp"
#include "codegen/call_str_2_expr.cpp"
#include "codegen/call_str_2_lit.cpp"
#include "codegen/call_sum.cpp"
#include "codegen/call_system.cpp"
#include "codegen/call_time.cpp"
#include "codegen/call_ustack.cpp"
#include "codegen/call_usym_key.cpp"
#include "codegen/call_zero.cpp"
#include "codegen/dereference.cpp"
#include "codegen/empty_function.cpp"
#include "codegen/enum.cpp"
#include "codegen/general.cpp"
#include "codegen/if_else_printf.cpp"
#include "codegen/if_else_variable.cpp"
#include "codegen/if_nested_printf.cpp"
#include "codegen/if_printf.cpp"
#include "codegen/if_variable.cpp"
#include "codegen/int_propagation.cpp"
#include "codegen/logical_and.cpp"
#include "codegen/logical_not.cpp"
#include "codegen/logical_or.cpp"
#include "codegen/macro_definition.cpp"
#include "codegen/map_assign_int.cpp"
#include "codegen/map_assign_string.cpp"
#include "codegen/map_key_int.cpp"
#include "codegen/map_key_probe.cpp"
#include "codegen/map_key_string.cpp"
#include "codegen/map_increment_decrement.cpp"
#include "codegen/multiple_identical_probes.cpp"
#include "codegen/pred_binop.cpp"
#include "codegen/string_equal_comparison.cpp"
#include "codegen/string_not_equal_comparison.cpp"
#include "codegen/string_propagation.cpp"
#include "codegen/struct_char.cpp"
#include "codegen/struct_integer_ptr.cpp"
#include "codegen/struct_integers.cpp"
#include "codegen/struct_long.cpp"
#include "codegen/struct_nested_struct_anon.cpp"
#include "codegen/struct_nested_struct_named.cpp"
#include "codegen/struct_nested_struct_ptr_named.cpp"
#include "codegen/struct_save.cpp"
#include "codegen/struct_save_nested.cpp"
#include "codegen/struct_save_string.cpp"
#include "codegen/struct_semicolon.cpp"
#include "codegen/struct_short.cpp"
#include "codegen/struct_string_array.cpp"
#include "codegen/struct_string_ptr.cpp"
#include "codegen/ternary_int.cpp"
#include "codegen/ternary_str.cpp"
#include "codegen/unroll.cpp"
#include "codegen/variable.cpp"
#include "codegen/variable_increment_decrement.cpp"
