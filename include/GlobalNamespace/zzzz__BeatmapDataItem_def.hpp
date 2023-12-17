#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataItem)
namespace System {
template<typename T>
class IComparable_1;
}
namespace GlobalNamespace {
struct __BeatmapDataItem__BeatmapDataItemType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BeatmapDataItem__BeatmapDataItemType;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataItem);
// Type: ::BeatmapDataItemType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14715))
// CS Name: ::BeatmapDataItem::BeatmapDataItemType
struct CORDL_TYPE __BeatmapDataItem__BeatmapDataItemType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____BeatmapDataItem__BeatmapDataItemType_Unwrapped
enum struct ____BeatmapDataItem__BeatmapDataItemType_Unwrapped : int32_t {
__E_BeatmapObject = static_cast<int32_t>(0x0),
__E_BeatmapEvent = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field BeatmapObject value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType const BeatmapObject;

/// @brief Field BeatmapEvent value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType const BeatmapEvent;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____BeatmapDataItem__BeatmapDataItemType_Unwrapped () const noexcept {
return std::bit_cast<____BeatmapDataItem__BeatmapDataItemType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __BeatmapDataItem__BeatmapDataItemType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapDataItem__BeatmapDataItemType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapDataItem__BeatmapDataItemType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapDataItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14716))
// CS Name: ::BeatmapDataItem*
class CORDL_TYPE BeatmapDataItem : public ::System::Object {
public:
// Declarations
using BeatmapDataItemType = ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <time>k__BackingField offset 0x10
 __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField)) float_t  _time_k__BackingField;

/// @brief Field <executionOrder>k__BackingField offset 0x14
 __declspec(property(get=__get__executionOrder_k__BackingField, put=__set__executionOrder_k__BackingField)) int32_t  _executionOrder_k__BackingField;

/// @brief Field subtypeIdentifier offset 0x18
 __declspec(property(get=__get_subtypeIdentifier, put=__set_subtypeIdentifier)) int32_t  subtypeIdentifier;

/// @brief Field type offset 0x1c
 __declspec(property(get=__get_type, put=__set_type)) ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType  type;

 __declspec(property(get=get_time)) float_t  time;

 __declspec(property(get=get_executionOrder)) int32_t  executionOrder;

 __declspec(property(get=get_subtypeGroupIdentifier)) int32_t  subtypeGroupIdentifier;

/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>*() noexcept;

constexpr void __set__time_k__BackingField(float_t  value) ;

constexpr float_t& __get__time_k__BackingField() ;

constexpr float_t const& __get__time_k__BackingField() const;

constexpr void __set__executionOrder_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__executionOrder_k__BackingField() ;

constexpr int32_t const& __get__executionOrder_k__BackingField() const;

constexpr void __set_subtypeIdentifier(int32_t  value) ;

constexpr int32_t& __get_subtypeIdentifier() ;

constexpr int32_t const& __get_subtypeIdentifier() const;

constexpr void __set_type(::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType  value) ;

constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType& __get_type() ;

constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType const& __get_type() const;

/// @brief Method get_time addr 0xdfd538 size 0x8 virtual false final false
inline float_t get_time() ;

/// @brief Method get_executionOrder addr 0xdfd540 size 0x8 virtual false final false
inline int32_t get_executionOrder() ;

/// @brief Method get_subtypeGroupIdentifier addr 0xdfd548 size 0x8 virtual true final false
inline int32_t get_subtypeGroupIdentifier() ;

static inline ::GlobalNamespace::BeatmapDataItem* New_ctor(float_t  time, int32_t  executionOrder, int32_t  subtypeIdentifier, ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType  type) ;

/// @brief Method .ctor addr 0xdfd550 size 0x4c virtual false final false
inline void _ctor(float_t  time, int32_t  executionOrder, int32_t  subtypeIdentifier, ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType  type) ;

/// @brief Method GetCopy addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::BeatmapDataItem* GetCopy() ;

/// @brief Method CompareTo addr 0xdfd59c size 0x4c virtual true final true
inline int32_t CompareTo(::GlobalNamespace::BeatmapDataItem*  b) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDataItem(BeatmapDataItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDataItem(BeatmapDataItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapDataItem()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataItem, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType, "", "BeatmapDataItem/BeatmapDataItemType");
NEED_NO_BOX(::GlobalNamespace::BeatmapDataItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataItem*, "", "BeatmapDataItem");
