#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StretchableObstacle)
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class ParametricBoxFakeGlowController;
}
namespace GlobalNamespace {
class ParametricBoxFrameController;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class StretchableObstacle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StretchableObstacle);
// Type: ::StretchableObstacle
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4798))
// CS Name: ::StretchableObstacle*
class CORDL_TYPE StretchableObstacle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _edgeSize offset 0x18
 __declspec(property(get=__get__edgeSize, put=__set__edgeSize)) float_t  _edgeSize;

/// @brief Field _coreOffset offset 0x1c
 __declspec(property(get=__get__coreOffset, put=__set__coreOffset)) float_t  _coreOffset;

/// @brief Field _addColorMultiplier offset 0x20
 __declspec(property(get=__get__addColorMultiplier, put=__set__addColorMultiplier)) float_t  _addColorMultiplier;

/// @brief Field _obstacleCoreLerpToWhiteFactor offset 0x24
 __declspec(property(get=__get__obstacleCoreLerpToWhiteFactor, put=__set__obstacleCoreLerpToWhiteFactor)) float_t  _obstacleCoreLerpToWhiteFactor;

/// @brief Field _fakeGlowOffset offset 0x28
 __declspec(property(get=__get__fakeGlowOffset, put=__set__fakeGlowOffset)) ::UnityEngine::Vector3  _fakeGlowOffset;

/// @brief Field _obstacleCore offset 0x38
 __declspec(property(get=__get__obstacleCore, put=__set__obstacleCore)) ::UnityEngine::Transform*  _obstacleCore;

/// @brief Field _materialPropertyBlockControllers offset 0x40
 __declspec(property(get=__get__materialPropertyBlockControllers, put=__set__materialPropertyBlockControllers)) ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>  _materialPropertyBlockControllers;

/// @brief Field _obstacleFrame offset 0x48
 __declspec(property(get=__get__obstacleFrame, put=__set__obstacleFrame)) ::GlobalNamespace::ParametricBoxFrameController*  _obstacleFrame;

/// @brief Field _obstacleFakeGlow offset 0x50
 __declspec(property(get=__get__obstacleFakeGlow, put=__set__obstacleFakeGlow)) ::GlobalNamespace::ParametricBoxFakeGlowController*  _obstacleFakeGlow;

/// @brief Field _bounds offset 0x58
 __declspec(property(get=__get__bounds, put=__set__bounds)) ::UnityEngine::Bounds  _bounds;

 __declspec(property(get=get_bounds)) ::UnityEngine::Bounds  bounds;

constexpr void __set__edgeSize(float_t  value) ;

constexpr float_t& __get__edgeSize() ;

constexpr float_t const& __get__edgeSize() const;

constexpr void __set__coreOffset(float_t  value) ;

constexpr float_t& __get__coreOffset() ;

constexpr float_t const& __get__coreOffset() const;

constexpr void __set__addColorMultiplier(float_t  value) ;

constexpr float_t& __get__addColorMultiplier() ;

constexpr float_t const& __get__addColorMultiplier() const;

constexpr void __set__obstacleCoreLerpToWhiteFactor(float_t  value) ;

constexpr float_t& __get__obstacleCoreLerpToWhiteFactor() ;

constexpr float_t const& __get__obstacleCoreLerpToWhiteFactor() const;

constexpr void __set__fakeGlowOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__fakeGlowOffset() ;

constexpr ::UnityEngine::Vector3 const& __get__fakeGlowOffset() const;

constexpr void __set__obstacleCore(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__obstacleCore() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__obstacleCore() const;

constexpr void __set__materialPropertyBlockControllers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>& __get__materialPropertyBlockControllers() ;

constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const& __get__materialPropertyBlockControllers() const;

constexpr void __set__obstacleFrame(::GlobalNamespace::ParametricBoxFrameController*  value) ;

constexpr ::GlobalNamespace::ParametricBoxFrameController* __get__obstacleFrame() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ParametricBoxFrameController*> __get__obstacleFrame() const;

constexpr void __set__obstacleFakeGlow(::GlobalNamespace::ParametricBoxFakeGlowController*  value) ;

constexpr ::GlobalNamespace::ParametricBoxFakeGlowController* __get__obstacleFakeGlow() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ParametricBoxFakeGlowController*> __get__obstacleFakeGlow() const;

static inline void setStaticF__uvScaleID(int32_t  value) ;

static inline int32_t getStaticF__uvScaleID() ;

static inline void setStaticF__tintColorID(int32_t  value) ;

static inline int32_t getStaticF__tintColorID() ;

static inline void setStaticF__addColorID(int32_t  value) ;

static inline int32_t getStaticF__addColorID() ;

static inline void setStaticF__mainColorID(int32_t  value) ;

static inline int32_t getStaticF__mainColorID() ;

constexpr void __set__bounds(::UnityEngine::Bounds  value) ;

constexpr ::UnityEngine::Bounds& __get__bounds() ;

constexpr ::UnityEngine::Bounds const& __get__bounds() const;

/// @brief Method get_bounds addr 0x238f8c4 size 0x14 virtual false final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method SetSizeAndColor addr 0x238cbe4 size 0x40c virtual false final false
inline void SetSizeAndColor(float_t  width, float_t  height, float_t  length, ::UnityEngine::Color  color) ;

/// @brief Method OnValidate addr 0x238f8d8 size 0x6c virtual false final false
inline void OnValidate() ;

static inline ::GlobalNamespace::StretchableObstacle* New_ctor() ;

/// @brief Method .ctor addr 0x238f944 size 0x34 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StretchableObstacle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StretchableObstacle(StretchableObstacle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StretchableObstacle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StretchableObstacle(StretchableObstacle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StretchableObstacle()  = default;
public:


// Fields

// Static field _uvScaleID

// Static field _tintColorID

// Static field _addColorID

// Static field _mainColorID


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StretchableObstacle, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StretchableObstacle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StretchableObstacle*, "", "StretchableObstacle");
