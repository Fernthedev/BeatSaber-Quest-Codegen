#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeLightWithIds)
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class __RuntimeLightWithIds__LightIntensitiesWithId;
}
namespace GlobalNamespace {
struct ColorMixAndWeightingApproach;
}
namespace GlobalNamespace {
class __LightWithIds__LightWithId;
}
// Forward declare root types
namespace GlobalNamespace {
class RuntimeLightWithIds;
}
namespace GlobalNamespace {
class __RuntimeLightWithIds__LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RuntimeLightWithIds);
MARK_REF_PTR_T(::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId);
// Type: ::LightIntensitiesWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14543))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14551))
// CS Name: ::RuntimeLightWithIds::LightIntensitiesWithId*
class CORDL_TYPE __RuntimeLightWithIds__LightIntensitiesWithId : public ::GlobalNamespace::__LightWithIds__LightWithId {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::__LightWithIds__LightWithId)]{};

/// @brief Field _intensity offset 0x30
 __declspec(property(get=__get__intensity, put=__set__intensity)) float_t  _intensity;

 __declspec(property(get=get_intensity, put=set_intensity)) float_t  intensity;

constexpr void __set__intensity(float_t  value) ;

constexpr float_t& __get__intensity() ;

constexpr float_t const& __get__intensity() const;

/// @brief Method get_intensity addr 0x2113b00 size 0x8 virtual false final false
inline float_t get_intensity() ;

/// @brief Method set_intensity addr 0x2113b08 size 0x8 virtual false final false
inline void set_intensity(float_t  value) ;

static inline ::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId* New_ctor(int32_t  lightId, float_t  lightIntensity) ;

/// @brief Method .ctor addr 0x2113b10 size 0x28 virtual false final false
inline void _ctor(int32_t  lightId, float_t  lightIntensity) ;

// Ctor Parameters [CppParam { name: "", ty: "__RuntimeLightWithIds__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RuntimeLightWithIds__LightIntensitiesWithId(__RuntimeLightWithIds__LightIntensitiesWithId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RuntimeLightWithIds__LightIntensitiesWithId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RuntimeLightWithIds__LightIntensitiesWithId(__RuntimeLightWithIds__LightIntensitiesWithId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RuntimeLightWithIds__LightIntensitiesWithId()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RuntimeLightWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14544))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14552))
// CS Name: ::RuntimeLightWithIds*
class CORDL_TYPE RuntimeLightWithIds : public ::GlobalNamespace::LightWithIds {
public:
// Declarations
using LightIntensitiesWithId = ::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::LightWithIds)]{};

/// @brief Field _lightIntensityData offset 0x30
 __declspec(property(get=__get__lightIntensityData, put=__set__lightIntensityData)) ::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*>  _lightIntensityData;

/// @brief Field _intensity offset 0x38
 __declspec(property(get=__get__intensity, put=__set__intensity)) float_t  _intensity;

/// @brief Field _maxIntensity offset 0x3c
 __declspec(property(get=__get__maxIntensity, put=__set__maxIntensity)) float_t  _maxIntensity;

/// @brief Field _multiplyColorByAlpha offset 0x40
 __declspec(property(get=__get__multiplyColorByAlpha, put=__set__multiplyColorByAlpha)) bool  _multiplyColorByAlpha;

/// @brief Field _mixType offset 0x44
 __declspec(property(get=__get__mixType, put=__set__mixType)) ::GlobalNamespace::ColorMixAndWeightingApproach  _mixType;

 __declspec(property(get=get_mixType)) ::GlobalNamespace::ColorMixAndWeightingApproach  mixType;

constexpr void __set__lightIntensityData(::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*>& __get__lightIntensityData() ;

constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*> const& __get__lightIntensityData() const;

constexpr void __set__intensity(float_t  value) ;

constexpr float_t& __get__intensity() ;

constexpr float_t const& __get__intensity() const;

constexpr void __set__maxIntensity(float_t  value) ;

constexpr float_t& __get__maxIntensity() ;

constexpr float_t const& __get__maxIntensity() const;

constexpr void __set__multiplyColorByAlpha(bool  value) ;

constexpr bool& __get__multiplyColorByAlpha() ;

constexpr bool const& __get__multiplyColorByAlpha() const;

constexpr void __set__mixType(::GlobalNamespace::ColorMixAndWeightingApproach  value) ;

constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& __get__mixType() ;

constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& __get__mixType() const;

/// @brief Method get_mixType addr 0x2112948 size 0x4 virtual false final false
inline ::GlobalNamespace::ColorMixAndWeightingApproach get_mixType() ;

/// @brief Method ColorWasSet addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

/// @brief Method ProcessNewColorData addr 0x211294c size 0x174 virtual true final false
inline void ProcessNewColorData() ;

/// @brief Method GetLightWithIds addr 0x2112af8 size 0x1008 virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GetLightWithIds() ;

/// @brief Method ProcessColor addr 0x2112ac0 size 0x38 virtual false final false
inline ::UnityEngine::Color ProcessColor(::UnityEngine::Color  color, float_t  intensity) ;

static inline ::GlobalNamespace::RuntimeLightWithIds* New_ctor() ;

/// @brief Method .ctor addr 0x210e940 size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithIds", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeLightWithIds(RuntimeLightWithIds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithIds", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeLightWithIds(RuntimeLightWithIds const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimeLightWithIds()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RuntimeLightWithIds, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RuntimeLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RuntimeLightWithIds*, "", "RuntimeLightWithIds");
NEED_NO_BOX(::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*, "", "RuntimeLightWithIds/LightIntensitiesWithId");
