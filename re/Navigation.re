module Config = {
  type route =
    | Settings
    | Home
    | MainSettings
    | ProfileSettings;
};
include RerouteNative.ReRoute.CreateNavigation(Config);