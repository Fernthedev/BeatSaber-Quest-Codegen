#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundColorsGradientElementWithLightId)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientElementWithLightId;
}
namespace GlobalNamespace {
class __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId);
MARK_REF_PTR_T(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements);
// Type: ::Elements
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14514))
// CS Name: ::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements*
class CORDL_TYPE __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field elementNumber offset 0x10
 __declspec(property(get=__get_elementNumber, put=__set_elementNumber)) int32_t  elementNumber;

/// @brief Field intensity offset 0x14
 __declspec(property(get=__get_intensity, put=__set_intensity)) float_t  intensity;

/// @brief Field minIntensity offset 0x18
 __declspec(property(get=__get_minIntensity, put=__set_minIntensity)) float_t  minIntensity;

constexpr void __set_elementNumber(int32_t  value) ;

constexpr int32_t& __get_elementNumber() ;

constexpr int32_t const& __get_elementNumber() const;

constexpr void __set_intensity(float_t  value) ;

constexpr float_t& __get_intensity() ;

constexpr float_t const& __get_intensity() const;

constexpr void __set_minIntensity(float_t  value) ;

constexpr float_t& __get_minIntensity() ;

constexpr float_t const& __get_minIntensity() const;

static inline ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements* New_ctor() ;

/// @brief Method .ctor addr 0x210e8a8 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements(__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements(__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BloomPrePassBackgroundColorsGradientElementWithLightId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14515))
// CS Name: ::BloomPrePassBackgroundColorsGradientElementWithLightId*
class CORDL_TYPE BloomPrePassBackgroundColorsGradientElementWithLightId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
using Elements = ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::LightWithIdMonoBehaviour)]{};

/// @brief Field _bloomPrePassBackgroundColorsGradient offset 0x30
 __declspec(property(get=__get__bloomPrePassBackgroundColorsGradient, put=__set__bloomPrePassBackgroundColorsGradient)) ::GlobalNamespace::BloomPrePassBackgroundColorsGradient*  _bloomPrePassBackgroundColorsGradient;

/// @brief Field _elements offset 0x38
 __declspec(property(get=__get__elements, put=__set__elements)) ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*>  _elements;

constexpr void __set__bloomPrePassBackgroundColorsGradient(::GlobalNamespace::BloomPrePassBackgroundColorsGradient*  value) ;

constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradient* __get__bloomPrePassBackgroundColorsGradient() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*> __get__bloomPrePassBackgroundColorsGradient() const;

constexpr void __set__elements(::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*>& __get__elements() ;

constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*> const& __get__elements() const;

/// @brief Method ColorWasSet addr 0x210e7dc size 0xac virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId* New_ctor() ;

/// @brief Method .ctor addr 0x210e888 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientElementWithLightId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassBackgroundColorsGradientElementWithLightId(BloomPrePassBackgroundColorsGradientElementWithLightId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientElementWithLightId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassBackgroundColorsGradientElementWithLightId(BloomPrePassBackgroundColorsGradientElementWithLightId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassBackgroundColorsGradientElementWithLightId()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId*, "", "BloomPrePassBackgroundColorsGradientElementWithLightId");
NEED_NO_BOX(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*, "", "BloomPrePassBackgroundColorsGradientElementWithLightId/Elements");
