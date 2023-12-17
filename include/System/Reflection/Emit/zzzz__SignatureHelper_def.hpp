#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SignatureHelper)
// Forward declare root types
namespace System::Reflection::Emit {
class SignatureHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::SignatureHelper);
// Type: System.Reflection.Emit::SignatureHelper
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3547))
// CS Name: ::System.Reflection.Emit::SignatureHelper*
class CORDL_TYPE SignatureHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "SignatureHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignatureHelper(SignatureHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignatureHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignatureHelper(SignatureHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignatureHelper()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::SignatureHelper, 0x10>, "Size mismatch!");

} // namespace end def System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::SignatureHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::SignatureHelper*, "System.Reflection.Emit", "SignatureHelper");
