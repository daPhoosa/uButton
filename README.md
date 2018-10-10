# uButton
simple button library with de-bounce

## Features
* Software debounce prevents trigging a response mutiple times on a single button press
* Supports buttons that are connected ground or V+

### Basic Usage
#### Object Creation
```
uBotton yourButton( pinNumber, normalState );
```
* The pin number can be any normal arduino pin.
* The pin is configure by the library as an input.
* The normal state is the `HIGH` or `LOW` state of the input when the button is not being depressed.
* When the normal state is set to `HIGH`, the internal input pull-up resistor is enabled.  This allows for a button that is attached to ground to with no other external components.
* When the normal state is set to `LOW`, and external pull-down resistor must be used in addition to a switch attached to V+.

#### Button Check
```
if( yourButton.check() ) // this will return TRUE once for evey button press
{
  executeYourCode();
}
```
* The `check()` function return true once for evey button press
* The buton must be released before this can return true again
