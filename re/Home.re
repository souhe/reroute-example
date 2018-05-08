open Navigation;

open BsReactNative;

module Styles = {
  open Style;
  let link = style([padding(Pt(10.))]);
};

let component = ReasonReact.statelessComponent("Home");

let make = (~navigation: StackNavigator.navigation, _children) => {
  ...component,
  render: _self =>
    <StackNavigator.Screen headerTitle="Home" navigation>
      ...(
           () =>
             <View>
               <View>
                 <TouchableOpacity
                   onPress=(_e => navigation.push(Config.Settings))>
                   <Text style=Styles.link>
                     (ReasonReact.string("Settings"))
                   </Text>
                 </TouchableOpacity>
               </View>
             </View>
         )
    </StackNavigator.Screen>
};