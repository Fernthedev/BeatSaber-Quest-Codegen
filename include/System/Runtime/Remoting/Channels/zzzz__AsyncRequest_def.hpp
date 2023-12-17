#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncRequest)
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class AsyncRequest;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::AsyncRequest);
// Type: System.Runtime.Remoting.Channels::AsyncRequest
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3120))
// CS Name: ::System.Runtime.Remoting.Channels::AsyncRequest*
class CORDL_TYPE AsyncRequest : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field ReplySink offset 0x10
 __declspec(property(get=__get_ReplySink, put=__set_ReplySink)) ::System::Runtime::Remoting::Messaging::IMessageSink*  ReplySink;

/// @brief Field MsgRequest offset 0x18
 __declspec(property(get=__get_MsgRequest, put=__set_MsgRequest)) ::System::Runtime::Remoting::Messaging::IMessage*  MsgRequest;

constexpr void __set_ReplySink(::System::Runtime::Remoting::Messaging::IMessageSink*  value) ;

constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* __get_ReplySink() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> __get_ReplySink() const;

constexpr void __set_MsgRequest(::System::Runtime::Remoting::Messaging::IMessage*  value) ;

constexpr ::System::Runtime::Remoting::Messaging::IMessage* __get_MsgRequest() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessage*> __get_MsgRequest() const;

static inline ::System::Runtime::Remoting::Channels::AsyncRequest* New_ctor(::System::Runtime::Remoting::Messaging::IMessage*  msgRequest, ::System::Runtime::Remoting::Messaging::IMessageSink*  replySink) ;

/// @brief Method .ctor addr 0x24a3d00 size 0x2c virtual false final false
inline void _ctor(::System::Runtime::Remoting::Messaging::IMessage*  msgRequest, ::System::Runtime::Remoting::Messaging::IMessageSink*  replySink) ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncRequest(AsyncRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncRequest(AsyncRequest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncRequest()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::AsyncRequest, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::AsyncRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::AsyncRequest*, "System.Runtime.Remoting.Channels", "AsyncRequest");
