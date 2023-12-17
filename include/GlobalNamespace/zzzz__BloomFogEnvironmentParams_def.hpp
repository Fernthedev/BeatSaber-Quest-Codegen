#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BloomFogEnvironmentParams)
// Forward declare root types
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFogEnvironmentParams);
// Type: ::BloomFogEnvironmentParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14450))
// CS Name: ::BloomFogEnvironmentParams*
class CORDL_TYPE BloomFogEnvironmentParams : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field attenuation offset 0x18
 __declspec(property(get=__get_attenuation, put=__set_attenuation)) float_t  attenuation;

/// @brief Field offset offset 0x1c
 __declspec(property(get=__get_offset, put=__set_offset)) float_t  offset;

/// @brief Field heightFogStartY offset 0x20
 __declspec(property(get=__get_heightFogStartY, put=__set_heightFogStartY)) float_t  heightFogStartY;

/// @brief Field heightFogHeight offset 0x24
 __declspec(property(get=__get_heightFogHeight, put=__set_heightFogHeight)) float_t  heightFogHeight;

/// @brief Field autoExposureLimit offset 0x28
 __declspec(property(get=__get_autoExposureLimit, put=__set_autoExposureLimit)) float_t  autoExposureLimit;

/// @brief Field legacyAutoExposure offset 0x2c
 __declspec(property(get=__get_legacyAutoExposure, put=__set_legacyAutoExposure)) bool  legacyAutoExposure;

/// @brief Field noteSpawnIntensity offset 0x30
 __declspec(property(get=__get_noteSpawnIntensity, put=__set_noteSpawnIntensity)) float_t  noteSpawnIntensity;

constexpr void __set_attenuation(float_t  value) ;

constexpr float_t& __get_attenuation() ;

constexpr float_t const& __get_attenuation() const;

constexpr void __set_offset(float_t  value) ;

constexpr float_t& __get_offset() ;

constexpr float_t const& __get_offset() const;

constexpr void __set_heightFogStartY(float_t  value) ;

constexpr float_t& __get_heightFogStartY() ;

constexpr float_t const& __get_heightFogStartY() const;

constexpr void __set_heightFogHeight(float_t  value) ;

constexpr float_t& __get_heightFogHeight() ;

constexpr float_t const& __get_heightFogHeight() const;

constexpr void __set_autoExposureLimit(float_t  value) ;

constexpr float_t& __get_autoExposureLimit() ;

constexpr float_t const& __get_autoExposureLimit() const;

constexpr void __set_legacyAutoExposure(bool  value) ;

constexpr bool& __get_legacyAutoExposure() ;

constexpr bool const& __get_legacyAutoExposure() const;

constexpr void __set_noteSpawnIntensity(float_t  value) ;

constexpr float_t& __get_noteSpawnIntensity() ;

constexpr float_t const& __get_noteSpawnIntensity() const;

static inline ::GlobalNamespace::BloomFogEnvironmentParams* New_ctor() ;

/// @brief Method .ctor addr 0x2102164 size 0x30 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironmentParams", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomFogEnvironmentParams(BloomFogEnvironmentParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironmentParams", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomFogEnvironmentParams(BloomFogEnvironmentParams const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomFogEnvironmentParams()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogEnvironmentParams, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogEnvironmentParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogEnvironmentParams*, "", "BloomFogEnvironmentParams");
