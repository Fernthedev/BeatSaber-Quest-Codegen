#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IContributeEnvoySink)
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System {
class MarshalByRefObject;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContributeEnvoySink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::IContributeEnvoySink);
// Type: System.Runtime.Remoting.Contexts::IContributeEnvoySink
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3109))
// CS Name: ::System.Runtime.Remoting.Contexts::IContributeEnvoySink*
class CORDL_TYPE IContributeEnvoySink {
public:
// Declarations
/// @brief Method GetEnvoySink addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Runtime::Remoting::Messaging::IMessageSink* GetEnvoySink(::System::MarshalByRefObject*  obj, ::System::Runtime::Remoting::Messaging::IMessageSink*  nextSink) ;

// Ctor Parameters [CppParam { name: "", ty: "IContributeEnvoySink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IContributeEnvoySink(IContributeEnvoySink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IContributeEnvoySink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IContributeEnvoySink(IContributeEnvoySink const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IContributeEnvoySink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IContributeEnvoySink*, "System.Runtime.Remoting.Contexts", "IContributeEnvoySink");
