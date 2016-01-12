<?php

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/function.filter-input-array.php
   * )
   *
   * This function is useful for retrieving many values without repetitively
   * calling filter_input().
   *
   * @type       mixed   One of INPUT_GET, INPUT_POST, INPUT_COOKIE,
   *                     INPUT_SERVER, or INPUT_ENV.
   * @definition mixed   An array defining the arguments. A valid key is a
   *                     string containing a variable name and a valid value
   *                     is either a filter type, or an array optionally
   *                     specifying the filter, flags and options. If the
   *                     value is an array, valid keys are filter which
   *                     specifies the filter type, flags which specifies any
   *                     flags that apply to the filter, and options which
   *                     specifies any options that apply to the filter. See
   *                     the example below for a better understanding.
   *
   *                     This parameter can be also an integer holding a
   *                     filter constant. Then all values in the input array
   *                     are filtered by this filter.
   * @add_empty  mixed   Add missing keys as NULL to the return value.
   *
   * @return     mixed   An array containing the values of the requested
   *                     variables on success, or FALSE on failure. An array
   *                     value will be FALSE if the filter fails, or NULL if
   *                     the variable is not set. Or if the flag
   *                     FILTER_NULL_ON_FAILURE is used, it returns FALSE if
   *                     the variable is not set and NULL if the filter
   *                     fails.
   */
function filter_input_array($type, $definition = null, $add_empty = true) {
  $var = null;
  switch ($type) {
    case INPUT_GET:
      $var = $_GET;
      break;
    case INPUT_POST:
      $var = $_POST;
      break;
    case INPUT_COOKIE:
      $var = $_COOKIE;
      break;
    case INPUT_SERVER:
      $var = $_SERVER;
      break;
    case INPUT_ENV:
      $var = $_ENV;
      break;
  }
  return filter_var_array($var, $definition, $add_empty);
}
