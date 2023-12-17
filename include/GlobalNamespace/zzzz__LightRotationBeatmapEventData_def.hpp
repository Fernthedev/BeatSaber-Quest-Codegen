#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightRotationBeatmapEventData)
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
struct LightRotationDirection;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationBeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationBeatmapEventData);
// Type: ::LightRotationBeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14727))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14735))
// CS Name: ::LightRotationBeatmapEventData*
class CORDL_TYPE LightRotationBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::BeatmapEventData)]{};

/// @brief Field groupId offset 0x30
 __declspec(property(get=__get_groupId, put=__set_groupId)) int32_t  groupId;

/// @brief Field elementId offset 0x34
 __declspec(property(get=__get_elementId, put=__set_elementId)) int32_t  elementId;

/// @brief Field usePreviousEventValue offset 0x38
 __declspec(property(get=__get_usePreviousEventValue, put=__set_usePreviousEventValue)) bool  usePreviousEventValue;

/// @brief Field easeType offset 0x3c
 __declspec(property(get=__get_easeType, put=__set_easeType)) ::GlobalNamespace::EaseType  easeType;

/// @brief Field axis offset 0x40
 __declspec(property(get=__get_axis, put=__set_axis)) ::GlobalNamespace::LightAxis  axis;

/// @brief Field loopCount offset 0x44
 __declspec(property(get=__get_loopCount, put=__set_loopCount)) int32_t  loopCount;

/// @brief Field rotationDirection offset 0x48
 __declspec(property(get=__get_rotationDirection, put=__set_rotationDirection)) ::GlobalNamespace::LightRotationDirection  rotationDirection;

/// @brief Field <rotation>k__BackingField offset 0x4c
 __declspec(property(get=__get__rotation_k__BackingField, put=__set__rotation_k__BackingField)) float_t  _rotation_k__BackingField;

 __declspec(property(get=get_rotation, put=set_rotation)) float_t  rotation;

constexpr void __set_groupId(int32_t  value) ;

constexpr int32_t& __get_groupId() ;

constexpr int32_t const& __get_groupId() const;

constexpr void __set_elementId(int32_t  value) ;

constexpr int32_t& __get_elementId() ;

constexpr int32_t const& __get_elementId() const;

constexpr void __set_usePreviousEventValue(bool  value) ;

constexpr bool& __get_usePreviousEventValue() ;

constexpr bool const& __get_usePreviousEventValue() const;

constexpr void __set_easeType(::GlobalNamespace::EaseType  value) ;

constexpr ::GlobalNamespace::EaseType& __get_easeType() ;

constexpr ::GlobalNamespace::EaseType const& __get_easeType() const;

constexpr void __set_axis(::GlobalNamespace::LightAxis  value) ;

constexpr ::GlobalNamespace::LightAxis& __get_axis() ;

constexpr ::GlobalNamespace::LightAxis const& __get_axis() const;

constexpr void __set_loopCount(int32_t  value) ;

constexpr int32_t& __get_loopCount() ;

constexpr int32_t const& __get_loopCount() const;

constexpr void __set_rotationDirection(::GlobalNamespace::LightRotationDirection  value) ;

constexpr ::GlobalNamespace::LightRotationDirection& __get_rotationDirection() ;

constexpr ::GlobalNamespace::LightRotationDirection const& __get_rotationDirection() const;

constexpr void __set__rotation_k__BackingField(float_t  value) ;

constexpr float_t& __get__rotation_k__BackingField() ;

constexpr float_t const& __get__rotation_k__BackingField() const;

static inline void setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightRotationBeatmapEventData*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightRotationBeatmapEventData*>* getStaticF__defaults() ;

/// @brief Method get_rotation addr 0xdfead0 size 0x8 virtual false final false
inline float_t get_rotation() ;

/// @brief Method set_rotation addr 0xdfead8 size 0x8 virtual false final false
inline void set_rotation(float_t  value) ;

static inline ::GlobalNamespace::LightRotationBeatmapEventData* New_ctor(float_t  time, int32_t  groupId, int32_t  elementId, bool  usePreviousEventValue, ::GlobalNamespace::EaseType  easeType, ::GlobalNamespace::LightAxis  axis, float_t  rotation, int32_t  loopCount, ::GlobalNamespace::LightRotationDirection  rotationDirection) ;

/// @brief Method .ctor addr 0xdfeae0 size 0xe4 virtual false final false
inline void _ctor(float_t  time, int32_t  groupId, int32_t  elementId, bool  usePreviousEventValue, ::GlobalNamespace::EaseType  easeType, ::GlobalNamespace::LightAxis  axis, float_t  rotation, int32_t  loopCount, ::GlobalNamespace::LightRotationDirection  rotationDirection) ;

/// @brief Method ChangeRotation addr 0xdfebdc size 0x8 virtual false final false
inline void ChangeRotation(float_t  rotation) ;

/// @brief Method GetCopy addr 0xdfebe4 size 0xc4 virtual true final false
inline ::GlobalNamespace::BeatmapDataItem* GetCopy() ;

/// @brief Method SubtypeIdentifier addr 0xdfebc4 size 0x18 virtual false final false
static inline int32_t SubtypeIdentifier(int32_t  groupId, int32_t  elementId, ::GlobalNamespace::LightAxis  axis) ;

/// @brief Method GetDefault addr 0xdfeca8 size 0x164 virtual true final false
inline ::GlobalNamespace::BeatmapEventData* GetDefault() ;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightRotationBeatmapEventData(LightRotationBeatmapEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightRotationBeatmapEventData(LightRotationBeatmapEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightRotationBeatmapEventData()  = default;
public:


// Fields

// Static field _defaults


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationBeatmapEventData, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBeatmapEventData*, "", "LightRotationBeatmapEventData");
