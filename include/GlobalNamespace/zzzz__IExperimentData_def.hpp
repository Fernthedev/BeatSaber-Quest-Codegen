#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IExperimentData)
// Forward declare root types
namespace GlobalNamespace {
class IExperimentData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IExperimentData);
// Type: ::IExperimentData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4186))
// CS Name: ::IExperimentData*
class CORDL_TYPE IExperimentData {
public:
// Declarations
 __declspec(property(get=get_experimentPlatformKey)) ::StringW  experimentPlatformKey;

/// @brief Method get_experimentPlatformKey addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_experimentPlatformKey() ;

// Ctor Parameters [CppParam { name: "", ty: "IExperimentData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IExperimentData(IExperimentData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IExperimentData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IExperimentData(IExperimentData const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IExperimentData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IExperimentData*, "", "IExperimentData");
