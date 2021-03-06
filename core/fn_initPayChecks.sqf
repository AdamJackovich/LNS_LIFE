#include "..\script_macros.hpp"
/*
	File: fn_initPayChecks.sqf
	Author: ScarsoLP

    Created: 15th September 2015
    Last Modified: 25th March 2016

	Description:
	Changes The Player(s) paycheck depending on what rank/level they are in the Police/NHS/Donator. 
    Also changes the palyer(s) paycheck depending on what licenses they have.
*/

/* Changes The Paycheck Depending On Levels */

switch (playerSide) do
{
	case west:
	{
		switch(FETCH_CONST(life_coplevel)) do
		{
			case 0: {life_paycheck = life_paycheck + 0;};
			case 1: {life_paycheck = life_paycheck + 500;}; 
			case 2: {life_paycheck = life_paycheck + 1000;}; 
			case 3: {life_paycheck = life_paycheck + 1500;}; 
			case 4: {life_paycheck = life_paycheck + 2000;}; 
			case 5: {life_paycheck = life_paycheck + 2500;}; 
			case 6: {life_paycheck = life_paycheck + 3000;}; 
			case 7: {life_paycheck = life_paycheck + 3500;};
			case 8: {life_paycheck = life_paycheck + 4000;};
			case 9: {life_paycheck = life_paycheck + 5000;};
			case 10: {life_paycheck = life_paycheck + 3000;};
			case 11: {life_paycheck = life_paycheck + 3500;};
			case 12: {life_paycheck = life_paycheck + 4000;};
			case 13: {life_paycheck = life_paycheck + 5000;};
		};
		switch(FETCH_CONST(life_donator)) do
		{
			case 0: {life_paycheck = life_paycheck + 0;}; 
			case 1: {life_paycheck = life_paycheck + 2000;};
			case 2: {life_paycheck = life_paycheck + 2500;}; 
			case 3: {life_paycheck = life_paycheck + 3000;}; 
			case 4: {life_paycheck = life_paycheck + 3500;}; 
			case 5: {life_paycheck = life_paycheck + 4000;}; 
		};
	};
/*	
	case east:
	{
		switch(FETCH_CONST(life_rebellevel)) do
		{
			case 0: {life_paycheck = life_paycheck + 0;};
			case 1: {life_paycheck = life_paycheck + 2000;}; 
			case 2: {life_paycheck = life_paycheck + 2500;}; 
			case 3: {life_paycheck = life_paycheck + 3000;}; 
			case 4: {life_paycheck = life_paycheck + 3500;}; 
			case 5: {life_paycheck = life_paycheck + 4000;}; 
			case 6: {life_paycheck = life_paycheck + 4500;}; 
			case 7: {life_paycheck = life_paycheck + 5000;};
			case 8: {life_paycheck = life_paycheck + 5000;};
			case 9: {life_paycheck = life_paycheck + 5000;};
			case 10: {life_paycheck = life_paycheck + 5000;};
			case 11: {life_paycheck = life_paycheck + 5000;};
			case 12: {life_paycheck = life_paycheck + 5000;};
		};
		switch(FETCH_CONST(life_donator)) do
		{
			case 0: {life_paycheck = life_paycheck + 0;}; 
			case 1: {life_paycheck = life_paycheck + 2000;};
			case 2: {life_paycheck = life_paycheck + 2500;}; 
			case 3: {life_paycheck = life_paycheck + 3000;}; 
			case 4: {life_paycheck = life_paycheck + 3500;}; 
			case 5: {life_paycheck = life_paycheck + 4000;}; 
		};
	};
*/
	case independent:
	{
		switch(FETCH_CONST(life_mediclevel)) do
		{
			case 0: {life_paycheck = life_paycheck + 0;}; 
			case 1: {life_paycheck = life_paycheck + 2000;}; 
			case 2: {life_paycheck = life_paycheck + 2500;}; 
			case 3: {life_paycheck = life_paycheck + 3000;};
			case 4: {life_paycheck = life_paycheck + 3500;};
			case 5: {life_paycheck = life_paycheck + 4000;};
		};
		switch(FETCH_CONST(life_donator)) do
		{
			case 0: {life_paycheck = life_paycheck + 0;}; 
			case 1: {life_paycheck = life_paycheck + 2000;};
			case 2: {life_paycheck = life_paycheck + 2500;}; 
			case 3: {life_paycheck = life_paycheck + 3000;}; 
			case 4: {life_paycheck = life_paycheck + 3500;}; 
			case 5: {life_paycheck = life_paycheck + 4000;}; 
		};
	};
	
	case civilian:
	{
		switch(FETCH_CONST(life_donator)) do
		{
			case 0: {life_paycheck = life_paycheck + 0;}; 
			case 1: {life_paycheck = life_paycheck + 2000;};
			case 2: {life_paycheck = life_paycheck + 2500;}; 
			case 3: {life_paycheck = life_paycheck + 3000;}; 
			case 4: {life_paycheck = life_paycheck + 3500;}; 
			case 5: {life_paycheck = life_paycheck + 4000;}; 
		};
	};
};

/* Changes The Paycheck Depending On Licenses */

/* Police Changes */

if(license_civ_pilot) then
{
	life_paycheck = life_paycheck + 2500;
};

/* NHS Changes */

if(license_med_mAir) then
{
	life_paycheck = life_paycheck + 2500;
};

/* Civilian Changes */

if(license_civ_rebel) then
{
	life_paycheck = life_paycheck + 2500;
};

if(license_civ_slaw) then
{
	life_paycheck = life_paycheck + 2500;
};

if(license_civ_plaw) then
{
	life_paycheck = life_paycheck + 2500;
};

if(license_civ_alaw) then
{
	life_paycheck = life_paycheck + 2500;
};

if(license_civ_klaw) then
{
	life_paycheck = life_paycheck + 2500;
};

if(license_civ_flaw) then
{
	life_paycheck = life_paycheck + 2500;
};