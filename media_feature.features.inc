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
 * Implements hook_mediafront_default_presets().
 */
function media_feature_mediafront_default_presets() {
  $items = array(
    'nodeplayer' => array(
      'name' => 'nodeplayer',
      'description' => 'The media player for the media content type.',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(
          0 => '0',
        ),
        'isplaylist' => array(
          0 => '0',
        ),
      ),
      'settings' => array(
        'debug' => 0,
        'volume' => '80',
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => '15',
        'showPlaylist' => 1,
        'vertical' => '1',
        'node' => array(),
        'playlist' => '',
        'pageLimit' => '10',
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => 'logo.png',
        'swfplayer' => '/sites/all/modules/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => 'http://www.mediafront.org',
        'width' => '100%',
        'height' => '400px',
        'template' => 'simpleblack',
        'playlistOnly' => 0,
        'disablePlaylist' => 0,
        'controllerOnly' => 0,
        'theme' => 'dark-hive',
        'showWhenEmpty' => 1,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
      ),
    ),
    'player' => array(
      'name' => 'player',
      'description' => 'The main media player.',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(
          0 => '0',
        ),
        'isplaylist' => array(
          0 => '0',
        ),
      ),
      'settings' => array(
        'debug' => 0,
        'volume' => '80',
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => '15',
        'showPlaylist' => 1,
        'vertical' => '1',
        'node' => array(),
        'playlist' => '',
        'pageLimit' => '10',
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => '',
        'swfplayer' => '/sites/all/modules/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => '',
        'width' => '100%',
        'height' => '500px',
        'template' => 'default',
        'playlistOnly' => 0,
        'disablePlaylist' => 0,
        'controllerOnly' => 0,
        'theme' => 'dark-hive',
        'showWhenEmpty' => 1,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
      ),
    ),
    'playlist' => array(
      'name' => 'playlist',
      'description' => 'The media player playlist',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(
          0 => '0',
        ),
        'isplaylist' => array(
          'nodeplayer' => 'nodeplayer',
        ),
      ),
      'settings' => array(
        'debug' => 0,
        'volume' => '80',
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => '15',
        'showPlaylist' => 1,
        'vertical' => '1',
        'node' => array(),
        'playlist' => '',
        'pageLimit' => '10',
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => 'logo.png',
        'swfplayer' => '/sites/all/modules/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => 'http://www.mediafront.org',
        'width' => '100%',
        'height' => '400',
        'template' => 'default',
        'playlistOnly' => 1,
        'disablePlaylist' => 0,
        'controllerOnly' => 0,
        'theme' => 'dark-hive',
        'showWhenEmpty' => 1,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
      ),
    ),
    'views_player' => array(
      'name' => 'views_player',
      'description' => 'A media player to show up on the views page.',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(
          0 => '0',
        ),
        'isplaylist' => array(
          0 => '0',
        ),
      ),
      'settings' => array(
        'debug' => 0,
        'volume' => '80',
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => '15',
        'showPlaylist' => 1,
        'vertical' => '1',
        'node' => array(),
        'playlist' => '',
        'pageLimit' => '10',
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => '',
        'swfplayer' => '/sites/all/modules/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => '',
        'width' => '100%',
        'height' => '400px',
        'template' => 'default',
        'playlistOnly' => 0,
        'disablePlaylist' => 0,
        'controllerOnly' => 0,
        'theme' => 'dark-hive',
        'showWhenEmpty' => 1,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_mediafront_views_default_options().
 */
function media_feature_mediafront_views_default_options() {
  $options = array(
    'media' => array(
      'field_image' => array(
        'link_to_player' => 1,
        'field_type' => 'image',
        'media_type' => 'media',
        'preview' => 'large',
        'thumbnail' => 'thumbnail',
        'custom' => '',
      ),
      'title' => array(
        'link_to_player' => 1,
        'field_type' => 'title',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_media' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
    ),
  );
  return $options;
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
