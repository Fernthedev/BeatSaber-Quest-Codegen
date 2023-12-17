#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightmapLightsWithIds)
namespace GlobalNamespace {
class __LightmapLightsWithIds__LightIntensitiesWithId;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class __LightWithIds__LightWithId;
}
namespace GlobalNamespace {
struct __LightConstants__BakeId;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmapLightsWithIds;
}
namespace GlobalNamespace {
class __LightmapLightsWithIds__LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmapLightsWithIds);
MARK_REF_PTR_T(::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId);
// Type: ::LightIntensitiesWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14543))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14534))
// CS Name: ::LightmapLightsWithIds::LightIntensitiesWithId*
class CORDL_TYPE __LightmapLightsWithIds__LightIntensitiesWithId : public ::GlobalNamespace::__LightWithIds__LightWithId {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::__LightWithIds__LightWithId)]{};

/// @brief Field _bakeId offset 0x30
 __declspec(property(get=__get__bakeId, put=__set__bakeId)) ::GlobalNamespace::__LightConstants__BakeId  _bakeId;

/// @brief Field _intensity offset 0x34
 __declspec(property(get=__get__intensity, put=__set__intensity)) float_t  _intensity;

/// @brief Field _weight offset 0x38
 __declspec(property(get=__get__weight, put=__set__weight)) float_t  _weight;

/// @brief Field _lightmapLightIdColorPropertyId offset 0x3c
 __declspec(property(get=__get__lightmapLightIdColorPropertyId, put=__set__lightmapLightIdColorPropertyId)) int32_t  _lightmapLightIdColorPropertyId;

/// @brief Field _lightProbeLightIdColorPropertyId offset 0x40
 __declspec(property(get=__get__lightProbeLightIdColorPropertyId, put=__set__lightProbeLightIdColorPropertyId)) int32_t  _lightProbeLightIdColorPropertyId;

/// @brief Field _initializedPropertyIds offset 0x44
 __declspec(property(get=__get__initializedPropertyIds, put=__set__initializedPropertyIds)) bool  _initializedPropertyIds;

 __declspec(property(get=get_bakeId)) ::GlobalNamespace::__LightConstants__BakeId  bakeId;

 __declspec(property(get=get_intensity, put=set_intensity)) float_t  intensity;

 __declspec(property(get=get_weight, put=set_weight)) float_t  weight;

constexpr void __set__bakeId(::GlobalNamespace::__LightConstants__BakeId  value) ;

constexpr ::GlobalNamespace::__LightConstants__BakeId& __get__bakeId() ;

constexpr ::GlobalNamespace::__LightConstants__BakeId const& __get__bakeId() const;

constexpr void __set__intensity(float_t  value) ;

constexpr float_t& __get__intensity() ;

constexpr float_t const& __get__intensity() const;

constexpr void __set__weight(float_t  value) ;

constexpr float_t& __get__weight() ;

constexpr float_t const& __get__weight() const;

constexpr void __set__lightmapLightIdColorPropertyId(int32_t  value) ;

constexpr int32_t& __get__lightmapLightIdColorPropertyId() ;

constexpr int32_t const& __get__lightmapLightIdColorPropertyId() const;

constexpr void __set__lightProbeLightIdColorPropertyId(int32_t  value) ;

constexpr int32_t& __get__lightProbeLightIdColorPropertyId() ;

constexpr int32_t const& __get__lightProbeLightIdColorPropertyId() const;

constexpr void __set__initializedPropertyIds(bool  value) ;

constexpr bool& __get__initializedPropertyIds() ;

constexpr bool const& __get__initializedPropertyIds() const;

/// @brief Method get_bakeId addr 0x210fa60 size 0x8 virtual false final false
inline ::GlobalNamespace::__LightConstants__BakeId get_bakeId() ;

/// @brief Method get_intensity addr 0x210fa68 size 0x8 virtual false final false
inline float_t get_intensity() ;

/// @brief Method set_intensity addr 0x210fa70 size 0x8 virtual false final false
inline void set_intensity(float_t  value) ;

/// @brief Method get_weight addr 0x210fa78 size 0x8 virtual false final false
inline float_t get_weight() ;

/// @brief Method set_weight addr 0x210fa80 size 0x8 virtual false final false
inline void set_weight(float_t  value) ;

/// @brief Method SetDataToShaders addr 0x210f8e8 size 0x160 virtual false final false
inline void SetDataToShaders(::UnityEngine::Color  lightmapColor, ::UnityEngine::Color  probeColor) ;

static inline ::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId* New_ctor() ;

/// @brief Method .ctor addr 0x210fa88 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__LightmapLightsWithIds__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LightmapLightsWithIds__LightIntensitiesWithId(__LightmapLightsWithIds__LightIntensitiesWithId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LightmapLightsWithIds__LightIntensitiesWithId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LightmapLightsWithIds__LightIntensitiesWithId(__LightmapLightsWithIds__LightIntensitiesWithId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LightmapLightsWithIds__LightIntensitiesWithId()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LightmapLightsWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14544))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14535))
// CS Name: ::LightmapLightsWithIds*
class CORDL_TYPE LightmapLightsWithIds : public ::GlobalNamespace::LightWithIds {
public:
// Declarations
using LightIntensitiesWithId = ::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::LightWithIds)]{};

/// @brief Field _maxTotalIntensity offset 0x2c
 __declspec(property(get=__get__maxTotalIntensity, put=__set__maxTotalIntensity)) float_t  _maxTotalIntensity;

/// @brief Field _lightIntensityData offset 0x30
 __declspec(property(get=__get__lightIntensityData, put=__set__lightIntensityData)) ::ArrayW<::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId*>*>  _lightIntensityData;

 __declspec(property(get=get_maxTotalIntensity, put=set_maxTotalIntensity)) float_t  maxTotalIntensity;

constexpr void __set__maxTotalIntensity(float_t  value) ;

constexpr float_t& __get__maxTotalIntensity() ;

constexpr float_t const& __get__maxTotalIntensity() const;

constexpr void __set__lightIntensityData(::ArrayW<::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId*>*>& __get__lightIntensityData() ;

constexpr ::ArrayW<::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId*>*> const& __get__lightIntensityData() const;

/// @brief Method get_maxTotalIntensity addr 0x210f6e0 size 0x8 virtual false final false
inline float_t get_maxTotalIntensity() ;

/// @brief Method set_maxTotalIntensity addr 0x210f6e8 size 0x8 virtual false final false
inline void set_maxTotalIntensity(float_t  value) ;

/// @brief Method ProcessNewColorData addr 0x210f6f0 size 0x1f8 virtual true final false
inline void ProcessNewColorData() ;

/// @brief Method GetLightWithIds addr 0x210fa48 size 0x8 virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GetLightWithIds() ;

static inline ::GlobalNamespace::LightmapLightsWithIds* New_ctor() ;

/// @brief Method .ctor addr 0x210fa50 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightmapLightsWithIds", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightmapLightsWithIds(LightmapLightsWithIds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightmapLightsWithIds", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightmapLightsWithIds(LightmapLightsWithIds const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightmapLightsWithIds()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapLightsWithIds, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmapLightsWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightsWithIds*, "", "LightmapLightsWithIds");
NEED_NO_BOX(::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightmapLightsWithIds__LightIntensitiesWithId*, "", "LightmapLightsWithIds/LightIntensitiesWithId");
