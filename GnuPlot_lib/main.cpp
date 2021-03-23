#include <iostream>
#include <math.h>
#include <stdio.h>
#include <windows.h>

#include "gnuoplot_manager/include/GnuPlot.h"

int main()
{
    std::vector<Point> pkt;
    pkt.push_back(Point{0,1});
    pkt.push_back(Point{1,2});
    pkt.push_back(Point{2,3});

    GnuPlot::Clear();
    GnuPlot::SetLegend("outside");
    GnuPlot::EnableAxis();
    GnuPlot::SetSize(Range{0,2});
    GnuPlot::AddPoint(0,0,"1");
    GnuPlot::AddPoint(1,1,"2");
    GnuPlot::AddPoint(2,2,"3");
    GnuPlot::AddPoints(pkt,"4","000000","punkty");
    GnuPlot::AddCommand_main_cmd("x*x");
    GnuPlot::SetTitle("Test");
    GnuPlot::Draw();

    return 0;
}
