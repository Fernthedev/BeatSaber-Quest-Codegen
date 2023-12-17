#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Stack_def.hpp"
CORDL_MODULE_EXPORT(GenericStack)
// Forward declare root types
namespace UnityEngineInternal {
class GenericStack;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngineInternal::GenericStack);
// Type: UnityEngineInternal::GenericStack
namespace UnityEngineInternal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3786))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9963))
// CS Name: ::UnityEngineInternal::GenericStack*
class CORDL_TYPE GenericStack : public ::System::Collections::Stack {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Collections::Stack)]{};

static inline ::UnityEngineInternal::GenericStack* New_ctor() ;

/// @brief Method .ctor addr 0x2c9d5b0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericStack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericStack(GenericStack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericStack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericStack(GenericStack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericStack()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::GenericStack, 0x28>, "Size mismatch!");

} // namespace end def UnityEngineInternal
NEED_NO_BOX(::UnityEngineInternal::GenericStack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::GenericStack*, "UnityEngineInternal", "GenericStack");
