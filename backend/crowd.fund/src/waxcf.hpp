#pragma once
#include <eosio/eosio.hpp>
#include <eosio/name.hpp>
#include <eosio/singleton.hpp>
#include <eosio/time.hpp>
#include <eosio/system.hpp>
#include <eosio/transaction.hpp>
#include <eosio/datastream.hpp>
#include <eosio/asset.hpp>

const eosio::symbol sy_wax = eosio::symbol("WAX", 8);

using namespace eosio;
using namespace std;

CONTRACT waxcf : public eosio::contract
{
  public:
    // constructor
    waxcf(name self, name code, datastream<const char *> ds);

    // destructor
    ~waxcf();

    // Update Settings
    ACTION uptsettings();

    // Add / Remove Campaign Preview
    ACTION addcamppre();
    ACTION rmcampre();

    // Add / Remove Campaign Info
    ACTION addcampinfo();
    ACTION rmcampinfo();

    // Add New Pledger
    ACTION addpledger();

    // Add New Creator
    ACTION addcreator();

    // Add / Remove Campaign
    ACTION addcampaign();
    ACTION rmcampaign();

    // Add / Remove / Update Milestones
    ACTION addmilestone();
    ACTION rmmilestone();
    ACTION updmilestone();
    

  private:

    TABLE settings_t
    {
        eosio::name account;
        uint64_t primary_key() const { return account.value; }
    };

    TABLE camppre_t
    {
        eosio::name account;
        uint64_t primary_key() const { return account.value; }
    };

    TABLE campinfo_t
    {
        eosio::name account;
        uint64_t primary_key() const { return account.value; }
    };

    TABLE pledgers_t
    {
        eosio::name account;
        uint64_t primary_key() const { return account.value; }
    };

    TABLE creators_t
    {
        eosio::name account;
        uint64_t primary_key() const { return account.value; }
    };

    eosio::multi_index<"settings"_n, settings_t> settings;
    
    eosio::multi_index<"camppre"_n, camppre_t> camppre;

    eosio::multi_index<"campinfo"_n, campinfo_t> campinfo;
    
    eosio::multi_index<"pledgers"_n, pledgers_t> pledgers;
    
    eosio::multi_index<"creators"_n, creators_t> creators;

};