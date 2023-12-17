#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IObjectReference)
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IObjectReference;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::IObjectReference);
// Type: System.Runtime.Serialization::IObjectReference
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3195))
// CS Name: ::System.Runtime.Serialization::IObjectReference*
class CORDL_TYPE IObjectReference {
public:
// Declarations
/// @brief Method GetRealObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "IObjectReference", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IObjectReference(IObjectReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IObjectReference", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IObjectReference(IObjectReference const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::IObjectReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IObjectReference*, "System.Runtime.Serialization", "IObjectReference");
