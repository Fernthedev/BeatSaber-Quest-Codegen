#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
CORDL_MODULE_EXPORT(PS4NetworkPlayerModel)
// Forward declare root types
namespace GlobalNamespace {
class PS4NetworkPlayerModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4NetworkPlayerModel);
// Type: ::PS4NetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14973))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14974))
// CS Name: ::PS4NetworkPlayerModel*
class CORDL_TYPE PS4NetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::GlobalNamespace::PlatformNetworkPlayerModel)]{};

static inline ::GlobalNamespace::PS4NetworkPlayerModel* New_ctor() ;

/// @brief Method .ctor addr 0x2638cf8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PS4NetworkPlayerModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS4NetworkPlayerModel(PS4NetworkPlayerModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS4NetworkPlayerModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS4NetworkPlayerModel(PS4NetworkPlayerModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PS4NetworkPlayerModel()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4NetworkPlayerModel, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4NetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4NetworkPlayerModel*, "", "PS4NetworkPlayerModel");
