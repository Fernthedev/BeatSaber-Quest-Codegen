#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ListChangedType)
// Forward declare root types
namespace System::ComponentModel {
struct ListChangedType;
}
// Write type traits
MARK_VAL_T(::System::ComponentModel::ListChangedType);
// Type: System.ComponentModel::ListChangedType
namespace System::ComponentModel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9441))
// CS Name: ::System.ComponentModel::ListChangedType
struct CORDL_TYPE ListChangedType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ListChangedType_Unwrapped
enum struct __ListChangedType_Unwrapped : int32_t {
__E_Reset = static_cast<int32_t>(0x0),
__E_ItemAdded = static_cast<int32_t>(0x1),
__E_ItemDeleted = static_cast<int32_t>(0x2),
__E_ItemMoved = static_cast<int32_t>(0x3),
__E_ItemChanged = static_cast<int32_t>(0x4),
__E_PropertyDescriptorAdded = static_cast<int32_t>(0x5),
__E_PropertyDescriptorDeleted = static_cast<int32_t>(0x6),
__E_PropertyDescriptorChanged = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Reset value: static_cast<int32_t>(0x0)
static ::System::ComponentModel::ListChangedType const Reset;

/// @brief Field ItemAdded value: static_cast<int32_t>(0x1)
static ::System::ComponentModel::ListChangedType const ItemAdded;

/// @brief Field ItemDeleted value: static_cast<int32_t>(0x2)
static ::System::ComponentModel::ListChangedType const ItemDeleted;

/// @brief Field ItemMoved value: static_cast<int32_t>(0x3)
static ::System::ComponentModel::ListChangedType const ItemMoved;

/// @brief Field ItemChanged value: static_cast<int32_t>(0x4)
static ::System::ComponentModel::ListChangedType const ItemChanged;

/// @brief Field PropertyDescriptorAdded value: static_cast<int32_t>(0x5)
static ::System::ComponentModel::ListChangedType const PropertyDescriptorAdded;

/// @brief Field PropertyDescriptorDeleted value: static_cast<int32_t>(0x6)
static ::System::ComponentModel::ListChangedType const PropertyDescriptorDeleted;

/// @brief Field PropertyDescriptorChanged value: static_cast<int32_t>(0x7)
static ::System::ComponentModel::ListChangedType const PropertyDescriptorChanged;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ListChangedType_Unwrapped () const noexcept {
return std::bit_cast<__ListChangedType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ListChangedType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ListChangedType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ListChangedType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ListChangedType, 0x4>, "Size mismatch!");

} // namespace end def System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListChangedType, "System.ComponentModel", "ListChangedType");
