#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PS5LevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
CORDL_MODULE_EXPORT(PS5PlatformAdditionalContentModel)
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
namespace GlobalNamespace {
class PS5LevelProductsModelSO;
}
namespace GlobalNamespace {
class ISonyCommerceHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5PlatformAdditionalContentModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5PlatformAdditionalContentModel);
// Type: ::PS5PlatformAdditionalContentModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4601)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4601), inst: 4983 }), TypeDefinitionIndex(TypeDefinitionIndex(4563))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4564))
// CS Name: ::PS5PlatformAdditionalContentModel*
class CORDL_TYPE PS5PlatformAdditionalContentModel : public ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<::GlobalNamespace::PS5LevelProductsModelSO*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<::GlobalNamespace::PS5LevelProductsModelSO*>)]{};

static inline ::GlobalNamespace::PS5PlatformAdditionalContentModel* New_ctor(::GlobalNamespace::PS5LevelProductsModelSO*  ps5LevelProductsModel, ::GlobalNamespace::ISonyCommerceHelper*  sonyCommerceHelper, ::GlobalNamespace::AlwaysOwnedContentContainerSO*  alwaysOwnedContentContainer) ;

/// @brief Method .ctor addr 0x23682c4 size 0x70 virtual false final false
inline void _ctor(::GlobalNamespace::PS5LevelProductsModelSO*  ps5LevelProductsModel, ::GlobalNamespace::ISonyCommerceHelper*  sonyCommerceHelper, ::GlobalNamespace::AlwaysOwnedContentContainerSO*  alwaysOwnedContentContainer) ;

// Ctor Parameters [CppParam { name: "", ty: "PS5PlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS5PlatformAdditionalContentModel(PS5PlatformAdditionalContentModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS5PlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS5PlatformAdditionalContentModel(PS5PlatformAdditionalContentModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PS5PlatformAdditionalContentModel()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5PlatformAdditionalContentModel, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5PlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5PlatformAdditionalContentModel*, "", "PS5PlatformAdditionalContentModel");
