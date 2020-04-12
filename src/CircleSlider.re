[@bs.module "react-native-circle-slider"] [@react.component]
external make:
  (
    ~btnRadius: int=?,
    ~dialRadius: int=?,
    ~meterColor: string=?,
    ~textColor: string=?,
    ~fillColor: string=?,
    ~strokeColor: string=?,
    ~strokeWidth: float=?,
    ~textSize: float=?,
    ~value: float=?,
    ~min: int=?,
    ~max: int=?,
    ~xCenter: float=?,
    ~yCenter: float=?,
    ~onValue: float => unit=?
  ) =>
  React.element =
  "default";