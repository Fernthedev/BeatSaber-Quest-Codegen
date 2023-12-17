#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ChannelServices)
namespace System::Runtime::Remoting::Messaging {
class ReturnMessage;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Channels {
class IChannel;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Channels {
class IChannelSender;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Contexts {
class CrossContextChannel;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Remoting {
class ChannelData;
}
namespace System::Runtime::Remoting {
class ProviderData;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class ChannelServices;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::ChannelServices);
// Type: System.Runtime.Remoting.Channels::ChannelServices
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3114))
// CS Name: ::System.Runtime.Remoting.Channels::ChannelServices*
class CORDL_TYPE ChannelServices : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_registeredChannels(::System::Collections::ArrayList*  value) ;

static inline ::System::Collections::ArrayList* getStaticF_registeredChannels() ;

static inline void setStaticF_delayedClientChannels(::System::Collections::ArrayList*  value) ;

static inline ::System::Collections::ArrayList* getStaticF_delayedClientChannels() ;

static inline void setStaticF__crossContextSink(::System::Runtime::Remoting::Contexts::CrossContextChannel*  value) ;

static inline ::System::Runtime::Remoting::Contexts::CrossContextChannel* getStaticF__crossContextSink() ;

static inline void setStaticF_CrossContextUrl(::StringW  value) ;

static inline ::StringW getStaticF_CrossContextUrl() ;

static inline void setStaticF_oldStartModeTypes(::System::Collections::IList*  value) ;

static inline ::System::Collections::IList* getStaticF_oldStartModeTypes() ;

/// @brief Method get_CrossContextChannel addr 0x249fb50 size 0x58 virtual false final false
static inline ::System::Runtime::Remoting::Contexts::CrossContextChannel* get_CrossContextChannel() ;

/// @brief Method CreateClientChannelSinkChain addr 0x249fba8 size 0x87c virtual false final false
static inline ::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain(::StringW  url, ::System::Object*  remoteChannelData, ByRef<::StringW>  objectUri) ;

/// @brief Method CreateClientChannelSinkChain addr 0x24a0424 size 0x208 virtual false final false
static inline ::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain(::System::Runtime::Remoting::Channels::IChannelSender*  sender, ::StringW  url, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  channelDataArray, ByRef<::StringW>  objectUri) ;

/// @brief Method RegisterChannel addr 0x24a062c size 0x58 virtual false final false
static inline void RegisterChannel(::System::Runtime::Remoting::Channels::IChannel*  chnl) ;

/// @brief Method RegisterChannel addr 0x24a0684 size 0x87c virtual false final false
static inline void RegisterChannel(::System::Runtime::Remoting::Channels::IChannel*  chnl, bool  ensureSecurity) ;

/// @brief Method RegisterChannelConfig addr 0x24a0f00 size 0xbe8 virtual false final false
static inline void RegisterChannelConfig(::System::Runtime::Remoting::ChannelData*  channel) ;

/// @brief Method CreateProvider addr 0x24a1ae8 size 0x318 virtual false final false
static inline ::System::Object* CreateProvider(::System::Runtime::Remoting::ProviderData*  prov) ;

/// @brief Method SyncDispatchMessage addr 0x24a1e00 size 0xa8 virtual false final false
static inline ::System::Runtime::Remoting::Messaging::IMessage* SyncDispatchMessage(::System::Runtime::Remoting::Messaging::IMessage*  msg) ;

/// @brief Method CheckIncomingMessage addr 0x24a1ea8 size 0x2a8 virtual false final false
static inline ::System::Runtime::Remoting::Messaging::ReturnMessage* CheckIncomingMessage(::System::Runtime::Remoting::Messaging::IMessage*  msg) ;

/// @brief Method CheckReturnMessage addr 0x24a2150 size 0x1d0 virtual false final false
static inline ::System::Runtime::Remoting::Messaging::IMessage* CheckReturnMessage(::System::Runtime::Remoting::Messaging::IMessage*  callMsg, ::System::Runtime::Remoting::Messaging::IMessage*  retMsg) ;

/// @brief Method IsLocalCall addr 0x24a2320 size 0x8 virtual false final false
static inline bool IsLocalCall(::System::Runtime::Remoting::Messaging::IMessage*  callMsg) ;

/// @brief Method GetCurrentChannelInfo addr 0x24a243c size 0x500 virtual false final false
static inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCurrentChannelInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "ChannelServices", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChannelServices(ChannelServices && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChannelServices", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChannelServices(ChannelServices const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ChannelServices()  = default;
public:


// Fields

// Static field registeredChannels

// Static field delayedClientChannels

// Static field _crossContextSink

// Static field CrossContextUrl

// Static field oldStartModeTypes


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::ChannelServices, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::ChannelServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::ChannelServices*, "System.Runtime.Remoting.Channels", "ChannelServices");
