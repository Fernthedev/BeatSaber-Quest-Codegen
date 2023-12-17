#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ISaberSwingRatingCounterDidChangeReceiver)
namespace GlobalNamespace {
class ISaberSwingRatingCounter;
}
// Forward declare root types
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidChangeReceiver;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver);
// Type: ::ISaberSwingRatingCounterDidChangeReceiver
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15014))
// CS Name: ::ISaberSwingRatingCounterDidChangeReceiver*
class CORDL_TYPE ISaberSwingRatingCounterDidChangeReceiver {
public:
// Declarations
/// @brief Method HandleSaberSwingRatingCounterDidChange addr 0x0 size 0xffffffffffffffff virtual true final false
inline void HandleSaberSwingRatingCounterDidChange(::GlobalNamespace::ISaberSwingRatingCounter*  saberSwingRatingCounter, float_t  rating) ;

// Ctor Parameters [CppParam { name: "", ty: "ISaberSwingRatingCounterDidChangeReceiver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISaberSwingRatingCounterDidChangeReceiver(ISaberSwingRatingCounterDidChangeReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISaberSwingRatingCounterDidChangeReceiver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISaberSwingRatingCounterDidChangeReceiver(ISaberSwingRatingCounterDidChangeReceiver const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*, "", "ISaberSwingRatingCounterDidChangeReceiver");
