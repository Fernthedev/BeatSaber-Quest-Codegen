#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SerializeReference)
// Forward declare root types
namespace UnityEngine {
class SerializeReference;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SerializeReference);
// Type: UnityEngine::SerializeReference
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10049))
// CS Name: ::UnityEngine::SerializeReference*
class CORDL_TYPE SerializeReference : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::UnityEngine::SerializeReference* New_ctor() ;

/// @brief Method .ctor addr 0x2ca1154 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SerializeReference", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializeReference(SerializeReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializeReference", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializeReference(SerializeReference const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SerializeReference()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SerializeReference, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SerializeReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SerializeReference*, "UnityEngine", "SerializeReference");
