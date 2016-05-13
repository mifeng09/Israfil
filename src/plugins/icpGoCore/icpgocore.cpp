#include "icpgocore.h"


IcpGoCore::IcpGoCore()
{
}

IcpGoCore::~IcpGoCore()
{

}

QString IcpGoCore::title() const
{
    return "IcpGoCore";
}

QString IcpGoCore::descryption() const
{
    return "Israfil Core Plugin GoCore";
}

void IcpGoCore::initcore(IsrafilCore *IC)
{
    pIC = IC;
}
