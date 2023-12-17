#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DisappearingArrowControllerBase_1)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class CutoutEffect;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class DisappearingArrowControllerBase_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class DisappearingArrowControllerBase_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DisappearingArrowControllerBase_1);
// Type: ::DisappearingArrowControllerBase`1
// Type: ::DisappearingArrowControllerBase`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4742)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4742), inst: 2 })
// CS Name: ::DisappearingArrowControllerBase`1<T>*
class CORDL_TYPE DisappearingArrowControllerBase_1<T> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _transparentObjectMaterialPropertyBlocks offset 0x18
 __declspec(property(get=__get__transparentObjectMaterialPropertyBlocks, put=__set__transparentObjectMaterialPropertyBlocks)) ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>  _transparentObjectMaterialPropertyBlocks;

/// @brief Field _cubeMeshRenderer offset 0x20
 __declspec(property(get=__get__cubeMeshRenderer, put=__set__cubeMeshRenderer)) ::UnityEngine::MeshRenderer*  _cubeMeshRenderer;

/// @brief Field _arrowCutoutEffect offset 0x28
 __declspec(property(get=__get__arrowCutoutEffect, put=__set__arrowCutoutEffect)) ::GlobalNamespace::CutoutEffect*  _arrowCutoutEffect;

/// @brief Field _disappearingNormalStart offset 0x30
 __declspec(property(get=__get__disappearingNormalStart, put=__set__disappearingNormalStart)) float_t  _disappearingNormalStart;

/// @brief Field _disappearingNormalEnd offset 0x34
 __declspec(property(get=__get__disappearingNormalEnd, put=__set__disappearingNormalEnd)) float_t  _disappearingNormalEnd;

/// @brief Field _disappearingGhostStart offset 0x38
 __declspec(property(get=__get__disappearingGhostStart, put=__set__disappearingGhostStart)) float_t  _disappearingGhostStart;

/// @brief Field _disappearingGhostEnd offset 0x3c
 __declspec(property(get=__get__disappearingGhostEnd, put=__set__disappearingGhostEnd)) float_t  _disappearingGhostEnd;

/// @brief Field _prevArrowTransparency offset 0x40
 __declspec(property(get=__get__prevArrowTransparency, put=__set__prevArrowTransparency)) float_t  _prevArrowTransparency;

/// @brief Field _minDistance offset 0x44
 __declspec(property(get=__get__minDistance, put=__set__minDistance)) float_t  _minDistance;

/// @brief Field _maxDistance offset 0x48
 __declspec(property(get=__get__maxDistance, put=__set__maxDistance)) float_t  _maxDistance;

/// @brief Field _hideMesh offset 0x4c
 __declspec(property(get=__get__hideMesh, put=__set__hideMesh)) bool  _hideMesh;

/// @brief Field _fadeArrow offset 0x4d
 __declspec(property(get=__get__fadeArrow, put=__set__fadeArrow)) bool  _fadeArrow;

 __declspec(property(get=get_gameNoteController)) T  gameNoteController;

constexpr void __set__transparentObjectMaterialPropertyBlocks(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>& __get__transparentObjectMaterialPropertyBlocks() ;

constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const& __get__transparentObjectMaterialPropertyBlocks() const;

constexpr void __set__cubeMeshRenderer(::UnityEngine::MeshRenderer*  value) ;

constexpr ::UnityEngine::MeshRenderer* __get__cubeMeshRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> __get__cubeMeshRenderer() const;

constexpr void __set__arrowCutoutEffect(::GlobalNamespace::CutoutEffect*  value) ;

constexpr ::GlobalNamespace::CutoutEffect* __get__arrowCutoutEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CutoutEffect*> __get__arrowCutoutEffect() const;

constexpr void __set__disappearingNormalStart(float_t  value) ;

constexpr float_t& __get__disappearingNormalStart() ;

constexpr float_t const& __get__disappearingNormalStart() const;

constexpr void __set__disappearingNormalEnd(float_t  value) ;

constexpr float_t& __get__disappearingNormalEnd() ;

constexpr float_t const& __get__disappearingNormalEnd() const;

constexpr void __set__disappearingGhostStart(float_t  value) ;

constexpr float_t& __get__disappearingGhostStart() ;

constexpr float_t const& __get__disappearingGhostStart() const;

constexpr void __set__disappearingGhostEnd(float_t  value) ;

constexpr float_t& __get__disappearingGhostEnd() ;

constexpr float_t const& __get__disappearingGhostEnd() const;

constexpr void __set__prevArrowTransparency(float_t  value) ;

constexpr float_t& __get__prevArrowTransparency() ;

constexpr float_t const& __get__prevArrowTransparency() const;

constexpr void __set__minDistance(float_t  value) ;

constexpr float_t& __get__minDistance() ;

constexpr float_t const& __get__minDistance() const;

constexpr void __set__maxDistance(float_t  value) ;

constexpr float_t& __get__maxDistance() ;

constexpr float_t const& __get__maxDistance() const;

constexpr void __set__hideMesh(bool  value) ;

constexpr bool& __get__hideMesh() ;

constexpr bool const& __get__hideMesh() const;

constexpr void __set__fadeArrow(bool  value) ;

constexpr bool& __get__fadeArrow() ;

constexpr bool const& __get__fadeArrow() const;

static inline void setStaticF__colorId(int32_t  value) ;

static inline int32_t getStaticF__colorId() ;

/// @brief Method get_gameNoteController addr 0x0 size 0xffffffffffffffff virtual true final false
inline T get_gameNoteController() ;

/// @brief Method Awake addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnDestroy() ;

/// @brief Method CalculateMinMaxDistance addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CalculateMinMaxDistance() ;

/// @brief Method HandleNoteMovementNoteDidMoveInJumpPhase addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandleNoteMovementNoteDidMoveInJumpPhase() ;

/// @brief Method HandleCubeNoteControllerDidInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandleCubeNoteControllerDidInit(T  gameNoteController) ;

/// @brief Method SetArrowTransparency addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetArrowTransparency(float_t  arrowTransparency) ;

static inline ::GlobalNamespace::DisappearingArrowControllerBase_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DisappearingArrowControllerBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisappearingArrowControllerBase_1(DisappearingArrowControllerBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisappearingArrowControllerBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisappearingArrowControllerBase_1(DisappearingArrowControllerBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DisappearingArrowControllerBase_1()  = default;
public:


// Fields

// Static field _colorId


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DisappearingArrowControllerBase_1, "", "DisappearingArrowControllerBase`1");
