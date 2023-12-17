#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParametricBoxFrameController)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ParametricBoxFrameController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParametricBoxFrameController);
// Type: ::ParametricBoxFrameController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14488))
// CS Name: ::ParametricBoxFrameController*
class CORDL_TYPE ParametricBoxFrameController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field width offset 0x18
 __declspec(property(get=__get_width, put=__set_width)) float_t  width;

/// @brief Field height offset 0x1c
 __declspec(property(get=__get_height, put=__set_height)) float_t  height;

/// @brief Field length offset 0x20
 __declspec(property(get=__get_length, put=__set_length)) float_t  length;

/// @brief Field edgeSize offset 0x24
 __declspec(property(get=__get_edgeSize, put=__set_edgeSize)) float_t  edgeSize;

/// @brief Field color offset 0x28
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

/// @brief Field _meshRenderer offset 0x38
 __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer)) ::UnityEngine::MeshRenderer*  _meshRenderer;

/// @brief Field _materialPropertyBlockController offset 0x40
 __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController)) ::GlobalNamespace::MaterialPropertyBlockController*  _materialPropertyBlockController;

 __declspec(property(put=set_localPosition)) ::UnityEngine::Vector3  localPosition;

constexpr void __set_width(float_t  value) ;

constexpr float_t& __get_width() ;

constexpr float_t const& __get_width() const;

constexpr void __set_height(float_t  value) ;

constexpr float_t& __get_height() ;

constexpr float_t const& __get_height() const;

constexpr void __set_length(float_t  value) ;

constexpr float_t& __get_length() ;

constexpr float_t const& __get_length() const;

constexpr void __set_edgeSize(float_t  value) ;

constexpr float_t& __get_edgeSize() ;

constexpr float_t const& __get_edgeSize() const;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer*  value) ;

constexpr ::UnityEngine::MeshRenderer* __get__meshRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> __get__meshRenderer() const;

constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockController* __get__materialPropertyBlockController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> __get__materialPropertyBlockController() const;

static inline void setStaticF__colorID(int32_t  value) ;

static inline int32_t getStaticF__colorID() ;

static inline void setStaticF__sizeParamsID(int32_t  value) ;

static inline int32_t getStaticF__sizeParamsID() ;

/// @brief Method set_localPosition addr 0x21095cc size 0x48 virtual false final false
inline void set_localPosition(::UnityEngine::Vector3  value) ;

/// @brief Method Awake addr 0x2109614 size 0x20 virtual false final false
inline void Awake() ;

/// @brief Method OnEnable addr 0x2109634 size 0x28 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2109778 size 0x20 virtual false final false
inline void OnDisable() ;

/// @brief Method Refresh addr 0x210965c size 0x11c virtual false final false
inline void Refresh() ;

static inline ::GlobalNamespace::ParametricBoxFrameController* New_ctor() ;

/// @brief Method .ctor addr 0x2109798 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ParametricBoxFrameController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParametricBoxFrameController(ParametricBoxFrameController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParametricBoxFrameController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParametricBoxFrameController(ParametricBoxFrameController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ParametricBoxFrameController()  = default;
public:


// Fields

// Static field _colorID

// Static field _sizeParamsID


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParametricBoxFrameController, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParametricBoxFrameController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParametricBoxFrameController*, "", "ParametricBoxFrameController");
