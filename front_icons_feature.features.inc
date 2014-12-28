<?php
/**
 * @file
 * front_icons_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_icons_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function front_icons_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function front_icons_feature_node_info() {
  $items = array(
    'front_icons' => array(
      'name' => t('Front Icons'),
      'base' => 'node_content',
      'description' => t('Icon and description for front page navigation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
