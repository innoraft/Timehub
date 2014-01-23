<?php

/**
 * @file
 *   Auto detect unserializer plugin.
 */

$plugin = array(
  'title' => t('Autodetect'),
  'handler' => array(
    'class' => 'Webhook_Plugins_Unserializer_Autodetect',
  ),
);

