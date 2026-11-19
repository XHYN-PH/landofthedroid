/**
 *
 *
 * @author  Jesse LaChapelle (neilg@digitalextremes.com)
 * @version $Revision: 1.13 $
 * @date    July 2004
 */
class DOTZStoryMenu extends DOTZStoryBase;



var string StoryType;

//Controls
var Automated GUIButton   BackButton;

//var Automated array<GUIButton> ChapterButton; doesn't work...forget it
var Automated GUILabel Chapter1Label;
var Automated GUILabel Chapter2Label;
var Automated GUILabel Chapter3Label;
var Automated GUILabel Chapter4Label;
var Automated GUILabel Chapter5Label;
var Automated GUILabel Chapter6Label;
var Automated GUILabel Chapter7Label;
var Automated GUILabel Chapter8Label;
var Automated GUILabel Chapter9Label;
var Automated GUILabel Chapter10Label;
var Automated GUILabel Chapter11Label;

var Automated GUIButton   Chapter1Button;
var Automated GUIButton   Chapter2Button;
var Automated GUIButton   Chapter3Button;
var Automated GUIButton   Chapter4Button;
var Automated GUIButton   Chapter5Button;
var Automated GUIButton   Chapter6Button;
var Automated GUIButton   Chapter7Button;
var Automated GUIButton   Chapter8Button;
var Automated GUIButton   Chapter9Button;
var Automated GUIButton   Chapter10Button;
var Automated GUIButton   Chapter11Button;
var Automated GUILabel    Title;

//internal
var int escHack;

/*****************************************************************
 * InitComponent
 *****************************************************************
 */
function InitComponent(GUIController MyController, GUIComponent MyOwner){

    Super.InitComponent(MyController, MyOwner);

    //i.e. if at chapter one, then chapter 2 on is disabled
    switch (ChapterMax){
    case 0:
//        Chapter1Button.bVisible = false;
        Chapter1Button.MenuState = MSAT_Disabled;
    case 1:
//        Chapter2Button.bVisible = false;
        Chapter2Button.MenuState = MSAT_Disabled;
    case 2:
//        Chapter3Button.bVisible = false;
        Chapter3Button.MenuState = MSAT_Disabled;
    case 3:
//        Chapter4Button.bVisible = false;
        Chapter4Button.MenuState = MSAT_Disabled;
    case 4:
//        Chapter5Button.bVisible = false;
        Chapter5Button.MenuState = MSAT_Disabled;
    case 5:
//        Chapter6Button.bVisible = false;
        Chapter6Button.MenuState = MSAT_Disabled;
    case 6:
//        Chapter7Button.bVisible = false;
        Chapter7Button.MenuState = MSAT_Disabled;
    case 7:
//        Chapter8Button.bVisible = false;
        Chapter8Button.MenuState = MSAT_Disabled;
    case 8:
//        Chapter9Button.bVisible = false;
        Chapter9Button.MenuState = MSAT_Disabled;
    case 9:
//        Chapter10Button.bVisible = false;
        Chapter10Button.MenuState = MSAT_Disabled;
    case 10:
        //Chapter11Button.bNeverFocus = true; // bVisible = false;
        Chapter11Button.MenuState = MSAT_Disabled;


    }
}

/*****************************************************************
 * HandleParameters
 * When open menu get's called, the parameter values are supplied
 * here.
 *
 * Param1 - the menu to load
 * Param2 - the name of the sub menu to load on top of the first menu
 *****************************************************************
 */
event HandleParameters( String aStoryType, String param2 ) {
    StoryType = aStoryType;
}

/*****************************************************************
 * SelectChapter
 *****************************************************************
 */
function bool SelectChapter( GUIComponent Sender){

    local string ChapterNum;

  	if (PlayerOwner().Pawn != None) {
  	   PlayerOwner().Pawn.PlayOwnedSound(ClickSound,SLOT_Interface,1.0);
  	}

    switch (Sender){
    case Chapter1Button:
        ChapterNum = "1"; break;
    case Chapter2Button:
        ChapterNum = "2"; break;
    case Chapter3Button:
        ChapterNum = "3"; break;
    case Chapter4Button:
        ChapterNum = "4"; break;
    case Chapter5Button:
        ChapterNum = "5"; break;
    case Chapter6Button:
        ChapterNum = "6"; break;
    case Chapter7Button:
        ChapterNum = "7"; break;
    case Chapter8Button:
        ChapterNum = "8"; break;
    case Chapter9Button:
        ChapterNum = "9"; break;
    case Chapter10Button:
        ChapterNum = "10"; break;
    case Chapter11Button:
        ChapterNum = "11"; break;
    default:
        return true;
    }
    return Controller.OpenMenu("DOTZMenu.DOTZStoryPageMenu", ChapterNum);
}


/*****************************************************************
 * ButtonClicked
 * Back button selected do nothing here!
 *****************************************************************
 */
function bool BackButtonClicked( GUIComponent Sender ) {
   if (PlayerOwner().Pawn != None) {
      PlayerOwner().Pawn.PlayOwnedSound(ClickSound,SLOT_Interface,1.0);
   }
   Controller.CloseMenu( true );
   return true;
}


/*****************************************************************
 * HandleKeyEvent
 *****************************************************************
 */
/*function bool HandleKeyEvent(out byte Key,out byte State,float delta) {

    //ESC IS PRESSED
    if (Key==0x1B) {
       if (escHack == 0){
          escHack = 1;
          return true;
       }
       Controller.CloseMenu(true);
    }
    return true;
}*/




//===========================================================================
// DefaultProperties
//===========================================================================

                                                     //Caption="Chapter 1 : Home              "

defaultproperties
{
     Begin Object Class=GUIButton Name=MyBackButton
         Caption="Back"
         StyleName="BBSquareButton"
         Hint="Return to the previous menu"
         WinTop=0.900000
         WinLeft=0.420000
         WinWidth=0.180000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.BackButtonClicked
         Name="MyBackButton"
     End Object
     BackButton=GUIButton'DOTZMenu_current.DOTZStoryMenu.MyBackButton'
     Begin Object Class=GUILabel Name=CH1_Label
         Caption="Chapter 1 : Home"
         StyleName="BBSquareButton"
         WinTop=0.300000
         WinLeft=0.260000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         Name="CH1_Label"
     End Object
     Chapter1Label=GUILabel'DOTZMenu_current.DOTZStoryMenu.CH1_Label'
     Begin Object Class=GUILabel Name=CH2_Label
         Caption="Chapter 2 : My Neighbors"
         StyleName="BBSquareButton"
         WinTop=0.360000
         WinLeft=0.260000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         Name="CH2_Label"
     End Object
     Chapter2Label=GUILabel'DOTZMenu_current.DOTZStoryMenu.CH2_Label'
     Begin Object Class=GUILabel Name=CH3_Label
         Caption="Chapter 3 : Main Street"
         StyleName="BBSquareButton"
         WinTop=0.420000
         WinLeft=0.260000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH3_Label"
     End Object
     Chapter3Label=GUILabel'DOTZMenu_current.DOTZStoryMenu.CH3_Label'
     Begin Object Class=GUILabel Name=CH4_Label
         Caption="Chapter 4 : The Doctor"
         StyleName="BBSquareButton"
         WinTop=0.480000
         WinLeft=0.260000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH4_Label"
     End Object
     Chapter4Label=GUILabel'DOTZMenu_current.DOTZStoryMenu.CH4_Label'
     Begin Object Class=GUILabel Name=CH5_Label
         Caption="Chapter 5 : Inferno"
         StyleName="BBSquareButton"
         WinTop=0.540000
         WinLeft=0.260000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH5_Label"
     End Object
     Chapter5Label=GUILabel'DOTZMenu_current.DOTZStoryMenu.CH5_Label'
     Begin Object Class=GUILabel Name=CH6_label
         Caption="Chapter 6 : Alleyways"
         StyleName="BBSquareButton"
         WinTop=0.600000
         WinLeft=0.260000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH6_label"
     End Object
     Chapter6Label=GUILabel'DOTZMenu_current.DOTZStoryMenu.CH6_label'
     Begin Object Class=GUILabel Name=CH7_label
         Caption="Chapter 7 : Police Station"
         StyleName="BBSquareButton"
         WinTop=0.300000
         WinLeft=0.530000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH7_label"
     End Object
     Chapter7Label=GUILabel'DOTZMenu_current.DOTZStoryMenu.CH7_label'
     Begin Object Class=GUILabel Name=CH8_label
         Caption="Chapter 8 : Covering Fire"
         StyleName="BBSquareButton"
         WinTop=0.360000
         WinLeft=0.530000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH8_label"
     End Object
     Chapter8Label=GUILabel'DOTZMenu_current.DOTZStoryMenu.CH8_label'
     Begin Object Class=GUILabel Name=CH9_label
         Caption="Chapter 9 : Sewers"
         StyleName="BBSquareButton"
         WinTop=0.420000
         WinLeft=0.530000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH9_label"
     End Object
     Chapter9Label=GUILabel'DOTZMenu_current.DOTZStoryMenu.CH9_label'
     Begin Object Class=GUILabel Name=CH10_label
         Caption="Chapter 10 : Safe House "
         StyleName="BBSquareButton"
         WinTop=0.480000
         WinLeft=0.530000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH10_label"
     End Object
     Chapter10Label=GUILabel'DOTZMenu_current.DOTZStoryMenu.CH10_label'
     Begin Object Class=GUILabel Name=CH11_label
         Caption="Chapter 11 : Getaway      "
         StyleName="BBSquareButton"
         WinTop=0.540000
         WinLeft=0.530000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH11_label"
     End Object
     Chapter11Label=GUILabel'DOTZMenu_current.DOTZStoryMenu.CH11_label'
     Begin Object Class=GUIButton Name=CH1_button
         StyleName="BBSquareButton"
         WinTop=0.300000
         WinLeft=0.250000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH1_button"
     End Object
     Chapter1Button=GUIButton'DOTZMenu_current.DOTZStoryMenu.CH1_button'
     Begin Object Class=GUIButton Name=CH2_button
         StyleName="BBSquareButton"
         WinTop=0.360000
         WinLeft=0.250000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH2_button"
     End Object
     Chapter2Button=GUIButton'DOTZMenu_current.DOTZStoryMenu.CH2_button'
     Begin Object Class=GUIButton Name=CH3_button
         StyleName="BBSquareButton"
         WinTop=0.420000
         WinLeft=0.250000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH3_button"
     End Object
     Chapter3Button=GUIButton'DOTZMenu_current.DOTZStoryMenu.CH3_button'
     Begin Object Class=GUIButton Name=CH4_button
         StyleName="BBSquareButton"
         WinTop=0.480000
         WinLeft=0.250000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH4_button"
     End Object
     Chapter4Button=GUIButton'DOTZMenu_current.DOTZStoryMenu.CH4_button'
     Begin Object Class=GUIButton Name=CH5_button
         StyleName="BBSquareButton"
         WinTop=0.540000
         WinLeft=0.250000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH5_button"
     End Object
     Chapter5Button=GUIButton'DOTZMenu_current.DOTZStoryMenu.CH5_button'
     Begin Object Class=GUIButton Name=CH6_button
         StyleName="BBSquareButton"
         WinTop=0.600000
         WinLeft=0.250000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH6_button"
     End Object
     Chapter6Button=GUIButton'DOTZMenu_current.DOTZStoryMenu.CH6_button'
     Begin Object Class=GUIButton Name=CH7_button
         StyleName="BBSquareButton"
         WinTop=0.300000
         WinLeft=0.520000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH7_button"
     End Object
     Chapter7Button=GUIButton'DOTZMenu_current.DOTZStoryMenu.CH7_button'
     Begin Object Class=GUIButton Name=CH8_button
         StyleName="BBSquareButton"
         WinTop=0.360000
         WinLeft=0.520000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH8_button"
     End Object
     Chapter8Button=GUIButton'DOTZMenu_current.DOTZStoryMenu.CH8_button'
     Begin Object Class=GUIButton Name=CH9_button
         StyleName="BBSquareButton"
         WinTop=0.420000
         WinLeft=0.520000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH9_button"
     End Object
     Chapter9Button=GUIButton'DOTZMenu_current.DOTZStoryMenu.CH9_button'
     Begin Object Class=GUIButton Name=CH10_button
         StyleName="BBSquareButton"
         WinTop=0.480000
         WinLeft=0.520000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH10_button"
     End Object
     Chapter10Button=GUIButton'DOTZMenu_current.DOTZStoryMenu.CH10_button'
     Begin Object Class=GUIButton Name=CH11_button
         StyleName="BBSquareButton"
         WinTop=0.540000
         WinLeft=0.520000
         WinWidth=0.250000
         WinHeight=0.050000
         RenderWeight=0.900000
         __OnClick__Delegate=DOTZStoryMenu.SelectChapter
         Name="CH11_button"
     End Object
     Chapter11Button=GUIButton'DOTZMenu_current.DOTZStoryMenu.CH11_button'
     Begin Object Class=GUILabel Name=The_title
         Caption="The Story"
         TextAlign=TXTA_Center
         TextColor=(B=119,G=243,R=248)
         TextFont="BigGuiFont"
         WinTop=0.030000
         WinLeft=0.400000
         WinWidth=0.200000
         WinHeight=0.100000
         Name="The_title"
     End Object
     Title=GUILabel'DOTZMenu_current.DOTZStoryMenu.The_title'
     __OnKeyEvent__Delegate=DOTZStoryMenu.HandleKeyEvent
}
