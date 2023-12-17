#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionAccessType)
// Forward declare root types
namespace JetBrains::Annotations {
struct CollectionAccessType;
}
// Write type traits
MARK_VAL_T(::JetBrains::Annotations::CollectionAccessType);
// Type: JetBrains.Annotations::CollectionAccessType
namespace JetBrains::Annotations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15784))
// CS Name: ::JetBrains.Annotations::CollectionAccessType
struct CORDL_TYPE CollectionAccessType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CollectionAccessType_Unwrapped
enum struct __CollectionAccessType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Read = static_cast<int32_t>(0x1),
__E_ModifyExistingContent = static_cast<int32_t>(0x2),
__E_UpdatedContent = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::JetBrains::Annotations::CollectionAccessType const None;

/// @brief Field Read value: static_cast<int32_t>(0x1)
static ::JetBrains::Annotations::CollectionAccessType const Read;

/// @brief Field ModifyExistingContent value: static_cast<int32_t>(0x2)
static ::JetBrains::Annotations::CollectionAccessType const ModifyExistingContent;

/// @brief Field UpdatedContent value: static_cast<int32_t>(0x6)
static ::JetBrains::Annotations::CollectionAccessType const UpdatedContent;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CollectionAccessType_Unwrapped () const noexcept {
return std::bit_cast<__CollectionAccessType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CollectionAccessType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CollectionAccessType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CollectionAccessType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::CollectionAccessType, 0x4>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::CollectionAccessType, "JetBrains.Annotations", "CollectionAccessType");
