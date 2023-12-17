#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FakeMirrorSettings)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FakeMirrorSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FakeMirrorSettings);
// Type: ::FakeMirrorSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15286))
// CS Name: ::FakeMirrorSettings*
class CORDL_TYPE FakeMirrorSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _fakeMirrorTransparency offset 0x18
 __declspec(property(get=__get__fakeMirrorTransparency, put=__set__fakeMirrorTransparency)) float_t  _fakeMirrorTransparency;

/// @brief Field _useVertexDistortion offset 0x1c
 __declspec(property(get=__get__useVertexDistortion, put=__set__useVertexDistortion)) bool  _useVertexDistortion;

/// @brief Field _vertexDistortionNoiseScale offset 0x20
 __declspec(property(get=__get__vertexDistortionNoiseScale, put=__set__vertexDistortionNoiseScale)) float_t  _vertexDistortionNoiseScale;

/// @brief Field _vertexDistortionStrength offset 0x24
 __declspec(property(get=__get__vertexDistortionStrength, put=__set__vertexDistortionStrength)) float_t  _vertexDistortionStrength;

/// @brief Field _vertexDistortionDirectionality offset 0x28
 __declspec(property(get=__get__vertexDistortionDirectionality, put=__set__vertexDistortionDirectionality)) ::UnityEngine::Vector3  _vertexDistortionDirectionality;

/// @brief Field _vertexDistortionZposMultiplier offset 0x34
 __declspec(property(get=__get__vertexDistortionZposMultiplier, put=__set__vertexDistortionZposMultiplier)) float_t  _vertexDistortionZposMultiplier;

 __declspec(property(get=get_fakeMirrorTransparency, put=set_fakeMirrorTransparency)) float_t  fakeMirrorTransparency;

constexpr void __set__fakeMirrorTransparency(float_t  value) ;

constexpr float_t& __get__fakeMirrorTransparency() ;

constexpr float_t const& __get__fakeMirrorTransparency() const;

constexpr void __set__useVertexDistortion(bool  value) ;

constexpr bool& __get__useVertexDistortion() ;

constexpr bool const& __get__useVertexDistortion() const;

constexpr void __set__vertexDistortionNoiseScale(float_t  value) ;

constexpr float_t& __get__vertexDistortionNoiseScale() ;

constexpr float_t const& __get__vertexDistortionNoiseScale() const;

constexpr void __set__vertexDistortionStrength(float_t  value) ;

constexpr float_t& __get__vertexDistortionStrength() ;

constexpr float_t const& __get__vertexDistortionStrength() const;

constexpr void __set__vertexDistortionDirectionality(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__vertexDistortionDirectionality() ;

constexpr ::UnityEngine::Vector3 const& __get__vertexDistortionDirectionality() const;

constexpr void __set__vertexDistortionZposMultiplier(float_t  value) ;

constexpr float_t& __get__vertexDistortionZposMultiplier() ;

constexpr float_t const& __get__vertexDistortionZposMultiplier() const;

static inline void setStaticF__fakeMirrorTransparencyId(int32_t  value) ;

static inline int32_t getStaticF__fakeMirrorTransparencyId() ;

static inline void setStaticF__vertexDistortionNoiseScaleId(int32_t  value) ;

static inline int32_t getStaticF__vertexDistortionNoiseScaleId() ;

static inline void setStaticF__vertexDistortionStrengthId(int32_t  value) ;

static inline int32_t getStaticF__vertexDistortionStrengthId() ;

static inline void setStaticF__vertexDistortionDirectionalityId(int32_t  value) ;

static inline int32_t getStaticF__vertexDistortionDirectionalityId() ;

static inline void setStaticF__vertexDistortionZposMultiplierId(int32_t  value) ;

static inline int32_t getStaticF__vertexDistortionZposMultiplierId() ;

/// @brief Method get_fakeMirrorTransparency addr 0x28079e8 size 0x8 virtual false final false
inline float_t get_fakeMirrorTransparency() ;

/// @brief Method set_fakeMirrorTransparency addr 0x28079f0 size 0x8 virtual false final false
inline void set_fakeMirrorTransparency(float_t  value) ;

/// @brief Method Start addr 0x28079f8 size 0x4 virtual false final false
inline void Start() ;

/// @brief Method OnEnable addr 0x2807b0c size 0x4 virtual false final false
inline void OnEnable() ;

/// @brief Method OnValidate addr 0x2807b10 size 0x4 virtual false final false
inline void OnValidate() ;

/// @brief Method SetGlobalParameters addr 0x28079fc size 0x110 virtual false final false
inline void SetGlobalParameters() ;

static inline ::GlobalNamespace::FakeMirrorSettings* New_ctor() ;

/// @brief Method .ctor addr 0x2807b14 size 0x30 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FakeMirrorSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FakeMirrorSettings(FakeMirrorSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FakeMirrorSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FakeMirrorSettings(FakeMirrorSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FakeMirrorSettings()  = default;
public:


// Fields

// Static field _fakeMirrorTransparencyId

// Static field _vertexDistortionNoiseScaleId

// Static field _vertexDistortionStrengthId

// Static field _vertexDistortionDirectionalityId

// Static field _vertexDistortionZposMultiplierId


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FakeMirrorSettings, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FakeMirrorSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FakeMirrorSettings*, "", "FakeMirrorSettings");
