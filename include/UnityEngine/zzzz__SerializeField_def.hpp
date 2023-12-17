#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SerializeField)
// Forward declare root types
namespace UnityEngine {
class SerializeField;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SerializeField);
// Type: UnityEngine::SerializeField
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10048))
// CS Name: ::UnityEngine::SerializeField*
class CORDL_TYPE SerializeField : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::UnityEngine::SerializeField* New_ctor() ;

/// @brief Method .ctor addr 0x2ca114c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SerializeField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializeField(SerializeField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializeField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializeField(SerializeField const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SerializeField()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SerializeField, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SerializeField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SerializeField*, "UnityEngine", "SerializeField");
