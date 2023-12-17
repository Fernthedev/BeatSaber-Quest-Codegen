#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
CORDL_MODULE_EXPORT(PS5NetworkPlayerModel)
// Forward declare root types
namespace GlobalNamespace {
class PS5NetworkPlayerModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5NetworkPlayerModel);
// Type: ::PS5NetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14973))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14975))
// CS Name: ::PS5NetworkPlayerModel*
class CORDL_TYPE PS5NetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::GlobalNamespace::PlatformNetworkPlayerModel)]{};

static inline ::GlobalNamespace::PS5NetworkPlayerModel* New_ctor() ;

/// @brief Method .ctor addr 0x2638d00 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PS5NetworkPlayerModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS5NetworkPlayerModel(PS5NetworkPlayerModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS5NetworkPlayerModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS5NetworkPlayerModel(PS5NetworkPlayerModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PS5NetworkPlayerModel()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5NetworkPlayerModel, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5NetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5NetworkPlayerModel*, "", "PS5NetworkPlayerModel");
