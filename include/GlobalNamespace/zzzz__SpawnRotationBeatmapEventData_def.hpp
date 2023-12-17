#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpawnRotationBeatmapEventData)
namespace GlobalNamespace {
struct __SpawnRotationBeatmapEventData__SpawnRotationEventType;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SpawnRotationBeatmapEventData__SpawnRotationEventType;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType);
MARK_REF_PTR_T(::GlobalNamespace::SpawnRotationBeatmapEventData);
// Type: ::SpawnRotationEventType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14738))
// CS Name: ::SpawnRotationBeatmapEventData::SpawnRotationEventType
struct CORDL_TYPE __SpawnRotationBeatmapEventData__SpawnRotationEventType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____SpawnRotationBeatmapEventData__SpawnRotationEventType_Unwrapped
enum struct ____SpawnRotationBeatmapEventData__SpawnRotationEventType_Unwrapped : int32_t {
__E_Early = static_cast<int32_t>(0x1),
__E_Late = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Early value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType const Early;

/// @brief Field Late value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType const Late;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____SpawnRotationBeatmapEventData__SpawnRotationEventType_Unwrapped () const noexcept {
return std::bit_cast<____SpawnRotationBeatmapEventData__SpawnRotationEventType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __SpawnRotationBeatmapEventData__SpawnRotationEventType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SpawnRotationBeatmapEventData__SpawnRotationEventType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SpawnRotationBeatmapEventData__SpawnRotationEventType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SpawnRotationBeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14727))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14739))
// CS Name: ::SpawnRotationBeatmapEventData*
class CORDL_TYPE SpawnRotationBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
// Declarations
using SpawnRotationEventType = ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::BeatmapEventData)]{};

/// @brief Field <rotation>k__BackingField offset 0x30
 __declspec(property(get=__get__rotation_k__BackingField, put=__set__rotation_k__BackingField)) float_t  _rotation_k__BackingField;

/// @brief Field spawnRotationEventType offset 0x34
 __declspec(property(get=__get_spawnRotationEventType, put=__set_spawnRotationEventType)) ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType  spawnRotationEventType;

/// @brief Field _deltaRotation offset 0x38
 __declspec(property(get=__get__deltaRotation, put=__set__deltaRotation)) float_t  _deltaRotation;

 __declspec(property(get=get_subtypeGroupIdentifier)) int32_t  subtypeGroupIdentifier;

 __declspec(property(get=get_rotation, put=set_rotation)) float_t  rotation;

constexpr void __set__rotation_k__BackingField(float_t  value) ;

constexpr float_t& __get__rotation_k__BackingField() ;

constexpr float_t const& __get__rotation_k__BackingField() const;

constexpr void __set_spawnRotationEventType(::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType  value) ;

constexpr ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType& __get_spawnRotationEventType() ;

constexpr ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType const& __get_spawnRotationEventType() const;

constexpr void __set__deltaRotation(float_t  value) ;

constexpr float_t& __get__deltaRotation() ;

constexpr float_t const& __get__deltaRotation() const;

static inline void setStaticF__defaultCopy(::GlobalNamespace::BeatmapEventData*  value) ;

static inline ::GlobalNamespace::BeatmapEventData* getStaticF__defaultCopy() ;

/// @brief Method get_subtypeGroupIdentifier addr 0xdff254 size 0x8 virtual true final false
inline int32_t get_subtypeGroupIdentifier() ;

/// @brief Method get_rotation addr 0xdff25c size 0x8 virtual false final false
inline float_t get_rotation() ;

/// @brief Method set_rotation addr 0xdff264 size 0x8 virtual false final false
inline void set_rotation(float_t  value) ;

static inline ::GlobalNamespace::SpawnRotationBeatmapEventData* New_ctor(float_t  time, ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType  spawnRotationEventType, float_t  deltaRotation) ;

/// @brief Method .ctor addr 0xdff26c size 0x58 virtual false final false
inline void _ctor(float_t  time, ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType  spawnRotationEventType, float_t  deltaRotation) ;

/// @brief Method Mirror addr 0xdff2c4 size 0x1c virtual false final false
inline void Mirror() ;

/// @brief Method GetCopy addr 0xdff2e0 size 0xa0 virtual true final false
inline ::GlobalNamespace::BeatmapDataItem* GetCopy() ;

/// @brief Method RecalculateRotationFromPreviousEvent addr 0xdff380 size 0x24 virtual false final false
inline void RecalculateRotationFromPreviousEvent(::GlobalNamespace::SpawnRotationBeatmapEventData*  previousSpawnRotationBeatmapEventData) ;

/// @brief Method SetFirstRotationEventRotation addr 0xdff3a4 size 0xc virtual false final false
inline void SetFirstRotationEventRotation() ;

/// @brief Method GetDefault addr 0xdff3b0 size 0x58 virtual true final false
inline ::GlobalNamespace::BeatmapEventData* GetDefault() ;

// Ctor Parameters [CppParam { name: "", ty: "SpawnRotationBeatmapEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnRotationBeatmapEventData(SpawnRotationBeatmapEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnRotationBeatmapEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnRotationBeatmapEventData(SpawnRotationBeatmapEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SpawnRotationBeatmapEventData()  = default;
public:


// Fields

// Static field _defaultCopy


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnRotationBeatmapEventData, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType, "", "SpawnRotationBeatmapEventData/SpawnRotationEventType");
NEED_NO_BOX(::GlobalNamespace::SpawnRotationBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationBeatmapEventData*, "", "SpawnRotationBeatmapEventData");
