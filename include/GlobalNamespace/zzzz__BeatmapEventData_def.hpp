#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventData)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventData);
// Type: ::BeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14716))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14727))
// CS Name: ::BeatmapEventData*
class CORDL_TYPE BeatmapEventData : public ::GlobalNamespace::BeatmapDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::BeatmapDataItem)]{};

/// @brief Field <previousSameTypeEventData>k__BackingField offset 0x20
 __declspec(property(get=__get__previousSameTypeEventData_k__BackingField, put=__set__previousSameTypeEventData_k__BackingField)) ::GlobalNamespace::BeatmapEventData*  _previousSameTypeEventData_k__BackingField;

/// @brief Field <nextSameTypeEventData>k__BackingField offset 0x28
 __declspec(property(get=__get__nextSameTypeEventData_k__BackingField, put=__set__nextSameTypeEventData_k__BackingField)) ::GlobalNamespace::BeatmapEventData*  _nextSameTypeEventData_k__BackingField;

 __declspec(property(get=get_previousSameTypeEventData, put=set_previousSameTypeEventData)) ::GlobalNamespace::BeatmapEventData*  previousSameTypeEventData;

 __declspec(property(get=get_nextSameTypeEventData, put=set_nextSameTypeEventData)) ::GlobalNamespace::BeatmapEventData*  nextSameTypeEventData;

constexpr void __set__previousSameTypeEventData_k__BackingField(::GlobalNamespace::BeatmapEventData*  value) ;

constexpr ::GlobalNamespace::BeatmapEventData* __get__previousSameTypeEventData_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventData*> __get__previousSameTypeEventData_k__BackingField() const;

constexpr void __set__nextSameTypeEventData_k__BackingField(::GlobalNamespace::BeatmapEventData*  value) ;

constexpr ::GlobalNamespace::BeatmapEventData* __get__nextSameTypeEventData_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventData*> __get__nextSameTypeEventData_k__BackingField() const;

/// @brief Method get_previousSameTypeEventData addr 0xdfe050 size 0x8 virtual false final false
inline ::GlobalNamespace::BeatmapEventData* get_previousSameTypeEventData() ;

/// @brief Method set_previousSameTypeEventData addr 0xdfe058 size 0x8 virtual false final false
inline void set_previousSameTypeEventData(::GlobalNamespace::BeatmapEventData*  value) ;

/// @brief Method get_nextSameTypeEventData addr 0xdfe060 size 0x8 virtual false final false
inline ::GlobalNamespace::BeatmapEventData* get_nextSameTypeEventData() ;

/// @brief Method set_nextSameTypeEventData addr 0xdfe068 size 0x8 virtual false final false
inline void set_nextSameTypeEventData(::GlobalNamespace::BeatmapEventData*  value) ;

static inline ::GlobalNamespace::BeatmapEventData* New_ctor(float_t  time, int32_t  executionOrder, int32_t  subtypeIdentifier) ;

/// @brief Method .ctor addr 0xdfdc98 size 0x44 virtual false final false
inline void _ctor(float_t  time, int32_t  executionOrder, int32_t  subtypeIdentifier) ;

/// @brief Method __ConnectWithPreviousSameTypeEventData addr 0xdfe070 size 0x10 virtual false final false
inline void __ConnectWithPreviousSameTypeEventData(::GlobalNamespace::BeatmapEventData*  newPreviousSameTypeEvent) ;

/// @brief Method __ConnectWithNextSameTypeEventData addr 0xdfe080 size 0x10 virtual false final false
inline void __ConnectWithNextSameTypeEventData(::GlobalNamespace::BeatmapEventData*  newNextSameTypeEvent) ;

/// @brief Method __ResetConnections addr 0xdfe090 size 0x8 virtual false final false
inline void __ResetConnections() ;

/// @brief Method GetDefault addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::BeatmapEventData* GetDefault() ;

/// @brief Method GetDefault addr 0xdfe098 size 0x2c virtual false final false
inline ::GlobalNamespace::BeatmapEventData* GetDefault(::GlobalNamespace::BeatmapEventData*  nextData) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapEventData(BeatmapEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapEventData(BeatmapEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapEventData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventData, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventData*, "", "BeatmapEventData");
