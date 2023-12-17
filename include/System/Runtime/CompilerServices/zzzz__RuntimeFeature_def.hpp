#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RuntimeFeature)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class RuntimeFeature;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::RuntimeFeature);
// Type: System.Runtime.CompilerServices::RuntimeFeature
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3382))
// CS Name: ::System.Runtime.CompilerServices::RuntimeFeature*
class CORDL_TYPE RuntimeFeature : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method get_IsDynamicCodeSupported addr 0x24db254 size 0x8 virtual false final false
static inline bool get_IsDynamicCodeSupported() ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeFeature", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeFeature(RuntimeFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeFeature", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeFeature(RuntimeFeature const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimeFeature()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::RuntimeFeature, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeFeature);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeFeature*, "System.Runtime.CompilerServices", "RuntimeFeature");
