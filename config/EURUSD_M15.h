/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_Bands_Params_M15 : Indi_Bands_Params {
  Indi_Bands_Params_M15() : Indi_Bands_Params(indi_bands_defaults, PERIOD_M15) { shift = 0; }
} indi_bands_m15;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_Bands_Params_M15 : StgParams {
  // Struct constructor.
  Stg_Bands_Params_M15() : StgParams(stg_bands_defaults) {
    lot_size = 0;
    signal_open_method = 0;
    signal_open_filter = 1;
    signal_open_level = 0;
    signal_open_boost = 0;
    signal_close_method = 0;
    signal_close_level = 0;
    price_stop_method = 0;
    price_stop_level = 2;
    tick_filter_method = 1;
    max_spread = 0;
  }
} stg_bands_m15;