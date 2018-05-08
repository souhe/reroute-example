open Navigation;

module Main = {
  let component = ReasonReact.statelessComponent("App");
  let make = _children => {
    ...component,
    render: _self =>
      <StackNavigator initialState=[|Config.Home|]>
        ...(
             (~currentRoute, ~navigation) =>
               switch currentRoute {
               | Config.Settings => <Settings navigation />
               | Config.Home => <Home navigation />
               }
           )
      </StackNavigator>
  };
};

let app = () => <Main />;