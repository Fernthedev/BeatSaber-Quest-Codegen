#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IChannelSender)
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Channels {
class IChannel;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class IChannelSender;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::IChannelSender);
// Type: System.Runtime.Remoting.Channels::IChannelSender
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3124))
// CS Name: ::System.Runtime.Remoting.Channels::IChannelSender*
class CORDL_TYPE IChannelSender {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannel"
constexpr operator  ::System::Runtime::Remoting::Channels::IChannel*() noexcept;

/// @brief Method CreateMessageSink addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Runtime::Remoting::Messaging::IMessageSink* CreateMessageSink(::StringW  url, ::System::Object*  remoteChannelData, ByRef<::StringW>  objectURI) ;

// Ctor Parameters [CppParam { name: "", ty: "IChannelSender", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IChannelSender(IChannelSender && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IChannelSender", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IChannelSender(IChannelSender const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::IChannelSender);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::IChannelSender*, "System.Runtime.Remoting.Channels", "IChannelSender");
