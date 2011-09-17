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
  );
  $export['field_bundle_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mediafront_block_playlist';
  $strongarm->value = 'media';
  $export['mediafront_block_playlist'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mediafront_block_playlist_exclude';
  $strongarm->value = array();
  $export['mediafront_block_playlist_exclude'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mediafront_block_preset';
  $strongarm->value = 'views_player';
  $export['mediafront_block_preset'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'media';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
