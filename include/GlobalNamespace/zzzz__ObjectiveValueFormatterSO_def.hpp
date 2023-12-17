#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectiveValueFormatterSO)
// Forward declare root types
namespace GlobalNamespace {
class ObjectiveValueFormatterSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObjectiveValueFormatterSO);
// Type: ::ObjectiveValueFormatterSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4465))
// CS Name: ::ObjectiveValueFormatterSO*
class CORDL_TYPE ObjectiveValueFormatterSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Method FormatValue addr 0x2352eb0 size 0x1c virtual true final false
inline ::StringW FormatValue(int32_t  value) ;

static inline ::GlobalNamespace::ObjectiveValueFormatterSO* New_ctor() ;

/// @brief Method .ctor addr 0x2352a0c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectiveValueFormatterSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectiveValueFormatterSO(ObjectiveValueFormatterSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectiveValueFormatterSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectiveValueFormatterSO(ObjectiveValueFormatterSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObjectiveValueFormatterSO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectiveValueFormatterSO, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObjectiveValueFormatterSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectiveValueFormatterSO*, "", "ObjectiveValueFormatterSO");
