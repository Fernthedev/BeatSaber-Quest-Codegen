#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GCHandle)
namespace System {
class Object;
}
namespace System::Runtime::InteropServices {
struct GCHandleType;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
struct GCHandle;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::GCHandle);
// Type: System.Runtime.InteropServices::GCHandle
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3336))
// CS Name: ::System.Runtime.InteropServices::GCHandle
struct CORDL_TYPE GCHandle : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field handle offset 0x0
 __declspec(property(get=__get_handle, put=__set_handle)) ::cordl_internals::intptr_t  handle;

 __declspec(property(get=get_IsAllocated)) bool  IsAllocated;

 __declspec(property(get=get_Target, put=set_Target)) ::System::Object*  Target;

constexpr void __set_handle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_handle() ;

constexpr ::cordl_internals::intptr_t const& __get_handle() const;

/// @brief Method .ctor addr 0x24d81bc size 0x8 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  h) ;

/// @brief Method .ctor addr 0x24d81c4 size 0x68 virtual false final false
inline void _ctor(::System::Object*  obj) ;

/// @brief Method .ctor addr 0x24d822c size 0x74 virtual false final false
inline void _ctor(::System::Object*  value, ::System::Runtime::InteropServices::GCHandleType  type) ;

/// @brief Method get_IsAllocated addr 0x24d82a4 size 0x54 virtual false final false
inline bool get_IsAllocated() ;

/// @brief Method get_Target addr 0x24d82f8 size 0x68 virtual false final false
inline ::System::Object* get_Target() ;

/// @brief Method set_Target addr 0x24d8364 size 0x28 virtual false final false
inline void set_Target(::System::Object*  value) ;

/// @brief Method AddrOfPinnedObject addr 0x24d838c size 0xe8 virtual false final false
inline ::cordl_internals::intptr_t AddrOfPinnedObject() ;

/// @brief Method Alloc addr 0x24d8478 size 0x54 virtual false final false
static inline ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object*  value) ;

/// @brief Method Alloc addr 0x24d84cc size 0x68 virtual false final false
static inline ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object*  value, ::System::Runtime::InteropServices::GCHandleType  type) ;

/// @brief Method Free addr 0x24d8534 size 0xdc virtual false final false
inline void Free() ;

/// @brief Method op_Explicit addr 0x24d8614 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(::System::Runtime::InteropServices::GCHandle  value) ;

/// @brief Method op_Explicit addr 0x24d8618 size 0xf0 virtual false final false
static inline ::System::Runtime::InteropServices::GCHandle op_Explicit___System__Runtime__InteropServices__GCHandle(::cordl_internals::intptr_t  value) ;

/// @brief Method CheckCurrentDomain addr 0x24d8708 size 0x4 virtual false final false
static inline bool CheckCurrentDomain(::cordl_internals::intptr_t  handle) ;

/// @brief Method GetTarget addr 0x24d8360 size 0x4 virtual false final false
static inline ::System::Object* GetTarget(::cordl_internals::intptr_t  handle) ;

/// @brief Method GetTargetHandle addr 0x24d82a0 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t GetTargetHandle(::System::Object*  obj, ::cordl_internals::intptr_t  handle, ::System::Runtime::InteropServices::GCHandleType  type) ;

/// @brief Method FreeHandle addr 0x24d8610 size 0x4 virtual false final false
static inline void FreeHandle(::cordl_internals::intptr_t  handle) ;

/// @brief Method GetAddrOfPinnedObject addr 0x24d8474 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t GetAddrOfPinnedObject(::cordl_internals::intptr_t  handle) ;

/// @brief Method op_Equality addr 0x24d870c size 0x8 virtual false final false
static inline bool op_Equality(::System::Runtime::InteropServices::GCHandle  a, ::System::Runtime::InteropServices::GCHandle  b) ;

/// @brief Method Equals addr 0x24d8714 size 0x80 virtual true final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method GetHashCode addr 0x24d8794 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method FromIntPtr addr 0x24d879c size 0x4 virtual false final false
static inline ::System::Runtime::InteropServices::GCHandle FromIntPtr(::cordl_internals::intptr_t  value) ;

/// @brief Method ToIntPtr addr 0x24d87a0 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t ToIntPtr(::System::Runtime::InteropServices::GCHandle  value) ;

// Ctor Parameters [CppParam { name: "handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr GCHandle(::cordl_internals::intptr_t  handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GCHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GCHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::GCHandle, 0x8>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::GCHandle, "System.Runtime.InteropServices", "GCHandle");
