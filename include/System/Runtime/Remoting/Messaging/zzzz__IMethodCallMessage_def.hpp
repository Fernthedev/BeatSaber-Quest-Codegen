#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMethodCallMessage)
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::IMethodCallMessage);
// Type: System.Runtime.Remoting.Messaging::IMethodCallMessage
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3171))
// CS Name: ::System.Runtime.Remoting.Messaging::IMethodCallMessage*
class CORDL_TYPE IMethodCallMessage {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr operator  ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IMethodCallMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IMethodCallMessage(IMethodCallMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IMethodCallMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMethodCallMessage(IMethodCallMessage const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IMethodCallMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IMethodCallMessage*, "System.Runtime.Remoting.Messaging", "IMethodCallMessage");
