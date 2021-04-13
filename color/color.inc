<?php

/**
 * @file
 * Lists available color schemes.
 */

$info = [
  // Fields.
  'fields' => [
    'base'                      => t('Base'),
    'text'                      => t('Text color'),
    'highlights'                => t('Highlight color'),
    'secondaryhighlights'       => t('Secondary highlight color'),
    'link'                      => t('Link color'),
    'linkalt'                   => t('Alternate link color'),
    'body'                      => t('Body'),
    'borders'                   => t('Borders'),
    'borderslight'              => t('Borders light'),
  ],
  // Schemes.
  'schemes' => [
    'default' => [
      'title' => t('Basic (default)'),
      'colors' => [
        'base'                              => '#000000',
        'text'                              => '#1a2747',
        'highlights'                        => '#dbf5f0',
        'secondaryhighlights'               => '#a4e5e0',
        'link'                              => '#0c6170',
        'linkalt'                           => '#0e7e92',
        'body'                              => '#ffffff',
        'borders'                           => '#e5e5e5',
        'borderslight'                      => '#f5f5f5',
      ],
    ],
    'carapace' => [
      'title' => t('Carapace'),
      'colors' => [
        'base'                              => '#140404',
        'text'                              => '#140404',
        'highlights'                        => '#ededed',
        'secondaryhighlights'               => '#f5f5f5',
        'link'                              => '#a42424',
        'linkalt'                           => '#521212',
        'body'                              => '#ffffff',
        'borders'                           => '#cccccc',
        'borderslight'                      => '#ebebeb',
      ],
    ],
    'dark' => [
      'title' => t('Dark'),
      'colors' => [
        'base'                              => '#f7f7f7',
        'text'                              => '#f7f7f7',
        'highlights'                        => '#333333',
        'secondaryhighlights'               => '#474747',
        'link'                              => '#dadada',
        'linkalt'                           => '#ffffff',
        'body'                              => '#1f1f1f',
        'borders'                           => '#2f2f2f',
        'borderslight'                      => '#080808',
      ],
    ],
  ],

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => [
    'css/style.css',
  ],

  // Files to copy.
  'copy' => [
    'logo.svg',
    'logo.png',
  ],

  // Gradient definitions.
  'gradients' => [],
];
