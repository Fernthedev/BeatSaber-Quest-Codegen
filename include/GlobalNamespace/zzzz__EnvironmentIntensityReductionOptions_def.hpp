#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentIntensityReductionOptions)
namespace GlobalNamespace {
struct __EnvironmentIntensityReductionOptions__CompressExpandReductionType;
}
namespace GlobalNamespace {
struct __EnvironmentIntensityReductionOptions__RotateRingsReductionType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __EnvironmentIntensityReductionOptions__CompressExpandReductionType;
}
namespace GlobalNamespace {
struct __EnvironmentIntensityReductionOptions__RotateRingsReductionType;
}
namespace GlobalNamespace {
class EnvironmentIntensityReductionOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType);
MARK_VAL_T(::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentIntensityReductionOptions);
// Type: ::CompressExpandReductionType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4171))
// CS Name: ::EnvironmentIntensityReductionOptions::CompressExpandReductionType
struct CORDL_TYPE __EnvironmentIntensityReductionOptions__CompressExpandReductionType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____EnvironmentIntensityReductionOptions__CompressExpandReductionType_Unwrapped
enum struct ____EnvironmentIntensityReductionOptions__CompressExpandReductionType_Unwrapped : int32_t {
__E_Keep = static_cast<int32_t>(0x0),
__E_RemoveWithStrobeFilter = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Keep value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType const Keep;

/// @brief Field RemoveWithStrobeFilter value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType const RemoveWithStrobeFilter;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____EnvironmentIntensityReductionOptions__CompressExpandReductionType_Unwrapped () const noexcept {
return std::bit_cast<____EnvironmentIntensityReductionOptions__CompressExpandReductionType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __EnvironmentIntensityReductionOptions__CompressExpandReductionType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EnvironmentIntensityReductionOptions__CompressExpandReductionType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EnvironmentIntensityReductionOptions__CompressExpandReductionType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RotateRingsReductionType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4172))
// CS Name: ::EnvironmentIntensityReductionOptions::RotateRingsReductionType
struct CORDL_TYPE __EnvironmentIntensityReductionOptions__RotateRingsReductionType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____EnvironmentIntensityReductionOptions__RotateRingsReductionType_Unwrapped
enum struct ____EnvironmentIntensityReductionOptions__RotateRingsReductionType_Unwrapped : int32_t {
__E_Keep = static_cast<int32_t>(0x0),
__E_RemoveWithStrobeFilter = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Keep value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType const Keep;

/// @brief Field RemoveWithStrobeFilter value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType const RemoveWithStrobeFilter;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____EnvironmentIntensityReductionOptions__RotateRingsReductionType_Unwrapped () const noexcept {
return std::bit_cast<____EnvironmentIntensityReductionOptions__RotateRingsReductionType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __EnvironmentIntensityReductionOptions__RotateRingsReductionType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EnvironmentIntensityReductionOptions__RotateRingsReductionType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EnvironmentIntensityReductionOptions__RotateRingsReductionType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::EnvironmentIntensityReductionOptions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4173))
// CS Name: ::EnvironmentIntensityReductionOptions*
class CORDL_TYPE EnvironmentIntensityReductionOptions : public ::System::Object {
public:
// Declarations
using RotateRingsReductionType = ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType;

using CompressExpandReductionType = ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _compressExpand offset 0x10
 __declspec(property(get=__get__compressExpand, put=__set__compressExpand)) ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType  _compressExpand;

/// @brief Field _rotateRings offset 0x14
 __declspec(property(get=__get__rotateRings, put=__set__rotateRings)) ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType  _rotateRings;

 __declspec(property(get=get_compressExpand)) ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType  compressExpand;

 __declspec(property(get=get_rotateRings)) ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType  rotateRings;

constexpr void __set__compressExpand(::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType  value) ;

constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType& __get__compressExpand() ;

constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType const& __get__compressExpand() const;

constexpr void __set__rotateRings(::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType  value) ;

constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType& __get__rotateRings() ;

constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType const& __get__rotateRings() const;

/// @brief Method get_compressExpand addr 0x224038c size 0x8 virtual false final false
inline ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType get_compressExpand() ;

/// @brief Method get_rotateRings addr 0x2240394 size 0x8 virtual false final false
inline ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType get_rotateRings() ;

static inline ::GlobalNamespace::EnvironmentIntensityReductionOptions* New_ctor() ;

/// @brief Method .ctor addr 0x224039c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentIntensityReductionOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentIntensityReductionOptions(EnvironmentIntensityReductionOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentIntensityReductionOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentIntensityReductionOptions(EnvironmentIntensityReductionOptions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvironmentIntensityReductionOptions()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentIntensityReductionOptions, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType, "", "EnvironmentIntensityReductionOptions/CompressExpandReductionType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType, "", "EnvironmentIntensityReductionOptions/RotateRingsReductionType");
NEED_NO_BOX(::GlobalNamespace::EnvironmentIntensityReductionOptions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentIntensityReductionOptions*, "", "EnvironmentIntensityReductionOptions");
