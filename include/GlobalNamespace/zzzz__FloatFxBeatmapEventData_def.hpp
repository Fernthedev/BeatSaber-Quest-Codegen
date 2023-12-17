#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FxBeatmapEventData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFxBeatmapEventData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxBeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxBeatmapEventData);
// Type: ::FloatFxBeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14731))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14732))
// CS Name: ::FloatFxBeatmapEventData*
class CORDL_TYPE FloatFxBeatmapEventData : public ::GlobalNamespace::FxBeatmapEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::FxBeatmapEventData)]{};

/// @brief Field <value>k__BackingField offset 0x3c
 __declspec(property(get=__get__value_k__BackingField, put=__set__value_k__BackingField)) float_t  _value_k__BackingField;

/// @brief Field <easeType>k__BackingField offset 0x40
 __declspec(property(get=__get__easeType_k__BackingField, put=__set__easeType_k__BackingField)) ::GlobalNamespace::EaseType  _easeType_k__BackingField;

 __declspec(property(get=get_value, put=set_value)) float_t  value;

 __declspec(property(get=get_easeType, put=set_easeType)) ::GlobalNamespace::EaseType  easeType;

constexpr void __set__value_k__BackingField(float_t  value) ;

constexpr float_t& __get__value_k__BackingField() ;

constexpr float_t const& __get__value_k__BackingField() const;

constexpr void __set__easeType_k__BackingField(::GlobalNamespace::EaseType  value) ;

constexpr ::GlobalNamespace::EaseType& __get__easeType_k__BackingField() ;

constexpr ::GlobalNamespace::EaseType const& __get__easeType_k__BackingField() const;

static inline void setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::FloatFxBeatmapEventData*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::FloatFxBeatmapEventData*>* getStaticF__defaults() ;

/// @brief Method get_value addr 0xdfe3bc size 0x8 virtual false final false
inline float_t get_value() ;

/// @brief Method set_value addr 0xdfe3c4 size 0x8 virtual false final false
inline void set_value(float_t  value) ;

/// @brief Method get_easeType addr 0xdfe3cc size 0x8 virtual false final false
inline ::GlobalNamespace::EaseType get_easeType() ;

/// @brief Method set_easeType addr 0xdfe3d4 size 0x8 virtual false final false
inline void set_easeType(::GlobalNamespace::EaseType  value) ;

static inline ::GlobalNamespace::FloatFxBeatmapEventData* New_ctor(float_t  time, int32_t  groupId, int32_t  elementId, bool  usePreviousEventValue, float_t  value, ::GlobalNamespace::EaseType  easeType) ;

/// @brief Method .ctor addr 0xdfe3dc size 0x7c virtual false final false
inline void _ctor(float_t  time, int32_t  groupId, int32_t  elementId, bool  usePreviousEventValue, float_t  value, ::GlobalNamespace::EaseType  easeType) ;

/// @brief Method UpdateBy addr 0xdfe458 size 0x1c virtual false final false
inline void UpdateBy(::GlobalNamespace::FloatFxBeatmapEventData*  other) ;

/// @brief Method GetCopy addr 0xdfe474 size 0xa4 virtual true final false
inline ::GlobalNamespace::BeatmapDataItem* GetCopy() ;

/// @brief Method GetDefault addr 0xdfe518 size 0x13c virtual true final false
inline ::GlobalNamespace::BeatmapEventData* GetDefault() ;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatFxBeatmapEventData(FloatFxBeatmapEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatFxBeatmapEventData(FloatFxBeatmapEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FloatFxBeatmapEventData()  = default;
public:


// Fields

// Static field _defaults


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxBeatmapEventData, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxBeatmapEventData*, "", "FloatFxBeatmapEventData");
