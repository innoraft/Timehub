<?php

/**
 * @file
 *   XML unserializer plugin.
 */

$plugin = array(
  'title' => t('XML'),
  'handler' => array(
    'class' => 'Webhook_Plugins_Unserializer_Xml',
  ),
);
