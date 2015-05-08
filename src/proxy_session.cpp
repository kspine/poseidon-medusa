#include "precompiled.hpp"
#include "proxy_session.hpp"
#include <poseidon/http/upgraded_low_level_session_base.hpp>
#include "msg/fetch.hpp"

namespace Medusa {
/*
class ProxySession::TunnelSession : public Poseidon::Http::UpgradedLowLevelSessionBase {
public:
	TunnelSession(const boost::shared_ptr<Session> &parent, std::string uri)
		: Poseidon::Http::UpgradedLowLevelSessionBase(parent, STD_MOVE(uri))
	{
	}

protected:
	void onReadAvail(const void *data, std::size_t size) OVERRIDE {
		
	}
};

ProxySession::ProxySession(Poseidon::UniqueFile socket)
	: Poseidon::Http::Session(STD_MOVE(socket))
{
	LOG_MEDUSA_INFO("Accepted proxy connection: remote = ", getRemoteInfo());
}
ProxySession::~ProxySession(){
	try {
		LOG_MEDUSA_INFO("Destroyed proxy connection: remote = ", getRemoteInfo());
	} catch(...){
		LOG_MEDUSA_INFO("Destroyed proxy connection: remote is not connected");
	}
}

boost::shared_ptr<Poseidon::Http::UpgradedLowLevelSessionBase> ProxySession::onLowLevelRequestHeaders(
	Poseidon::Http::RequestHeaders &requestHeaders, boost::uint64_t contentLength)
{
	if(requestHeaders.verb == Poseidon::Http::V_CONNECT){
		AUTO(tunnel, boost::make_shared<TunnelSession>(virtualSharedFromThis<ProxySession>(), requestHeaders.uri));
		
		return STD_MOVE_IDN(tunnel);
	}
	return Poseidon::Http::Session::onLowLevelRequestHeaders(requestHeaders, contentLength);
}

void ProxySession::onRequest(const Poseidon::Http::RequestHeaders &requestHeaders, const Poseidon::StreamBuffer &entity){
	sendDefault(Poseidon::Http::ST_FORBIDDEN);
}
*/
}
