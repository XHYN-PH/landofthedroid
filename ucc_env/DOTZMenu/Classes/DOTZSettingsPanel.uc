//-----------------------------------------------------------
//
//-----------------------------------------------------------
class DOTZSettingsPanel extends GUITabPanel;

function InitPanel() {
    Super.InitPanel();
    ShowPanel(false);
}

/*****************************************************************
 * ShowPanel
 *****************************************************************
 */
function ShowPanel(bool bShow) {
    local int c;

    Super.ShowPanel(bShow);

    for (c = 0; c < Controls.Length; ++c) {
        if (Controls[c] != None) {
            Controls[c].SetVisibility(bShow);
            Controls[c].bAcceptsInput = bShow;
        }
    }
}

defaultproperties
{
    PropagateVisibility=True
}
