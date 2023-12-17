#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpinWait)
// Forward declare root types
namespace System::Threading {
struct SpinWait;
}
// Write type traits
MARK_VAL_T(::System::Threading::SpinWait);
// Type: System.Threading::SpinWait
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2680))
// CS Name: ::System.Threading::SpinWait
struct CORDL_TYPE SpinWait : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field _count offset 0x0
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_NextSpinWillYield)) bool  NextSpinWillYield;

static inline void setStaticF_SpinCountforSpinBeforeWait(int32_t  value) ;

static inline int32_t getStaticF_SpinCountforSpinBeforeWait() ;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

/// @brief Method get_Count addr 0x2612004 size 0x8 virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_NextSpinWillYield addr 0x261200c size 0x78 virtual false final false
inline bool get_NextSpinWillYield() ;

/// @brief Method SpinOnce addr 0x2611f68 size 0x8 virtual false final false
inline void SpinOnce() ;

/// @brief Method SpinOnce addr 0x2611bf8 size 0xac virtual false final false
inline void SpinOnce(int32_t  sleep1Threshold) ;

/// @brief Method SpinOnceCore addr 0x2612084 size 0x1a4 virtual false final false
inline void SpinOnceCore(int32_t  sleep1Threshold) ;

/// @brief Method Reset addr 0x2612228 size 0x8 virtual false final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpinWait(int32_t  _count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SpinWait(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SpinWait()  = default;


// Fields

// Static field SpinCountforSpinBeforeWait


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::SpinWait, 0x4>, "Size mismatch!");

} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SpinWait, "System.Threading", "SpinWait");
