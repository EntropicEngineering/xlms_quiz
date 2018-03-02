<?php

/**
 * @file
 * Contains the node from URL argument default plugin.
 */

/**
 * Default argument plugin to extract a node via menu_get_object
 *
 * This plugin actually has no options so it odes not need to do a great deal.
 */
class views_plugin_argument_default_lesson_result extends views_plugin_argument_default {
  function get_argument() {

    if (arg(0) == 'node' && arg(2) == 'results' && is_numeric(arg(4))) {
      module_load_include('inc', 'quiz', 'quiz.pages');
      $result = quiz_user_results(arg(3));
      return $result->uid;a
    }

    if (arg(0) == 'node' && arg(2) == 'individual' && is_numeric(arg(3))) {
      return arg(3);
    }
  }
}
