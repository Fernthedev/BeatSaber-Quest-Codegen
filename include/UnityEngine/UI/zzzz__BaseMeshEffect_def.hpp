#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BaseMeshEffect)
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine::UI {
class IMeshModifier;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::UI {
class BaseMeshEffect;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::BaseMeshEffect);
// Type: UnityEngine.UI::BaseMeshEffect
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13214))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13143))
// CS Name: ::UnityEngine.UI::BaseMeshEffect*
class CORDL_TYPE BaseMeshEffect : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::EventSystems::UIBehaviour)]{};

/// @brief Field m_Graphic offset 0x18
 __declspec(property(get=__get_m_Graphic, put=__set_m_Graphic)) ::UnityEngine::UI::Graphic*  m_Graphic;

 __declspec(property(get=get_graphic)) ::UnityEngine::UI::Graphic*  graphic;

/// @brief Convert operator to "::UnityEngine::UI::IMeshModifier"
constexpr operator  ::UnityEngine::UI::IMeshModifier*() noexcept;

constexpr void __set_m_Graphic(::UnityEngine::UI::Graphic*  value) ;

constexpr ::UnityEngine::UI::Graphic* __get_m_Graphic() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> __get_m_Graphic() const;

/// @brief Method get_graphic addr 0x2d90520 size 0x94 virtual false final false
inline ::UnityEngine::UI::Graphic* get_graphic() ;

/// @brief Method OnEnable addr 0x2d905b4 size 0xa8 virtual true final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2d9065c size 0x9c virtual true final false
inline void OnDisable() ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2d906f8 size 0x9c virtual true final false
inline void OnDidApplyAnimationProperties() ;

/// @brief Method ModifyMesh addr 0x2d90794 size 0x1a8 virtual true final false
inline void ModifyMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method ModifyMesh addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ModifyMesh(::UnityEngine::UI::VertexHelper*  vh) ;

static inline ::UnityEngine::UI::BaseMeshEffect* New_ctor() ;

/// @brief Method .ctor addr 0x2d9093c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseMeshEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseMeshEffect(BaseMeshEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseMeshEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseMeshEffect(BaseMeshEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseMeshEffect()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::BaseMeshEffect, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::BaseMeshEffect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::BaseMeshEffect*, "UnityEngine.UI", "BaseMeshEffect");
