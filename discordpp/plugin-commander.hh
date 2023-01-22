#pragma once

#include <nlohmann/json.hpp>
#include <discordpp/plugin-overload.hh>

namespace discordpp
{
	template <class BASE>
	class PluginCommander : public BASE, virtual BotStruct
	{
	public:
		std::string prefix = "?"; // will be changed by the user (hopefully!)
	};
}