#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundColorsGradient)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Color32;
}
namespace GlobalNamespace {
class __BloomPrePassBackgroundColorsGradient__Element;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
namespace GlobalNamespace {
class __BloomPrePassBackgroundColorsGradient__Element;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradient);
MARK_REF_PTR_T(::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element);
// Type: ::Element
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14457))
// CS Name: ::BloomPrePassBackgroundColorsGradient::Element*
class CORDL_TYPE __BloomPrePassBackgroundColorsGradient__Element : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field color offset 0x10
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

/// @brief Field startT offset 0x20
 __declspec(property(get=__get_startT, put=__set_startT)) float_t  startT;

/// @brief Field exp offset 0x24
 __declspec(property(get=__get_exp, put=__set_exp)) float_t  exp;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

constexpr void __set_startT(float_t  value) ;

constexpr float_t& __get_startT() ;

constexpr float_t const& __get_startT() const;

constexpr void __set_exp(float_t  value) ;

constexpr float_t& __get_exp() ;

constexpr float_t const& __get_exp() const;

static inline ::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element* New_ctor() ;

/// @brief Method .ctor addr 0x2104648 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradient__Element", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BloomPrePassBackgroundColorsGradient__Element(__BloomPrePassBackgroundColorsGradient__Element && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradient__Element", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BloomPrePassBackgroundColorsGradient__Element(__BloomPrePassBackgroundColorsGradient__Element const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BloomPrePassBackgroundColorsGradient__Element()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BloomPrePassBackgroundColorsGradient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14468))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14458))
// CS Name: ::BloomPrePassBackgroundColorsGradient*
class CORDL_TYPE BloomPrePassBackgroundColorsGradient : public ::GlobalNamespace::BloomPrePassBackgroundTextureGradient {
public:
// Declarations
using Element = ::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::BloomPrePassBackgroundTextureGradient)]{};

/// @brief Field _elements offset 0x40
 __declspec(property(get=__get__elements, put=__set__elements)) ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*>  _elements;

 __declspec(property(get=get_elements)) ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*>  elements;

constexpr void __set__elements(::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*>& __get__elements() ;

constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*> const& __get__elements() const;

/// @brief Method get_elements addr 0x21041a0 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*> get_elements() ;

/// @brief Method UpdatePixels addr 0x21041a8 size 0x30c virtual true final false
inline void UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  pixels, int32_t  numberOfPixels) ;

/// @brief Method EvaluateColor addr 0x21044b4 size 0xe0 virtual false final false
inline ::UnityEngine::Color EvaluateColor(float_t  t) ;

static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradient* New_ctor() ;

/// @brief Method .ctor addr 0x2104594 size 0x54 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassBackgroundColorsGradient(BloomPrePassBackgroundColorsGradient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassBackgroundColorsGradient(BloomPrePassBackgroundColorsGradient const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassBackgroundColorsGradient()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradient, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradient*, "", "BloomPrePassBackgroundColorsGradient");
NEED_NO_BOX(::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*, "", "BloomPrePassBackgroundColorsGradient/Element");
