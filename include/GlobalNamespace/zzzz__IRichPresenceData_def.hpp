#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IRichPresenceData)
// Forward declare root types
namespace GlobalNamespace {
class IRichPresenceData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IRichPresenceData);
// Type: ::IRichPresenceData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4673))
// CS Name: ::IRichPresenceData*
class CORDL_TYPE IRichPresenceData {
public:
// Declarations
 __declspec(property(get=get_apiName)) ::StringW  apiName;

 __declspec(property(get=get_localizedDescription)) ::StringW  localizedDescription;

/// @brief Method get_apiName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_apiName() ;

/// @brief Method get_localizedDescription addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_localizedDescription() ;

// Ctor Parameters [CppParam { name: "", ty: "IRichPresenceData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IRichPresenceData(IRichPresenceData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IRichPresenceData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRichPresenceData(IRichPresenceData const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IRichPresenceData*, "", "IRichPresenceData");
