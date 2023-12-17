#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeLightWithLightGroupIds)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class __RuntimeLightWithLightGroupIds__LightIntensitiesWithId;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class __LightWithIds__LightWithId;
}
namespace GlobalNamespace {
class LightGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class RuntimeLightWithLightGroupIds;
}
namespace GlobalNamespace {
class __RuntimeLightWithLightGroupIds__LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RuntimeLightWithLightGroupIds);
MARK_REF_PTR_T(::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId);
// Type: ::LightIntensitiesWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14543))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14553))
// CS Name: ::RuntimeLightWithLightGroupIds::LightIntensitiesWithId*
class CORDL_TYPE __RuntimeLightWithLightGroupIds__LightIntensitiesWithId : public ::GlobalNamespace::__LightWithIds__LightWithId {
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

/// @brief Method get_intensity addr 0x2113e9c size 0x8 virtual false final false
inline float_t get_intensity() ;

/// @brief Method set_intensity addr 0x2113ea4 size 0x8 virtual false final false
inline void set_intensity(float_t  value) ;

static inline ::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId* New_ctor(int32_t  lightId, float_t  intensity) ;

/// @brief Method .ctor addr 0x2113cf8 size 0x28 virtual false final false
inline void _ctor(int32_t  lightId, float_t  intensity) ;

// Ctor Parameters [CppParam { name: "", ty: "__RuntimeLightWithLightGroupIds__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RuntimeLightWithLightGroupIds__LightIntensitiesWithId(__RuntimeLightWithLightGroupIds__LightIntensitiesWithId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RuntimeLightWithLightGroupIds__LightIntensitiesWithId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RuntimeLightWithLightGroupIds__LightIntensitiesWithId(__RuntimeLightWithLightGroupIds__LightIntensitiesWithId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RuntimeLightWithLightGroupIds__LightIntensitiesWithId()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RuntimeLightWithLightGroupIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14544))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14554))
// CS Name: ::RuntimeLightWithLightGroupIds*
class CORDL_TYPE RuntimeLightWithLightGroupIds : public ::GlobalNamespace::LightWithIds {
public:
// Declarations
using LightIntensitiesWithId = ::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::LightWithIds)]{};

/// @brief Field _lightGroupList offset 0x30
 __declspec(property(get=__get__lightGroupList, put=__set__lightGroupList)) ::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>  _lightGroupList;

/// @brief Field _intensity offset 0x38
 __declspec(property(get=__get__intensity, put=__set__intensity)) float_t  _intensity;

/// @brief Field _maxIntensity offset 0x3c
 __declspec(property(get=__get__maxIntensity, put=__set__maxIntensity)) float_t  _maxIntensity;

/// @brief Field _multiplyColorByAlpha offset 0x40
 __declspec(property(get=__get__multiplyColorByAlpha, put=__set__multiplyColorByAlpha)) bool  _multiplyColorByAlpha;

/// @brief Field _lightIntensityData offset 0x48
 __declspec(property(get=__get__lightIntensityData, put=__set__lightIntensityData)) ::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*>  _lightIntensityData;

constexpr void __set__lightGroupList(::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>& __get__lightGroupList() ;

constexpr ::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*> const& __get__lightGroupList() const;

constexpr void __set__intensity(float_t  value) ;

constexpr float_t& __get__intensity() ;

constexpr float_t const& __get__intensity() const;

constexpr void __set__maxIntensity(float_t  value) ;

constexpr float_t& __get__maxIntensity() ;

constexpr float_t const& __get__maxIntensity() const;

constexpr void __set__multiplyColorByAlpha(bool  value) ;

constexpr bool& __get__multiplyColorByAlpha() ;

constexpr bool const& __get__multiplyColorByAlpha() const;

constexpr void __set__lightIntensityData(::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*>& __get__lightIntensityData() ;

constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*> const& __get__lightIntensityData() const;

/// @brief Method ColorWasSet addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

/// @brief Method Awake addr 0x2113b38 size 0x1c0 virtual true final false
inline void Awake() ;

/// @brief Method ProcessNewColorData addr 0x2113d20 size 0x13c virtual true final false
inline void ProcessNewColorData() ;

/// @brief Method GetLightWithIds addr 0x2113e7c size 0x8 virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GetLightWithIds() ;

/// @brief Method ProcessColor addr 0x2113e5c size 0x20 virtual false final false
inline ::UnityEngine::Color ProcessColor(::UnityEngine::Color  color, float_t  intensity) ;

static inline ::GlobalNamespace::RuntimeLightWithLightGroupIds* New_ctor() ;

/// @brief Method .ctor addr 0x2113e84 size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithLightGroupIds", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeLightWithLightGroupIds(RuntimeLightWithLightGroupIds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithLightGroupIds", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeLightWithLightGroupIds(RuntimeLightWithLightGroupIds const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimeLightWithLightGroupIds()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RuntimeLightWithLightGroupIds, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RuntimeLightWithLightGroupIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RuntimeLightWithLightGroupIds*, "", "RuntimeLightWithLightGroupIds");
NEED_NO_BOX(::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*, "", "RuntimeLightWithLightGroupIds/LightIntensitiesWithId");
