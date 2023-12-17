#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__BaseMeshEffect_def.hpp"
CORDL_MODULE_EXPORT(PositionAsUV1)
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace UnityEngine::UI {
class PositionAsUV1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::PositionAsUV1);
// Type: UnityEngine.UI::PositionAsUV1
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13143))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13147))
// CS Name: ::UnityEngine.UI::PositionAsUV1*
class CORDL_TYPE PositionAsUV1 : public ::UnityEngine::UI::BaseMeshEffect {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::UI::BaseMeshEffect)]{};

static inline ::UnityEngine::UI::PositionAsUV1* New_ctor() ;

/// @brief Method .ctor addr 0x2d9158c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method ModifyMesh addr 0x2d91594 size 0xbc virtual true final false
inline void ModifyMesh(::UnityEngine::UI::VertexHelper*  vh) ;

// Ctor Parameters [CppParam { name: "", ty: "PositionAsUV1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PositionAsUV1(PositionAsUV1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PositionAsUV1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PositionAsUV1(PositionAsUV1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PositionAsUV1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::PositionAsUV1, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::PositionAsUV1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::PositionAsUV1*, "UnityEngine.UI", "PositionAsUV1");
