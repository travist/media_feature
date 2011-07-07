<?php
/**
 * @file
 * media_feature.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function media_feature_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'media';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'media';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image Upload */
  $handler->display->display_options['fields']['field_image_upload']['id'] = 'field_image_upload';
  $handler->display->display_options['fields']['field_image_upload']['table'] = 'field_data_field_image_upload';
  $handler->display->display_options['fields']['field_image_upload']['field'] = 'field_image_upload';
  $handler->display->display_options['fields']['field_image_upload']['label'] = '';
  $handler->display->display_options['fields']['field_image_upload']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image_upload']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image_upload']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image_upload']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image_upload']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image_upload']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image_upload']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image_upload']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_upload']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_upload']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_upload']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image_upload']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_upload']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image_upload']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_upload']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_upload']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_upload']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image_upload']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'media';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Media';
  $handler->display->display_options['menu']['description'] = 'The media for this site.';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['media'] = $view;

  return $export;
}
