open Navigation;

open BsReactNative;

let component = ReasonReact.statelessComponent("Home");

let make = (~navigation: StackNavigator.navigation, _children) => {
  ...component,
  render: _self =>
    <StackNavigator.Screen headerTitle="Home" navigation>
      ...(
           () =>
             <View>
               <Text> (ReasonReact.string("Home")) </Text>
               <View>
                 <TouchableOpacity
                   onPress=(_e => navigation.push(Config.Settings))>
                   <Text> (ReasonReact.string("Settings")) </Text>
                 </TouchableOpacity>
               </View>
             </View>
         )
    </StackNavigator.Screen>
};