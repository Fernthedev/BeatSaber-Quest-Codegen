#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
CORDL_MODULE_EXPORT(OculusNetworkPlayerModel)
// Forward declare root types
namespace GlobalNamespace {
class OculusNetworkPlayerModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusNetworkPlayerModel);
// Type: ::OculusNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14973))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14967))
// CS Name: ::OculusNetworkPlayerModel*
class CORDL_TYPE OculusNetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::GlobalNamespace::PlatformNetworkPlayerModel)]{};

static inline ::GlobalNamespace::OculusNetworkPlayerModel* New_ctor() ;

/// @brief Method .ctor addr 0x2637d7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OculusNetworkPlayerModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusNetworkPlayerModel(OculusNetworkPlayerModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusNetworkPlayerModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusNetworkPlayerModel(OculusNetworkPlayerModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OculusNetworkPlayerModel()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusNetworkPlayerModel, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusNetworkPlayerModel*, "", "OculusNetworkPlayerModel");
