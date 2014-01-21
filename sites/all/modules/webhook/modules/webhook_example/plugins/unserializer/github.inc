<?php

/**
 * @file
 *   Github post receive data unserializer plugin.
 */

$plugin = array(
  'title' => t('Github'),
  'handler' => array(
    'class' => 'Webhook_Example_Plugins_Unserializer_Github',
  ),
);
