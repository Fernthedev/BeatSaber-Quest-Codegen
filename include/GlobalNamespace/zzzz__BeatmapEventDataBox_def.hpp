#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventDataBox)
namespace GlobalNamespace {
struct __BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
class BeatmapEventDataBox;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataBox);
// Type: ::DistributionParamType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4300))
// CS Name: ::BeatmapEventDataBox::DistributionParamType
struct CORDL_TYPE __BeatmapEventDataBox__DistributionParamType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____BeatmapEventDataBox__DistributionParamType_Unwrapped
enum struct ____BeatmapEventDataBox__DistributionParamType_Unwrapped : int32_t {
__E_Wave = static_cast<int32_t>(0x1),
__E_Step = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Wave value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType const Wave;

/// @brief Field Step value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType const Step;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____BeatmapEventDataBox__DistributionParamType_Unwrapped () const noexcept {
return std::bit_cast<____BeatmapEventDataBox__DistributionParamType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __BeatmapEventDataBox__DistributionParamType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapEventDataBox__DistributionParamType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapEventDataBox__DistributionParamType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapEventDataBox
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4301))
// CS Name: ::BeatmapEventDataBox*
class CORDL_TYPE BeatmapEventDataBox : public ::System::Object {
public:
// Declarations
using DistributionParamType = ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field <indexFilter>k__BackingField offset 0x10
 __declspec(property(get=__get__indexFilter_k__BackingField, put=__set__indexFilter_k__BackingField)) ::GlobalNamespace::IndexFilter*  _indexFilter_k__BackingField;

/// @brief Field _beatDistributionParam offset 0x18
 __declspec(property(get=__get__beatDistributionParam, put=__set__beatDistributionParam)) float_t  _beatDistributionParam;

/// @brief Field _beatDistributionParamType offset 0x1c
 __declspec(property(get=__get__beatDistributionParamType, put=__set__beatDistributionParamType)) ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  _beatDistributionParamType;

/// @brief Field _eventDistributionCount offset 0x20
 __declspec(property(get=__get__eventDistributionCount, put=__set__eventDistributionCount)) int32_t  _eventDistributionCount;

/// @brief Field _eventDistributionParamType offset 0x24
 __declspec(property(get=__get__eventDistributionParamType, put=__set__eventDistributionParamType)) ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  _eventDistributionParamType;

/// @brief Field _eventDistributionParam offset 0x28
 __declspec(property(get=__get__eventDistributionParam, put=__set__eventDistributionParam)) float_t  _eventDistributionParam;

/// @brief Field _eventDistributionShouldAffectFirstBaseEvent offset 0x2c
 __declspec(property(get=__get__eventDistributionShouldAffectFirstBaseEvent, put=__set__eventDistributionShouldAffectFirstBaseEvent)) bool  _eventDistributionShouldAffectFirstBaseEvent;

/// @brief Field _eventDistributionEaseType offset 0x30
 __declspec(property(get=__get__eventDistributionEaseType, put=__set__eventDistributionEaseType)) ::GlobalNamespace::EaseType  _eventDistributionEaseType;

 __declspec(property(get=get_subtypeIdentifier)) int32_t  subtypeIdentifier;

 __declspec(property(get=get_beatStep)) float_t  beatStep;

 __declspec(property(get=get_indexFilter)) ::GlobalNamespace::IndexFilter*  indexFilter;

constexpr void __set__indexFilter_k__BackingField(::GlobalNamespace::IndexFilter*  value) ;

constexpr ::GlobalNamespace::IndexFilter* __get__indexFilter_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IndexFilter*> __get__indexFilter_k__BackingField() const;

constexpr void __set__beatDistributionParam(float_t  value) ;

constexpr float_t& __get__beatDistributionParam() ;

constexpr float_t const& __get__beatDistributionParam() const;

constexpr void __set__beatDistributionParamType(::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  value) ;

constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType& __get__beatDistributionParamType() ;

constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType const& __get__beatDistributionParamType() const;

constexpr void __set__eventDistributionCount(int32_t  value) ;

constexpr int32_t& __get__eventDistributionCount() ;

constexpr int32_t const& __get__eventDistributionCount() const;

constexpr void __set__eventDistributionParamType(::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  value) ;

constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType& __get__eventDistributionParamType() ;

constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType const& __get__eventDistributionParamType() const;

constexpr void __set__eventDistributionParam(float_t  value) ;

constexpr float_t& __get__eventDistributionParam() ;

constexpr float_t const& __get__eventDistributionParam() const;

constexpr void __set__eventDistributionShouldAffectFirstBaseEvent(bool  value) ;

constexpr bool& __get__eventDistributionShouldAffectFirstBaseEvent() ;

constexpr bool const& __get__eventDistributionShouldAffectFirstBaseEvent() const;

constexpr void __set__eventDistributionEaseType(::GlobalNamespace::EaseType  value) ;

constexpr ::GlobalNamespace::EaseType& __get__eventDistributionEaseType() ;

constexpr ::GlobalNamespace::EaseType const& __get__eventDistributionEaseType() const;

/// @brief Method get_subtypeIdentifier addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_subtypeIdentifier() ;

/// @brief Method get_beatStep addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_beatStep() ;

/// @brief Method get_indexFilter addr 0x2338804 size 0x8 virtual false final false
inline ::GlobalNamespace::IndexFilter* get_indexFilter() ;

static inline ::GlobalNamespace::BeatmapEventDataBox* New_ctor(::GlobalNamespace::IndexFilter*  indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  beatDistributionParamType, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  eventDistributionParamType, float_t  eventDistributionParam, bool  eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType  eventDistributionEaseType) ;

/// @brief Method .ctor addr 0x233880c size 0x94 virtual false final false
inline void _ctor(::GlobalNamespace::IndexFilter*  indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  beatDistributionParamType, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  eventDistributionParamType, float_t  eventDistributionParam, bool  eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType  eventDistributionEaseType) ;

/// @brief Method Unpack addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Unpack(float_t  groupBoxBeat, int32_t  groupId, int32_t  elementId, int32_t  durationOrderIndex, int32_t  distributionOrderIndex, float_t  maxBeat, ::GlobalNamespace::IBeatToTimeConvertor*  beatToTimeConvertor, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*  output) ;

/// @brief Method GetBeatStep addr 0x23388ac size 0x20 virtual false final false
inline float_t GetBeatStep(float_t  lastBaseEventRelativeBeat) ;

/// @brief Method GetDistribution addr 0x2338920 size 0x2c virtual false final false
inline float_t GetDistribution(bool  isFirstBaseDataEvent, int32_t  distributionOrderIndex) ;

/// @brief Method BeatDistributionParamToStep addr 0x23389b8 size 0x20 virtual false final false
static inline float_t BeatDistributionParamToStep(float_t  distributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  distributionParamType, int32_t  count) ;

/// @brief Method GetBeatStep addr 0x23388cc size 0x54 virtual false final false
static inline float_t GetBeatStep(::GlobalNamespace::IndexFilter*  indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  distributionParamType, float_t  distributionParam, float_t  lastBaseEventRelativeBeat) ;

/// @brief Method EventDistributionParamToStep addr 0x233894c size 0x6c virtual false final false
static inline float_t EventDistributionParamToStep(int32_t  index, float_t  distributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  distributionParamType, int32_t  count, ::GlobalNamespace::EaseType  easeType) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapEventDataBox(BeatmapEventDataBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapEventDataBox(BeatmapEventDataBox const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapEventDataBox()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataBox, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, "", "BeatmapEventDataBox/DistributionParamType");
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBox*, "", "BeatmapEventDataBox");
