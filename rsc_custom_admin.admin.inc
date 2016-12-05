<?php


/**
 * Form builder for the rsc_custom_admin settings form
 */
function rsc_custom_admin_settings() {
  $form = array();

  $form['empty'] = array(
    '#markup' => t("Nothing to see here."),
  );

  return system_settings_form($form);
}

