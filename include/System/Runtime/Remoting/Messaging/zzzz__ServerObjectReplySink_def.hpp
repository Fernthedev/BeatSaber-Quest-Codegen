#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ServerObjectReplySink)
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting {
class ServerIdentity;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ServerObjectReplySink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ServerObjectReplySink);
// Type: System.Runtime.Remoting.Messaging::ServerObjectReplySink
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3189))
// CS Name: ::System.Runtime.Remoting.Messaging::ServerObjectReplySink*
class CORDL_TYPE ServerObjectReplySink : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _replySink offset 0x10
 __declspec(property(get=__get__replySink, put=__set__replySink)) ::System::Runtime::Remoting::Messaging::IMessageSink*  _replySink;

/// @brief Field _identity offset 0x18
 __declspec(property(get=__get__identity, put=__set__identity)) ::System::Runtime::Remoting::ServerIdentity*  _identity;

/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

constexpr void __set__replySink(::System::Runtime::Remoting::Messaging::IMessageSink*  value) ;

constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* __get__replySink() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> __get__replySink() const;

constexpr void __set__identity(::System::Runtime::Remoting::ServerIdentity*  value) ;

constexpr ::System::Runtime::Remoting::ServerIdentity* __get__identity() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::ServerIdentity*> __get__identity() const;

static inline ::System::Runtime::Remoting::Messaging::ServerObjectReplySink* New_ctor(::System::Runtime::Remoting::ServerIdentity*  identity, ::System::Runtime::Remoting::Messaging::IMessageSink*  replySink) ;

/// @brief Method .ctor addr 0x24b38f4 size 0x2c virtual false final false
inline void _ctor(::System::Runtime::Remoting::ServerIdentity*  identity, ::System::Runtime::Remoting::Messaging::IMessageSink*  replySink) ;

/// @brief Method SyncProcessMessage addr 0x24b3920 size 0xc8 virtual true final true
inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  msg) ;

/// @brief Method AsyncProcessMessage addr 0x24b39e8 size 0x40 virtual true final true
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  msg, ::System::Runtime::Remoting::Messaging::IMessageSink*  replySink) ;

// Ctor Parameters [CppParam { name: "", ty: "ServerObjectReplySink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerObjectReplySink(ServerObjectReplySink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerObjectReplySink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerObjectReplySink(ServerObjectReplySink const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ServerObjectReplySink()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ServerObjectReplySink, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ServerObjectReplySink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ServerObjectReplySink*, "System.Runtime.Remoting.Messaging", "ServerObjectReplySink");
