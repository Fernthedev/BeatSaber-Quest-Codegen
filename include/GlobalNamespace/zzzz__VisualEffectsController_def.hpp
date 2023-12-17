#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VisualEffectsController)
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class VisualEffectsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VisualEffectsController);
// Type: ::VisualEffectsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15315))
// CS Name: ::VisualEffectsController*
class CORDL_TYPE VisualEffectsController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kDepthTextureEnabledKeyword offset 0x0
static constexpr ::ConstString  kDepthTextureEnabledKeyword{u"DEPTH_TEXTURE_ENABLED"};

/// @brief Field _depthTextureEnabled offset 0x18
 __declspec(property(get=__get__depthTextureEnabled, put=__set__depthTextureEnabled)) ::GlobalNamespace::BoolSO*  _depthTextureEnabled;

/// @brief Field _camera offset 0x20
 __declspec(property(get=__get__camera, put=__set__camera)) ::UnityEngine::Camera*  _camera;

constexpr void __set__depthTextureEnabled(::GlobalNamespace::BoolSO*  value) ;

constexpr ::GlobalNamespace::BoolSO* __get__depthTextureEnabled() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> __get__depthTextureEnabled() const;

constexpr void __set__camera(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get__camera() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get__camera() const;

/// @brief Method Awake addr 0x280c690 size 0xd4 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x280c7c4 size 0xe8 virtual false final false
inline void OnDestroy() ;

/// @brief Method OnPreRender addr 0x280c8ac size 0x90 virtual false final false
inline void OnPreRender() ;

/// @brief Method HandleDepthTextureEnabledDidChange addr 0x280c764 size 0x60 virtual false final false
inline void HandleDepthTextureEnabledDidChange() ;

/// @brief Method SetShaderKeyword addr 0x280c93c size 0x14 virtual false final false
inline void SetShaderKeyword(::StringW  keyword, bool  value) ;

static inline ::GlobalNamespace::VisualEffectsController* New_ctor() ;

/// @brief Method .ctor addr 0x280c950 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectsController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualEffectsController(VisualEffectsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectsController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualEffectsController(VisualEffectsController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VisualEffectsController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VisualEffectsController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VisualEffectsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VisualEffectsController*, "", "VisualEffectsController");
