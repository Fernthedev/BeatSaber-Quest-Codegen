#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MatchTargetFieldConstants)
namespace UnityEngine::Timeline {
struct MatchTargetFields;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class MatchTargetFieldConstants;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::MatchTargetFieldConstants);
// Type: UnityEngine.Timeline::MatchTargetFieldConstants
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13840))
// CS Name: ::UnityEngine.Timeline::MatchTargetFieldConstants*
class CORDL_TYPE MatchTargetFieldConstants : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_All(::UnityEngine::Timeline::MatchTargetFields  value) ;

static inline ::UnityEngine::Timeline::MatchTargetFields getStaticF_All() ;

static inline void setStaticF_None(::UnityEngine::Timeline::MatchTargetFields  value) ;

static inline ::UnityEngine::Timeline::MatchTargetFields getStaticF_None() ;

static inline void setStaticF_Position(::UnityEngine::Timeline::MatchTargetFields  value) ;

static inline ::UnityEngine::Timeline::MatchTargetFields getStaticF_Position() ;

static inline void setStaticF_Rotation(::UnityEngine::Timeline::MatchTargetFields  value) ;

static inline ::UnityEngine::Timeline::MatchTargetFields getStaticF_Rotation() ;

/// @brief Method HasAny addr 0x2c50cd8 size 0x74 virtual false final false
static inline bool HasAny(::UnityEngine::Timeline::MatchTargetFields  me, ::UnityEngine::Timeline::MatchTargetFields  fields) ;

/// @brief Method Toggle addr 0x2c50d4c size 0x8 virtual false final false
static inline ::UnityEngine::Timeline::MatchTargetFields Toggle(::UnityEngine::Timeline::MatchTargetFields  me, ::UnityEngine::Timeline::MatchTargetFields  flag) ;

// Ctor Parameters [CppParam { name: "", ty: "MatchTargetFieldConstants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchTargetFieldConstants(MatchTargetFieldConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchTargetFieldConstants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchTargetFieldConstants(MatchTargetFieldConstants const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MatchTargetFieldConstants()  = default;
public:


// Fields

// Static field All

// Static field None

// Static field Position

// Static field Rotation


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::MatchTargetFieldConstants, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::MatchTargetFieldConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::MatchTargetFieldConstants*, "UnityEngine.Timeline", "MatchTargetFieldConstants");
