<?php

/**
 * @file
 *   Github post receive data unserializer plugin.
 */

$plugin = array(
  'title' => t('URL encoded key=value'),
  'handler' => array(
    'class' => 'Webhook_Plugins_Unserializer_UrlEncoded',
  ),
);
