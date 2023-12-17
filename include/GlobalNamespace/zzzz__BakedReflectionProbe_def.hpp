#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BakedReflectionProbe)
namespace GlobalNamespace {
class ReflectionProbeDataSO;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Cubemap;
}
// Forward declare root types
namespace GlobalNamespace {
class BakedReflectionProbe;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BakedReflectionProbe);
// Type: ::BakedReflectionProbe
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5854))
// CS Name: ::BakedReflectionProbe*
class CORDL_TYPE BakedReflectionProbe : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _resolutionBeforeDownsample offset 0x18
 __declspec(property(get=__get__resolutionBeforeDownsample, put=__set__resolutionBeforeDownsample)) int32_t  _resolutionBeforeDownsample;

/// @brief Field _downsampleByHalfCount offset 0x1c
 __declspec(property(get=__get__downsampleByHalfCount, put=__set__downsampleByHalfCount)) int32_t  _downsampleByHalfCount;

/// @brief Field _size offset 0x20
 __declspec(property(get=__get__size, put=__set__size)) ::UnityEngine::Vector3  _size;

/// @brief Field _offset offset 0x2c
 __declspec(property(get=__get__offset, put=__set__offset)) ::UnityEngine::Vector3  _offset;

/// @brief Field _reflectionProbeData offset 0x38
 __declspec(property(get=__get__reflectionProbeData, put=__set__reflectionProbeData)) ::GlobalNamespace::ReflectionProbeDataSO*  _reflectionProbeData;

/// @brief Field _blackCubemap offset 0x40
 __declspec(property(get=__get__blackCubemap, put=__set__blackCubemap)) ::UnityEngine::Cubemap*  _blackCubemap;

 __declspec(property(get=get_reflectionProbeData, put=set_reflectionProbeData)) ::GlobalNamespace::ReflectionProbeDataSO*  reflectionProbeData;

 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_resolutionBeforeDownsample)) int32_t  resolutionBeforeDownsample;

 __declspec(property(get=get_downsampleByHalfCount)) int32_t  downsampleByHalfCount;

constexpr void __set__resolutionBeforeDownsample(int32_t  value) ;

constexpr int32_t& __get__resolutionBeforeDownsample() ;

constexpr int32_t const& __get__resolutionBeforeDownsample() const;

constexpr void __set__downsampleByHalfCount(int32_t  value) ;

constexpr int32_t& __get__downsampleByHalfCount() ;

constexpr int32_t const& __get__downsampleByHalfCount() const;

constexpr void __set__size(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__size() ;

constexpr ::UnityEngine::Vector3 const& __get__size() const;

constexpr void __set__offset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__offset() ;

constexpr ::UnityEngine::Vector3 const& __get__offset() const;

constexpr void __set__reflectionProbeData(::GlobalNamespace::ReflectionProbeDataSO*  value) ;

constexpr ::GlobalNamespace::ReflectionProbeDataSO* __get__reflectionProbeData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ReflectionProbeDataSO*> __get__reflectionProbeData() const;

static inline void setStaticF__reflectionProbeBoundsMinPropertyId(int32_t  value) ;

static inline int32_t getStaticF__reflectionProbeBoundsMinPropertyId() ;

static inline void setStaticF__reflectionProbeBoundsMaxPropertyId(int32_t  value) ;

static inline int32_t getStaticF__reflectionProbeBoundsMaxPropertyId() ;

static inline void setStaticF__reflectionProbePositionPropertyId(int32_t  value) ;

static inline int32_t getStaticF__reflectionProbePositionPropertyId() ;

static inline void setStaticF__reflectionProbeTexture1PropertyId(int32_t  value) ;

static inline int32_t getStaticF__reflectionProbeTexture1PropertyId() ;

static inline void setStaticF__reflectionProbeTexture2PropertyId(int32_t  value) ;

static inline int32_t getStaticF__reflectionProbeTexture2PropertyId() ;

constexpr void __set__blackCubemap(::UnityEngine::Cubemap*  value) ;

constexpr ::UnityEngine::Cubemap* __get__blackCubemap() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Cubemap*> __get__blackCubemap() const;

/// @brief Method get_reflectionProbeData addr 0x22f675c size 0x8 virtual false final false
inline ::GlobalNamespace::ReflectionProbeDataSO* get_reflectionProbeData() ;

/// @brief Method set_reflectionProbeData addr 0x22f6764 size 0x8 virtual false final false
inline void set_reflectionProbeData(::GlobalNamespace::ReflectionProbeDataSO*  value) ;

/// @brief Method get_position addr 0x22f676c size 0x20 virtual false final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_resolutionBeforeDownsample addr 0x22f678c size 0x8 virtual false final false
inline int32_t get_resolutionBeforeDownsample() ;

/// @brief Method get_downsampleByHalfCount addr 0x22f6794 size 0x8 virtual false final false
inline int32_t get_downsampleByHalfCount() ;

/// @brief Method Start addr 0x22f679c size 0xb8 virtual false final false
inline void Start() ;

/// @brief Method SendDataToShaders addr 0x22f6854 size 0x22c virtual false final false
inline void SendDataToShaders() ;

static inline ::GlobalNamespace::BakedReflectionProbe* New_ctor() ;

/// @brief Method .ctor addr 0x22f6a80 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BakedReflectionProbe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BakedReflectionProbe(BakedReflectionProbe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakedReflectionProbe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakedReflectionProbe(BakedReflectionProbe const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BakedReflectionProbe()  = default;
public:


// Fields

// Static field _reflectionProbeBoundsMinPropertyId

// Static field _reflectionProbeBoundsMaxPropertyId

// Static field _reflectionProbePositionPropertyId

// Static field _reflectionProbeTexture1PropertyId

// Static field _reflectionProbeTexture2PropertyId


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BakedReflectionProbe, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BakedReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedReflectionProbe*, "", "BakedReflectionProbe");
