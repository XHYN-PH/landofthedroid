/**
 * DOTZJoinMenu
 * -contains all the multiplayer join game panels
 *
 * @author  Seelan Vamatheva
 * @version $Revision: 1.0 $
 * @date    May 2005
 */
class DOTZJoinMenu extends DOTZMultiPlayerBase;




var Automated GUITabControl TabC;

//All the panels
var DOTZMultiPlayerClientPanel InternetListPage;
var DOTZMultiPlayerClientPanel DirectConnectionPage;
var DOTZMultiPlayerClientPanel FilterPage;
var DOTZMultiPlayerClientPanel LANPage;

var bool bCreatedQueryTabs;
var bool bCreatedStandardTabs;
var string PageCaption;

var bool bInitialized;

//A reference to the controls that are on the panels
var BBComboBox Filter_GameTypeBox;
const FILTER_GAMETYPE = 0;

var moCheckBox Filter_FullServerBox;
const FILTER_FULLSERVER = 2;

var moCheckBox Filter_PasswordBox;
const FILTER_PASSWORD = 4;

/*****************************************************************
 * InitComponents
 *****************************************************************
 */
function InitComponent(GUIController MyController, GUIComponent MyOwner)
{
    Super.InitComponent(MyController, MyOwner);

    //make page pretty
    SetPageCaption(PageCaption);
    AddBackButton();

    // delegates
    OnClose = InternalOnClose;

    // Add pages
    if(!bCreatedStandardTabs){
       AddBrowserPage(InternetListPage, "Internet");
       AddBrowserPage(FilterPage, "Internet Filter");
       AddBrowserPage(LANPage, "LAN");
       AddBrowserPage(DirectConnectionPage, "Connect to IP");
       bCreatedStandardTabs=true;
    }

    //add references to the sub controls
    Filter_GameTypeBox = BBComboBox(FilterPage.Controls[FILTER_GAMETYPE]);
    Filter_FullServerBox = moCheckBox(FilterPage.Controls[FILTER_FULLSERVER]);
    Filter_PasswordBox = moCheckBox(FilterPage.Controls[FILTER_PASSWORD]);
    bInitialized = true;
}

/*****************************************************************
 *
 *****************************************************************
 */
function AddBrowserPage( DOTZMultiPlayerClientPanel NewPage, string caption )
{
    TabC.AddTab(Caption,"", NewPage);
    NewPage.ParentPage = self;
}

/*****************************************************************
 * TabChange
 *****************************************************************
 */
function TabChange( GUIComponent Sender ) {
   if ( GUITabButton(Sender) == none ) return;
   if (!bInitialized) return;
  	if (PlayerOwner().Pawn != None) {
  	   PlayerOwner().Pawn.PlayOwnedSound(ClickSound,SLOT_Interface,1.0);
  	}
}


/*****************************************************************
 * InternalOnClose
 *****************************************************************
 */
function InternalOnClose(optional Bool bCanceled)
{
    local int i;
    for( i=0;i<TabC.TabStack.Length;i++ ){
        DOTZMultiPlayerClientPanel(TabC.TabStack[i].MyPanel).OnCloseBrowser();
    }
    Super.OnClose(bCanceled);
}

defaultproperties
{
     Begin Object Class=GUITabControl Name=ServerBrowserTabs
         bDockPanels=True
         TabHeight=0.050000
         bAcceptsInput=True
         WinTop=0.165000
         WinLeft=0.110000
         WinHeight=48.000000
         __OnChange__Delegate=DOTZJoinMenu.TabChange
         Name="ServerBrowserTabs"
     End Object
     TabC=GUITabControl'DOTZMenu.DOTZJoinMenu.ServerBrowserTabs'
     Begin Object Class=DOTZMultiPlayerClientPanelServerList Name=InternetListPanel
         Name="InternetListPanel"
     End Object
     InternetListPage=DOTZMultiPlayerClientPanelServerList'DOTZMenu.DOTZJoinMenu.InternetListPanel'
     Begin Object Class=DOTZMultiPlayerClientPanelManual Name=DirectConnectionPanel
         Name="DirectConnectionPanel"
     End Object
     DirectConnectionPage=DOTZMultiPlayerClientPanelManual'DOTZMenu.DOTZJoinMenu.DirectConnectionPanel'
     Begin Object Class=DOTZMultiPlayerClientPanelFilter Name=FilterPanel
         Name="FilterPanel"
     End Object
     FilterPage=DOTZMultiPlayerClientPanelFilter'DOTZMenu.DOTZJoinMenu.FilterPanel'
     Begin Object Class=DOTZMultiPlayerClientPanelLAN Name=LANPanel
         Name="LANPanel"
     End Object
     LANPage=DOTZMultiPlayerClientPanelLAN'DOTZMenu.DOTZJoinMenu.LANPanel'
     PageCaption="Join Multiplayer"
     Background=Texture'DOTZTInterface.Menu.MultiplayerBackground'
     __OnKeyEvent__Delegate=DOTZJoinMenu.HandleKeyEvent
}
