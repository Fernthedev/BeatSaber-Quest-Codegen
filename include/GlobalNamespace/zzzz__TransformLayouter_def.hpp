#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TransformLayouter)
// Forward declare root types
namespace GlobalNamespace {
class TransformLayouter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TransformLayouter);
// Type: ::TransformLayouter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14381))
// CS Name: ::TransformLayouter*
class CORDL_TYPE TransformLayouter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

static inline ::GlobalNamespace::TransformLayouter* New_ctor() ;

/// @brief Method .ctor addr 0x20f45ac size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TransformLayouter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformLayouter(TransformLayouter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformLayouter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformLayouter(TransformLayouter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TransformLayouter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TransformLayouter, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TransformLayouter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransformLayouter*, "", "TransformLayouter");
