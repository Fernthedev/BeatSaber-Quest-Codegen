#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SonyLevelProductModelSO_def.hpp"
CORDL_MODULE_EXPORT(PS5LevelProductsModelSO)
// Forward declare root types
namespace GlobalNamespace {
class PS5LevelProductsModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5LevelProductsModelSO);
// Type: ::PS5LevelProductsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4591))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4563))
// CS Name: ::PS5LevelProductsModelSO*
class CORDL_TYPE PS5LevelProductsModelSO : public ::GlobalNamespace::SonyLevelProductModelSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::SonyLevelProductModelSO)]{};

static inline ::GlobalNamespace::PS5LevelProductsModelSO* New_ctor() ;

/// @brief Method .ctor addr 0x23682bc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PS5LevelProductsModelSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS5LevelProductsModelSO(PS5LevelProductsModelSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS5LevelProductsModelSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS5LevelProductsModelSO(PS5LevelProductsModelSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PS5LevelProductsModelSO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5LevelProductsModelSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5LevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5LevelProductsModelSO*, "", "PS5LevelProductsModelSO");
