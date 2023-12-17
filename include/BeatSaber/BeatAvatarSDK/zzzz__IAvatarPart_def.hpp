#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAvatarPart)
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class IAvatarPart;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::IAvatarPart);
// Type: BeatSaber.BeatAvatarSDK::IAvatarPart
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15697))
// CS Name: ::BeatSaber.BeatAvatarSDK::IAvatarPart*
class CORDL_TYPE IAvatarPart {
public:
// Declarations
 __declspec(property(get=get_id)) ::StringW  id;

 __declspec(property(get=get_localizedName)) ::StringW  localizedName;

/// @brief Method get_id addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_id() ;

/// @brief Method get_localizedName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_localizedName() ;

// Ctor Parameters [CppParam { name: "", ty: "IAvatarPart", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IAvatarPart(IAvatarPart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAvatarPart", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAvatarPart(IAvatarPart const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::IAvatarPart);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::IAvatarPart*, "BeatSaber.BeatAvatarSDK", "IAvatarPart");
