#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorRendererGraphicsSettingsPresets)
namespace GlobalNamespace {
class NamedPreset;
}
namespace GlobalNamespace {
class __MirrorRendererGraphicsSettingsPresets__Preset;
}
namespace GlobalNamespace {
struct __MirrorRendererGraphicsSettingsPresets__Preset__MirrorType;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MirrorRendererGraphicsSettingsPresets__Preset__MirrorType;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class __MirrorRendererGraphicsSettingsPresets__Preset;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType);
MARK_REF_PTR_T(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets);
MARK_REF_PTR_T(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset);
// Type: ::MirrorType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4437))
// CS Name: ::MirrorRendererGraphicsSettingsPresets::Preset::MirrorType
struct CORDL_TYPE __MirrorRendererGraphicsSettingsPresets__Preset__MirrorType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____MirrorRendererGraphicsSettingsPresets__Preset__MirrorType_Unwrapped
enum struct ____MirrorRendererGraphicsSettingsPresets__Preset__MirrorType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_FakeMirror = static_cast<int32_t>(0x1),
__E_RenderedMirror = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const None;

/// @brief Field FakeMirror value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const FakeMirror;

/// @brief Field RenderedMirror value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const RenderedMirror;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____MirrorRendererGraphicsSettingsPresets__Preset__MirrorType_Unwrapped () const noexcept {
return std::bit_cast<____MirrorRendererGraphicsSettingsPresets__Preset__MirrorType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __MirrorRendererGraphicsSettingsPresets__Preset__MirrorType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MirrorRendererGraphicsSettingsPresets__Preset__MirrorType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MirrorRendererGraphicsSettingsPresets__Preset__MirrorType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Preset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4440))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4438))
// CS Name: ::MirrorRendererGraphicsSettingsPresets::Preset*
class CORDL_TYPE __MirrorRendererGraphicsSettingsPresets__Preset : public ::GlobalNamespace::NamedPreset {
public:
// Declarations
using MirrorType = ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::NamedPreset)]{};

/// @brief Field mirrorType offset 0x18
 __declspec(property(get=__get_mirrorType, put=__set_mirrorType)) ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType  mirrorType;

/// @brief Field reflectLayers offset 0x1c
 __declspec(property(get=__get_reflectLayers, put=__set_reflectLayers)) ::UnityEngine::LayerMask  reflectLayers;

/// @brief Field stereoTextureWidth offset 0x20
 __declspec(property(get=__get_stereoTextureWidth, put=__set_stereoTextureWidth)) int32_t  stereoTextureWidth;

/// @brief Field stereoTextureHeight offset 0x24
 __declspec(property(get=__get_stereoTextureHeight, put=__set_stereoTextureHeight)) int32_t  stereoTextureHeight;

/// @brief Field monoTextureWidth offset 0x28
 __declspec(property(get=__get_monoTextureWidth, put=__set_monoTextureWidth)) int32_t  monoTextureWidth;

/// @brief Field monoTextureHeight offset 0x2c
 __declspec(property(get=__get_monoTextureHeight, put=__set_monoTextureHeight)) int32_t  monoTextureHeight;

/// @brief Field maxAntiAliasing offset 0x30
 __declspec(property(get=__get_maxAntiAliasing, put=__set_maxAntiAliasing)) int32_t  maxAntiAliasing;

/// @brief Field enableBloomPrePassFog offset 0x34
 __declspec(property(get=__get_enableBloomPrePassFog, put=__set_enableBloomPrePassFog)) bool  enableBloomPrePassFog;

constexpr void __set_mirrorType(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType  value) ;

constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType& __get_mirrorType() ;

constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const& __get_mirrorType() const;

constexpr void __set_reflectLayers(::UnityEngine::LayerMask  value) ;

constexpr ::UnityEngine::LayerMask& __get_reflectLayers() ;

constexpr ::UnityEngine::LayerMask const& __get_reflectLayers() const;

constexpr void __set_stereoTextureWidth(int32_t  value) ;

constexpr int32_t& __get_stereoTextureWidth() ;

constexpr int32_t const& __get_stereoTextureWidth() const;

constexpr void __set_stereoTextureHeight(int32_t  value) ;

constexpr int32_t& __get_stereoTextureHeight() ;

constexpr int32_t const& __get_stereoTextureHeight() const;

constexpr void __set_monoTextureWidth(int32_t  value) ;

constexpr int32_t& __get_monoTextureWidth() ;

constexpr int32_t const& __get_monoTextureWidth() const;

constexpr void __set_monoTextureHeight(int32_t  value) ;

constexpr int32_t& __get_monoTextureHeight() ;

constexpr int32_t const& __get_monoTextureHeight() const;

constexpr void __set_maxAntiAliasing(int32_t  value) ;

constexpr int32_t& __get_maxAntiAliasing() ;

constexpr int32_t const& __get_maxAntiAliasing() const;

constexpr void __set_enableBloomPrePassFog(bool  value) ;

constexpr bool& __get_enableBloomPrePassFog() ;

constexpr bool const& __get_enableBloomPrePassFog() const;

static inline ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset* New_ctor() ;

/// @brief Method .ctor addr 0x235039c size 0x44 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MirrorRendererGraphicsSettingsPresets__Preset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MirrorRendererGraphicsSettingsPresets__Preset(__MirrorRendererGraphicsSettingsPresets__Preset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MirrorRendererGraphicsSettingsPresets__Preset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MirrorRendererGraphicsSettingsPresets__Preset(__MirrorRendererGraphicsSettingsPresets__Preset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MirrorRendererGraphicsSettingsPresets__Preset()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MirrorRendererGraphicsSettingsPresets
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4439))
// CS Name: ::MirrorRendererGraphicsSettingsPresets*
class CORDL_TYPE MirrorRendererGraphicsSettingsPresets : public ::GlobalNamespace::NamedPresetsSO {
public:
// Declarations
using Preset = ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::NamedPresetsSO)]{};

/// @brief Field _presets offset 0x18
 __declspec(property(get=__get__presets, put=__set__presets)) ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>  _presets;

 __declspec(property(get=get_presets)) ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>  presets;

 __declspec(property(get=get_namedPresets)) ::ArrayW<::GlobalNamespace::NamedPreset*,::Array<::GlobalNamespace::NamedPreset*>*>  namedPresets;

constexpr void __set__presets(::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>& __get__presets() ;

constexpr ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> const& __get__presets() const;

/// @brief Method get_presets addr 0x2350384 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> get_presets() ;

/// @brief Method get_namedPresets addr 0x235038c size 0x8 virtual true final false
inline ::ArrayW<::GlobalNamespace::NamedPreset*,::Array<::GlobalNamespace::NamedPreset*>*> get_namedPresets() ;

static inline ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* New_ctor() ;

/// @brief Method .ctor addr 0x2350394 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MirrorRendererGraphicsSettingsPresets", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirrorRendererGraphicsSettingsPresets(MirrorRendererGraphicsSettingsPresets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirrorRendererGraphicsSettingsPresets", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirrorRendererGraphicsSettingsPresets(MirrorRendererGraphicsSettingsPresets const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MirrorRendererGraphicsSettingsPresets()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType, "", "MirrorRendererGraphicsSettingsPresets/Preset/MirrorType");
NEED_NO_BOX(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*, "", "MirrorRendererGraphicsSettingsPresets");
NEED_NO_BOX(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, "", "MirrorRendererGraphicsSettingsPresets/Preset");
