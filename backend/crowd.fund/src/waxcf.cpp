#include "waxcf.hpp"

// constructor
waxcf::waxcf(name self, name code, datastream<const char *> ds) : contract(self, code, ds),
                                                                            settings(this->_self, this->_self.value),
                                                                            camppre(this->_self, this->_self.value),
                                                                            campinfo(this->_self, this->_self.value),
                                                                            pledgers(this->_self, this->_self.value),
                                                                            creators(this->_self, this->_self.value)
                                                                            {}

// destructor
waxcf::~waxcf()
{

}

void waxcf::uptsettings()
{
    require_auth(this->_self);

    name n = name("waxcf");

    auto itr = this->settings.find(n.value);
    if (itr != this->settings.end())
    {
        check(false, "Do nothing");
    } else {
        this->settings.emplace(this->_self, [&](auto &row) {
            row.account = n;
        });
    }
}

void waxcf::addcamppre()
{
    require_auth(this->_self);

    name n = name("waxcf");
    
    auto itr = this->settings.find(n.value);
    if (itr != this->settings.end())
    {
        check(false, "Do nothing");
    } else {
        this->settings.emplace(this->_self, [&](auto &row) {
            row.account = n;
        });
    }
}

void waxcf::rmcampre()
{
    require_auth(this->_self);

    name n = name("waxcf");
    
    auto itr = this->settings.find(n.value);
    if (itr != this->settings.end())
    {
        check(false, "Do nothing");
    } else {
        this->settings.emplace(this->_self, [&](auto &row) {
            row.account = n;
        });
    }
}

void waxcf::addcampinfo()
{
    require_auth(this->_self);

    name n = name("waxcf");
    
    auto itr = this->settings.find(n.value);
    if (itr != this->settings.end())
    {
        check(false, "Do nothing");
    } else {
        this->settings.emplace(this->_self, [&](auto &row) {
            row.account = n;
        });
    }
}

void waxcf::rmcampinfo()
{
    require_auth(this->_self);

    name n = name("waxcf");
    
    auto itr = this->settings.find(n.value);
    if (itr != this->settings.end())
    {
        check(false, "Do nothing");
    } else {
        this->settings.emplace(this->_self, [&](auto &row) {
            row.account = n;
        });
    }
}

void waxcf::addpledger()
{
    require_auth(this->_self);

    name n = name("waxcf");
    
    auto itr = this->settings.find(n.value);
    if (itr != this->settings.end())
    {
        check(false, "Do nothing");
    } else {
        this->settings.emplace(this->_self, [&](auto &row) {
            row.account = n;
        });
    }
}

void waxcf::addcreator()
{
    require_auth(this->_self);

    name n = name("waxcf");
    
    auto itr = this->settings.find(n.value);
    if (itr != this->settings.end())
    {
        check(false, "Do nothing");
    } else {
        this->settings.emplace(this->_self, [&](auto &row) {
            row.account = n;
        });
    }
}

void waxcf::addcampaign()
{
    require_auth(this->_self);

    name n = name("waxcf");
    
    auto itr = this->settings.find(n.value);
    if (itr != this->settings.end())
    {
        check(false, "Do nothing");
    } else {
        this->settings.emplace(this->_self, [&](auto &row) {
            row.account = n;
        });
    }
}

void waxcf::rmcampaign()
{
    require_auth(this->_self);

    name n = name("waxcf");
    
    auto itr = this->settings.find(n.value);
    if (itr != this->settings.end())
    {
        check(false, "Do nothing");
    } else {
        this->settings.emplace(this->_self, [&](auto &row) {
            row.account = n;
        });
    }
}

void waxcf::addmilestone()
{
    require_auth(this->_self);

    name n = name("waxcf");
    
    auto itr = this->settings.find(n.value);
    if (itr != this->settings.end())
    {
        check(false, "Do nothing");
    } else {
        this->settings.emplace(this->_self, [&](auto &row) {
            row.account = n;
        });
    }
}

void waxcf::rmmilestone()
{
    require_auth(this->_self);

    name n = name("waxcf");
    
    auto itr = this->settings.find(n.value);
    if (itr != this->settings.end())
    {
        check(false, "Do nothing");
    } else {
        this->settings.emplace(this->_self, [&](auto &row) {
            row.account = n;
        });
    }
}

void waxcf::updmilestone()
{
    require_auth(this->_self);

    name n = name("waxcf");
    
    auto itr = this->settings.find(n.value);
    if (itr != this->settings.end())
    {
        check(false, "Do nothing");
    } else {
        this->settings.emplace(this->_self, [&](auto &row) {
            row.account = n;
        });
    }
}