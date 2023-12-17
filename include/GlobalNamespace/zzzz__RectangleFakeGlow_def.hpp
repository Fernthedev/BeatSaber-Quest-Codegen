#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RectangleFakeGlow)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class RectangleFakeGlow;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RectangleFakeGlow);
// Type: ::RectangleFakeGlow
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4990))
// CS Name: ::RectangleFakeGlow*
class CORDL_TYPE RectangleFakeGlow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _size offset 0x18
 __declspec(property(get=__get__size, put=__set__size)) ::UnityEngine::Vector2  _size;

/// @brief Field _edgeSize offset 0x20
 __declspec(property(get=__get__edgeSize, put=__set__edgeSize)) float_t  _edgeSize;

/// @brief Field _color offset 0x24
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

/// @brief Field _materialPropertyBlockController offset 0x38
 __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController)) ::GlobalNamespace::MaterialPropertyBlockController*  _materialPropertyBlockController;

 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

constexpr void __set__size(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__size() ;

constexpr ::UnityEngine::Vector2 const& __get__size() const;

constexpr void __set__edgeSize(float_t  value) ;

constexpr float_t& __get__edgeSize() ;

constexpr float_t const& __get__edgeSize() const;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockController* __get__materialPropertyBlockController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> __get__materialPropertyBlockController() const;

static inline void setStaticF__colorID(int32_t  value) ;

static inline int32_t getStaticF__colorID() ;

static inline void setStaticF__sizeParamsID(int32_t  value) ;

static inline int32_t getStaticF__sizeParamsID() ;

/// @brief Method set_color addr 0x23b4e30 size 0xc4 virtual false final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method get_color addr 0x23b4ef4 size 0xc virtual false final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method Awake addr 0x23b4f00 size 0x6c virtual false final false
inline void Awake() ;

/// @brief Method OnEnable addr 0x23b4f6c size 0x74 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x23b50f4 size 0x6c virtual false final false
inline void OnDisable() ;

/// @brief Method Refresh addr 0x23b4fe0 size 0x114 virtual false final false
inline void Refresh() ;

static inline ::GlobalNamespace::RectangleFakeGlow* New_ctor() ;

/// @brief Method .ctor addr 0x23b5160 size 0x24 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RectangleFakeGlow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RectangleFakeGlow(RectangleFakeGlow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RectangleFakeGlow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RectangleFakeGlow(RectangleFakeGlow const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RectangleFakeGlow()  = default;
public:


// Fields

// Static field _colorID

// Static field _sizeParamsID


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RectangleFakeGlow, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RectangleFakeGlow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RectangleFakeGlow*, "", "RectangleFakeGlow");
