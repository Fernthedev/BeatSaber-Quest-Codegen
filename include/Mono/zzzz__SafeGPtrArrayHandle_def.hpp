#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SafeGPtrArrayHandle)
namespace System {
class IDisposable;
}
namespace Mono {
struct RuntimeGPtrArrayHandle;
}
// Forward declare root types
namespace Mono {
struct SafeGPtrArrayHandle;
}
// Write type traits
MARK_VAL_T(::Mono::SafeGPtrArrayHandle);
// Type: Mono::SafeGPtrArrayHandle
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2248))
// CS Name: ::Mono::SafeGPtrArrayHandle
struct CORDL_TYPE SafeGPtrArrayHandle : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field handle offset 0x0
 __declspec(property(get=__get_handle, put=__set_handle)) ::Mono::RuntimeGPtrArrayHandle  handle;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item)) ::cordl_internals::intptr_t  Item[];

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_handle(::Mono::RuntimeGPtrArrayHandle  value) ;

constexpr ::Mono::RuntimeGPtrArrayHandle& __get_handle() ;

constexpr ::Mono::RuntimeGPtrArrayHandle const& __get_handle() const;

/// @brief Method .ctor addr 0x2412e38 size 0x20 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  ptr) ;

/// @brief Method Dispose addr 0x2412e58 size 0x1c virtual true final true
inline void Dispose() ;

/// @brief Method get_Length addr 0x2412e74 size 0x1c virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x2412e90 size 0x4 virtual false final false
inline ::cordl_internals::intptr_t get_Item(int32_t  i) ;

// Ctor Parameters [CppParam { name: "handle", ty: "::Mono::RuntimeGPtrArrayHandle", modifiers: "", def_value: None }]
constexpr SafeGPtrArrayHandle(::Mono::RuntimeGPtrArrayHandle  handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SafeGPtrArrayHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SafeGPtrArrayHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::SafeGPtrArrayHandle, 0x8>, "Size mismatch!");

} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::SafeGPtrArrayHandle, "Mono", "SafeGPtrArrayHandle");
