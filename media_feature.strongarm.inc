<?php
/**
 * @file
 * media_feature.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function media_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_html5_media';
  $strongarm->value = 0;
  $export['comment_anonymous_html5_media'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_html5_media';
  $strongarm->value = 1;
  $export['comment_default_mode_html5_media'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_html5_media';
  $strongarm->value = '50';
  $export['comment_default_per_page_html5_media'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_html5_media';
  $strongarm->value = 1;
  $export['comment_form_location_html5_media'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_html5_media';
  $strongarm->value = '2';
  $export['comment_html5_media'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_html5_media';
  $strongarm->value = '1';
  $export['comment_preview_html5_media'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_html5_media';
  $strongarm->value = 1;
  $export['comment_subject_field_html5_media'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings';
  $strongarm->value = array(
    'file' => array(
      'default' => array(
        'view_modes' => array(),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(
            'file' => array(
              'media_small' => array(
                'weight' => 0,
                'visible' => FALSE,
              ),
            ),
          ),
        ),
      ),
      'image' => array(
        'view_modes' => array(
          'media_link' => array(
            'custom_settings' => TRUE,
          ),
          'media_preview' => array(
            'custom_settings' => TRUE,
          ),
          'media_small' => array(
            'custom_settings' => TRUE,
          ),
          'media_large' => array(
            'custom_settings' => TRUE,
          ),
          'media_original' => array(
            'custom_settings' => TRUE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(
            'file' => array(
              'media_small' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'default' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
            ),
          ),
        ),
      ),
      'audio' => array(
        'view_modes' => array(),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(
            'file' => array(
              'media_small' => array(
                'weight' => 0,
                'visible' => FALSE,
              ),
            ),
          ),
        ),
      ),
      'video' => array(
        'view_modes' => array(),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(
            'file' => array(
              'media_small' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
            ),
          ),
        ),
      ),
    ),
    'node' => array(
      'media' => array(
        'view_modes' => array(
          'teaser' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => FALSE,
          ),
          'rss' => array(
            'custom_settings' => FALSE,
          ),
          'search_index' => array(
            'custom_settings' => FALSE,
          ),
          'search_result' => array(
            'custom_settings' => FALSE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(
            'title' => array(
              'weight' => '0',
            ),
          ),
          'display' => array(),
        ),
      ),
      'html5_media' => array(
        'view_modes' => array(
          'teaser' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => FALSE,
          ),
          'rss' => array(
            'custom_settings' => FALSE,
          ),
          'search_index' => array(
            'custom_settings' => FALSE,
          ),
          'search_result' => array(
            'custom_settings' => FALSE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(
            'title' => array(
              'weight' => '-5',
            ),
          ),
          'display' => array(),
        ),
      ),
    ),
  );
  $export['field_bundle_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_html5_media';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_html5_media'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'media';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
