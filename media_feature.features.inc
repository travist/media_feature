<?php
/**
 * @file
 * media_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function media_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function media_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function media_feature_node_info() {
  $items = array(
    'html5_media' => array(
      'name' => t('HTML5 Media'),
      'base' => 'node_content',
      'description' => t('This is a content type to utilize the HTML5 Media module for media display.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'media' => array(
      'name' => t('Media'),
      'base' => 'node_content',
      'description' => t('Upload some media to your site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
