#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeGPtrArrayHandle)
namespace Mono {
struct __RuntimeStructs__GPtrArray;
}
// Forward declare root types
namespace Mono {
struct RuntimeGPtrArrayHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimeGPtrArrayHandle);
// Type: Mono::RuntimeGPtrArrayHandle
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2233))
// CS Name: ::Mono::RuntimeGPtrArrayHandle
struct CORDL_TYPE RuntimeGPtrArrayHandle : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value offset 0x0
 __declspec(property(get=__get_value, put=__set_value)) ::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>  value;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item)) ::cordl_internals::intptr_t  Item[];

constexpr void __set_value(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>  value) ;

constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>& __get_value() ;

constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray> const& __get_value() const;

/// @brief Method .ctor addr 0x2412a6c size 0x20 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  ptr) ;

/// @brief Method get_Length addr 0x2412a8c size 0x1c virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x2412aa8 size 0x4 virtual false final false
inline ::cordl_internals::intptr_t get_Item(int32_t  i) ;

/// @brief Method Lookup addr 0x2412aac size 0x6c virtual false final false
inline ::cordl_internals::intptr_t Lookup(int32_t  i) ;

/// @brief Method GPtrArrayFree addr 0x2412b18 size 0x4 virtual false final false
static inline void GPtrArrayFree(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>  value) ;

/// @brief Method DestroyAndFree addr 0x2412b1c size 0x1c virtual false final false
static inline void DestroyAndFree(ByRef<::Mono::RuntimeGPtrArrayHandle>  h) ;

// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>", modifiers: "", def_value: None }]
constexpr RuntimeGPtrArrayHandle(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RuntimeGPtrArrayHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RuntimeGPtrArrayHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeGPtrArrayHandle, 0x8>, "Size mismatch!");

} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeGPtrArrayHandle, "Mono", "RuntimeGPtrArrayHandle");
