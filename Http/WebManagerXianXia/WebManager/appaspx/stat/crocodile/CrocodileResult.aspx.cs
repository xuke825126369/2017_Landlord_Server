﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebManager.appaspx.stat.crocodile
{
    public partial class CrocodileResult : RefreshPageBase
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            RightMgr.getInstance().opCheck("stat", Session, Response);

            if (!IsPostBack)
            {
                Dictionary<int, Crocodile_RateCFGData> data = Crocodile_RateCFG.getInstance().getAllData();
                foreach (var item in data.Values)
                {
                    if (item.m_areaId == 16)
                        continue;

                    m_result.Items.Add(new ListItem(item.m_name, item.m_areaId.ToString()));
                }
            }
        }

        protected void onSetResult(object sender, EventArgs e)
        {
            if (IsRefreshed)
                return;

            GMUser user = (GMUser)Session["user"];
            ParamGameResultCrocodile param = new ParamGameResultCrocodile();
            param.m_roomId = 1;
            param.m_gameId = (int)GameId.crocodile;
            param.m_result = Convert.ToInt32(m_result.SelectedValue);
            OpRes res = user.doDyop(param, DyOpType.opTypeDyOpGameResult);
            m_res.InnerText = OpResMgr.getInstance().getResultString(res);
        }
    }
}

