<?php


/**
 * Form builder for the rsc_misc settings form
 */
function rsc_misc_settings() {
  $form = array();

  $form['empty'] = array(
    '#markup' => t("Nothing to see here."),
  );

  return system_settings_form($form);
}

