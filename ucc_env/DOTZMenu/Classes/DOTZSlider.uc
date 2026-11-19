class DOTZSlider extends GUISlider;

function bool InternalCapturedMouseMove(float deltaX, float deltaY)
{
    local bool ret;
    local float oldVal;

    oldVal = Value;
    ret = Super.InternalCapturedMouseMove(deltaX, deltaY);
    if (Value != oldVal)
    {
        OnChange(self);
    }
    return ret;
}

function bool InternalOnClick(GUIComponent Sender)
{
    InternalCapturedMouseMove(0, 0);
    OnChange(self);
    return true;
}

function InternalOnMousePressed(GUIComponent Sender, bool RepeatClick)
{
    Super.InternalOnMousePressed(Sender, RepeatClick);
    OnChange(self);
}

function InitComponent(GUIController MyController, GUIComponent MyOwner)
{
    Super.InitComponent(MyController, MyOwner);
    OnCapturedMouseMove = InternalCapturedMouseMove;
    OnClick = InternalOnClick;
    OnMousePressed = InternalOnMousePressed;
}

delegate string OnDrawCaption()
{
    return "";
}

defaultproperties
{
     CaptionStyleName="BBSlider"
     StyleName="BBSquareButton"
     WinWidth=0.300000
     WinHeight=0.040000
     bAcceptsInput=True
     bCaptureMouse=True
}
