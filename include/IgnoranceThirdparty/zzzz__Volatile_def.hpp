#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Volatile)
namespace IgnoranceThirdparty {
struct __Volatile__PaddedLong;
}
// Forward declare root types
namespace IgnoranceThirdparty {
class Volatile;
}
namespace IgnoranceThirdparty {
struct __Volatile__PaddedLong;
}
// Write type traits
MARK_REF_PTR_T(::IgnoranceThirdparty::Volatile);
MARK_VAL_T(::IgnoranceThirdparty::__Volatile__PaddedLong);
// Type: ::PaddedLong
namespace IgnoranceThirdparty {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15211))
// CS Name: ::Volatile::PaddedLong
struct CORDL_TYPE __Volatile__PaddedLong : public ::bs_hook::ValueTypeWrapper<0x80> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field _value offset 0x40
 __declspec(property(get=__get__value, put=__set__value)) int64_t  _value;

constexpr void __set__value(int64_t  value) ;

constexpr int64_t& __get__value() ;

constexpr int64_t const& __get__value() const;

/// @brief Method .ctor addr 0x21eeb40 size 0x8 virtual false final false
inline void _ctor(int64_t  value) ;

/// @brief Method ReadUnfenced addr 0x21eeb48 size 0x8 virtual false final false
inline int64_t ReadUnfenced() ;

/// @brief Method ReadAcquireFence addr 0x21eeb50 size 0x1c virtual false final false
inline int64_t ReadAcquireFence() ;

/// @brief Method ReadFullFence addr 0x21eeb6c size 0x1c virtual false final false
inline int64_t ReadFullFence() ;

/// @brief Method ReadCompilerOnlyFence addr 0x21eeb88 size 0x24 virtual false final false
inline int64_t ReadCompilerOnlyFence() ;

/// @brief Method WriteReleaseFence addr 0x21eebac size 0x28 virtual false final false
inline void WriteReleaseFence(int64_t  newValue) ;

/// @brief Method WriteFullFence addr 0x21eebd4 size 0x28 virtual false final false
inline void WriteFullFence(int64_t  newValue) ;

/// @brief Method WriteCompilerOnlyFence addr 0x21eebfc size 0x2c virtual false final false
inline void WriteCompilerOnlyFence(int64_t  newValue) ;

/// @brief Method WriteUnfenced addr 0x21eec28 size 0x8 virtual false final false
inline void WriteUnfenced(int64_t  newValue) ;

/// @brief Method AtomicCompareExchange addr 0x21eec30 size 0x24 virtual false final false
inline bool AtomicCompareExchange(int64_t  newValue, int64_t  comparand) ;

/// @brief Method AtomicExchange addr 0x21eec54 size 0xc virtual false final false
inline int64_t AtomicExchange(int64_t  newValue) ;

/// @brief Method AtomicAddAndGet addr 0x21eec60 size 0xc virtual false final false
inline int64_t AtomicAddAndGet(int64_t  delta) ;

/// @brief Method AtomicIncrementAndGet addr 0x21eec6c size 0xc virtual false final false
inline int64_t AtomicIncrementAndGet() ;

/// @brief Method AtomicDecrementAndGet addr 0x21eec78 size 0xc virtual false final false
inline int64_t AtomicDecrementAndGet() ;

/// @brief Method ToString addr 0x21eec84 size 0x34 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "_value", ty: "int64_t", modifiers: "", def_value: None }]
constexpr __Volatile__PaddedLong(int64_t  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Volatile__PaddedLong(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x80>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Volatile__PaddedLong()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceThirdparty::__Volatile__PaddedLong, 0x80>, "Size mismatch!");

} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::Volatile
namespace IgnoranceThirdparty {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15212))
// CS Name: ::IgnoranceThirdparty::Volatile*
class CORDL_TYPE Volatile : public ::System::Object {
public:
// Declarations
using PaddedLong = ::IgnoranceThirdparty::__Volatile__PaddedLong;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field CacheLineSize offset 0x0
static constexpr int32_t  CacheLineSize{static_cast<int32_t>(0x40)};

// Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Volatile(Volatile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Volatile(Volatile const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Volatile()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceThirdparty::Volatile, 0x10>, "Size mismatch!");

} // namespace end def IgnoranceThirdparty
NEED_NO_BOX(::IgnoranceThirdparty::Volatile);
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceThirdparty::Volatile*, "IgnoranceThirdparty", "Volatile");
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceThirdparty::__Volatile__PaddedLong, "IgnoranceThirdparty", "Volatile/PaddedLong");
